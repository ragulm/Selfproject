//
//  OTPConfigProviderProtocol.h
//  HttpConvAuthFlows
//
//  Created by Palfi, Andras on 09/10/15.
//  Copyright © 2015 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Defines OTPConfigProviderProtocol interface. <br>
 Implementations will be called when request execution requires OTP authentication.
 */
@protocol OTPConfigProviderProtocol

/**
 Called when OTP authentication needed
 @param anUrl url which protected by OTP
 @param completion should be called when the parameters are provided. The request flow is stopped while the completion method is not invoked.
 @param responseHeaderKey the key of the http header field which indicates OTP
 @param responseHeaderValue the value of the responseHeaderKey http header field which indicates OTP
 @param otpUrlAdditionalParams this will be appended to the query which presents the OTP form in the webView. Can be nil. It should be a proper url encoded key=value; string. Can contain more key/value pairs
 @param finishEndpoint the parameter which should be appear in the url of the webView in case of a successful authentication in the OTP form
 */
- (void) OTPConfigForURL:(NSURL*)anUrl completion:(void(^)(NSString* responseHeaderKey, NSString* responseHeaderValue, NSString* otpUrlAdditionalParams, NSString* finishEndpoint))completion;

@end