//
//  MAFBOManager.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 12/20/11.
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFGenericBOCreator.h"
#import "MAFConstants.h"

@protocol MAFGenericBO;
@protocol MAFBusinessQuery;
@protocol MAFBusinessRelation;
@protocol MAFGenericBODelegate;

/**
 * Exposes APIs to manage BOs, including search and filtering capabilities and CRUD operations
 * Custom Creators can be registered to hook in custom BOs
 * @see MAFGenericBO
 */
@interface MAFBOManager : NSObject <MAFGenericBOCreator>
{
    id <MAFGenericBOCreator> m_CustomBOCreator;
}

/**
 * Custom creators can be registered by clients for specific BO types
 * @see createTransientBO:
 */
@property( nonatomic, retain ) id<MAFGenericBOCreator> customBOCreator;
/**
 * Clients can register this delegate in order to hok in the BO creation process
 */
@property(nonatomic, assign) id<MAFGenericBODelegate> genericBODelegate;

+(MAFBOManager*) sharedInstance;

#pragma mark -
#pragma mark Public APIs
/**
 * Loads the model
 * @remark This API should be called before invoking any of the other APIs - at least for OData based apps 
 * <pre>
 * Usage (on client side)
 * <code>
 * [[MAFBOManager sharedInstance] loadModel:^(NSError* error) 
 * {
 *        if( error )
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
 * @return API execution status
 */
- (MAFEXT_REQUEST_STATUS) loadModel:(void (^)(NSError *))completionBlock;

/**
 * Creates and empty MAFGenericBO object based on the BO Type
 * @discussion If a custom creator is registered for the given BO type, the manager will delegate the BO creation to the factory
 * otherwise the BO will be created using the internal approach  
 */
-(id <MAFGenericBO>) createTransientBO:(NSString*)type_in;

/**
 * Converts the MAFGenericBO object passed as argument to ODataEntry and stores it in the backend
 * @remark This is an asynchronous call 
 * Usage: use a similar approach as described for loadModel: or readBOByType: above
 * @return API execution status
 */
-(MAFEXT_REQUEST_STATUS) storeBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)(id <MAFGenericBO>, NSError*))completionBlock;

/**
 * Converts the MAFGenericBO object passed as argument to ODataEntry and stores it in the backend
 * @remark This is an asynchronous call 
 * Usage: use a similar approach as described for loadModel: or readBOByType: above
 * @return API execution status
 */
-(MAFEXT_REQUEST_STATUS) deleteBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)(NSError*))completionBlock;

/**
 * Converts the MAFGenericBO object passed as argument to ODataEntry and updates it in the backend
 * @remark This is an asynchronous call 
 * Usage: use a similar approach as described for loadModel: or readBOByType: above
 * @return API execution status
 */
-(MAFEXT_REQUEST_STATUS) updateBO:(id <MAFGenericBO>)bo_in withCompletionBlock:( void (^)(NSError*))completionBlock;

/**
 * Reads, searches, or filters entries based on the supplied query object
 * @param query_in @see MAFBusinessQuery
 * @param isUsingCache_in if YES, try to retrieve cached data, and perform real fetch only if no data found in the cache
 * @return API execution status
 */
-(MAFEXT_REQUEST_STATUS) executeBusinessQuery:(id<MAFBusinessQuery>) query_in  usingCache:(BOOL) isUsingCache_in withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;

/**
 * Reads the joined entries of a business object
 * @param rel_in @see MAFBusinessRelation
 * @param isUsingCache_in read the result from cache or read latest data
 * @return API execution status
 */
-(MAFEXT_REQUEST_STATUS) resolveBusinessRelation:(id <MAFBusinessRelation>) rel_in usingCache:(BOOL) isUsingCache_in withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;

@end
