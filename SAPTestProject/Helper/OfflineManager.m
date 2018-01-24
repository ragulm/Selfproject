//
//  SAPStoreManager.m
//  SAPCRMOData
//
//  Created by Károly Nyisztor on 2014.10.08..
//  Copyright (c) 2014 SAP-SE. All rights reserved.
//

#import "OfflineManager.h"
#import "SODataOfflineStoreDelegate.h"
#import "SODataOfflineStoreOptions.h"
//#import "LogonHandler.h"
#import "SODataPropertyDefault.h"
#import "SODataEntityDefault.h"
#import "SODataRequestParamSingle.h"
#import "SODataRequestParam.h"
#import "SODataPayload.h"
#import "SODataRequestBatchItem.h"

#import "OfflineFlushListener.h"
#import "OfflineRefreshListener.h"

#import "CommonMethods.h"
#import "LogonHandler.h"
//#import "Constants.h"

#import "SAPSupportabilityFacade.h"
#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"


@class LogonHandler;
@interface OfflineManager() <SODataOfflineStoreDelegate, SODataRequestParamSingle>

@end

@implementation OfflineManager

#pragma mark Block Interface for openStore()



+(instancetype) sharedInstance
{
    static dispatch_once_t onceToken;
    static OfflineManager* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [[OfflineManager alloc]init];
        
    });
    return instance;
    
}


- (void) openStoreWithCompletion:(void(^)(BOOL success))completion
{
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    NSLog(@"%d", self.isOpen);
//    dbMethodCls = [[DBMethodCls alloc]init];
    
    if (self.isOpen) {
        
        completion(self);
        
    } else {
        
        /* listen for open-finished notification here */
        
        NSString *openStoreFinished = [NSString stringWithFormat:@"kStoreOpenDelegateFinished.%@",  [self description]];
        
        [[NSNotificationCenter defaultCenter] addObserverForName:openStoreFinished object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            
            completion(YES);
        }];
        
        [self setOfflineStoreDelegate:self];
        [self setRequestErrorDelegate:[OfflineFlushListener sharedInstance]];
        
        NSError *error;
        
        
        [self openStoreWithOptions:[[LogonHandler singeltonLogonHandler] offlinestoreOptions] error:&error];
        
        if (error) {
            NSLog(@"error = %@", error);
        }
        else
        {
            
        }
    }
}

#pragma mark - OfflineStore Delegate methods

- (void) offlineStoreStateChanged:(SODataOfflineStore *)store state:(SODataOfflineStoreState)newState{
    
    switch (newState)
    {
        case SODataOfflineStoreOpening:
            NSLog(@"SODataOfflineStoreOpening: The store has started to open\n");
            break;
            
        case SODataOfflineStoreInitializing:
//            [[DataController shared].logger logInfo:[NSString stringWithFormat:@"%@ Store is initializing", [dateformatter stringFromDate:[NSDate date]]]];
            NSLog(@"SODataOfflineStoreInitializing: Initializing the resources for a new store\n");
            break;
            
        case SODataOfflineStorePopulating:
//            [[DataController shared].logger logInfo:[NSString stringWithFormat:@"%@ Store is populating", [dateformatter stringFromDate:[NSDate date]]]];
            NSLog(@"SODataOfflineStorePopulating: Creating and populating the store in the mid-tier\n");
            break;
            
        case SODataOfflineStoreDownloading:
            [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
            NSLog(@"SODataOfflineStoreDownloading: Downloading the populated store\n");
            [self updateSyncHistory];
            break;
            
        case SODataOfflineStoreOpen:
//            [[DataController shared].logger logInfo:[NSString stringWithFormat:@"%@ Store opened successfully", [dateformatter stringFromDate:[NSDate date]]]];
            NSLog(@"SODataOfflineStoreOpen: The store has opened successfully\n");
            break;
            
        case SODataOfflineStoreClosed:
//            [[DataController shared].logger logInfo:[NSString stringWithFormat:@"%@ Store closed", [dateformatter stringFromDate:[NSDate date]]]];
            NSLog(@"SODataOfflineStoreClosed: The store has been closed by the user while still opening\n");
            break;
            
    }
    
}
-(void)updateSyncHistory
{
     DBMethodCls *dbMethodClass = [[DBMethodCls alloc]init];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd-MMM-yyyy HH:mm:ss"];
    for(NSString *string in [CommonMethods definingRequest])
    {
        NSString *tableName;
        NSArray *subString = [string componentsSeparatedByString:@"?$filter"];
        if([subString count] > 1)
        {
            tableName = [subString objectAtIndex:0];
        }
        else
        {
            tableName = string;
        }
        
        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ : %@ Synced successfully", [dateFormatter stringFromDate:[NSDate date]], tableName]];
                [dbMethodClass updateSyncHistory:string];
        
        NSLog(@"I am in OfflineMAnager updateSyncHistory");
    }
    
    
    
}

- (void) offlineStoreOpenFailed:(SODataOfflineStore *)store error:(NSError *)error{
//    [[DataController shared].logger logError:[NSString stringWithFormat:@"%@ Store open failed with error %@", [dateformatter stringFromDate:[NSDate date]], error.localizedDescription]];
    NSLog(@"%s\n%@", __PRETTY_FUNCTION__, error);
}

-(void)offlineStoreOpenFinished:(SODataOfflineStore *)store {
    
    NSString *openStoreFinished = [NSString stringWithFormat:@"kStoreOpenDelegateFinished.%@",  [self description]];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:openStoreFinished object:nil];
    
}

/*
#pragma mark - FlushAndRefresh block wrapper

- (void) flushAndRefresh:(void (^)(BOOL))completion
{
    
    synchronization = [[Synchronization alloc]init];
    
    [self flush:^(BOOL success) {
        
        if (success) {
            
            [self refresh:@"All": ^(BOOL success) {
                
                if (success) {
                    
                            
                    completion(YES);
                    
                } else {
                    
                    completion(NO);
                    
                }
            }];
            
        } else {
            
            completion(NO);
            
        }
    }];
}

 */

#pragma mark - OfflineStoreRefresh block wrapper

- (void) refreshCollection:(NSString *)subset : (void(^)(BOOL success))completion
{
    NSString *refreshFinishedNotification = [NSString stringWithFormat:@"kRefreshDelegateFinished,%@",  self.description];
    NSString *refreshFailedNotification = [NSString stringWithFormat:@"kRefreshDelegateFailed,%@",  self.description];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFinishedNotification forKey:@"kRefreshDelegateFinished"];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFailedNotification forKey:@"kRefreshDelegateFailed"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFinishedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(YES);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFailedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(NO);
    }];
    if ([subset isEqualToString:@"All"]) {
        [self scheduleRefreshWithDelegate:[OfflineRefreshListener sharedInstance]];
    }
    else
    {
        [self scheduleRefreshWithRefreshSubset:subset delegate:[OfflineRefreshListener sharedInstance]];

    }
}


#pragma mark - OfflineStoreFlush block wrapper
- (void) flush:(void(^)(BOOL success))completion

{
    NSString *flushFinishedNotification = [NSString stringWithFormat:@"kFlushDelegateFinished,%@",  self.description];
    NSString *flushFailedNotification = [NSString stringWithFormat:@"kFlushDelegateFailed,%@",  self.description];
    [[NSUserDefaults standardUserDefaults]setObject:flushFinishedNotification forKey:@"kFlushDelegateFinished"];
    [[NSUserDefaults standardUserDefaults]setObject:flushFailedNotification forKey:@"kFlushDelegateFailed"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:flushFinishedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(YES);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:flushFailedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(NO);
    }];
    
    [self scheduleFlushQueuedRequestsWithDelegate:[OfflineFlushListener sharedInstance]];
}

- (void) freshSync:(NSString *)subset : (void(^)(BOOL success))completion
{
    NSString *refreshFinishedNotification = [NSString stringWithFormat:@"kRefreshDelegateFinished,%@",  self.description];
    NSString *refreshFailedNotification = [NSString stringWithFormat:@"kRefreshDelegateFailed,%@",  self.description];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFinishedNotification forKey:@"kRefreshDelegateFinished"];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFailedNotification forKey:@"kRefreshDelegateFailed"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFinishedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(YES);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFailedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(NO);
    }];
    if ([subset isEqualToString:@"All"]) {
        [self scheduleRefreshWithDelegate:[OfflineRefreshListener sharedInstance]];
    }
    else
    {
        [self scheduleRefreshWithRefreshSubset:subset delegate:[OfflineRefreshListener sharedInstance]];
        
    }
}

@end
