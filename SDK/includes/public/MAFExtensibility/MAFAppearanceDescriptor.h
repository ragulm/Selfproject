//
//  MAFAppearanceDescriptor.h
//  MAFConfigurationComponent
//
//  Created on 07/19/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 * Supported size types
 */
typedef enum MAFEXT_APPEARANCE_SIZE_TYPES {
	MAFEXT_APPEARANCE_SIZE_TYPE_PERCENTAGE			= 0, /// default
	MAFEXT_APPEARANCE_SIZE_TYPE_POINT				= 1,
    MAFEXT_APPEARANCE_SIZE_TYPE_FLEXIBLE            = 2,
    MAFEXT_APPEARANCE_SIZE_TYPE_AUTO                = 4,
} MAFEXT_APPEARANCE_SIZE_TYPES;

/**
 * Supported vertical content alignment modes
 */
typedef enum MAFEXT_APPEARANCE_VALIGNMENT_TYPES {
	MAFEXT_APPEARANCE_VALIGNMENT_TYPE_TOP			= 0, /// default
	MAFEXT_APPEARANCE_VALIGNMENT_TYPE_CENTER		= 1,
    MAFEXT_APPEARANCE_VALIGNMENT_TYPE_BOTTOM		= 2,
} MAFEXT_APPEARANCE_VALIGNMENT_TYPES;

/**
 * Supported horizontal content alignment modes
 */
typedef enum MAFEXT_APPEARANCE_HALIGNMENT_TYPES {
	MAFEXT_APPEARANCE_HALIGNMENT_TYPE_LEFT			= 0, /// default
	MAFEXT_APPEARANCE_HALIGNMENT_TYPE_CENTER		= 1,
    MAFEXT_APPEARANCE_HALIGNMENT_TYPE_RIGHT			= 2,    
} MAFEXT_APPEARANCE_HALIGNMENT_TYPES;

/**
 * Field ids to identify used properties of the appearance descriptor.
 */
typedef enum MAFEXT_APPEARANCE_FLAGS {
	MAFEXT_APPEARANCE_FLAG_NONE						= 0x00,
	MAFEXT_APPEARANCE_FLAG_WIDTH					= 0x01,
	MAFEXT_APPEARANCE_FLAG_HEIGHT					= 0x02,
	MAFEXT_APPEARANCE_FLAG_LAYOUT					= 0x04,
	MAFEXT_APPEARANCE_FLAG_PADDING					= 0x08,
	MAFEXT_APPEARANCE_FLAG_ALIGNMENT				= 0x10,
    MAFEXT_APPEARANCE_FLAG_LISTCONTAINER_STYLE		= 0x20,
	MAFEXT_APPEARANCE_FLAG_CONTROLLER_VISIBILITY	= 0x40,
	MAFEXT_APPEARANCE_FLAG_TEXT_WRAPPING			= 0x80,
	MAFEXT_APPEARANCE_FLAG_MARGIN					= 0x100
} MAFEXT_APPEARANCE_FLAGS;

/**
 * Supported layout alignments for LinearContainer
 */
typedef enum MAFEXT_APPEARANCE_LAYOUTS {
	MAFEXT_APPEARANCE_LAYOUT_UNDEFINED			= 0,
	MAFEXT_APPEARANCE_LAYOUT_HORIZONTAL         = 1,
	MAFEXT_APPEARANCE_LAYOUT_VERTICAL			= 2
} MAFEXT_APPEARANCE_LAYOUTS;

/**
 * Controller visibility ids
 */
typedef enum MAFEXT_APPEARANCE_CONTROLLER_VISIBILITIES {
	MAFEXT_APPEARANCE_CONTROLLER_VISIBILITY_NAVIGATION_BAR_HIDDEN	= 0x01, /** if bit set at this position the navigation bar is hidden (valid for navigation based apps only) */
	MAFEXT_APPEARANCE_CONTROLLER_VISIBILITY_TAB_BAR_HIDDEN			= 0x02
} MAFEXT_APPEARANCE_CONTROLLER_VISIBILITIES;

struct MAFExtBox {
	float	left;
	float	right;
	float	top;
	float	bottom;
};

@class MAFExpression;
/**
 * The appearance descriptor contains the visual information of a tile such as size, paddings and so on.
 */
@interface MAFAppearanceDescriptor : NSObject<NSCoding> 

@property (nonatomic, assign) uint16_t flags;		/**< Combination of the MAFEXT_APPEARANCE_FLAGS values to identify the used properties of this class */
@property (nonatomic, assign) uint8_t alignment;	/**< Packed horizontal and vertical alignment info for the UI element */
@property (nonatomic, assign) CGSize size;			/**< The size information is stored in property 'size' for the UI element if defined in the config */
@property (nonatomic, assign) struct MAFExtBox padding DEPRECATED_ATTRIBUTE;/**< left here for compatibility reasons only, use margin instead */
@property (nonatomic, assign) struct MAFExtBox margin;						/**< padding replacement */
@property (nonatomic, assign) BOOL isAbsoluteHeightSpecified;				/**< do not use: helper variable for the UI component for size calculation */
@property (nonatomic, retain) MAFExpression* isVisible;						/**< nil means that the ui element is visible, otherwise evaluate! */
@property (nonatomic, retain) MAFExpression* isScrollable;					/**< nil means the UI element content is not scrollable, otherwise evaluate and check the return value. */
@property (nonatomic, retain) MAFExpression* shouldHideNavigationBar;		/**< nil means that the navigation bar is visible, otherwise evaluate and check the return value. */
@property (nonatomic, assign) uint8_t marginControl;						/**< temporary helper while parsing; only for the parser! */

-(instancetype) init;

-(void) setPaddingType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingLeftType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingRightType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingTopType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingBottomType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingHorizontalType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;
-(void) setPaddingVerticalType:(MAFEXT_APPEARANCE_SIZE_TYPES)ptype DEPRECATED_ATTRIBUTE;

-(MAFEXT_APPEARANCE_SIZE_TYPES) paddingLeftType DEPRECATED_ATTRIBUTE;
-(MAFEXT_APPEARANCE_SIZE_TYPES) paddingRightType DEPRECATED_ATTRIBUTE;
-(MAFEXT_APPEARANCE_SIZE_TYPES) paddingTopType DEPRECATED_ATTRIBUTE;
-(MAFEXT_APPEARANCE_SIZE_TYPES) paddingBottomType DEPRECATED_ATTRIBUTE;


/**
 * Sets the size type (point, pixel or flexible) for all margins (left, top, right, bottom).
 * @param mtype: margin type (see MAFEXT_APPEARANCE_SIZE_TYPES for possible values).
 */
-(void) setMarginType:(MAFEXT_APPEARANCE_SIZE_TYPES)mtype;
/**
 * Sets the size type (point, pixel or flexible) for left and right margins.
 * @param mtype: margin type (see MAFEXT_APPEARANCE_SIZE_TYPES for possible values).
 */
-(void) setMarginHorizontalType:(MAFEXT_APPEARANCE_SIZE_TYPES)mtype;
/**
 * Sets the size type (point, pixel or flexible) for top and bottom margins.
 * @param mtype: margin type (see MAFEXT_APPEARANCE_SIZE_TYPES for possible values).
 */
-(void) setMarginVerticalType:(MAFEXT_APPEARANCE_SIZE_TYPES)mtype;

/**
 * @return The left margin size type (pixel, point or flexible)
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES marginLeftType;
/**
 * @return The right margin size type (pixel, point or flexible)
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES marginRightType;
/**
 * @return The top margin size type (pixel, point or flexible)
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES marginTopType;
/**
 * @return The bottom margin size type (pixel, point or flexible)
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES marginBottomType;

/**
 *	@return The horizontal content alignment (left, center or right) of the UI element the appearance descriptor belongs to.
 */
@property (nonatomic, readonly) MAFEXT_APPEARANCE_HALIGNMENT_TYPES hAlignment;
/**
 *	@return The vertical content alignment (top, center or bottom) of the UI element the appearance descriptor belongs to.
 */
@property (nonatomic, readonly) MAFEXT_APPEARANCE_VALIGNMENT_TYPES vAlignment;

/**
 * Sets the size type (point, pixel or flexible) of the UI element's width.
 * @param sType (see MAFEXT_APPEARANCE_SIZE_TYPES for possible values).
 */
/**
 * Sets the size type (point, pixel or flexible) of the UI element's height.
 * @param sType (see MAFEXT_APPEARANCE_SIZE_TYPES for possible values).
 */
/**
 * @return The size type (point, pixel or flexible) of the UI element's width.
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES widthSizeType;
/**
 * @return The size type (point, pixel or flexible) of the UI element's width.
 */
@property (nonatomic) MAFEXT_APPEARANCE_SIZE_TYPES heightSizeType;
/**
 * @return The UI element's text wrapping mode.
 */
@property (nonatomic, readonly) NSLineBreakMode textWrappingMode;

@end