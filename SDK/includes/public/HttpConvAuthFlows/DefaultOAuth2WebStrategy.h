//
//  DefaultOAuth2WebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAuth2WebStrategy.h"

/**
 Default singleton implementation of <code>OAuth2WebStrategy</code> utilizing a UIWebView to perform the task.
 */
@interface DefaultOAuth2WebStrategy : NSObject <OAuth2WebStrategy>

/**
 Returns the shared strategy instance.

 @return the strategy instance, always non-nil
 */
+(instancetype) sharedInstance;

@end
