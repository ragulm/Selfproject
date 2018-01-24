//
//  UIViewExtension.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 1/20/12.
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFTile.h"

@class MAFTileDescriptors;

@interface MAFLayoutConstraintWithRelatedView : NSObject {
    NSLayoutConstraint* m_Constraint;
}

@property (nonatomic, retain) NSLayoutConstraint* constraint;
@property (nonatomic, assign) UIView* relatedView;

@end

@interface UIView (MAFExtExtension)

@property(nonatomic, retain) NSString* identifier;

/**
 *  TileDescriptor of the view
 */
@property(nonatomic, retain) MAFTileDescriptorBase* tileDescriptor;

/**
 * Array of the viewControllers of the subviews 
 * @discussion Don't need to call from outside of MAFExtensibility
 */
@property (nonatomic, retain) NSMutableArray* subViewControllers;

/**
 * mainTile is the Tile which contains the current view
 * @discussion Don't need to call from outside of MAFExtensibility
 */
@property (nonatomic, assign) MAFTile* mainTile;

/**
 * ApperanceDecriptor to override the original on one in case of Tileref
 */
@property (nonatomic, retain) MAFAppearanceDescriptor* appearanceDescriptorTileRef;

/**
 * Variables for calculated paddings
 * @discussion Don't need to call from outside of MAFExtensibility
 */
@property (nonatomic, retain) NSNumber* calculatedPaddingLeft;
@property (nonatomic, retain) NSNumber* calculatedPaddingRight;
@property (nonatomic, retain) NSNumber* calculatedPaddingTop;
@property (nonatomic, retain) NSNumber* calculatedPaddingBottom;

/**
 * Variables for calculated margins
 * @discussion Don't need to call from outside of MAFExtensibility
 */
@property (nonatomic, retain) NSNumber* calculatedMarginLeft;
@property (nonatomic, retain) NSNumber* calculatedMarginRight;
@property (nonatomic, retain) NSNumber* calculatedMarginTop;
@property (nonatomic, retain) NSNumber* calculatedMarginBottom;

/**
 * Variables for padding calculation
 * @discussion Don't need to call from outside of MAFExtensibility
 */
@property (nonatomic, assign, getter = isHeightCalculated) BOOL heightCalculated;
@property (nonatomic, assign, getter = isWidthCalculated) BOOL widthCalculated;

/**
 * Variables for margin Constraints
 */
@property (nonatomic, retain) MAFLayoutConstraintWithRelatedView* leftMarginConstraint;
@property (nonatomic, retain) MAFLayoutConstraintWithRelatedView* rightMarginConstraint;
@property (nonatomic, retain) MAFLayoutConstraintWithRelatedView* topMarginConstraint;
@property (nonatomic, retain) MAFLayoutConstraintWithRelatedView* bottomMarginConstraint;
@property (nonatomic, retain) NSLayoutConstraint* heightConstraint;
@property (nonatomic, retain) NSLayoutConstraint* cellRightMarginConstraint;

/**
 * Initializes an UIView with identifier
 * @param id_in Identifier of the UIElement
 * @discussion Don't need to call from outside of MAFExtensibility
 */
- (UIView*) initWithIdentifier:(NSString*) id_in;

/**
 * This method adds a subview to the current view and holds a reference to the viewController so it will not be autoreleased
 * @param controller_in the viewController added to the current view as view with controller
 * @discussion Don't need to call from outside of MAFExtensibility
 */
-(void) addSubViewWithController:(UIViewController*)controller_in;


@end
