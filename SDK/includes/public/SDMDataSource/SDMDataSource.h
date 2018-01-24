//
//  SDMDataSource.h
//  SDMDataSource
//
//  Created by Nyisztor Karoly on 2/10/12.
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDMODataURIParameter.h"

/**
 * Enables official performance logging
 */
#define OFFICIAL_PERF_MEASUREMENT_DATASRC 0  // Switched off until all public headers of the Perf library are available in Nexus


/**
 * Defines authentication related constants
 * @remark mirrors RequestType enum defined in SDMRequestBuilder.h just to prevent including the file
 */
typedef enum SDMRequestType {
	SDMSUPRequestType	= 0xFE, ///< denotes SUPRequest
	SDMHTTPRequestType = 0xFF   ///< denotes SDMHttpRequest
} SDMRequestType;

/**
 * Request states
 * @discussion Shall be kept in sync with MAFExtensibility MAFConstants MAFEXT_REQUEST_STATUS
 */
__deprecated_enum_msg("The MAFExtensibility library is deprecated and it will be discontinued.")
typedef enum SDMDS_REQUEST_STATUS {
	SDMDS_REQUEST_PENDING       = 0,		///< Request fired and executing asynchronously
    SDMDS_REQUEST_IMMEDIATE     = 1,        ///< Request fired and executed (synchronous behaviour)
    SDMDS_REQUEST_UNKNOWN       = 0xff		///< Request status is undefined
} SDMDS_REQUEST_STATUS;


@class ODataRelatedLink;
@class ODataEntry;

/**
 * Wrapper on top of the SDM libraries
 * @remark exposes a convenience facade to all OData parsing, caching and connectivity related operations
 * Clients must ensure SDM libraries are linked (the facade library itself does not link the SDM libs directly)
 * @discussion The client authentication should be finished before accessing the content; use demo mode for demo content
 *
 *  @remark The entire MAFExtensibility and MAFJSFacade is deprecated and it will be discontinued."
 */
__deprecated_msg("The SDMDataSource library is deprecated and it will be discontinued.")
@interface SDMDataSource : NSObject
{
    //! Service Doc URL
    NSURL* m_SVCURL;
    
    //! Service Doc URL string
    NSString* m_SVCURLString;    
    
    //! SUPRequestType (default) or SDMHttpRequestType
   // SDMRequestType m_RequestType;
    
    //! Number of seconds to wait before timing out
    //    NSTimeInterval m_TimeoutSeconds; 
    
    /**
     * Indicates whether real data connection should be used or only demo mode
     * @remark Usually authentication is required for a real data connection; for demo mode the required OData XMLs have to be bundled with the app 
     * Demo mode is switched off by default
     */
    //    BOOL m_DemoMode;
    
}

@property (nonatomic, strong) NSURL* SVCURL;

@property (assign) BOOL shouldAutosetLanguage; ///< controls whether the preferred language has to be passed along the request's header; defaults to YES

//@property (nonatomic, assign) NSTimeInterval timeoutSeconds;
//@property (nonatomic, assign) BOOL demoMode;


#pragma mark -
#pragma mark Initialization and Deallocation

/**
 * Allows setting of service document of OData based application
 */
+ (void) setBaseURL:(NSString*)baseURL;

/**
 * Returns the currently used service document url
 */
+ (NSString*) baseURL;

/**
 * Allows setting of username used for authenticate in case of SDMHttpRequest
 * Username is empty by default
 */
+ (void) setUsername: (NSString*) username;
/**
 * Allows setting of password used for authenticate in case of SDMHttpRequest
 * Password is empty by default
 */
+ (void) setPassword: (NSString*) password;
/**
 * Allows setting of Application connection Id, used for authenticate in case of using SMP
 * APPCID is empty by default
 */
+ (void) setAPPCID:(NSString*)appcid;
/**
 * Allows setting of request type
 * Possible values : SDMHTTPRequestType, SDMSUPRequestType 
 * By default SDMSUPRequestType is used
 */
+ (void) setRequestType: (SDMRequestType) requestType;
/**
 * Returns the current request type
 * Possible values : SDMHTTPRequestType, SDMSUPRequestType 
 * By default SDMSUPRequestType is used
 */
+ (SDMRequestType) requestType;

/**
 * Allows setting of Cross-site Request Forgery support
 * By default XCSRF is disabled
 */
+ (void) enableXCSRF: (BOOL) enable;


#pragma mark -
#pragma mark Setup

/**
 * Allows setting of demo mode instead of the default real data connection working mode
 * @remark Authentication is usuall required to fetch 'live' data; for demo mode the required OData XMLs have to be bundled with the app 
 * Demo mode is switched off by default
 */
+(void) setDemoMode:(BOOL)isDemoMode_in;
/**
 * Returns the current working mode
 * The default is live connection
 */
+(BOOL) isDemoMode;

/**
 * Sets the dedicated bundle where offline demo data is placed
 * @remark If no custom demo data bundle is set, data is expected to be placed in the app's bundle
 * @see +setDemoDataDir
 */
+(void) setDemoDataBundleName:(NSString*)bundleName_in;

/**
 * Retrieves the custom demo data bundle name
 * @return Empty string if no custom bundle has been spacified
 */
+(NSString*) demoDataBundleName;

/**
 * Sets the directory inside the application's bundle where offline demo data is placed
 * @remark If the demo data directory is not set, data is expected to be placed in the app's bundle
 */
+(void) setDemoDataDir:(NSString*)dir_in;
/**
 * Retrieves the demo data directory
 */
+(NSString*) demoDataDir;

/**
 * Enable or disable performance logging
 * @remark Performance logging is disabled by default
 * @param isConsoleEnabled_in if YES, logs to XCode console
 * @param isFileEnabled_in if YES, logs to a file, which can be checked in iTunes (enable iTunes file sharing for your app to allow retrieving this file!)
 */
+(void) enablePerformanceLogging:(BOOL)enabled outputToConsole:(BOOL)isConsoleEnabled_in outputToFile:(BOOL)isFileEnabled_in;
/**
 * Returns the current performance logging status
 * The default is disabled
 */
+(BOOL) isPerformanceLoggingEnabled;

/**
 * Loads the OData SVC and the metadata
 * <pre>
 * Usage (on client side)
 * <code>
 * // instantiate SDMDataSource object and invoke loadModel
 * // the completion callback should check for error and handle both success and failure cases
 * SDMDataSource* request = [[SDMDataSource alloc] init];
 * [request loadModel:^(NSError* error) {
 *        if(error)
 *        {
 *          NSLog( @"Error occured during model loading. Domain: %@, error code %i, details:%@", error.domain, error.code, [error.userInfo objectForKey:NSLocalizedDescriptionKey] );
 *        }
 *        else
 *        {
 *          NSLog( @"Model sucesfully loaded" );
 *          ... perform next action as required, i.e. get entries
 *        }
 *  }];
 * ...
 * </code>
 * </pre>
 */
-(SDMDS_REQUEST_STATUS) loadModel:(void (^)(NSError* error))completionBlock;
/**
 * Retrieves entries matching the search term 
 */
-(SDMDS_REQUEST_STATUS) searchEntriesFor:(NSString*)searchTerm_in inCollection:(NSString*)collectionName_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, NSArray*, NSError*))completionBlock;

/**
 * Filter entries matching the filter term 
 @Deprecated: use entriesForCollection with ODataURIParamaters method
 */
-(SDMDS_REQUEST_STATUS) filterEntriesFor:(NSDictionary*) filterTerms_in inCollection:(NSString*)collectionName_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, NSArray*, NSError*))completionBlock  DEPRECATED_ATTRIBUTE;

/**
 * Filter entries matching the filter term 
 @Deprecated: use entriesForCollection with ODataURIParamaters method
 */
-(SDMDS_REQUEST_STATUS) filterEntriesUsingFilterExpression:(NSString*) filterTermsAsString_in inCollection:(NSString*)collectionName_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionName, NSArray*, NSError*))completionBlock  DEPRECATED_ATTRIBUTE;


/**
 * Retrieves the entries belonging to an ODataCollection by its name
 @Deprecated: use entriesForCollection with ODataURIParamaters method
 */
- (SDMDS_REQUEST_STATUS) entriesForCollection:(NSString*)collectionName_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, NSArray*, NSError*))completionBlock DEPRECATED_ATTRIBUTE;

/**
 * Retrieves the entries belonging to an ODataCollection by its name using the provided ODataURIParameters object
 */
- (SDMDS_REQUEST_STATUS) entriesForCollection:(NSString*)collectionName_in usingURIParameters:(SDMODataURIParameter*)uriParameters_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, NSArray*, NSError*))completionBlock;

/**
 * Creates an uninitialized ODataEntry
 * @remark after setup, this entry will be used as input for the createEnry: API
 */
-(ODataEntry*) createEntryForCollection:(NSString*)collectionName_in;

/**
 * Creates the entry in the backend
 */
- (SDMDS_REQUEST_STATUS) storeEntry:(ODataEntry*)entry_in forCollection:(NSString*)collectionName_in withCompletionBlock:( void (^)(ODataEntry*, NSError*))completionBlock;

/**
 * Reads an OData entry based on its unique ID and colection name
 */
- (SDMDS_REQUEST_STATUS) readEntryById:(NSString*)id_in andCollectionName:(NSString*)collectionName_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, ODataEntry*, NSError*))completionBlock;

/**
 * Updates the given OData entry in the backend
 */
- (SDMDS_REQUEST_STATUS) updateEntry:(ODataEntry*)entry_in forCollection:(NSString*)collectionName_in withCompletionBlock:( void (^)(NSError*))completionBlock;

/**
 * Updates the given OData entry in the backend using HTTP POST method
 */
- (SDMDS_REQUEST_STATUS) updateEntryUsingHttpPost:(ODataEntry*)entry_in forCollection:(NSString*)collectionName_in withCompletionBlock:( void (^)(NSError*))completionBlock;


/**
 * Deletes the given OData entry from the backend
 */
- (SDMDS_REQUEST_STATUS) deleteEntry:(ODataEntry*) entry_in withCompletionBlock:( void (^)(NSError*))completionBlock;

/**
 *  Reads the open search document for the given collectionName
 */
- (SDMDS_REQUEST_STATUS)readOpenSearchDocument:(NSString *)collectionName_in withCompletionBlock:(void (^)(NSError* error))completionBlock;

/**
 *  Retrieves the related entries for the given ODataRelatedLink object
 */
- (SDMDS_REQUEST_STATUS)entriesForRelatedLink:(ODataRelatedLink *) relatedLink_in usingCache:(BOOL)isUsingCache_in withCompletionBlock:( void (^)(NSString* collectionId, NSArray*, NSError*))completionBlock;

@end
