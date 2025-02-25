//
//  SODataAnnotationName.h
//  ODataAPI
//
//  Copyright (c) 2014 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SODataAnnotationName.h"

/**
 Represents the name of an annotation with namespace
 */
@interface SODataAnnotationNameDefault : NSObject <SODataAnnotationName>

/**
 * Custom initializer
 * @param name name of the annotation name
 * @param namespace namespace of the annotation name
 */
- (instancetype) initWithName:(NSString*)name namespace:(NSString*)aNamespace;

@end
