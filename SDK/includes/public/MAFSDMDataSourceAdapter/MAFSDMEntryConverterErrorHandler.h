//
//  MAFSDMEntryConverterErrorHandler.h
//  MAFExtensibility
//
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import "MAFSDMEntryConvertErrorHandlerDelegate.h"

@interface MAFSDMEntryConverterErrorHandler : NSObject<MAFSDMEntryConvertErrorHandlerDelegate>

-(instancetype) init;

/**
 * OData -> Generic BO
 */

/**
 * This method is called before converting an entry to BO, if implemented.
 * @param entry_in OData entry to be converted
 * @param collectionName_in the name of the collection the entry belongs to
 * @return return YES, if the conversion of the given BO should be performed or NO otherwise
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
 * @return return YES, if the conversion of the generic BO should be performed or NO otherwise
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