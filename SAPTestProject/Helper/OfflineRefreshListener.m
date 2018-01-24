//
//  OfflineRefreshListener.m
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "OfflineRefreshListener.h"
#import "SAPSupportabilityFacade.h"
#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
#import "LogonHandler.h"
//#import "Constants.h"

@implementation OfflineRefreshListener


+(instancetype) sharedInstance
{
    static dispatch_once_t onceToken;
    static OfflineRefreshListener* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [OfflineRefreshListener new];
    });
    return instance;
    
}


#pragma mark - OfflineStore Refresh Delegate methods

- (void) offlineStoreRefreshSucceeded:(SODataOfflineStore *)store {
//    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ OfflineStore Refresh succeeded", [dateformatter stringFromDate:[NSDate date]]]];
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    [[NSUserDefaults standardUserDefaults]setBool:NO forKey:@"SYNC_ERROR"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    [[NSNotificationCenter defaultCenter] postNotificationName:[[NSUserDefaults standardUserDefaults]objectForKey:@"kRefreshDelegateFinished"] object:nil];
    
}
- (void) offlineStoreRefreshFailed:(SODataOfflineStore *)store error:(NSError *)error{
    
     [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];
    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ Store refresh failed with error %@", [dateFormatter stringFromDate:[NSDate date]], error.localizedDescription]];
    NSLog(@"%s", __PRETTY_FUNCTION__);
    [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"SYNC_ERROR"];
    [[NSUserDefaults standardUserDefaults] synchronize];

    [[NSNotificationCenter defaultCenter] postNotificationName:[[NSUserDefaults standardUserDefaults]objectForKey:@"kRefreshDelegateFailed"] object:error];
}

-(void)offlineStoreRefreshFinished:(SODataOfflineStore *)store {
    
//    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ OfflineStore Refresh finished", [dateformatter stringFromDate:[NSDate date]]]];
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
}

-(void)offlineStoreRefreshStarted:(SODataOfflineStore *)store {
//    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ OfflineStore Refresh started", [dateformatter stringFromDate:[NSDate date]]]];
    NSLog(@"%s", __PRETTY_FUNCTION__);
}

//SAML implementation of SAML2ConfigProviderProtocol
-(void) provideSAML2ConfigurationForURL:(NSURL*)url completionBlock:(void (^)(NSString* responseHeader, NSString* finishEndPoint, NSString* finishParameters))completionBlock
{
    NSString* samlUrlString = [NSString stringWithFormat:@"https://%@/SAMLAuthLauncher", [LogonHandler singeltonLogonHandler].data.serverHost];
    // NSString* samlUrlString = [NSString stringWithFormat:@"https://akolepgqt-nonprod.accounts.ondemand.com:443/saml2/idp/sso/akolepgqt-nonprod.accounts.ondemand.com"];
    
    NSLog(@"%@", samlUrlString);
    completionBlock(@"com.sap.cloud.security.login", samlUrlString, @"finishEndpointParam");
    
}


@end
