//
//  MAFUIElementCreatorDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 12/18/12.
//
//

#import <Foundation/Foundation.h>
#import "MAFTileDescriptors.h"
#import "MAFContext.h"

@protocol MAFUIElementCreatorDelegate <NSObject>

@optional

/**
 * Clients can hook in to override framework behaviour or to create custom ui elements. Invoked on the client before a ui element is created
 * @param uiElementId_in identifier of the UIElement
 * @param listItemIndex_in cell specific index; nil for ui elements which are not embedded in a cell
 * @param tileDescriptor_in the UI elements tile descriptor
 * @param context_in the UI element's context
 * @return custom UI element or nil; if the delegate returns nil, the library attempts to create the UI element
 */
- (UIView*) willCreateUIElementWithId:(NSString*)uiElementId_in listItemIndex:(NSNumber*)listItemIndex_in tileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in context:(MAFContext*)context_in;

/**
 * Clients can hook in to decorate or replace the created ui element. Invoked on the client after the ui element is created
 * @param uiElement_in_out reference to the UIElement
 * @param uiElementId_in identifier of the UIElement
 * @param listItemIndex_in cell specific index; nil for ui elements which are not embedded in a cell
 * @param tileDescriptor_in the UI elements tile descriptor
 * @param context_in the UI element's context
 */
- (void) didCreateUIElement:(UIView**)uiElement_in_out id:(NSString*)uiElementId_in listItemIndex:(NSNumber*)listItemIndex_in tileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in context:(MAFContext*)context_in;

/**
 * Clients can hook in to create a custom view controller for the ui element identified by its id. Invoked on the client before the controller is created
 * @param uiElementId_in identifier of the UIElement
 * @param listItemIndex_in cell specific index; nil for ui elements which are not embedded in a cell
 * @param tileDescriptor_in the UI elements tile descriptor
 * @param context_in the UI element's context
 * @return valid view controller for the ui element or nil; if the delegate returns nil, the library attempts to create the controller
 */
- (UIViewController*) willCreateViewControllerWithUIElementId:(NSString*)uiElementId_in listItemIndex:(NSNumber*)listItemIndex_in tileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in context:(MAFContext*)context_in;

@end
