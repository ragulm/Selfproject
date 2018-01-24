//
//  ClientCertObserverProtocol.h
//  HttpConversation
//
//  Copyright (c) 2014 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpConversationObserverProtocol.h"

/**
 Defines ClientCertObserver interface.
*/
@protocol ClientCertObserverProtocol <HttpConversationObserverProtocol>

/**
 Called when an authentication challenge is to be handled using a client certificate. <br>
 @param secIdRef: the certificate used to try to handle the challenge. <br>Important: it is not guaranteed, that the certificate solves the challenge.
*/
-(void) observeClientCertificate:(SecIdentityRef)secIdRef;

@end
