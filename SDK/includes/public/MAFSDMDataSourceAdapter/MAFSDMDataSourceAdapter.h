//
//  MAFODDataSourceAdapter.h
//  MAFODDataSourceAdapter
//
//  Created by Vass, Gabor on 2012.06.19..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFDataSourceAdapter.h"
#import "MAFSDMEntryConverterErrorHandler.h"

/**
 * Enables official performance logging
 */
#define OFFICIAL_PERF_MEASUREMENT_DATASRCADAPTER 0  // Switched off till performance lib public headers are publicly available

@class MAFSDMEntryConverter;

@interface MAFSDMDataSourceAdapter : NSObject <MAFDataSourceAdapter>

@property (nonatomic, strong) MAFSDMEntryConverter*	entryConverter; ///< ODataEntry <-> GenericBO adapter

/**
 * Sets the OData<->GenericBO converter error handler delegate
 * @discussion Clients can hook in to solve conversion related issues
 */
@property (nonatomic, unsafe_unretained) id<MAFSDMEntryConvertErrorHandlerDelegate>	conversionErrorHandlerDelegate;


#pragma mark - Initializers
/**
 *	Initializes the SDM data source adapter object
 *
 *	@param	converter ODataEntry <-> GenericBO adapter object
 *
 *	@return	SDMDataSourceAdapter object
 */
-(instancetype) initWithEntryConverter:(MAFSDMEntryConverter*)converter;


#pragma mark - Data Management APIs

/**
 *	Creates an in-memory BO
 *
 *	@param	type_in	BO type
 *
 *	@return	BO object
 */
-(id<MAFGenericBO>) createTransientBO:(NSString *)type_in;

/**
 * Creates the BO in the database
 *
 * @param	bo_in	BO to be created / updated @see MAFBGenericBO
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) storeBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)(id<MAFGenericBO>, NSError*))completionBlock;

/**
 *	Deletes the specified BO from the database
 *
 * @param	bo_in	BO to be deleted @see MAFBGenericBO
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) deleteBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)( NSError*))completionBlock;

/**
 *	Updates the specified BO in the database
 *
 * @param	bo_in	BO to be deleted @see MAFBGenericBO
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) updateBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)(NSError*))completionBlock;

/**
 * Executes business query, which can be a Read, Search, or Filter operation
 *
 * @param	query_in	business query object, @see MAFBusinessQuery
 * @param	isUsingCache_in	specifies whether the query should be executed in the cache, or a real fetch should be performed
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) executeBusinessQuery:(id<MAFBusinessQuery>)query_in
                                   usingCache:(BOOL)isUsingCache_in
                          withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;

/**
 * Resolves business relation for BO (reads the joined entries of a business object)
 *
 * @param	query_in	business relation object, @see MAFBusinessRelation
 * @param	isUsingCache_in	specifies whether the operation should be performed in the cache, or a real fetch should be performed
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) resolveBusinessRelation:(id <MAFBusinessRelation>) rel_in
                                      usingCache:(BOOL)isUsingCache_in
                             withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;


/**
 * Loads Service Document and metadata (OData specific)
 * @remark Deprecated, load model via SDMDataSource -loadModel API
 *
 * @param completionBlock	completion block supplied by caller, will be invoked upon completion
 *
 * @return request status (pending, immediate)
 */
-(MAFEXT_REQUEST_STATUS) loadModel:( void (^)( NSError*))completionBlock DEPRECATED_ATTRIBUTE;


#pragma mark - OData <-> GenericBO converter APIs

/**
 * Converts ODataEntry to Business Object
 * @param odataEntry_in ODataEntry to be converted
 * @param type_in BOType (matches collection name for OData)
 * @return Returns the converted Business Object
 */
//+(id<MAFGenericBO>) convertODataEntryToBO:(ODataEntry*) odataEntry_in type:(NSString*) type_in;
-(id<MAFGenericBO>) convertODataEntryToBO:(ODataEntry*) odataEntry_in type:(NSString*) type_in;

/**
 * Converts an array of ODataEntries to Business Object
 * @param odataentries_in ODataEntries to be converted
 * @param type_in BOType (matches collection name for OData)
 * @return Returns the array of the converted Business Objects
 */
//+(NSArray*) convertODataEntriesToBOs:(NSArray*) odataEntries_in type:(NSString*) type_in;
-(NSArray*) convertODataEntriesToBOs:(NSArray*) odataEntries_in type:(NSString*) type_in;

/**
 * Converts Business Object to ODataEntry
 * @param bo_in BO to be converted
 * @return Returns the converted ODataEntry
 */
-(ODataEntry*) convertBOToODataEntry: (id<MAFGenericBO>) bo_in;


#pragma mark - Helper Methods

/**
 Returns the data layer specific implementation of MAFTypeValuePair protocol
 */
-(id<MAFTypeValuePair>) buildTypeValuePairWithType:(int)type_in andValue:(id)value_in;


#pragma mark - Performance measurement related methods

/**
 * Switch performance logging on/off
 * @remark Performance logging is disabled by default
 * @param isConsoleEnabled_in if YES, logs to XCode console
 * @param isFileEnabled_in if YES, logs to a file, which can be checked in iTunes (enable iTunes file sharing for your app to allow retrieving this file!)
 */
+(void) enablePerformanceLogging:(BOOL)enabled
                 outputToConsole:(BOOL)isConsoleEnabled_in
                    outputToFile:(BOOL)isFileEnabled_in;

/**
 * Returns whether performance logging is enabled
 * @remark Performance logging is disabled by default
 */
+(BOOL) isPerformanceLoggingEnabled;

@end
