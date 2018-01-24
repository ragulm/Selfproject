//
//  MAFTileAppearanceDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 4/18/13.
//
//

#import <Foundation/Foundation.h>

@class MAFTile;
@protocol MAFTileAppearanceDelegate <NSObject>

/**
 * This method is called before the Tile is rendered with the full content. Note that this method is called whenever the UI is rebuilt (uiRefresh / rotation). Here the app developer can check the size of the Tile or the size of the UIViews included in the Tile using UI access methods and arrange the UI accordingly.
 * @param tile_in the Tile which will be shown
 */
- (void) willShowTile:(MAFTile*)tile_in;

@end
