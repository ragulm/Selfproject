//
//  DefaultSAML2WebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAML2WebStrategy.h"

/**
 Default singleton implementation of <code>SAML2WebStrategy</code> utilizing a UIWebView to perform the task.
 */
@interface DefaultSAML2WebStrategy : NSObject <SAML2WebStrategy>

/**
 Returns the shared strategy instance.
 
 @return the strategy instance, always non-nil
 */
+(instancetype) sharedInstance;

@end
