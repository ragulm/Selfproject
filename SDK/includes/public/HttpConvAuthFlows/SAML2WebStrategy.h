//
//  SAML2WebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Protocol defining the strategy how to open the URL that leads to the SAML2 authentication screen.
 */
@protocol SAML2WebStrategy <NSObject>

/**
 Starts the SAML2 authentication by opening the finish endpoint URL. This initiates a communication to the Service Provider (SP)
 which in turn is expected to respond with a SAML2 challenge that will redirect the user to the Identity Provider (IdP). After
 authentication the SP is expected to perform a redirect on the finish endpoint with an URL parameter called the finish endpoint
 param. When this redirect happens the SAML2 flow is considered to be complete.
 <p>
 Implementations are expected to open the specified finish endpoint as a web page and close it when the final redirect happens.
 Furthermore, the specified callback <b>must</b> be invoked otherwise the pending HTTP request(s) waiting for it to complete might
 be held up indefinitely.
 </p>
 <p>
 It is guaranteed that within the application only one method of this type is executing at a given time. This is because strategies are
 shared across conversation managers.
 </p>
 
 @param finishEndPoint the URL where to start the authentication, must be non-nil
 @param finishParameters the name of the URL parameter to look for in the final redirect back to the finish endpoint, must be non-nil
 @param completion the block that is invoked at the end of the authentication process with a flag that is YES if the redirect back to the
 finish endpoint containing the finish endpoint URL parameter was detected, NO if the flow failed for a reason
 */
-(void) startSAML2Authentication:(NSString*)finishEndPoint withParam:(NSString*)finishParameters completion:(void (^)(BOOL))completionBlock;

@end
