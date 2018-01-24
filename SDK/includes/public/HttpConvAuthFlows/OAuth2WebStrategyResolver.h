//
//  OAuth2WebStrategyResolver.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAuth2WebStrategy.h"

/**
 Strategy resolver that can be registered with <code>WebStrategies</code> to resolve <code>OAuth2WebStrategy</code> objects for a given configuration.
 <p>
 If a resolver fails to return a strategy then the next one is tried in the row. If no resolver returned a strategy then <code>WebStrategies</code> falls
 back to using <code>DefaultOAuth2WebStrategy</code>.
 </p>
 */
@protocol OAuth2WebStrategyResolver <NSObject>

/**
 Resolves the strategy for the specified arguments.

 @param url the URL requiring authentication, must be non-nil
 @param authorizationEndpoint the authorization endpoint, must be non-nil
 @param tokenEndpoint the token endpoint, must be non-nil
 @param redirectURL the redirect URL, must be non-nil
 @param clientID the client ID, must be non-nil
 @return the resolved strategy or nil
 */
-(id<OAuth2WebStrategy>) resolveForURL:(NSURL*)url withAuthEndpoint:(NSURL*)authorizationEndpoint withTokenEndpoint:(NSURL*)tokenEndpoint withRedirectURL:(NSURL*)redirectURL clientID:(NSString*)clientID;

@end