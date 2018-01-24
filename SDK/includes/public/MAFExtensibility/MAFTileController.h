//
//  MAFTileController.h
//  MAFExtensibility
//
//  Created by Peter Nagy on 3/1/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MAFTileViewControllerDelegate.h"
#import "MAFTileDataSourceDelegate.h"
#import "MAFTile.h"

@class MAFTileListContainerDescriptor;
@class MAFTileListContainerSectionDescriptor;
@class MAFContext;
@class MAFTileListContainerItemDescriptor;
@class MAFActionDescriptor;
@class MAFUIDatePicker;

/**
 * Removed from public interface in MAF 1.1, private since MAF 1.2! Exposes the base tile controller class APIs
 * @remark Before MAF 1.1 you could add custom controller logic by inheriting from MAFTileController.
 * With MAF 1.1 we introduced new delegate classes which provide more flexibility
 * @see MAFTileDataSourceDelegate, MAFTileActionHandlerDelegate
 */
@interface MAFTileController : NSObject <MAFTileDataSourceDelegate, MAFTileViewControllerDelegate> 

/**
 * Context for the Tile whcih contains the bindings
 */
@property (nonatomic, retain) MAFContext* context;

/**
 * Indicates whether a Loading progress indicator should be presented and UI should not be refreshed after rotation
 */
@property (nonatomic, assign, readonly) BOOL shouldPresentLoading;

#pragma mark - MAFTileDataSourceDelegate methods

//See in MAFTileDataSourceDelegate.h

#pragma mark - MAFTileViewControllerDelegate methods

//See in MAFTileViewControllerDelegate.h

#pragma mark - Context passing

/**
 * Clears the current context and starts loading a new one
 * @param tile_in is the Tile which will be notified when context loading finishes
 */
- (void) loadNewContextForMAFTile:(MAFTile*)tile_in;


#pragma mark - DatePicker value changed event

/** 
 * Handles value changed event of a DatePicker UIViewController, and sets the new value in the BO.
 * @param changedDatePicker_in is the datePicker, which's value has been changed
 */
- (void)handleDatePickerValueChanged:(MAFUIDatePicker*)changedDatePicker_in;

/**
 * Private
 * @see MAFTileActionHandlerDelegate
 */
- (void) processFurtherActions;

/**
 * Private
 * @see MAFTileActionHandlerDelegate
 */
- (void) deleteFurtherActionsFromQueue;

@end
