//
//  OTPWebStrategy.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Protocol defining the strategy how to open the URL that leads to the OTP authentication screen.
 */
@protocol OTPWebStrategy <NSObject>

/**
 Starts the OTP authentication for the given URL by opening the finish endpoint URL.This initiates a communication to the Service Provider (SP)
 which in turn is expected to respond with a OTP challenge that will redirect the user to the Identity Provider (IdP). After
 authentication the SP is expected to perform a redirect on the finish endpoint with an URL parameter called the finish endpoint
 param. When this redirect happens the OTP flow is considered to be complete.
 <p>
 Implementations are expected to open the specified finish endpoint as a web page and close it when the final redirect happens.
 Furthermore, the specified callback <b>must</b> be invoked otherwise the pending HTTP request(s) waiting for it to complete might
 be held up indefinitely.
 </p>
 <p>
 It is guaranteed that within the application only one method of this type is executing at a given time. This is because strategies are
 shared across conversation managers.
 </p>

 @param url the URL for which authentication is needed, must be non-nil
 @param finishEndpoint the finish endpoint, must be non-nil
 @param otpUrlAdditionalParams the additional params to use, can be nil
 @param completionBlock the block that is invoked at the end of the operation with a flag indicating success or failure
 */
-(void) startOTPAuthenticationForURL:(NSURL*)url withFinishEndpoint:(NSString*)finishEndpoint andParams:(NSString*)otpUrlAdditionalParams completion:(void (^)(BOOL))completionBlock;

@end
