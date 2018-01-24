//
//  MAFToolbarDescriptors.h
//  MAFConfigurationComponent
//
//  Created on 01/16/13.
//  Copyright (c) 2013 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFActionDecriptor.h"

typedef MAFActionPanelItemDescriptor MAFToolbarItemDescriptor;

/**
 * Defines a toolbar ui element
 */
@interface MAFToolbarDescriptor : NSObject

@property (nonatomic, retain, readonly) NSArray* items; /**< readonly array of toolbar items (buttons) */

-(instancetype) init;

/**
 * Adds a new toolbar item descriptor to the toolbar descriptor.
 * @param toolbarItem: the toolbar item to be added to the toolbar
 */
-(void) addToolbarItem:(MAFToolbarItemDescriptor*)toolbarItem;

@end