//
//  MAFConfigurationManager.h
//  MAFConfigurationComponent
//
//  Created by Farkas, Zoltan on 01/18/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

// TODO: consider making this a private header

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "MAFConfigurationDelegate.h"

enum TEN_CONFIGURATION_TYPES {
	CONFIGURATION_TYPE_DEFAULT,
	CONFIGURATION_TYPE_CUSTOM
};

@class MAFTileConfiguration;

@interface MAFConfigurationManager : NSObject

@property (nonatomic, assign, readonly) UIStatusBarStyle	statusBarStyle;
//@property (nonatomic, assign) id<MAFConfigurationDelegate>	delegate;
@property (nonatomic, retain) MAFTileConfiguration* tileConfiguration; //TODO: readonly?

+(MAFConfigurationManager*) sharedInstance;

/**
 *  Loads, parses and transforms the configuration
 * @throws NSException
 */
-(void) loadConfiguration:(NSString*)configurationPath;

// TODO: Implement
//-(NSArray*) enumerateTileIdentifiers;
//-(NSDictionary*) attributesForItemsWithID:(NSString*)barID_in fromTileWithID:(NSString*)tileID_in;
//-(NSDictionary*) attributesForControlWithID:(NSString*)controlID_in fromTileWithID:(NSString*)tileID_in;
//-(NSDictionary*) attributesForTileWithID:(NSString*)tileID_in;
//-(NSArray*) viewIDsForTileWithID:(NSString*)tileID_in;
//-(NSArray*) controlIDsForTileWithID:(NSString*)tileID_in;
//-(void) cancelUpdate;
//-(void) applyConfiguration:(enum TEN_CONFIGURATION_TYPES)configurationType;

@end