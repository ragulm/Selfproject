//
//  MAFTypeValuePair.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 3/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSStringConversionExtension.h"
//#import "ODataPropertyInfo.h"
#import "MAFTypeValuePair.h"


/**
 * Possible EDM types of a property. Implicitly map to TEN_EDM_TYPES in the SDMODataPropertyInfo instance.
 */
typedef NS_ENUM(NSInteger, MAF_EDM_TYPES) {
	MAF_EDM_TYPE_BYTE				= INT_TARGET_TYPE_UINT8,
	MAF_EDM_TYPE_SBYTE				= INT_TARGET_TYPE_INT8,
	MAF_EDM_TYPE_INT16				= INT_TARGET_TYPE_INT16,
	MAF_EDM_TYPE_INT32				= INT_TARGET_TYPE_INT32,
	MAF_EDM_TYPE_INT64				= INT_TARGET_TYPE_INT64,
	MAF_EDM_TYPE_STRING				= 0x10,
	MAF_EDM_TYPE_BINARY				= 0x20,
	MAF_EDM_TYPE_BOOLEAN			= 0x30,
	MAF_EDM_TYPE_TIME				= 0x40,
	MAF_EDM_TYPE_DATETIME			= 0x41,
	MAF_EDM_TYPE_DATETIMEOFFSET		= 0x42,
	MAF_EDM_TYPE_DECIMAL			= 0x50,
	MAF_EDM_TYPE_SINGLE				= 0x51,
	MAF_EDM_TYPE_DOUBLE				= 0x52,
	MAF_EDM_TYPE_GUID				= 0x60,
	MAF_EDM_TYPE_COMPLEX			= 0x100,
	MAF_EDM_TYPE_USER				= 0x8000,
};

/**
 * Pair construct for <type, value>
 * @see MAFGenericBO
 */
@interface MAFSDMTypeValuePair : NSObject <MAFTypeValuePair>

@property (nonatomic, assign) int type;
@property (nonatomic, strong) id value;


-(instancetype) initWithType:(MAF_EDM_TYPES)type_in andValue:(id)value_in;

@end
