//
//  OTPWebStrategyResolver.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import "OTPWebStrategy.h"

/**
 Strategy resolver that can be registered with <code>WebStrategies</code> to resolve <code>OTPWebStrategy</code> objects for a given configuration.
 <p>
 If a resolver fails to return a strategy then the next one is tried in the row. If no resolver returned a strategy then <code>WebStrategies</code> falls
 back to using <code>DefaultOTPWebStrategy</code>.
 </p>
 */
@protocol OTPWebStrategyResolver <NSObject>

/**
 Resolves the strategy for the specified arguments.

 @param url the URL for which authentication is needed, must be non-nil
 @param finishEndpoint the finish endpoint, must be non-nil
 @param otpUrlAdditionalParams the additional params to use, can be nil
 @return the resolved strategy or nil
 */
-(id<OTPWebStrategy>) resolveForURL:(NSURL*)url withFinishEndpoint:(NSString*)finishEndpoint andParams:(NSString*)otpUrlAdditionalParams;

@end