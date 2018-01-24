//
//  MAFExtUIViewController.h
//  MAFExtensibility
//
//  Created by Egresits, David on 2/23/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFTileActionHandlerDelegate.h"
#import "MAFTileDataSourceDelegate.h"
#import "MAFUIElementCreatorDelegate.h"
#import "MAFTileAppearanceDelegate.h"

@class MAFContext;
@class MAFTileController;
@class MAFAppearanceDescriptor;
/**
 * This class represents the so-called tile, which is an enhanced UIViewController subclass
 * It can hold multiple UIKit views and controls, holds a set of descriptors describing its appearance and behaviour
 * It is bound to data model (Business Object)
 */
@interface MAFTile : UIViewController <UIActionSheetDelegate, UISearchBarDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UISplitViewControllerDelegate, UITextViewDelegate, UITextFieldDelegate> 

#pragma mark - Public APIs

/**
 * Initializes a tile based on its identifier
 * @param identifier_in identifier of the tile
 * @return MAFTile
 */
- (instancetype) initWithIdentifier:(NSString*)identifier_in;

@property (nonatomic, retain) NSString* uniqueIdentifier;

/**
 * Initializes a tile using a tile descriptor
 * @param tileDescriptor_in tileDescriptor used for building the tile
 * @param parentTile_in parentTile for the current Tile
 * @return MAFTile
 */
- (instancetype)initWithTileDescriptor:(MAFTileDescriptorBase*)tileDescriptor_in andParentTile:(MAFTile*)parentTile_in;

/**
 * Initializes a list container (TableView) based on the passed descriptor and context
 * @param listContainerDescriptor_in the descriptor of the ListContainer
 * @param context_in the context to be used for ListContainer creation
 * @param parentTile_in the tile, which is the parent of the ListContainer, so the listContainer is embedded in this Tile.
 * @param orientation_in current interface orientation to check subTiles orientation
 * @param frame_in frame to create the LinearContainer in
 * @return MAFTile with TableView
 */
- (instancetype) initWithTileListContainerDescriptor:(MAFTileDescriptorListContainer*)listContainerDescriptor_in withContext:(MAFContext*)context_in andParentTile:(MAFTile*)parentTile_in forOrientation:(MAFEXT_ORIENTATION_TYPES)orientation_in withFrame:(CGRect)frame_in;

/**
 * Refreshes the TableView without reloading the data
 * @param tableView_in tableview to be refreshed
 */
- (void) refreshTableView:(UITableView *)tableView_in;

/**
 * Refreshes the data on the tile (the tile's main view has to be a UITableView)
 * @param tile_in the tile, which will be refreshed
 * @discussion use this method instead of refreshTableView:
 */
- (void) refreshDataOnTileWithTableView:(MAFTile*)tile_in;

/**
 * Updates the tile's subviews according to the tile's descriptor
 * @param tile_in Tile to be refreshed 
 */
- (void) reloadSubViewsOnTile:(MAFTile*)tile_in;

/**
 * Retrieves the tile's subview identified by the key
 * This allows querying of any UI element belonging to a tile
 * @param key_in the key of the UI element
 * @return a UIView* or nil if no subview found for the given key
 * @discussion it will return with the lastly created UIElement for the key (in case of ListItemTemplates too)
 */
- (UIView*) uiElementForKey:(NSString*)key_in;

/**
 * Retrieves the tile's subviews identified by the key; the ListItemTemplate typically holds multiple subviews per key
 * This allows querying of UI elements belonging to a tile
 * @param key_in the key of the UI element
 * @return an array of UIElements for the same key
 */
- (NSArray*) uiElementsForKey:(NSString*)key_in;


#pragma mark - Properties

/**
 * The tile’s unique identifier. Set during Tile creation (retrieved from the layout metadata).
 */
@property (nonatomic, retain, readonly) NSString* identifier;

/**
 * Subtiles of a tile
 */
@property (nonatomic, retain) NSMutableArray* subTiles;

/**
 * The tile's parent
 */
@property (nonatomic, assign) MAFTile* parentTile;

/**
 * UITableView assigned to the tile
 */
@property (nonatomic, retain, readonly) UITableView* tableView;

/**
 * Indicates whether the tile should wait for the context or it can be rendered right away
 */
@property (nonatomic, assign) BOOL shouldWaitForContext;

/**
 * Tile's UIPopoverController; only applicable for iPad
 */
@property (nonatomic, retain) UIPopoverController* popoverController;

/**
 * Clients can register an action handler delegate to override the default behaviour or to add custom logic
 */
@property (nonatomic, assign) id<MAFTileActionHandlerDelegate> actionHandlerDelegate;

/**
 * Clients can register a data source delegate in order to modify the tile context
 */
@property (nonatomic, assign) id<MAFTileDataSourceDelegate> dataSourceDelegate;

/**
 * Clients can register a UI element creator delegate in order to create custom views / controls or modify the ones created by default
 */
@property (nonatomic, assign) id<MAFUIElementCreatorDelegate> uiElementCreatorDelegate;

/**
 * Clients can register a Tile Appearance delegate in order to get notified about tile appearance events
 */
@property (nonatomic, assign) id<MAFTileAppearanceDelegate> tileAppearanceDelegate;

/**
 * Holds the tile's data
 */
@property (nonatomic, retain) MAFContext* context;

/**
 * MArks whether the tile is embedded in another one
 */
@property (nonatomic, assign) BOOL isEmbedded;


@end


