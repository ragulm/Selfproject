//
//  MAFGenericBODelegate.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 12/13/12.
//
//

#import <Foundation/Foundation.h>

@protocol MAFGenericBO;
@protocol MAFBusinessQuery;
@protocol MAFBusinessRelation;
/**
 * Allows clients to register a delegate which will be invoked during BO-related operations
 */
@protocol MAFGenericBODelegate <NSObject>

@optional
/**
 * Invoked before creating a local BO
 * If a valid generic BO object is returned, the framework will use instead of creating one
 * @param type_in_out reference to the BO type; passed by reference, so clients can (optionally) replace it
 */
-(id<MAFGenericBO>) willCreateTransientBO:(NSString**)type_in_out;

/**
 * Invoked after a local BO was created
 * @param bo_in BO which has been created
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didCreateTransientBO:(id<MAFGenericBO>)bo_in error:(NSError*)error_in;

/*
 * Invoked before storing a BO
 * @param bo_in_out reference to the BO which is about to be persisted to DB; passed by reference, so clients can (optionally) replace it
 */
-(void) willStoreBO:(id<MAFGenericBO>*)bo_in_out;
/**
 * Invoked after a BO was stored
 * @param bo_in BO which has been persisted to DB
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didStoreBO:(id<MAFGenericBO>)bo_in error:(NSError*)error_in;

/*
 * Invoked before deleting a BO
 * @param bo_in_out reference to the BO to be deleted; passed by reference, so clients can (optionally) replace it
 */
-(void) willDeleteBO:(id<MAFGenericBO>*)bo_in_out;

/**
 * Invoked after a BO was deleted from the DB
 * @param bo_in BO which has been deleted
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didDeleteBO:(id<MAFGenericBO>)bo_in error:(NSError*)error_in;

/*
 * Invoked before updating a BO
 * @param bo_in_out reference to the BO to be updated; passed by reference, so clients can (optionally) replace it
 */
-(void) willUpdateBO:(id<MAFGenericBO>*)bo_in_out;

/**
 * Invoked after a local BO was updated
 * @param bo_in BO which has been updated
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didUpdateBO:(id<MAFGenericBO>)bo_in error:(NSError*)error_in;

/**
 * Reads, searches, or filters entries based on the supplied query object
 * @param query_in_out reference to the query to be executed; passed by reference so clients can (optionally) replace the query
 * @param isUsingCache_in_out flag reference indicating whether cached data shall be used, or rather a real fetch shall be executed; passed as reference so clients can override it
 * @return array of BOs; if the client returns a nil or empty array, the framework will try to execute the business query, otherwise not
 * @see MAFBusinessQuery
 */
-(NSArray*) willExecuteBusinessQuery:(id<MAFBusinessQuery>*)query_in_out usingCache:(BOOL*)isUsingCache_in_out;

/**
 * Invoked after a business query was executed
 * @param query_in the query which has been executed
 * @param bos query execution results
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didExecuteBusinessQuery:(id<MAFBusinessQuery>)query_in result:(NSArray*)bos error:(NSError*)error_in;

/**
 * Invoked before resolving a business relation (that is, reading the joined entries of a business object)
 * @param rel_in_out reference to the relation to be resolved; passed by reference so clients can (optionally) replace it
 * @param isUsingCache_in_out flag reference indicating whether cached data shall be used, or rather a real fetch shall be executed; passed as reference so clients can override it
 * @return array of BOs; if the client returns a nil or empty array, the framework will try tor esolve the relation, otherwise not
 * @see MAFBusinessRelation
 */
-(NSArray*) willResolveBusinessRelation:(id<MAFBusinessRelation>*)rel_in_out usingCache:(BOOL*)isUsingCache_in_out;

/**
 * Invoked after a business relation was resolved was executed
 * @param rel_in the relation which has been resolved
 * @param bos execution results
 * @param error_in a valid error object or nil if there were no issues
 */
-(void) didResolveBusinessRelation:(id<MAFBusinessRelation>)rel_in result:(NSArray*)bos error:(NSError*)error_in;

@end
