//
//  MAFBusinessQuery.h
//  MAFODDataSourceAdapter
//
//  Created by Vass, Gabor on 2012.06.20..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFQueryParameters.h"

/**
 Protocol declaration of executing queries in the data layer
 */
@protocol MAFBusinessQuery <NSObject, MAFQueryParameters>

@property (nonatomic, retain, readonly) NSString* BOType; ///< Type of Business Object, shall be specified
@property (nonatomic, retain, readonly) NSString* BOId; ///< Id of Business Object, set if you want to read one specific item

/**
 Initialize and return MAFBusinessQuery
 @param BOType_in Type of Business Object, shall be specified
 @param BOId_in Id of Business Object, specify if want to read one specific item
 */
-(id<MAFBusinessQuery>) initWithBOType:(NSString*)BOType_in BOId:(NSString*)BOId_in;


@end
