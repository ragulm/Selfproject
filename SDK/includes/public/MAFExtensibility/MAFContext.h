//
//  MAFExtContext.h
//  MAFExtensibility
//
//  Created by Egresits, David on 4/23/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MAFGenericBO.h"
#import "MAFTileDescriptors.h"

@class MAFBindingManager;

/**
 * Binding, whick holds the BOs for the same Collection in the Context
 */
@interface MAFExtBOBinding : NSObject

/**
 * DERECATED in MAF 1.2.
 * Selected items in the Binding (This means for example the BO for the selected TableViewCell in the List)
 */
//@property (nonatomic, retain) NSArray* selectedItems DEPRECATED_ATTRIBUTE;

/**
 * Array of BOs for the Binding
 */
@property (nonatomic, retain) NSMutableArray* boArr;

/**
 * Initializes a BOBinding with BOs
 * @param boArr_in Array of BOs for the BOBinding
 */
- (instancetype) initWithBOs:(NSArray*)boArr_in;

/**
 * Add BOs to the BOBinding
 * @param boArr_in BOs to add
 */
- (void) addToBOArr:(NSArray*)boArr_in;

@end

@interface MAFContext : NSObject

/**
 * Initializes a MAFContext with a binding
 * @param boArray_in BOs for the binding
 * @param bindingID_in identifier of the Binding
 * @return initialized MAFContext
 * Usage example
 * <code>
 * NSArray* boArray = [[NSMutableArray alloc] init];
 * for (int i =1; i<=20; ++i) {
 *   id<MAFGenericBO>* tempBO = [[CustomBO alloc] init];
 *   [tempBO setTypedValue:[NSString stringWithFormat:@"Number %d",i] valueType:1 forKey:@"Number"];
 *   [boArray addObject:tempBO];
 *   [tempBO release];
 * }
 * MAFContext* context = [[MAFContext alloc] initWithBOs:boArray forBindindingID:@"Numbers"];
 * [boArray release];
 */
- (instancetype) initWithBOs:(NSArray*)boArray_in forBindindingID:(NSString*)bindingID_in;

/**
 * Initializes a MAFContext with a binding
 * @param bo_in BO for the binding
 * @param bindingID_in identifier of the Binding
 * @return initialized MAFContext
 */
- (instancetype) initWithBO:(id<MAFGenericBO>)bo_in forBindindingID:(NSString*)bindingID_in;

/**
 * Initializes a MAFContext with dictionary of BOs
 * @param bindingsDictionary_in is the Disctionary which contains the bindingIDs (as key) and the arrays of the BOs (as value)
 * Usage example
 * <code>
 * id<MAFGenericBO> bo = [[CustomBO alloc] init];
 * [bo setTypedValue:@"John Doe" valueType:1 forKey:@"Name"];
 * NSArray* boArray = [[NSMutableArray alloc] init];
 * for (int i =1; i<=20; ++i) {
 *   CustomBO* tempBO = [[CustomBO alloc] init];
 *   [tempBO setTypedValue:[NSString stringWithFormat:@"Number %d",i] valueType:1 forKey:@"Number"];
 *   [boArray addObject:tempBO];
 *   [tempBO release];
 * }
 * NSDictionary* dict = [[NSDictionary alloc] initWithObjectsAndKeys:[NSArray arrayWithObject: bo], @"Names", boArray, @"Numbers", nil];
 * [bo release];
 * [boArray release];
 * MAFContext* context = [[MAFContext alloc] initWithDictionary:dict];
 * [dict release];
 * </code>
 */
- (instancetype) initWithDictionary:(NSDictionary*)bindingsDictionary_in;

/**
 * This dictionary contains MAFExtBOBinding objects, the key should be the identifier of the binding
 * Usage example
 * <code>
 * MAFContext* context = [[MAFContext alloc] init];
 * MAFExtBOBinding* binding = [[MAFExtBOBinding alloc] initWithBOs:m_BOArray]; //m_BOArray is an NSArray consists of id<MAFGenericBO> objects
 * [context.boBindingDict setObject:binding forKey:@"Numbers"];
 * [binding release];
 * [context release];
 * </code>
 */
@property (nonatomic, retain) NSMutableDictionary* boBindingDict;

/**
 * This dictionary contains the ContextValues for this context
 * @discussion Tipically setContextValue:forKey:onTileWithID: and contextValueForKey: should be used instead of directly ccessing the dictionary.
 */
@property (nonatomic, retain) NSMutableDictionary* contextValuesDict;


/**
 * Set one selected item (BO) for the given bindingID
 * @param selectedBO_in the selected BO
 * @param bindingID_in the identifier of the Binding
 */
- (void) setSelectedItem:(id<MAFGenericBO>)selectedBO_in forBindingID:(NSString*)bindingID_in;

/**
 * Set an array of selected itmes (BOs) for the given binding ID
 * @param selectedItemsArr_in array of selected BOs
 * @param bindingID_in the identifier of the Binding
 */
- (void) setSelectedItems:(NSArray*)selectedItemsArr_in forBindingID:(NSString*)bindingID_in;

/**
 * Get an array of selected items for the given bindingID (it can be only one item in the array)
 * @param bindingID_in the identifier of the Binding
 * @return array of BOs
 */
- (NSArray*) getSelectedItemsForBindingID:(NSString*)bindingID_in;

/**
 * Get a Binding for the give bindingID from the contect. It won't load BOs from the MAFBOManager
 * @param bindingID_in the identifier of the Binding
 * @return MAFExtBOBinding
 */
- (MAFExtBOBinding*) getBindingForID:(NSString*)bindingID_in;

/**
 * Get BOs for the given bindingID
 * @param bindingID_in the identifier of the Binding
 * @return array of BOs
 */
- (NSMutableArray*) getBOsForBindingID:(NSString*)bindingID_in;

/**
 * Set an array of BOs for the given bindingID
 * @param boArr_in array of BOs
 * @param bindingID_in the identifier of the Binding
 */
- (void) setBOs:(NSMutableArray*)boArr_in ForBindingID:(NSString*)bindingID_in;

/**
 * Get the current BO for the given BindingID
 * @param bindingID_in the identifier of the Binding
 * @return current BO for the given bindingID
 */
- (id<MAFGenericBO>) getCurrentForBindingID:(NSString*)bindingID_in;

/**
 * Set the current BO for the given bindingID
 * @param currentBo_in current BO to set
 * @param bindingId_in the identifier of the Binding
 */
- (void) setCurrent:(id<MAFGenericBO>)currentBo_in ForBindingID:(NSString*)bindingId_in;

/**
 * DERECATED in MAF 1.2.
 * Add a new subView to Tile's context
 * @param uiView_in UIView to be added
 */
//- (void) addUIElement:(UIView*)uiView_in DEPRECATED_ATTRIBUTE;

/**
 * DERECATED in MAF 1.2. * Add a new subView to Tile's context at the specified index
 * @param uiView_in UIView to be added
 * @param index_in is the index of the curent UIElement in the ListItemTemplates
 */
//- (void) addUIElement:(UIView*)uiView_in atIndex:(NSInteger)index_in DEPRECATED_ATTRIBUTE;

/**
 * DERECATED in MAF 1.2.
 * Get a subview from the Tile's context for key (to reach the UI elements of the current Tile)
 * @param key_in key of the UI element
 * @return the UIElement for key
 * @discussion it will return the newest UIElement created for that key (in case of ListItemTemplates too)
 */
//- (UIView*) uiElementForKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;

/**
 * DERECATED in MAF 1.2.
 * Get an array of UIElements from the Tile's context for key (to reach the UI elements of the current Tile)
 * @param key_in key of the UI element
 * @return an array of UIElements for the same key (Because the use of ListItemTemplate)
 */
//- (NSArray*) uiElementsForKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;

/**
 * Set a context value for a key
 * @param contextValue_in the value to add to context
 * @param key_in key for the value
 * @param tileId_in identifier of the Tile
 */
- (void) setContextValue:(id)contextValue_in forKey:(NSString*)key_in onTileWithID:(NSString*)tileId_in;

/**
 * Get a context value for the key
 * @param key_in the key of the value
 * @return context value for the key
 */
- (id) contextValueForKey:(NSString*)key_in;

/**
 * Delete a context value for the key
 * @param key_in the key of the value
 * @param tileId_in identifier of the Tile
 */
- (void) deleteContextValueForKey:(NSString*)key_in onTileWithID:(NSString *)tileId_in;

/**
 * DERECATED in MAF 1.2.
 * Remove all values from the context
 * @param tileId_in identifier of the Tile
 */
//- (void) clearContextOnTileWithID:(NSString *)tileId_in DEPRECATED_ATTRIBUTE;

@end

/**
 * DERECATED in MAF 1.2.
 * Contains the Global context values, which are reachable for all Tiles
 * Moved to standalone file in MAF 1.2, please import MAFGlobalContext.h
 * @see MAFGlobalContext
 */
//@interface MAFGlobalContext : NSObject



