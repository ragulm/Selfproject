//
//  MAFTileActionHandlerDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 11/7/12.
//
//

#import <Foundation/Foundation.h>
#import "MAFActionDecriptor.h"
#import "MAFContext.h"
#import "MAFConstants.h"

@class MAFTile;


@protocol MAFTileActionHandlerDelegate <NSObject>

@required

/**
 * Allows clients to hook in for action handling
 * @param actionDescriptor_in Holds information on the action fired by the view or control (see sourceUIElement_in)
 * @param tile_in tile holding the action sender 
 * @param sourceUIElement_in the UI element, which intercepts the touch event and fires the action message as specified in the configuration. The following configuration snippet illustrates how a sender (UIButton), the venet it reacts on and the action fired by the control can be described in the configuration.
 * <pre>
 * <!-- UIButton -->
 * <UIElement type="button">
 * <!-- ...configuration skipped for brevity -->
 *    <!-- event intercepted by our button -->
 *    <Event eventId="onClick">
 *         <!-- action fired -->
 *         <Action actionId="navigate">
 *            <P pid="target" value="AppScreen">
 *         </Action>
 *     </Event>
 * </UIElement>
 * </pre>
 *  
 * @param context_in context to be passed along with the action (can be be nil)
 * @param waitUntilDoneFlag_in passed as pointer, so clients can override it (defaults to NO). If set to YES, the framework will pause processing of further actions.
 * Send kMAFProcessFurtherActions to wake up action processing; alternatively you can instruct the framework to drop all further queued actions by sending kMAFDeleteFurtherActionsFromQueue.
 * <pre>
 * Notifications:
 * <code>
 *         // Notify framework to continue action processing
 *         [[NSNotificationCenter defaultCenter] postNotificationName:kMAFProcessFurtherActions object:nil];
 *
 *         // Notify framework to drop all remaining queued actions
 *         [[NSNotificationCenter defaultCenter] postNotificationName:kMAFDeleteFurtherActionsFromQueue object:nil];
 * </code>
 * </pre>
 *
 * @return YES - the client handles the action, NO - let the framework perform default action handling
 *
 * @discussion if both the custom action and the default framework logic has to be performed, call MAFTile perforDefaultAction: from within the delegate and return YES
 *
 */
- (BOOL) performAction:(MAFActionDescriptor*)actionDescriptor_in onTile:(MAFTile*)tile_in sender:(UIView*)sourceUIElement_in context:(MAFContext*)context_in waitUntilDone:(BOOL*)waitUntilDoneFlag_in;

@end
