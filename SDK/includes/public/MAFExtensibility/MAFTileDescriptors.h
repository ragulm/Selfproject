//
//  MAFTileDescriptors.h
//  MAFConfigurationComponent
//
//  Created on 07/18/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFActionDecriptor.h"
#import "MAFAppearanceDescriptor.h"
#import "MAFBindingDescriptors.h"
#import "MAFFormatDescriptor.h"
#import "MAFToolbarDescriptors.h"

@class MAFExpression;
@class MAFTileDescriptorBase;

/**
 * Containers such as Layout, CompositeLayout, LinearContainer ... implement this protocol so that sub UI elements can be added.
 */
@protocol MAFSubTileContainer

@required
@property (nonatomic, retain, readonly) NSArray* subTiles;

-(void) addSubTile:(MAFTileDescriptorBase*)tile;

@optional
-(void) removeSubTileById:(NSString*)tileId;

@end

@protocol MAFTileDescriptorWithImageSrc

@required

@property (nonatomic, retain) MAFExpression* imageSrc; /**< If the expression exists it is evaluated and the result is converted to string (if it was not a string). (In case of a Tile the converted value then is used as a path to an image that is shown on the Tile's tabbar button. If there is no tabbar available, this value is ignored.)*/

@end

/**
  * Supported UI element types
  */
typedef enum MAFEXT_TILE_TYPES {
	MAFEXT_TILE_TYPE_TILE					= 0,
	MAFEXT_TILE_TYPE_LIST_CONTAINER			= 1,
	MAFEXT_TILE_TYPE_LINEAR_CONTAINER		= 2,
	MAFEXT_TILE_TYPE_LABEL					= 3,                                                                                                                   
	MAFEXT_TILE_TYPE_TEXTBOX				= 4,
	MAFEXT_TILE_TYPE_IMAGE					= 5,
	MAFEXT_TILE_TYPE_LIST_ITEM				= 6,
	MAFEXT_TILE_TYPE_BUTTON					= 7,
	MAFEXT_TILE_TYPE_SWITCH					= 8,
	MAFEXT_TILE_TYPE_DATE_PICKER			= 9,
	MAFEXT_TILE_TYPE_SEARCHBAR				= 10,
	MAFEXT_TILE_TYPE_TEXTVIEW				= 11,
	MAFEXT_TILE_TYPE_TILEREF				= 12,
	MAFEXT_TILE_TYPE_LIST_SECTION			= 13,
	MAFEXT_TILE_TYPE_LIST_SECTION_BAR		= 14,
	MAFEXT_TILE_TYPE_TILE_CONTAINER			= 15,
	MAFEXT_TILE_TYPE_CUSTOM					= 2000, /** in case of a custom type the tileId or the type name can be the key for the application to be able to create the custom control */
	MAFEXT_TILE_TYPE_DEFAULT				= MAFEXT_TILE_TYPE_TILE
} MAFEXT_TILE_TYPES;

/**
  * The base tile descriptor defines a tile or an embedded ui control of a tile
  */
@interface MAFTileDescriptorBase : NSObject {
	MAFEXT_TILE_TYPES				m_Type;
	NSString*						m_TileID;
	NSMutableDictionary*			m_Events;				/** dictionary<EventID, array<ActionDescriptor*> > */
	NSMutableDictionary*			m_Parameters;			/** free-text parameters, dictionary<ParameterID, Object> */
	MAFAppearanceDescriptor*		m_AppearanceDescriptor; /** describes the visuals of the tile */
	NSMutableArray*					m_Bindings;				/** data binding references used by the tile */
    NSString*                       m_Style;
	BOOL							m_IsGeneratedId;
    MAFExpression*					m_AccessibilityLabel;
    MAFExpression*					m_AccessibilityHint;
}

@property (nonatomic, assign, readonly) MAFEXT_TILE_TYPES	type;					/** type id of the tile */
@property (nonatomic, retain) MAFAppearanceDescriptor*		appearanceDescriptor;	/** describes the visuals of the tile */
@property (nonatomic, retain, readonly) NSString*			tileId;					/** textual id of the tile (from configuration) */
@property (nonatomic, assign) uint8_t						flags;					/** helper property for the parser only */

@property (nonatomic, retain, readonly) NSArray*			bindings;				/** data binding references (MAFBindingReferenceInfo instances) used by the tile */
@property (nonatomic, retain) NSString*						style;					/** style name identifying the visual style to be applied on the tile */
@property (nonatomic, retain, readonly) NSDictionary*		events;					/** contains the event descriptors of the handled events */

@property (nonatomic, assign, readonly) BOOL				isGeneratedId;			/** YES, when no tile id was defined for the tile */

@property (nonatomic, retain) MAFExpression*				accessibility_Label;
@property (nonatomic, retain) MAFExpression*				accessibility_Hint;

@property (nonatomic, retain, readonly) NSDictionary*		parameters;				/** parameters defined for the tile in the configuration dictionary<param_id, object> */

@property (nonatomic, assign) BOOL							isOrientationDependent;

-(instancetype) initWithTileType:(const MAFEXT_TILE_TYPES)nTileType andId:(NSString*)tileId;

/**
  * Adds a new action for an event. If the event is not yet handled, the method creates the event handler first.
  * @param action: the action descriptor to be added
  * @param eventId: the id of the known event by the framework for which the action descriptor is to be added
  */
-(void) addAction:(MAFActionDescriptor*)action forEvent:(const MAFEXT_EVENT_IDS)eventId;

/**
  * Checks whether an event is handled by the tile instance or not
  * @param eventID: the event id to be tested
  */
-(BOOL) isEventHandled:(const MAFEXT_EVENT_IDS)eventID;

/**
  * @return Returns an array of actions defined for an event or nil, if the event is not handled.
  * @param eventId: the event for which its actions should be returned
  */
-(NSArray*) actionsForEvent:(const MAFEXT_EVENT_IDS)eventId;

/**
 * Adds a binding reference to the tile.
 * @param bindingId: the binding reference to be added to the tile
 */
-(void) addBindingReference:(MAFBindingReferenceInfo*)bindingId;

/**
 * Adds a free text parameter.
 * @param parameter: the parameter instance to be added
 * @param parameterId: the parameter is added to the parameter collection with this id
 */
-(void) addParameter:(MAFParameter*)parameter withId:(NSString*)parameterId;


@end

//******TileDescriptor Tile******//
/**
  * Layout descriptor
  */
typedef enum MAFEXT_TILE_LAYOUT_TYPES {
	MAFEXT_TILE_LAYOUT_TYPE_LAYOUT				= 0,	/**< a layout with ui elements and optionally with tile references */
	MAFEXT_TILE_LAYOUT_TYPE_COMPOSITE_LAYOUT	= 1		/**< a layout that contains only references to other tiles. The layout must define if it is a navigation bar or tab bar */
} MAFEXT_TILE_LAYOUT_TYPES;

/**
 * Composite layout styles
 */
typedef enum MAFEXT_TILE_COMPOSITELAYOUT_STYLES {
	MAFEXT_TILE_COMPOSITELAYOUT_STYLE_TAB		= 1,
	MAFEXT_TILE_COMPOSITELAYOUT_STYLE_NAV		= 2,
	MAFEXT_TILE_COMPOSITELAYOUT_STYLE_SPLIT		= 3
} MAFEXT_TILE_COMPOSITELAYOUT_STYLES;

/**
 * Container tile layout types, used by for example the LinearContainer tile to layout
 * its child tiles horizontally (next to each other) or vertically (below each other).
 */
typedef enum MAFEXT_CONTAINER_LAYOUT_TYPES {
	MAFEXT_CONTAINER_LAYOUT_TYPE_HORIZONTAL     = 1,
	MAFEXT_CONTAINER_LAYOUT_TYPE_VERTICAL       = 2
} MAFEXT_CONTAINER_LAYOUT_TYPES;

/**
  * Tile container types
  */
typedef enum MAFEXT_TILE_CONTAINER_TYPES {
	MAFEXT_TILE_CONTAINER_TYPE_TAB		= 1,
	MAFEXT_TILE_CONTAINER_TYPE_NAV		= 2,
	MAFEXT_TILE_CONTAINER_TYPE_SPLIT	= 3
} MAFEXT_TILE_CONTAINER_TYPES;

/**
  * Describes a screen with ui elements or defines a navigation pattern.
  */
@interface MAFTileDescriptorTile : MAFTileDescriptorBase<MAFSubTileContainer, MAFTileDescriptorWithImageSrc> {
    NSMutableArray*             m_SubTiles;
	MAFActionPanelDescriptor*	m_ActionPanel;
	MAFToolbarDescriptor*		m_Toolbar;
    MAFExpression*              m_Title;
    MAFExpression*              m_ImageSrc;
	MAFExpression*				m_IsRootTile;		/**< if the expression exists and returns YES that means that the tile is the very first tile that should appear when the application starts */
	MAFExpression*				m_ShouldWaitForContext;
}

@property (nonatomic, retain) MAFActionPanelDescriptor* actionPanel;			/**< a screen can have an actionPanel (navigation bar) */
@property (nonatomic, retain) MAFToolbarDescriptor*		toolbar;				/**< a screen can also have a toolbar */
@property (nonatomic, retain) MAFExpression*			title;					/**< If the expression exists it is evaluated and the result is converted to string (if it was not a string). The string is displayed on the action panel (navigation bar) as a title, if available. */
@property (nonatomic, retain) MAFExpression*			isRootTile;				/**< if the expression exists and returns YES that means that the tile is the very first tile that should appear when the application starts */
@property (nonatomic, retain, readonly) NSArray*		subTiles;				/**< child tiles of the tile */
@property (nonatomic, retain) MAFExpression*			shouldWaitForContext;	/**< if the expression exists and returns YES that means the tile cannot be shown until the data arrives */


-(instancetype) initWithId:(NSString*)nTileId;

/**
 * Adds a tile reference to the container. An exception is thrown if the type of the passed tile is not ..._LINEAR_CONTAINER or LIST_CONTAINER.
 * @param subTile: the tile or UI element instance to be added as a sub tile
 */
-(void) addSubTile:(const MAFTileDescriptorBase*)subTile;

/**
 * Removes a tile descriptor by id from this tile/container. Nothing happens if the tile/uielement/container with the id does not exist.
 * @param tileId: the tile identifier that identifies the tile to be removed as a subtile from the tile
 */
-(void) removeSubTileById:(NSString*)tileId;

@end

/**
 * Describes a tile container
 */
@interface MAFTileDescriptorTileContainer : MAFTileDescriptorTile {
	MAFEXT_TILE_CONTAINER_TYPES		m_ContainerType;
    NSString*                       m_ToolbarStyle;
    NSString*                       m_NavBarStyle;
    NSString*                       m_TabBarStyle;
}

@property (nonatomic, assign, readonly) MAFEXT_TILE_CONTAINER_TYPES containerType; /**< returns whether the tile is a navigation, tab or split view*/
@property (nonatomic, retain) NSString* toolbarStyle;
@property (nonatomic, retain) NSString* navBarStyle;
@property (nonatomic, retain) NSString* tabBarStyle;

-(instancetype) initWithId:(NSString*)nTileId andContainerType:(const MAFEXT_TILE_CONTAINER_TYPES)nContainerType;

/**
 * Adds a tile reference to the container. An exception is thrwon if the type of the passed tile is not ..._TILE_REFERENCE.
 * @param tile: the tile or UI element instance to be added 
 */
-(void) addSubTile:(MAFTileDescriptorBase*)tile;

@end


/**
  * Describes a tile that can contain other tiles (including UI elements)
  */
@interface MAFTileDescriptorLinearContainer : MAFTileDescriptorBase<MAFSubTileContainer, MAFTileDescriptorWithImageSrc> {
	NSMutableArray*						m_SubTiles;		/**< Contains UI elements, tile references or linear containers by order */
	NSMutableDictionary*				m_SubTilesById;	/**< Contains UI elements, tile references or linear containers by tile ids */
	MAFEXT_CONTAINER_LAYOUT_TYPES       m_Layout;		/**< Defines the way of arranging sub elements (horizontal = next to each other, vertical = after each other) */
    int									m_orientation;	/**< Defines the mask of device orientations in which orientation the linear container must be shown. It can be the combination of the values of the MAFEXT_ORIENTATION_TYPES enum type.  */
    MAFExpression*						m_ImageSrc;
}

@property (nonatomic, retain, readonly) NSArray*			subTiles;		/**< Contains UI elements, tile references or linear containers by order */
@property (nonatomic, retain, readonly) NSDictionary*		subTilesById;	/**< Contains UI elements, tile references or linear containers by tile ids */
@property (nonatomic, assign) MAFEXT_CONTAINER_LAYOUT_TYPES layout;			/**< Defines the way of arranging sub elements (horizontal = next to each other, vertical = after each other) */
@property (nonatomic, assign) int							orientation;	/**< Defines the mask of device orientations in which orientation the linear container must be shown. It can be the combination of the values of the MAFEXT_ORIENTATION_TYPES enum type.  */

/**
 * Set whether show the overflow indication, if more subview is available
 */
@property (nonatomic, assign) BOOL shouldShowContentWidthOverflowIndicator;

-(instancetype) initWithId:(NSString*)nTileId andLayout:(MAFEXT_CONTAINER_LAYOUT_TYPES)layout_in andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

/**
  * Adds a tile descriptor to the container. An exception is thrown if the type of the tile descriptor is ...TYPE_TILE.
  * @param tile is the new tile or UI element to be added as a subtile to the container.
  */
-(void) addSubTile:(MAFTileDescriptorBase*)tile;

/**
  * Removes a tile descriptor by id from this tile/container. Nothing happens if the tile/uielement/container with the id does not exist.
  * @param tileId: the tile identifier of the tile to be removed
  */
-(void) removeSubTileById:(NSString*)tileId;

/**
 * @return YES if the linear container should be displayed for the passed orientation
 * @param orientationToCheck is the orientation to test for the linear container
 */
-(BOOL) isOrientationSupported:(const MAFEXT_ORIENTATION_TYPES)orientationToCheck;

@end

/**
  * Describes a generic UIElement tile
  */
@interface MAFTileDescriptorUIElementBase : MAFTileDescriptorBase <MAFTileDescriptorWithImageSrc> {
	MAFExpression*              m_Value;
    MAFExpression*              m_ImageSrc;
    MAFFormatDescriptor*        m_Formatter;
    int							m_orientation;
}

@property (nonatomic, retain) MAFExpression*			value;			/**< if defined the result of the expression is converted to string and is used as the content of the given UI element. For example a label would display it as a read-only text. */
@property (nonatomic, retain) MAFFormatDescriptor*		formatter;		/**< formatting rule to format the stored data in the 'value' property */
@property (nonatomic, assign) int						orientation;	/**< Defines the mask of device orientations in which orientation the list container must be shown. It can be the combination of the values of the MAFEXT_ORIENTATION_TYPES enum type. */
@property (nonatomic, assign) BOOL						isURL;			/**< if YES, the value is displayed as an URL */

/**
  * Creates a new UI element descriptor. 
  * If @param nTileType is MAFEXT_TILE_TYPE_TILE the ui element descriptor is not created and the return value is nil.
  */
-(instancetype) initWithTileType:(const MAFEXT_TILE_TYPES)nTileType andId:(NSString*)tileId andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

/**
 * @return YES if the UI element should be displayed for the passed orientation
 * @param orientationToCheck is the orientation to test for the UI element
 */
-(BOOL) isOrientationSupported:(const MAFEXT_ORIENTATION_TYPES)orientationToCheck;

@end

/**
  * Describes a custom ui element
  */
@interface MAFTileDescriptorUIElementCustom : MAFTileDescriptorUIElementBase {
	NSString*		m_CustomTypeName;
}

@property (nonatomic, retain) NSString*		customTypeName; /**< the custom type name, copied from the 'type' attribute of the UIElement tag */

-(instancetype) initWithId:(NSString*)tileId andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

@end

/**
 * Describes a switch element
 */
@interface MAFTileDescriptorUIElementSwitch : MAFTileDescriptorUIElementBase {
	MAFExpression*		m_IsOn;
}

@property (nonatomic, retain) MAFExpression*		isOn; /**< the isOn parameter contains the initial value for the switch */

-(instancetype) initWithId:(NSString*)tileId andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

@end

// List classes 

/**
 * Action indicators that are displayed in a list item
 */
typedef enum MAFEXT_LIST_ITEM_ACTION_INDICATORS {
	MAFEXT_LIST_ITEM_ACTION_INDICATOR_UNDEFINED		= 0,
	MAFEXT_LIST_ITEM_ACTION_INDICATOR_ARROW			= 1,
	MAFEXT_LIST_ITEM_ACTION_INDICATOR_BUTTON		= 2,
	MAFEXT_LIST_ITEM_ACTION_INDICATOR_CHECKMARK		= 3
} MAFEXT_LIST_ITEM_ACTION_INDICATORS;

/**
  * Describes a list item or a list item template. The list item is a template if its "feed" property is not nil.
  */
@interface MAFTileDescriptorListItem : MAFTileDescriptorLinearContainer {
	MAFEXT_LIST_ITEM_ACTION_INDICATORS	m_ActionIndicator;
	NSString*							m_Feed;
    MAFExpression*						m_IsSelected;
}

@property (nonatomic, assign) MAFEXT_LIST_ITEM_ACTION_INDICATORS actionIndicator;	/**< action indicator to be shown on the right side of the cell */
@property (nonatomic, retain) NSString*							 feed;				/**< If defined it refers to a BO collection. In this case the list item becomes a template that describes how a BO should be represented in a list item. */
@property (nonatomic, retain) MAFExpression*					 isSelected;		/**< If exists and returns YES then the list item is selected and it is highlighted in the list container */

-(instancetype) initWithId:(NSString*)nTileId;

@end


/**
  * Describes a list section bar that can appear in list containers. 
  * The section bar can contain linear containers or UI elements, but not a list container.
  */
@interface MAFTileDescriptorListSectionBar : MAFTileDescriptorLinearContainer {
}

-(instancetype) initWithId:(NSString*)nTileId;

@end

/**
  * Describes a list section
  */
@interface MAFTileDescriptorListSection : MAFTileDescriptorBase {
	MAFTileDescriptorListSectionBar*	m_SectionHeader; /**< header to be shown before the cells of the given section, if exists */
	MAFTileDescriptorListSectionBar*	m_SectionFooter; /**< footer to be shown after the cells of the given section, if exists */
	NSMutableArray*						m_Items;		 /**< contains the list items or a list item template */
	NSString*							m_GroupBy;		 /**< the items are grouped by the BO field pointed by this string */
}

@property (nonatomic, retain) MAFTileDescriptorLinearContainer* sectionHeader;	/**< header to be shown before the cells of the given section, if exists */
@property (nonatomic, retain) MAFTileDescriptorLinearContainer* sectionFooter;	/**< footer to be shown after the cells of the given section, if exists */
@property (nonatomic, retain, readonly) NSArray*				items;			/**< contains the list items or a list item template */
@property (nonatomic, retain) NSString*							groupBy;		/**< the items are grouped by the BO field pointed by this string */

-(instancetype) initWithId:(NSString*)nTileId;

/**
  * Adds a new list item to the section.
  * @return Returns YES, if the listitem is added successfuly and NO otherwise.
  * @param listItem: the list item or item template instance to be added to the section
  */
-(BOOL) addListItem:(MAFTileDescriptorListItem*)listItem;

@end

/**
  * Describes a list with sections and their items, headers and footers
  */
@interface MAFTileDescriptorListContainer : MAFTileDescriptorBase <MAFTileDescriptorWithImageSrc> {
	NSMutableArray*             m_Sections;		/**< contains the list sections (MAFTileDescriptorListSection instances) */
	NSMutableDictionary*        m_SectionsById;
	BOOL                        m_IsGrouped;
    int							m_Orientation;
    MAFExpression*              m_ImageSrc;
}

@property (nonatomic, retain, readonly) NSArray*	sections;		/**< contains the list section(s) of the list container */
@property (nonatomic, assign) BOOL					isGrouped;		/**< YES, if the list items should be grouped by sections */
@property (nonatomic, assign) int					orientation;	/**< Defines the mask of device orientations in which orientation the list container must be shown. It can be the combination of the values of the MAFEXT_ORIENTATION_TYPES enum type. */
@property (nonatomic, retain) MAFExpression*        imageSrc;

-(instancetype) initWithId:(NSString*)nTileId andOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in;

/**
  * Adds a new section to the list container.
  * @return Returns YES if the section was added successfuly to the list container.
  */
-(BOOL) addSection:(MAFTileDescriptorListSection*)section;

/**
 * @return YES if the list container should be displayed for the passed orientation
 * @param orientationToCheck is the orientation to test for the list container
 */
-(BOOL) isOrientationSupported:(const MAFEXT_ORIENTATION_TYPES)orientationToCheck;

@end

/**
  * Describes a tile reference. Tile references are used to embed another tile (screen) into the current tile or container.
  */
@interface MAFTileDescriptorTileRef : MAFTileDescriptorBase {
    BOOL               m_IsInitial;
	NSString*		   m_RefId;
}

@property (nonatomic, assign) BOOL		isInitial;	/**< this tile is shown first if 'isInitial' is set to YES and if the tile is embedded in a tab or nav based tile */
@property (nonatomic, retain) NSString* refId;		/**< tile id reference */

-(instancetype) initWithId:(NSString*)nTileId;

@end


//******Tile descriptor factory>>
/**
  * Creates a tile based on the given tile type. The caller is responsible for releasing the object.
  */
extern MAFTileDescriptorBase* mafCreateTileDescriptor(const MAFEXT_TILE_TYPES tileType, NSString* tileId, MAFEXT_ORIENTATION_TYPES orientation);

