//
//  MAFParameter.h
//  MAFConfigurationComponent
//
//  Created on 08/15/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
  * Type of the value stored by a parameter.
  * When set to ..._STRING the value can be safely cast to NSString.
  * When set to ..._NUMBER the value can be safely cast to NSNumber.
  * In case of ..._EXPRESSION the value points to a MAFExpression instance.
  */
typedef enum MAFEXT_PARAMETER_TYPES {
	MAFEXT_PARAMETER_TYPE_STRING		= 0,
	MAFEXT_PARAMETER_TYPE_NUMBER		= 1,
	MAFEXT_PARAMETER_TYPE_EXPRESSION	= 2
} MAFEXT_PARAMETER_TYPES;

/**
  * Base parameter class that is used for describing parameters of action, binding and other parameters
  */
@interface MAFParameter : NSObject

@property (nonatomic, assign, readonly) MAFEXT_PARAMETER_TYPES type;
@property (nonatomic, retain, readonly) id<NSObject> value;

-(instancetype) initWithValue:(id<NSObject>)value;

@end