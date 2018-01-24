//
//  OAuth2TokenStorageProtocol.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Protocol representing a storage where OAuth2 tokens can be stored.
 */
@protocol OAuth2TokenStorageProtocol <NSObject>

@property (strong) NSString *accessToken;

@property (strong) NSString *refreshToken;


@end