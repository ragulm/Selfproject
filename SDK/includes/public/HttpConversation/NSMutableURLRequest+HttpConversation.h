//
//  NSMutableURLRequest+HttpConversation.h
//  HttpConversation
//
//  Copyright (c) 2014 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpConversationConstants.h"
/**
 ChangeSet definition
*/
@interface ChangeSet : NSObject

@property (strong) NSMutableArray* changeRequests;

@end

/**
 * Category extension for NSMutableURLRequest to support batch request sending
 */
@interface NSMutableURLRequest (HttpConversation)

/**
 * Contains batch requests, which are NSMutableURLRequest instances
 */
@property (strong) NSMutableArray* batchElements;

/**
 * Defines where to put the Content-ID within the request; only applies for batch requests
 * @remark Some server implementations may fail with the default setting, which is ContentIdLocationMultipart as of SMP SDK 3.0 SP11; in such cases try to override the default by setting this property to ContentIdLocationSingle
 * For details check the specification at http://www.odata.org/documentation/odata-version-2-0/batch-processing/ -> 2.2.1. Referencing Requests in a Change Set
 * @see SODataOnlineStoreOptions, SODataRequestExecutionBatchDefault
 */
@property(assign, nonatomic) SDContentIDLocations contentIDLocation;

/**
 * Generates batch request content, call before sending a batch request
 */
-(void) prepareBatchRequest;

@end
