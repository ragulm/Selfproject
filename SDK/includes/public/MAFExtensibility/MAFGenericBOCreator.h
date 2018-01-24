//
//  MAFGenericBOCreator.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 12/20/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol MAFGenericBO;
/**
 * Public interface exposed in order to allow clients to register custom „creators” to produce custom BO types
 */
@protocol MAFGenericBOCreator <NSObject>
/**
 * Should create and empty MAFGenericBO object based on the BO Type
 */
-(id <MAFGenericBO>) createTransientBO:(NSString*)type_in;

@end
