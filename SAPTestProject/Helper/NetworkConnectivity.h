//
//  NetworkConnectivity.h
//  mSecSales
//
//  Created by Arteria on 13/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Reachability;

@interface NetworkConnectivity : NSObject
{
    Reachability *reachability;
    int internetcheck;
}
- (int)wifi_Checking;
+(instancetype)sharedInstance;

@end