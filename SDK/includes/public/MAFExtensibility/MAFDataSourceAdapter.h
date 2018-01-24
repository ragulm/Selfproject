//
//  MAFDataSourceAdapter.h
//  MAFDataSourceAdapter
//
//  Created by Vass, Gabor on 2012.06.19..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFGenericBO.h"
#import "MAFBusinessQuery.h"
#import "MAFBusinessRelation.h"
#import "MAFTypeValuePair.h"
#import "MAFConstants.h"

/**
 Protocol definition of accessing the Data layer.
 */
@protocol MAFDataSourceAdapter <NSObject>

/**
 Read, search, filter entries from the data layer
 @param query_in @see MAFBusinessQuery
 */
-(MAFEXT_REQUEST_STATUS) executeBusinessQuery:(id<MAFBusinessQuery>) query_in  usingCache:(BOOL) isUsingCache_in withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;

/**
 Create an empty id<MAFGenericBO> instance of the specified type_in
 */
-(id<MAFGenericBO>) createTransientBO:(NSString *) type_in;

/**
 Reads the joined entries of a business object
 @param rel_in @see MAFBusinessRelation
 @param isUsingCache_in read the result from cache or read latest data
 */
-(MAFEXT_REQUEST_STATUS) resolveBusinessRelation:(id <MAFBusinessRelation>) rel_in usingCache:(BOOL) isUsingCache_in withCompletionBlock:( void (^)(NSArray*, NSError*))completionBlock;

/**
 Store specified business object and return the new object
 @param bo_in @see MAFBGenericBO
 */
-(MAFEXT_REQUEST_STATUS) storeBO: (id <MAFGenericBO>) bo_in withCompletionBlock:( void (^)(id<MAFGenericBO>, NSError*))completionBlock;

/**
 Delete specified business object
 @param bo_in @see MAFBGenericBO
 */
-(MAFEXT_REQUEST_STATUS) deleteBO: (id <MAFGenericBO>) bo_in withCompletionBlock:( void (^)( NSError*))completionBlock;

/**
 Update specified business object and return the updated object
 @param bo_in @see MAFBGenericBO
 */
-(MAFEXT_REQUEST_STATUS) updateBO: (id <MAFGenericBO>) bo_in withCompletionBlock:( void (^)(NSError*))completionBlock;
           
/**
 Initializes the data layer, applications must call this method before using the data layer
*/
-(MAFEXT_REQUEST_STATUS) loadModel:( void (^)( NSError*))completionBlock DEPRECATED_ATTRIBUTE;

/**
 Return the data layer specific implementation of MAFTypeValuePair protocol
 */
-(id<MAFTypeValuePair>) buildTypeValuePairWithType:(int)type_in andValue:(id)value_in;

@end
