//
//  WebStrategies.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DefaultSAML2WebStrategy.h"
#import "DefaultOAuth2WebStrategy.h"
#import "DefaultOTPWebStrategy.h"

#import "SAML2WebStrategyResolver.h"
#import "OAuth2WebStrategyResolver.h"
#import "OTPWebStrategyResolver.h"

/**
 Singleton holding the registration of various web strategy objects. These are added using strategy resolver objects which are
 responsible for returning a strategy for a given set of parameters. This class effectively manages an ordered list of
 resolvers per authentication type and invokes them in order whenever a strategy is needed. The first non-null object returned is going to be used.
 <p>
 There's always a default resolver which returns the default strategy all the time.
 </p>
 <p>
 Currently, this class supports registration of strategy resolvers for the following authentication types:
 <ul>
 <li>SAML2WebStrategyResolver</li>
 <li>OAuth2WebStrategyResolver</li>
 <li>OTPWebStrategyResolver</li>
 </ul>
 </p>
 <p>
 For simplicity, this class itself implements the above protocols and acts as the main resolver. As such, it is guaranteed to
 return a strategy.
 </p>
 <p>
 Managing strategy registrations is not thread-safe. Callers must make sure that strategy resolver registrations do not interleave with
 actual resolution.
 </p>
 */
@interface WebStrategies : NSObject <SAML2WebStrategyResolver, OAuth2WebStrategyResolver, OTPWebStrategyResolver>

/**
 Returns the shared strategy instance.

 @return the strategy instance, always non-nil
 */
+(instancetype) sharedInstance;

/**
 Registers the specified resolver. Does nothing if the resolver happens to be this singleton.

 @param resolver the resolver, must be non-nil
 */
-(void) registerSAML2Resolver:(id<SAML2WebStrategyResolver>)resolver;

/**
 Registers the specified resolver. Does nothing if the resolver happens to be this singleton.

 @param resolver the resolver, must be non-nil
 */
-(void) registerOAuth2Resolver:(id<OAuth2WebStrategyResolver>)resolver;

/**
 Registers the specified resolver. Does nothing if the resolver happens to be this singleton.

 @param resolver the resolver, must be non-nil
 */
-(void) registerOTPResolver:(id<OTPWebStrategyResolver>)resolver;

@end
