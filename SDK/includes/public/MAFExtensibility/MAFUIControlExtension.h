//
//  MAFUIControlExtension.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 1/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFTileDescriptors.h"

#pragma mark -
#pragma mark UIControl Extension
@interface UIControl(MAFExtExtension)

/**
 * Identifier of the UIControl
 */
@property (nonatomic, retain) NSString* identifier;

/**
 * Identifier of the Tile, which the framework will navigate to as a default action
 * (currently not used)
 */
@property (nonatomic, retain) NSString* navigationTargetIdentifier;

/**
 * Delegate for the uiControl
 */
@property (nonatomic, assign) id delegate;

/**
 * MAF type ofthe control
 */
//@property (nonatomic, assign) MAFEXT_CONTROL_TYPES type;

/**
 * Initializes the UIControl with the given identifier
 * @param id_in identifier of the UIControl
 * @return initialized UIControl
 */
-(UIControl*) initWithIdentifier:(NSString*)id_in;

@end

#pragma mark -
#pragma mark UIBarButtonItem Extension

@interface UIBarButtonItem(MAFExtensibilityUIBarButtonExtensions)

/**
 * Actions to be performed, when the BarButton is clicked
 * @discussion not needed to call outSide of MAFExtensibility
 */
@property (nonatomic, retain) NSArray* mafExtActions;

/**
 * SplitViewController assigned to the Button
 */
@property (nonatomic, assign) UISplitViewController* splitViewController;

@end

#pragma mark -
#pragma mark UITextField Extension

@interface UITextField(MAFExtensibilityUITextFieldExtension)

/**
 * Identifier of the TextField
 */
@property (nonatomic, retain) NSString* textFieldID;

@end

#pragma mark UIButton extension

@interface UIButton(MAFExtensibilityUIButtonExtension)

/**
 * The TitleLabel's copy to avoid unnecessary layoutSubviews
 */
@property (nonatomic, retain) UILabel* buttonLabel;

@end
