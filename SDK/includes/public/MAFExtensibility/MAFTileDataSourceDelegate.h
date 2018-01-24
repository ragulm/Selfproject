//
//  MAFTileDataSourceDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 4/25/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MAFTile;

@protocol MAFTileDataSourceDelegate <NSObject>

@optional

/**
 * Allows clients to hook in for tile context creation. Deprecated - use willLoadContext:forTile: instead.
 * @param tile_in MAFTile for the context
 */
- (void) willLoadContextForTile:(MAFTile*)tile_in DEPRECATED_ATTRIBUTE;

/**
 * Gets invoked on the client before the context loading starts.
 * @param context_in_out result of a data fetch or context passing. Passed as reference so clients can modify or replace the context.
 * @param tile_in the context owner tile
 */
- (void) willLoadContext:(MAFContext**)context_in_out forTile:(MAFTile*)tile_in;

/**
 * Gets invoked on the client when context loading completes
 * @param context_in context
 * @param tile_in the context owner tile
 */
- (void) didLoadContext:(MAFContext*)context_in forTile:(MAFTile*)tile_in;

/**
 * Notifies the client about context loading failures
 * @param tile_in the context owner tile
 * @param error_in error object
 */
- (void) loadContextForMAFTile:(MAFTile*)tile_in failedWithError:(NSError*)error_in;

/**
 * Gets invoked when the context is about to be loaded; Deprecated - use willLoadContext:forTile: instead.
 * @param tile_in the context owner tile
 * @param defaultContext_in current context
 * @return MAFContext modified context
 * @discussion clients can pass custom context / modify current context here
 */ 
- (MAFContext*) loadCustomContextForMAFTile:(MAFTile*)tile_in withDefaultContext:(MAFContext*) defaultContext_in DEPRECATED_ATTRIBUTE;

@end
