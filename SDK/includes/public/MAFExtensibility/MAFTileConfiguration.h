//
//  MAFTileConfiguration.h
//  MAFConfigurationComponent
//
//  Created on 01/17/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MAFVersion.h"

@class MAFTileDescriptorTile;

/**
 * The tile configuration class holds the parsed data of the configuration XML file.
 * Only the parser creates an instance of this class.
 */
@interface MAFTileConfiguration : NSObject<NSCoding>

@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;
@property (nonatomic, assign) TEN_MAFEXT_VERSIONS version;

-(instancetype) init;

//Tile descriptor management functions>>
/**
  * Adds a new tile descriptor with the specified id to the configuration.
  * If the tile already exists an exception is thrown
  */
-(void) addTileDescriptor:(MAFTileDescriptorTile*)tileDescriptor tileID:(NSString*)tileID;

/**
  * @return Returns the tile descriptor from the configuration specified by the given tile id or nil, if the tile with the 
  * given id does not exist.
  */
-(MAFTileDescriptorTile*) tileDescriptorByID:(NSString*)tileID;

/**
  * Removes the specified tile descriptor from the configuration
  */
-(void) removeTileDescriptorByID:(NSString*)tileID;

//Binding descriptor management functions>>

/**
  * @return Returns the root tile, if exists otherwise nil
  * @remark the method throws an exception if an error occurs during evaluating the isRootTile exception
  */
@property (nonatomic, readonly, strong) MAFTileDescriptorTile *rootTile;

@end
