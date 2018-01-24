//
//  MAFGlobalContext.h
//  MAFExtensibility
//
//  Created by Egresits, David on 5/7/13.
//
//

#import <Foundation/Foundation.h>

/**
 * Contains the Global context values, which are reachable for all Tiles
 */
@interface MAFGlobalContext : NSObject
/**
 * Factory Method
 * @return The singleton MAFGlobalContext instance
 */
+ (MAFGlobalContext*)sharedInstance;

/**
 * Add object to global context with the defined key
 * @param object_in object to add to the global context
 * @param key_in key of object
 */
-(void) addObject:(id)object_in withKey:(NSString*)key_in;

/**
 * Read object from global context
 * @param key_in key of object
 * @return object if exist, nil if not
 */
-(id) readObjectWithKey:(NSString*)key_in;

/**
 * Remove object from global context
 * @param key_in key of object
 */
-(void) deleteObjectWithKey:(NSString*)key_in;

/**
 * Removes all object from the global context
 */
-(void) clear;

@end
