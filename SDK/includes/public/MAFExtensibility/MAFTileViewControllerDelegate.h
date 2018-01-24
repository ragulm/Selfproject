//
//  MAFTileViewControllerDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 4/25/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFTileDescriptors.h"
#import "MAFContext.h"

@class MAFTile;

/**
 * DEPRECATED! Exposes some base tile controller class APIs, mainly intended to perform default actions
 * @remark Before MAF 1.1 you could add custom controller logic by inheriting from MAFTileViewControllerDelegate.
 * With MAF 1.1 we introduced new delegate classes which provide more flexibility
 * @see MAFTileActionHandlerDelegate, MAFUIElementCreatorDelegate
 */
@protocol MAFTileViewControllerDelegate <NSObject>

#pragma mark - Perform action

/**
 * Deprecated. Register a MAFTileActionHandlerDelegate instead
 * Responsible for navigation, modal presentation
 * @param actionDescriptor is the descriptor object for the action
 * @param tile_in the action's target
 * @param sourceUIElement_in UIPopoverViewController specific; represents the UIElement which will be assigned to a UIPopoverViewController. If the action is not bound to a UIPopoverController this parameter can be nil.
 * @param context_in is the context to erform the Action (can be be nil)
 * @see MAFTileActionHandlerDelegate
 */
- (void) performAction:(MAFActionDescriptor*)actionDescriptor onTile:(MAFTile*)tile_in fromUIElement:(UIView*)sourceUIElement_in withBOs:(MAFContext*)context_in DEPRECATED_ATTRIBUTE;

- (void)performActions:(NSArray *)actionDescriptors onTile:(MAFTile *)tile_in fromUIElement:(UIView *)sourceUIElement_in withContext:(MAFContext *)context_in DEPRECATED_ATTRIBUTE;

/**
 * Creates a custom UIView identified by its ID
 * @param id_in identifier of the custom UIElement
 * @param tileDescriptor_in tileDescriptor of the custom UIElement
 * @param context_in current data context
 * @return created UIView
 * @discussion Deprecated in 1.1. Use willCreateUIElementWithId:listItemIndex:tileDescriptor:context: instead in MAFUIElementCreatorDelegate.
 */
- (UIView*)createCustomViewForID:(NSString*)id_in andTileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in andContext:(MAFContext*)context_in DEPRECATED_ATTRIBUTE;

/**
 * Creates a custom UIViewController for the given ID
 * @param id_in identifier of the custom UIElement
 * @param tileDescriptor_in tileDescriptor of the custom UIElement
 * @param context_in current data context
 * @return created UIViewController
 * @discussion Deprecated in 1.1. Use willCreateViewControlerWithUIElementId:listItemIndex:tileDescriptor:context: instead in MAFUIElementCreatorDelegate.
 */
- (UIViewController*)createCustomViewControllerForID:(NSString*)id_in andTileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in andContext:(MAFContext*)context_in DEPRECATED_ATTRIBUTE;

/**
 * Returns the tile's subview identified by its key
 * @param key_in key of the UI element; it is not a unique identifier, multiple ui elements can be created for a given key (see ListItemTemplate)
 * @return valid UIElement or nil if none found for the given key
 * @discussion In case there are multiple ui elements created for the same key, the last created one is returned (in case of ListItemTemplates too)
 * @discussion Deprecated in 1.1. Moved to MAFTile.
 */
- (UIView*) uiElementForKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;

/**
 * Returns the subviews of the tile identified by the given key
 * @param key_in key of the UI element; it is not a unique identifier, multiple ui elements can be created for a given key (see ListItemTemplate)
 * @return an array of UIElements for the same key
 * @discussion Deprecated in 1.1. Moved to MAFTile.
 */
- (NSArray*) uiElementsForKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;

/**
 * Invoked on the client before a ui element is created
 * @param uiElementId_in identifier of the UIElement
 * @param listItemIndex_in index of the Cell, if the UIElement is not in a cell it's nil
 * @param tileDescriptor_in TileDescriptor for the UIElement
 * @param context_in Context for the UIElement to evaluate the value from the TileDescriptor
 * @return created UIElement
 * @discussion Deprecated in 1.1. Moved to MAFUIElementCreatorDelegate.
 */
- (UIView*) willCreateUIElementForUIElementId:(NSString*)uiElementId_in forListItemIndex:(NSNumber*)listItemIndex_in withTileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in andContext:(MAFContext*)context_in DEPRECATED_ATTRIBUTE;

/**
 * Invoked on the client before a ui element is created
 * @param uiElement_in reference to the UIElement
 * @param uiElementId_in identifier of the UIElement
 * @param listItemIndex_in index of the Cell, if the UIElement is not in a cell it's nil
 * @param tileDescriptor_in TileDescriptor for the UIElement
 * @param context_in Context for the UIElement to evaluate the value from the TileDescriptor
 * @return created UIElement
 * @discussion Deprecated in 1.1. Moved to MAFUIElementCreatorDelegate.
 */
- (void) didCreateUIElement:(UIView**)uiElement_in forUIElementId:(NSString*)uiElementId_in forListItemIndex:(NSNumber*)listItemIndex_in withTileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in andContext:(MAFContext*)context_in DEPRECATED_ATTRIBUTE;

@end
