//
//  MAFSDMEntryConvertErrorHandlerDelegate.h
//  MAFExtensibility
//
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MAFGenericBO;
@class ODataEntry;
@protocol MAFSDMEntryConvertErrorHandlerDelegate<NSObject>
@optional
/**
 * OData -> Generic BO
 */

// TODO: make public and refactor passing faulty entry params
/**
 *  Gets invoked whenever there was a conversion issue; the NSError object contains the 
 *
 *  @param entry_in <#entry_in description#>
 *  @param error    <#error description#>
 *
 *  @return <#return value description#>
 */
-(BOOL) didFailToConvertODataEntryToBO:(ODataEntry*)entry_in error:(NSError*)error;

-(BOOL) didFailToConvertBOToODataEntry:(id<MAFGenericBO>)bo_in error:(NSError*)error;

/**
 * This method is called before converting an entry to BO, if implemented.
 * @param entry_in OData entry to be converted
 * @param collectionName_in the name of the collection the entry belongs to
 * @return YES indicates that the library should perform the conversion; retun NO if you want to skip conversion for the given entry
 */
-(BOOL) willConvertODataEntryToBO:(ODataEntry*)entry_in collectionName:(NSString*)collectionName_in;
/**
 * This method is called after converting an entry to BO.
 * @param entry_in OData entry that was converted to BO
 * @param collectionName_in the name of the collection the entry belongs to
 * @param bo_in the result BO of the conversion
 */
-(void) didConvertODataEntryToBO:(ODataEntry*)entry_in collectionName:(NSString*)collectionName_in bo:(id<MAFGenericBO>)bo_in;

/**
 * Generic BO -> OData
 */

/**
 * This method is called before converting a BO to OData entry, if implemented.
 * @param bo_in the BO to be converted
 * @param boType_in the type name the BO belongs to
 * @return YES indicates that the library should perform the conversion; retun NO if you want to skip conversion for the given entry
 */
-(BOOL) willConvertBOToODataEntry:(id<MAFGenericBO>)bo_in boType:(NSString*)boType_in;
/**
 * This method is called after converting a BO to OData entry, if implemented.
 * @param bo_in the BO that was converted to an OData entry
 * @param boType_in the type name the BO belongs to
 * @param entry_in the result OData entry of the conversion
 */
-(void) didConvertBOToODataEntry:(id<MAFGenericBO>)bo_in boType:(NSString*)boType_in entry:(ODataEntry*)entry_in;

@end