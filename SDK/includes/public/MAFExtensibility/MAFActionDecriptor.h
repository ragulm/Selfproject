	//
//  MAFActionDescriptor.h
//  MAFConfigurationComponent
//
//  Created on 07/19/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFAppearanceDescriptor.h"
#import "MAFParameter.h"

/**
 * Event IDs
 */
typedef NS_ENUM(NSInteger, MAFEXT_EVENT_IDS)
{
	MAFEXT_EVENT_ID_ONCLICK					= 0,	//the event is raised when the user taps a UI element or taps on a tile
    MAFEXT_EVENT_ID_ON_LONG_CLICK           = 2,
	MAFEXT_EVENT_ID_ON_SELECT               = 3,
	MAFEXT_EVENT_ID_ON_ORIENTATION_CHANGE   = 4,
	MAFEXT_EVENT_ID_ON_ENTER                = 5,
	MAFEXT_EVENT_ID_ON_DID_LOAD             = 6,
	MAFEXT_EVENT_ID_ON_WILL_APPEAR          = 7,
	MAFEXT_EVENT_ID_ON_CHANGE               = 8,
	MAFEXT_EVENT_ID_ON_SEARCH               = 9,
    MAFEXT_EVENT_ID_ON_DATA_LOADED          = 10,
    MAFEXT_EVENT_ID_ON_CREATE               = 11,
    MAFEXT_EVENT_ID_ON_DID_APPEAR           = 12,
    MAFEXT_EVENT_ID_ON_PROGRESS_CANCELED    = 13,
    MAFEXT_EVENT_ID_ON_CONTEXTCHANGE        = 14,
    MAFEXT_EVENT_ID_ON_GLOBALCONTEXTCHANGED  = 15,
};

/**
 * Action IDs
 */
typedef NS_ENUM(NSInteger, MAFEXT_ACTION_TYPES)
{
	MAFEXT_ACTION_TYPE_NAVIGATE					= 1,
	MAFEXT_ACTION_TYPE_SAVE						= 4,
	MAFEXT_ACTION_TYPE_BACK						= 5,
    MAFEXT_ACTION_TYPE_PRESENTMODAL				= 6,
    MAFEXT_ACTION_TYPE_DISMISSMODAL				= 7,
	MAFEXT_ACTION_TYPE_SHOWACTIONSHEET			= 8,
	MAFEXT_ACTION_TYPE_COPY						= 9,
	MAFEXT_ACTION_TYPE_DELETE					= 10,
	MAFEXT_ACTION_TYPE_EDIT						= 11,
	MAFEXT_ACTION_TYPE_DATARELOAD				= 12,
	MAFEXT_ACTION_TYPE_UIREFRESH				= 13,
    MAFEXT_ACTION_TYPE_POPOVER					= 14,
    MAFEXT_ACTION_TYPE_SENDNOTIFICATION			= 15,
    MAFEXT_ACTION_TYPE_SUBSCRIBETONOTIFICATION	= 16,
    MAFEXT_ACTION_TYPE_WAITFORCONTEXT			= 17,
    MAFEXT_ACTION_TYPE_UPDATECONTEXT            = 18,
    MAFEXT_ACTION_TYPE_CLEARCONTEXT             = 19,
    MAFEXT_ACTION_TYPE_UPDATEGLOBALCONTEXT      = 20,
    MAFEXT_ACTION_TYPE_CLEARGLOBALCONTEXT       = 21,
    MAFEXT_ACTION_TYPE_PUSH_UNDOBUFFER          = 23,
    MAFEXT_ACTION_TYPE_POP_UNDOBUFFER           = 24,
    MAFEXT_ACTION_TYPE_RESET_UNDOBUFFER         = 25,
    MAFEXT_ACTION_TYPE_SHOWPROGRESSVIEW         = 26,
    MAFEXT_ACTION_TYPE_DISSMISSPROGRESSVIEW     = 27,
    MAFEXT_ACTION_TYPE_SHOWALERTVIEW            = 28,
	MAFEXT_ACTION_TYPE_JSACTION					= 50,
	MAFEXT_ACTION_TYPE_CUSTOM					= 100
};

/**
 * Notification Action types
 */
typedef NS_ENUM(NSInteger, MAFEXT_NOTIFICATION_ACTION_TYPES)
{
	MAFEXT_NOTIFICATION_ACTION_TYPE_PASSDATAANDLOAD         = 1,
    MAFEXT_NOTIFICATION_ACTION_TYPE_GLOBALCONTEXTCHANGED    = 2,
    MAFEXT_NOTIFICATION_ACTION_TYPE_CONTEXTCHANGED          = 3,
    MAFEXT_NOTIFICATION_ACTION_TYPE_CHANGECONTEXT           = 4,
    MAFEXT_NOTIFICATION_ACTION_TYPE_CLEARCONTEXT			= 5,
	MAFEXT_NOTIFICATION_ACTION_TYPE_CUSTOM					= 100
};

/**
 * Orientation types can supported by the Tile / LinearContainer
 */
typedef NS_ENUM(NSInteger, MAFEXT_ORIENTATION_TYPES)
{
	MAFEXT_ORIENTATION_TYPE_NONE				= 0x00,
	MAFEXT_ORIENTATION_TYPE_PORTRAIT_UP			= 0x01,
	MAFEXT_ORIENTATION_TYPE_PORTRAIT_DOWN		= 0x02,
	MAFEXT_ORIENTATION_TYPE_LANDSCAPE_LEFT		= 0x04,
	MAFEXT_ORIENTATION_TYPE_LANDSCAPE_RIGHT		= 0x08,
};

/**
  * Action parameter
  */
typedef MAFParameter MAFActionParameter;

/**
  * Describes an action that must be executed for a given event
  */
@interface MAFActionDescriptor : NSObject 

@property (nonatomic, assign, readonly) MAFEXT_ACTION_TYPES actionType;		/**< Stores a built-in action id, or is set to ACTION_TYPE_CUSTOM in case of user defined actions */
@property (nonatomic, retain, readonly) NSDictionary* parameters;			/**< Holds the action parameters (MAFActionParameter instances) whose name is known to the framework (for example 'target'), if any */
@property (nonatomic, retain, readonly) NSDictionary* freeTextParameters;	/**< Holds the user defined parameters (MAFActionParameter instances) whose name are defined by the user (for example a BO field name) */
@property (nonatomic, retain) NSString* customActionID;						/**< Stores the textual action id that is defined by the user. If a custom action id is defined then actionType is set to ACTION_TYPE_CUSTOM */
@property (nonatomic, assign) MAFEXT_ORIENTATION_TYPES orientation DEPRECATED_ATTRIBUTE; /**< no longer used attribute */
@property (nonatomic, assign) UIModalPresentationStyle modalPresentationStyle; /**< modal presentation style for presentation action */
@property (nonatomic, assign) UIModalTransitionStyle modalTransitionStyle;  /**< modal transition style for presentation action */

-(instancetype) initWithActionType:(const MAFEXT_ACTION_TYPES)nActionType andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

/**
 * Adds an action parameter instance with a known id to the action descriptor.
 * Example usage: defining the navigation target (parameter id: "target") when navigating.
 * @param parameter: the action parameter instance
 * @param parameterId: textual parameter id
 */
-(void) addParameter:(MAFActionParameter*)parameter withId:(NSString*)parameterId;

/**
 * Adds an action parameter instance with a nonreserved id by the framework to the action descriptor as a free-text parameter.
 * Example usage: passing a BO to a tile with reference id "detailBO".
 * @param parameter: the action parameter instance
 * @param parameterId: the textual, user defined parameter id
 */
-(void) addFreeTextParameter:(MAFActionParameter*)parameter withId:(NSString*)parameterId;

-(BOOL) isOrientationSupported:(const MAFEXT_ORIENTATION_TYPES)orientationToCheck DEPRECATED_ATTRIBUTE;

@end

@class MAFExpression;
/**
  * Describes an action panel item
  */
@interface MAFActionPanelItemDescriptor : NSObject 

@property (nonatomic, assign) MAFEXT_APPEARANCE_HALIGNMENT_TYPES alignment; /**< defines where (left or right side) the button on the navigation bar has to be placed. Only APPEARANCE_HALIGNMENT_TYPE_LEFT and ..._RIGHT values are supported. The default value is ..._LEFT. */
@property (nonatomic, retain, readonly) NSArray* actions;					/**< assigned actions to this action panel item (navigation bar button) */
@property (nonatomic, retain) MAFExpression* text;							/**< An expression that must be evaluated. After evaluation the value is converted to string and is displayed on the action panel item (button). Required to be an expression so that, for example, localization can be supported */
@property (nonatomic, retain) MAFExpression* imageSrc;						/**< An expression that must be evaluated. After evaluation the value is converted to string and is used as a path to an image resource. When 'imageSrc' is set the 'text' property must be nil. */
@property (nonatomic, retain) NSString* style;								/**< the style id that identifies the style to be applied on the action panel item (button) */
@property (nonatomic, assign) MAFEXT_ORIENTATION_TYPES orientation;			/**< Defines in which orientation the button should be displayed. */

-(instancetype) initWithOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

/**
 * Checks whether the tile supports a given orientation
 */
-(BOOL) isOrientationSupported:(const MAFEXT_ORIENTATION_TYPES)orientationToCheck;

/**
 * Adds a action item descriptor to the action panel item descriptor.
 */
-(void) addActionItem:(MAFActionDescriptor*)actionItem;

@end


/**
  * Action Panel Descriptor
  */
@interface MAFActionPanelDescriptor : NSObject

@property (nonatomic, retain, readonly) NSArray*	items; /**< holds the action panel item descriptors (MAFActionPanelItemDescriptor instances) */

-(instancetype) init;

/**
  * Adds a new panel item descriptor to the action panel descriptor.
  */
-(void) addActionPanelItem:(MAFActionPanelItemDescriptor*)actionPanelItem;

@end
