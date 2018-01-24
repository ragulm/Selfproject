//
//  MAFTileCreatorDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 3/1/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MAFTileAppearanceDelegate.h"

@class MAFTile;
@class MAFTileController;
@class MAFContext;
@class MAFTileDescriptor;

/**
 * Declares delegate methods to be implemented in the app delegate in order to hook in for notifications about tile and tile controller creation
 * @remark Clients should only implement this delegate if they want to add custom tiles or tile controllers
 */
@protocol MAFTileCreatorDelegate <NSObject, MAFTileAppearanceDelegate>

@optional

#pragma mark - Tile Creator Delegates
/**
 * Allows clients to hook in for tile creation. Used to build custom tiles for specific identifiers.
 * Implement this method:
 * 1.) In the App Delegate
 * 2.) As a custom class. In this case you'll have to register the delegate via MAFCore -setTileCreatorDelegate:
 *
 * @param tileId_in identifier of the tile to be created
 * @param context_in context for tile creation
 * @return valid view controller or nil if the client does not intend to create the tile for the given ID
 */
-(UIViewController*) willCreateTileWithId:(NSString*)tileId_in andContext:(MAFContext*)context_in;

/**
 * Allows clients to decorate configuration based tiles for specific identifiers
 * Implement this method:
 * 1.) In the App Delegate
 * 2.) As a custom class. In this case you'll have to register the delegate via MAFCore -setTileCreatorDelegate:
 * @param tile_in view controller
 */
-(void) didCreateTile:(UIViewController*)tile_in;

#pragma mark - Delegate Registration APIs
/**
 * Allows clients to register a custom data source delegate for specific tiles
 * @remark If no custom datasource delegate is registered, the framework will rely on the injected data source adapter to feed the tile with data.
 * @param tile_in tile you can assign a custom datasource to
 * @discussion This delegate is meant to assign custom data source delegates on a per tile basis. Note that you can replace the data source adapter globally by implementing a class which conforms to the MAFDataSourceAdapter protocol, and inject it via MAFCore -setDataSourceAdapter or using MAFCore -loadWithWindow:dataSourceAdapter:andCompletionBlock:
 
 * @see MAFTileDataSourceDelegate, MAFCore, MAFDataSourceAdapter
 */
-(void) registerDataSourceDelegateForTile:(MAFTile*)tile_in;

/**
 * Allows clients to register a custom action handler delegate for specific tiles
 * @remark If no custom action handler delegate is registered, the framework will perform default action handling.
 * @param tile_in tile you can assign a custom action handler delegate to
 * @see MAFTileActionHandlerDelegate
 */
-(void) registerActionHandlerDelegateForTile:(MAFTile*)tile_in;

/**
 * Allows clients to register a custom UI element creator delegate for specific tiles
 * @remark If there is no custom UI element creator registered, the framework create the UI elements as usually. However, you'll have to take over the creation of custom UI elements (the framework will silently ignore unknown elements).
 * @param tile_in tile you can assign a UI element creator delegate to
 @see MAFUIElementCreatorDelegate
 */
-(void) registerUIElementCreatorDelegateForTile:(MAFTile*)tile_in;

@optional

#pragma mark - DEPRECATED APIs (Tile Controller Creator Delegate)
/**
 * Deprecated. Allows clients to build custom controllers for a given tile.
 * This delegate method shall be implemented in the app delegate in order to build custom tile controller for a given tile.
 * @param tile_in Tile for which the TileController is needed (note that the Tile is not "completely" created yet)
 * @return nil if the client does not intend to create the tile controller for the given tile
 * @discussion Deprecated in 1.1. DataSourceDelegate, ActionHandlerDelegate, UIElementCreatorDelegate can be registered to the MAFTile instead.
 */
-(MAFTileController*) willCreateTileControllerForTile:(MAFTile*) tile_in DEPRECATED_ATTRIBUTE;

@end
