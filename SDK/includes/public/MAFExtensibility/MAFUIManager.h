//
//  MAFUIManager.h
//  MAFLayoutManager
//
//  Created by Egresits, David on 12/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MAFGenericBO;
@class MAFTile;
@class MAFBindingManager;
@class MAFContext;
/**
 * Facade for the UI Compoent
 * Provides APIs to access a tile based on its identifier
 */
@interface MAFUIManager : NSObject 

@property (nonatomic, readonly, retain) UIViewController* rootViewController;

/**
 * Accessor for the UIWindow object. Clients have to pass a valid UIWindow instance when initializing the extensibility framework (see also 3.1 Core Component).
 */
@property (nonatomic, retain) UIWindow* window;


/**
 Accessor to application specific bundle name, in which the application specific images are located
 */ 
@property (nonatomic, retain, getter = imagesBundleName) NSString* imagesBundleName;

/**
 * Factory Method
 * @return The singleton MAFUIManager instance
 */
+ (MAFUIManager*)sharedInstance;

/**
 * @return Returns the root tile. 
 * @discussion The rootTile can be a Container with Tile(s). A nil value indicates there was no root tile defined in the layout metadata. 
 * In this case the client app developer has to provide one, add it as a subview to the app’s UIWindow, and take care to hook in MAF Extensibility Tiles in the navigation chain.
 */
@property(nonatomic, retain, readonly) UIViewController* rootTile;

/**
 * Returns a valid tile based on the identifier
 * @remark Assuming either the default framework implementation or the client creates one.
 * @param identifier_in is the identifier of the the Tile (tileId)
 * @return This method returns with a decorated UIViewController for the identifier
 * @discussion This is probably a MAFTile, but can be Container (like UINavigationController, UITabBarController, UISplitViewController
 */
- (UIViewController*) tileByIdentifier:(NSString*)identifier_in;

/**
 * Returns a valid tile based on the identifier
 * @remark Assuming either the default framework implementation or the client creates one. 
 * @param identifier_in identifier of the Tile
 * @param context_in the context which contains the bindings with BOs
 * @return This method returns with a decorated UIViewController for the identifier using the given context
 * @discussion This is probably a MAFTile, but can be Container (like UINavigationController, UITabBarController, UISplitViewController
 */
- (UIViewController*) tileByIdentifier:(NSString*)identifier_in withContext:(MAFContext*)context_in;

/**
 * Returns a valid tile based on the identifier
 * @remark Assuming either the default framework implementation or the client creates one.
 * @param identifier_in identifier of the Tile
 * @param boArr_in BOs for the Tile
 * @param bindingID_in identifier for the Binding of the BOs
 * @return This method returns with a decorated UIViewController for the identifier using the given context
 * @discussion This is probably a MAFTile, but can be Container (like UINavigationController, UITabBarController, UISplitViewController
 * Usage example
 * <code>
 * NSArray* boArray = [[NSMutableArray alloc] init];
 * for (int i =1; i<=20; ++i) {
 *   id<MAFGenericBO>* tempBO = [[CustomBO alloc] init];
 *   [tempBO setTypedValue:[NSString stringWithFormat:@"Number %d",i] valueType:1 forKey:@"Number"];
 *   [boArray addObject:tempBO];
 *   [tempBO release];
 * }
 * UIViewController* tile = [[MAFUIManager sharedInstance] tileByIdentifier:@"NumbersTile" withBOs:boArray forBindingID:@"Numbers"];
 * [boArray release];
 * </code>
 */
- (UIViewController*) tileByIdentifier:(NSString *)identifier_in withBOs:(NSArray*)boArr_in forBindingID:(NSString*)bindingID_in;

/**
 * Returns a valid tile based on the identifier
 * @remark Assuming either the default framework implementation or the client creates one.
 * @param identifier_in identifier of the Tile
 * @param bindingDictionary_in dictionary, which contains the BindingIDs as keys and the array of BOs as values for the keys.
 * @return This method returns with a decorated UIViewController for the identifier using the given context
 * @discussion This is probably a MAFTile, but can be Container (like UINavigationController, UITabBarController, UISplitViewController
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
 * UIViewController* tile = [[MAFUIManager sharedInstance] tileByIdentifier:@"NumbersTile" withBindingDictionary:dict];
 * [dict release];
 * </code>
 */
- (UIViewController*) tileByIdentifier:(NSString *)identifier_in withBOsByBindingId:(NSDictionary*)bindingDictionary_in;

@end
