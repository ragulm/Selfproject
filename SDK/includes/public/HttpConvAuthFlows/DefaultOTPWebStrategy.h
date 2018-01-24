//
//  DefaultOTPWebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTPWebStrategy.h"

/**
 Default singleton implementation of <code>OTPWebStrategy</code> utilizing a UIWebView to perform the task.
 */
@interface DefaultOTPWebStrategy : NSObject <OTPWebStrategy>

/**
 Returns the shared strategy instance.

 @return the strategy instance, always non-nil
 */
+(instancetype) sharedInstance;

@end
