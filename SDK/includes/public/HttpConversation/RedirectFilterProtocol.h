//
//  RedirectFilterProtocol.h
//  HttpConversation
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HttpConversationManager;

@protocol RedirectFilterProtocol <NSObject>

- (void) processRedirectResponse:(NSHTTPURLResponse*)response newRequest:(NSURLRequest*)newRequest completion:(void (^)(BOOL handled, NSURLRequest* newRequest))completion;

@end