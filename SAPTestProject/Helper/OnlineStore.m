//
//  OnlineStore.m
//  mSecSales
//
//  Created by Arteria on 22/04/16.
//  Copyright © 2016 Arteria. All rights reserved.
//

#import "OnlineStore.h"
#import "SAPSupportabilityFacade.h"
#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
#import "LogonHandler.h"

@interface OnlineStore () <SODataOnlineStoreDelegate>

@property (nonatomic, assign) BOOL isOpen;

@end

@implementation OnlineStore

#pragma mark Block Interface for openStore()

- (void) openStoreWithCompletion:(void(^)(BOOL success))completion
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
//    if (self.isOpen) {
//
//        completion(YES);
//
//    } else {
    
    if ([[NSUserDefaults standardUserDefaults] boolForKey:@"EDIT_ITEMS"])
    {
        [[NSUserDefaults standardUserDefaults]setBool:TRUE forKey:@"CREATE_ITEMS"];
        [[NSUserDefaults standardUserDefaults]setBool:FALSE forKey:@"EDIT_ITEMS"];
        [[NSUserDefaults standardUserDefaults]synchronize];
        
        
    }
    else if ([[NSUserDefaults standardUserDefaults] boolForKey:@"EDIT_ITEMS1"])
    {
        [[NSUserDefaults standardUserDefaults]setBool:TRUE forKey:@"CREATE_ITEMS1"];
        [[NSUserDefaults standardUserDefaults]setBool:FALSE forKey:@"EDIT_ITEMS1"];
        [[NSUserDefaults standardUserDefaults]synchronize];
        
        
    }
    
    else if ([[NSUserDefaults standardUserDefaults] boolForKey:@"EDIT_ITEMS2"])
    {
        [[NSUserDefaults standardUserDefaults]setBool:TRUE forKey:@"CREATE_ITEMS2"];
        [[NSUserDefaults standardUserDefaults]setBool:FALSE forKey:@"EDIT_ITEMS2"];
        [[NSUserDefaults standardUserDefaults]synchronize];
        
        
    }
        NSString *openStoreFinished = [NSString stringWithFormat:@"com.sap.sdk.store.open.delegate.finished.%@", [self description]];
        
        [[NSNotificationCenter defaultCenter] addObserverForName:openStoreFinished object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            
            completion(YES);
            
        }];
        
        NSError *error;
        
        [self setOnlineStoreDelegate:self];
        
        
        [self openStoreWithError:&error];
        
        if (error) {
            NSLog(@"error = %@", error);
        }
        
//    }
}

- (void) openingStoreWithCompletion:(void(^)(BOOL success))completion
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    if (self.isOpen) {
        
        completion(YES);
        
    } else {
        
        NSString *openStoreFinished = [NSString stringWithFormat:@"com.sap.sdk.store.open.delegate.finished.%@", [self description]];
        
        [[NSNotificationCenter defaultCenter] addObserverForName:openStoreFinished object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            
            completion(YES);
            
        }];
        
        NSError *error;
        
        [self setOnlineStoreDelegate:self];

        [self openStoreWithError:&error];
//        [self remove]
        
        if (error) {
            NSLog(@"error = %@", error);
        }
        

    }
    
    

    
}

#pragma mark - OnlineStoreOpenDelegate

- (void) onlineStoreOpenFinished:(SODataOnlineStore *)store
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd-MMM-yyyy HH:mm:ss"];
    
    [[RequestListener shared] saveLogMessage:[NSString stringWithFormat:@"%@ : OnlineStore opened", [dateFormatter stringFromDate:[NSDate date]]]];
    
    
    
//    SODataOnlineStore *storeOptions = store;
//    storeOptions base
    
    // SAPLOGINFO(LOG_ONLINESTORE, [NSString stringWithFormat:@"%s", __PRETTY_FUNCTION__]);
    
//    NSString *baseURL = [NSString stringWithFormat:@"%@",];
//    NSLog(@"%@",_base);
    
    
    
    
    self.isOpen = YES;
    NSString *openStoreFinished = [NSString stringWithFormat:@"com.sap.sdk.store.open.delegate.finished.%@", [self description]];
    
    // send notification for that openStore is finished
    [[NSNotificationCenter defaultCenter] postNotificationName:openStoreFinished object:self];
    
    
}

- (void) onlineStoreOpenFailed:(SODataOnlineStore *)store error:(NSError *)error
{
    NSLog(@"%s, %@", __PRETTY_FUNCTION__, error);
    // SAPLOGINFO(LOG_ONLINESTORE, [NSString stringWithFormat:@"%s", __PRETTY_FUNCTION__]);
}

@end
