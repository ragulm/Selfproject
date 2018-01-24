//
//  SODataOnlineStoreOptions.h
//  ODataOnline
//
//  Copyright (c) 2014 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpConversationConstants.h"

/**
 Data formats, which can be used for sending requests
 */
typedef enum SODataDataFormats {
    SODataDataFormatDefault,
    SODataDataFormatXML,
    SODataDataFormatJSON
} SODataDataFormats;


/**
 Options for store initialization
 */
@interface SODataOnlineStoreOptions : NSObject

/**
 * The format, which should be used to build OData Data. (AtomXML/JSON)
 */
@property (nonatomic, assign) SODataDataFormats requestFormat;

/**
 * Set whether to use cache or not
 */
@property (nonatomic, assign) BOOL useCache;

/**
 * The encryption key used to encrypt the data in the cache persistent store. Or nil if no encryption needed
 */
@property (nonatomic, copy) NSString* cacheEncryptionKey;

/**
 Set the maximum size of cache in Kbytes.
 Default size is 16384 Kbyte (16 MB)
 */
@property (nonatomic, assign) int cacheSizeLimit;

/**
 Set whether to use force metadata download
 */
@property (nonatomic, assign) BOOL useForceMetadataDownload;

/**
 * Defines where to put the Content-ID within the request; only applies for batch requests
 * @remark Some server implementations may fail with the default setting, which is ContentIdLocationMultipart as of SMP SDK 3.0 SP11; in such cases try to override the default by setting this property to ContentIdLocationSingle
 * For details check the specification at http://www.odata.org/documentation/odata-version-2-0/batch-processing/ -> 2.2.1. Referencing Requests in a Change Set
 * @see SODataRequestExecutionBatchDefault, NSMutableURLRequest (HttpConversation)
 */
@property(assign, nonatomic) SDContentIDLocations contentIDLocation;

@end
