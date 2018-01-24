//
//  MAFBindingDescriptors.h
//  MAFConfigurationComponent
//
//  Created on 07/17/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFDescriptorsCommon.h"

@class MAFExpression;

/**
  * Binding descriptor types
  */
typedef enum MAFEXT_BINDING_DESCRIPTOR_TYPES {
	MAFEXT_BINDING_DESCRIPTOR_TYPE_COLLECTION		= 0x01,	/**< the data binding returns a collection of business objects */
	MAFEXT_BINDING_DESCRIPTOR_TYPE_QUERY			= 0x02,	/**< the data binding returns a collection of business objects based on a condition */
	MAFEXT_BINDING_DESCRIPTOR_TYPE_RELATION			= 0x04,	/**< the data binding returns with a related list of business objects (for example sales order items of a sales order) */
	MAFEXT_BINDING_DESCRIPTOR_TYPE_DETAIL			= 0x08,	/**< the data binding describes 1 BO */
	MAFEXT_BINDING_DESCRIPTOR_TYPE_NEW				= 0x10	/**< the data binding describes 1 BO that is newly created */
} MAFEXT_BINDING_DESCRIPTOR_TYPES;

/**
  * Binding descriptor flags describe the used and valid fields of a binding descriptor.
  */
typedef enum MAFEXT_BINDING_DESCRIPTOR_FLAGS {
	MAFEXT_BINDING_DESCRIPTOR_FLAG_NONE		= 0x00,
	MAFEXT_BINDING_DESCRIPTOR_FLAG_TOP		= 0x01, /**< the top field is used in the descriptor */
	MAFEXT_BINDING_DESCRIPTOR_FLAG_SKIP		= 0x02, /**< the skip field is used in the descriptor */
	MAFEXT_BINDING_DESCRIPTOR_FLAG_FILTER	= 0x04, /**< the filter field is used in the descriptor */
	MAFEXT_BINDING_DESCRIPTOR_FLAG_ORDER_BY	= 0x08,	/**< the order by field is used in the descriptor */
	MAFEXT_BINDING_DESCRIPTOR_FLAG_SELECT	= 0x10	/**< the select field is used in the descriptor */
} MAFEXT_BINDING_DESCRIPTOR_FLAGS;

/**
  * Use this constant for the "top" property in binding descriptors to ensure that the returned result set is not restricted to
  * a given number of business objects. This is the default value for the top property (except for the binding descriptor with "detail" type).
  */
extern const uint32_t RESULTSET_COUNT_UNLIMITED;

/**
  * Base binding descriptor describing the common attributes of a data binding
  */
@interface MAFBindingDescriptorBase : NSObject 

@property (nonatomic, assign, readonly) MAFEXT_BINDING_DESCRIPTOR_TYPES type;
@property (nonatomic, assign)			uint32_t						top;		/**< defines the number of BOs requested */
@property (nonatomic, assign)			uint32_t						skip;		/**< the first "skip" number of BOs should not be returned */
@property (nonatomic, retain)			NSString*						boType;		/**< type id of the business object, for example SalesOrders */
@property (nonatomic, retain)			NSString*						orderBy;	/**< the result set is ordered based on the list of fields mentioned in this variable, it also contains if ascending or descending ordering should be used. Note: the format varries based on the used data source. */
@property (nonatomic, assign)			NSString*						select;		/**< describes the subset of properties of BO, which should be returned */
@property (nonatomic, retain)           MAFExpression*                  progressMessage;
@property (nonatomic, retain)           MAFExpression*                  progressTitle;
@property (nonatomic, retain)           MAFExpression*                  errorMessage;
@property (nonatomic, retain)           MAFExpression*                  errorTitle;
@property (nonatomic, retain)			MAFExpression*					cancelButtonText;

-(instancetype) initWithType:(const MAFEXT_BINDING_DESCRIPTOR_TYPES)nType;

/**
  * Checks whether the binding descriptor is valid or not. 
  * If the descriptor is invalid, the method returns a textual description describing the problematic field(s). Pass nil for this parameter 
  * if the detailed description is not required by the caller .
  * @return Returns YES, if the binding descriptor is valid, NO otherwise.
  */
-(BOOL) isValid:(NSString**)details;

@end

/**
  * Binding descriptor type collection. Describes a binding that returns a list of business objects.
  */
@interface MAFBindingDescriptorCollection : MAFBindingDescriptorBase {
}

-(instancetype) init;

@end

/**
  * Binding descriptor describing a relation between business objects
  */
@interface MAFBindingDescriptorRelation : MAFBindingDescriptorBase 

@property (nonatomic, retain) NSString*         relationID; /**< identifies the related BOs */
@property (nonatomic, retain) MAFExpression*    sourceBoID; /**< identifies the parent BO */
//removed in MAF 1.2: @property (nonatomic, retain) MAFExpression*    sourceBindingID; /**< identifies the parent BO's binding */

-(instancetype) init;

/**
  * @see MAFBindingDescriptorBase::isValid;
  */
-(BOOL) isValid:(NSString**)details;

@end

/**
  * Describes a binding reference per tile with tile specific settings for a binding,
  * for example if data download described by the referred binding should happen
  * in the background letting the user use the application or to block accessing the UI.
  */
@interface MAFBindingReferenceInfo : NSObject

@property (nonatomic, retain, readonly) NSString*	bindingId;		/**< the textual id of the referred binding */
@property (nonatomic, assign) BOOL					forceReload;	/**< indicates whether the data should be downloaded each time the tile is activated (created or when navigated back to the given tile), or can use cache */
@property (nonatomic, assign) BOOL					useContext;		/**< indicates whether the data should be used from the passed context */
@property (nonatomic, retain) MAFExpression*        progressMessage;/**< The expression is evaluated then the result is converted to string. This string is displayed as a message in an "alertView" if UI access is blocked while downloading data. Required to be an expression so that, for example, localization expressions can be used. */
@property (nonatomic, retain) MAFExpression*        progressTitle;  /**< The expression is evaluated then the result is converted to string. This string is displayed as the title of the "alertView" that is displayed, if UI access is blocked, while downloading data. Required to be an expression so that, for example, localization expressions can be used. */
@property (nonatomic, retain) MAFExpression*        errorMessage;	/**< The expression is evaluated then the result is converted to string. This string is displayed as a message in an "alertView" when downloading of data failed. Required to be an expression so that, for example, localization expressions can be used. */
@property (nonatomic, retain) MAFExpression*        errorTitle;		/**< The expression is evaluated then the result is converted to string. This string is displayed as the title of the "alertView" when downloading of data failed. Required to be an expression so that, for example, localization expressions can be used. */
@property (nonatomic, assign) MAFEXT_UI_BLOCKING	blockUI;		/**< Controls UI access when downloading of data is in progress. Downloading can be done in the background so that the application can be used (when set to MAFEXT_UI_BLOCKING_NONE or MAFEXT_UI_BLOCKING_PROGRESS), or UI access can be blocked until data is available (MAFEXT_UI_BLOCKING_CANCELABLE), however data downloading can be canceled. */
@property (nonatomic, retain) MAFExpression*		cancelButtonText; /**< The expression is evaluated then the result is converted to string. This string is displayed on the button of the "alertView" when downloading data. Required to be an expression so that, for example, localization expressions can be used. The downloading of data is canceled when the user taps the button. */

-(instancetype) initWithBindingId:(NSString*)bindingId;

@end

/**
 * Binding descriptor type query. Describes a binding that returns a list of business objects based on a condition.
 */
@interface MAFBindingDescriptorQuery : MAFBindingDescriptorBase

@property (nonatomic, retain) MAFExpression* filter;

-(instancetype) init;

@end

/**
 * Describes a binding that returns the details of a business object (usually more data and more fields than 
 * returned in a collection for the given BO).
 */
@interface MAFBindingDescriptorDetail : MAFBindingDescriptorBase

@property (nonatomic, retain) MAFExpression* boId; /**< The BO id that identifies the BO whose detailed data is to be queried */

-(instancetype) init;

@end

/**
 * Describes a binding that refers to a BO type and the default values which should be
 * the initial values of the fields of a new BO which has the defined BO type.
 */
@interface MAFBindingDescriptorNew : MAFBindingDescriptorBase

@property (nonatomic, retain, readonly) NSDictionary* defaultValues; /**< stores <path to a field in BO, default value> pairs */

-(void) addDefaultValue:(id)value forKey:(NSString*) key;

@end

/**
 * Binding descriptor factory.
 * Creates a binding based on the given binding type. The caller is responsible for releasing the object.
 */
extern MAFBindingDescriptorBase* mafCreateBindingDescriptor(const MAFEXT_BINDING_DESCRIPTOR_TYPES bindingType);

