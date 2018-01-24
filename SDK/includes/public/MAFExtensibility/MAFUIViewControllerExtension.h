//
//  MAFUIViewControllerExtension.h
//  MAFExtensibility
//
//  Created by Egresits Dávid on 1/23/12.
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "MAFTileDescriptor.h"

@class MAFTileController;

@interface UIViewController(MAFExtExtension)

/**
 * Identifier of the ViewController
 */
@property (nonatomic, retain) NSString* identifier;

/**
 * This flag indicate whether the ViewController is dismissed
 */
@property (nonatomic, assign) BOOL isDismissed;

/**
 * Performs pre-configured or custom actions as a response to the touch up event on the given control
 * @param sender the UIControl, which's actions will be performed
 */
-(void) performClickActions:(id)sender;

/**
 * Performs pre-configured or custom actions as a response to the long touch event on the given control
 * @param sender the UIControl, which's actions will be performed
 */
- (void)performLongPressActions:(UILongPressGestureRecognizer*)sender;

/**
 * This flag shows whether this viewController is presented in a popover
 */
@property (assign, nonatomic) BOOL isPresentedInPopover;

/**
 * The viewController from which it is presented as popover
 */
@property (nonatomic, assign) UIViewController* presentedFromViewControllerAsPopover;

@end
