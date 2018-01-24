//
//  HttpConversationManager.h
//  HttpConversation
//
//  Copyright (c) 2014 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RequestFilterProtocol.h"
#import "ResponseFilterProtocol.h"
#import "ChallengeFilterProtocol.h"
#import "HttpConversationObserverProtocol.h"
#import "RedirectFilterProtocol.h"
#import "RedirectWhitelistProtocol.h"

/**
 Request execution manager class, supports request, response and challenge filtering.
*/
@interface HttpConversationManager : NSObject

@property (weak) id<RedirectWhitelistProtocol> redirectWhitelistImplementation;

/**
 Allows you to set your class as NSURLSessionDownloadDelegate. If you set this HttpConversationManager will proxy events it receives for this delegate.
 */
@property (weak) id<NSURLSessionDownloadDelegate> sessionDownloadDelegate;

/**
 Allows you to set your class as NSURLSessionDataDelegate. If you set this HttpConversationManager will proxy events it receives for this delegate.
 */
@property (weak) id<NSURLSessionDataDelegate> sessionDataDelegate;

/**
 Allows you to set your class as NSURLSessionTaskDelegate. If you set this HttpConversationManager will proxy events it receives for this delegate.
 */
@property (weak) id<NSURLSessionTaskDelegate> sessionTaskDelegate;

/**
 Contains redirect history.
**/
@property (strong) NSMutableArray* redirectHistory;

/**
 Initialize an instance of HttpConversationManager with NSURLSessionConfiguration defaultSessionConfiguration.
 */
-(instancetype) init;

/**
 Initialize an instance of HttpConversationManager to work with the specified NSURLSessionConfiguration. 
 In case you would like to execute requrests in the background for instance based on a Push Notification you must use NSURLSessionConfiguration backgroundSessionConfigurationWithIdentifier: selector and pass a proper background session.
 @param NSURLSessionConfiguration object one of the availalble session configurations or your custom implementation.
 */
-(instancetype) initWithSessionConfiguration:(NSURLSessionConfiguration *) configuration;

/**
 Add RequestFilterProtocol implementation to the HttpConversationManager instance. <br>
 RequestFilters will be called before the request is executed.
 @param requestFilter: RequestFilterProtocol implementation
*/
-(void) addRequestFilter:(id<RequestFilterProtocol>)requestFilter;

/**
 Returns all the RequestFilterProtocol implementation added to the HttpConversationManager instance.
*/
-(NSArray*) allRequestFilters;

/**
 Add ResponseFilterProtocol implementation to the HttpConversationManager instance. <br>
 ResponseFilters will be called after the request is executed.
 @param responseFilter: ResponseFilterProtocol implementation
 */
-(void) addResponseFilter:(id<ResponseFilterProtocol>)responseFilter;

/**
 Returns all the ResponseFilterProtocol implementation added to the HttpConversationManager instance.
 */
-(NSArray*) allResponseFilters;

/**
 Add ChallengeFilterProtocol implementation to the HttpConversationManager instance.
 ChallengeFilters will be called when an authentication challenge occurs during request execution.
 @param challengeFilter: ChallengeFilterProtocol implementation
 */
-(void) addChallengeFilter:(id<ChallengeFilterProtocol>)challengeFilter;

/**
 Returns all the ChallengeFilterProtocol implementation added to the HttpConversationManager instance.
 */
-(NSArray*) allChallengeFilters;


/**
 Add RedirectFilterProtocol implementation to the HttpConversationManager instance.
 RedirectFilters will be called when a redirect occurs during request execution.
 @param redirectFilter: RedirectFilterProtocol implementation
 */
- (void) addRedirectFilter:(id<RedirectFilterProtocol>)redirectFilter;

/**
 Returns all the RedirectFilterProtocol implementation added to the HttpConversationManager instance.
 */
- (NSArray*) allRedirectFilters;

/**
 Add HttpConversationObserverProtocol implementations to the HttpConversationManager instance.
 For more information, check HttpConversationObserverProtocol
*/
-(void) addObserver:(id<HttpConversationObserverProtocol>) observer;

/**
 Returns all the observers added to the HttpConversationManager instance.
 */
-(NSArray*) allObservers;

/**
 Executes the specified <code>NSMutableURLRequest</code> instance using this manager. This method is robust enough to work even in cases when this object has been
 initialized with a background session configuration. Normally, <code>NSURLSession</code> does not allow the use of the block-based APIs when a background config is used.
 This method however turns around this problem by using delegates internally but still utilizing the specified completion handler even in case of a background
 session config.

 @param urlRequest: NSMutableURLRequest instance
 @param completionHandler: will be called when the request is finished. Contains the response, the received data, and in case of any error the root cause.
*/
-(void) executeRequest:(NSMutableURLRequest*)urlRequest completionHandler:(void (^)(NSData* data, NSURLResponse* response, NSError* error))completionHandler;

/**
 *  Executes an upload request that has a valid body stream
 *
 *  @param urlRequest        request to be executed; the request shall have a valid HTTPBodyStream set
 *  @param completionHandler called upon completing the request; if the upload fails, the error parameter will include information about the issue (see NSURLErrorDomain)
 */
-(void) executeStreamedUploadRequest:(NSMutableURLRequest*)urlRequest completionHandler:(void (^)(NSURLResponse* response, NSError* error))completionHandler;

/**
 *  Executes a download request
 *
 *  @param urlRequest        request to be executed
 *  @param completionHandler called upon completing the request; if the download was succesful, the downloaded data can be accessed through the data stream. Upon failure the error parameter will include information about the issue (see NSURLErrorDomain)
 */
-(void) executeStreamedDownloadRequest:(NSMutableURLRequest*)urlRequest completionHandler:(void (^)(NSInputStream* payloadStream, NSURLResponse* response, NSError* error))completionHandler;

/**
 * Execute a download request with Delegate Callbacks, rather then blocked APIs.
 * This API is introduced to allow:
 * <ul>
 *  <li>background download requests</li>
 *  <li>progress indication for long download tasks</li>
 * </ul>
 *
 * You need to set the id<NSURLSessionDownloadDelegate> sessionDownloadDelegate in order to get the delegate calls
 *
 *  @param urlRequest request to be executed;
 *  @return the task identifier of the underlying <code>NSURLSessionTask</code>
 */
-(NSUInteger) executeDownloadRequest:(NSMutableURLRequest*)urlRequest;

/*
 */
-(NSUInteger) executeDownloadRequestWithResumeData:(NSData*)resumeData;

/**
 * Execute a upload request with Delegate Callbacks, rather then blocked APIs.
 * Az apple states, the Upload task
 * This API is introduced to allow:
 * <ul>
 *  <li>background upload requests</li>
 *  <li>progress indication for long upload tasks</li>
 * </ul>
 *
 * You need to set the id<NSURLSessionDataDelegate> sessionDataDelegate in order to get the delegate calls
 *
 *  @param urlRequest request to be executed;
 *  @return the task identifier of the underlying <code>NSURLSessionTask</code>
 */
-(NSUInteger) executeUploadRequest:(NSMutableURLRequest*)urlRequest;

@end
