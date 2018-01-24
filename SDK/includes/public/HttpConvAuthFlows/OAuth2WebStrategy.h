//
//  OAuth2WebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Protocol defining the strategy how to open the URL that starts the OAuth2 web flow to acquire the access token.
 */
@protocol OAuth2WebStrategy <NSObject>

/**
 Starts the OAuth2 flow for performing the authentication given the specified parameters.
 
 @param url the URL requiring authentication, must be non-nil
 @param authorizationEndpoint the authorization endpoint, must be non-nil
 @param tokenEndpoint the token endpoint, must be non-nil
 @param redirectURL the redirect URL, must be non-nil
 @param clientID the client ID, must be non-nil
 @param completionBlock the completion block that is to be invoked at the end of the flow. It is invoked with the access token or nil if authentication failed.
 */
-(void) startOAuth2FlowForURL:(NSURL*)url withAuthEndpoint:(NSURL*)authorizationEndpoint withTokenEndpoint:(NSURL*)tokenEndpoint withRedirectURL:(NSURL*)redirectURL clientID:(NSString*)clientID completion:(void (^)(NSString*))completionBlock;

@end
