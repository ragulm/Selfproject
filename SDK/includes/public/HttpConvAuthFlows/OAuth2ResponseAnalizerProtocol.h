//
//  OAuth2ResponseAnalizerProtocol.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 Protocol responsible for analizing the response whether is relevant in terms of OAuth2 flow. This can be used to detect error messages, invalid token reponses etc..that may be specific to a given endpoint.
 */
@protocol OAuth2ResponseAnalizerProtocol <NSObject>

typedef NS_ENUM(int , AnalysisResult) {
    cancelFlow,
    restartFlow,
    invalidAccessToken,
    continueFlow,
};

/**
 Methow invoked, when an analysis of the response is required.
 @param response: the response object
 @param data: the body of the response
 @param token: the OAuth2 access token
 @param refreshToken: the OAuthe refresh token
 @return: the analysis outcome, the following values are possible
        <ul>
        <li><b>AnalysisResult.cancelFlow</b> - The response describes a fatal error and thus the entire conversation needs to be cancelled.</li>
        <li><b>AnalysisResult.restartFlow</b> - According the analyses, the OAuth2 flow should be restarted. </li>
        <li><b>AnalysisResult.invalidAccessToken</b> - The access token was invalid. The flow must try to obtain a new access token.</li>
        <li><b>AnalysisResult.continueFlow</b> - Everything is okay, the flow may continue.<li>
        </ul>
 */
-(void) analizeResponse:(NSURLResponse *)response WithResponseData:(NSData *)data completionBlock:(void (^)(AnalysisResult result))completionBlock;


@end