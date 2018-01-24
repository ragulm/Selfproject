//
//  NetworkConnectivity.m
//  mSecSales
//
//  Created by Arteria on 13/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "NetworkConnectivity.h"

#import "Reachability.h"


@implementation NetworkConnectivity


+(instancetype) sharedInstance
{
    static dispatch_once_t onceToken;
    static NetworkConnectivity* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [NetworkConnectivity new];
    });
    return instance;
    
}



-(int)wifi_Checking
{
    internetcheck = 0;
    reachability = [Reachability reachabilityForInternetConnection] ;
    [reachability  startNotifier];
    
    NetworkStatus netStatus = [reachability  currentReachabilityStatus];
    
    switch (netStatus)
    {
        case ReachableViaWWAN:
        {
            internetcheck = 1;
            break;
            
        }
        case ReachableViaWiFi:
        {
            internetcheck = 1;
            
            break;
        }
        case NotReachable:
        {
            internetcheck = 2;
            break;
        }
    }
    
    return internetcheck;
}


@end
