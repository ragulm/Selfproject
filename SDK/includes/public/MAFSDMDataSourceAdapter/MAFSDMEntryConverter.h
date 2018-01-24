//
//  MAFSDMEntryConverter.h
//  MAFExtensibility
//
//  Created on 12/19/12.
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFSDMEntryConvertErrorHandlerDelegate.h"

/**
 * Use this key to retrive the entry that is failing in the error handler from the UserInfo dictionary
 */
extern NSString* MAFSDMERR_FIELD_ENTRY;
extern NSString* MAFSDMERR_FIELD_BO;
extern NSString* MAFSDMERR_FIELD_PROPERTY;
extern NSString* MAFSDMERR_FIELD_PATH;
extern NSString* MAFSDMERR_FIELD_BO_FIELD;

@class ODataEntry;
@class ODataPropertyValueObject;

@interface MAFSDMEntryConverter : NSObject

@property (nonatomic, unsafe_unretained) id<MAFSDMEntryConvertErrorHandlerDelegate> delegate;

-(instancetype) init;

/**
 * Converts ODataEntry to Business Object
 * @param odataEntry_in ODataEntry to be converted
 * @param type_in BOType (matches collection name for OData)
 * @return Returns the converted Business Object
 * Deprecated, use
 */
-(id<MAFGenericBO>) convertODataEntryToBO:(ODataEntry*)odataEntry_in type:(NSString*) type_in;

/**
 * Converts Business Object to ODataEntry
 * @param bo_in BO to be converted
 * @return Returns the converted ODataEntry
 */
-(ODataEntry*) convertBOToODataEntry:(id<MAFGenericBO>)bo_in;

/**
 * Converts OData types to native ObjC constructs (EDM_TYPE_BINARY to NSData, EDM_TYPE_STRING to NSString etc.)
 */
-(id) convertODataPropertyValue:(ODataPropertyValueObject*)value;

@end