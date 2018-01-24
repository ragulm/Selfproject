//
//  OAuthConfigProviderProtocol.h
//  HttpConvAuthFlows
//
//  Copyright (c) 2014 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Defines OAuth2ConfigProvider interface. <br>
 Implementations will be called when request execution requires SAML authentication.
 */
@protocol OAuth2ConfigProviderProtocol <NSObject>


/**
 Called when OAuth authentication is needed for request execution.
 @param url : url which secured with OAuth
 @param completionBlock : call the completionBlock when provider finishes its tasks. All the parameters except <i>clientSecret</i> are mandatory. <br>
 */
-(void) provideOAuth2ConfigurationForURL:(NSURL*)url completionBlock:(void (^)(NSURL* authorizationEndpoint, NSURL* tokenEndpoint,NSString* scope, NSString* clientID, NSString* clientSecret, NSURL* redirectURL))completionBlock;

@end
