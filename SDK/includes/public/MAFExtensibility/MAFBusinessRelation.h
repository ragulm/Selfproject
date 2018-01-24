//
//  MAFBusinessRelation.h
//  MAFODDataSourceAdapter
//
//  Created by Vass, Gabor on 2012.06.20..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFGenericBO.h"
#import "MAFQueryParameters.h"

/**
 Protocol declaration of executing queries for joined entries in the data layer
 */
@protocol MAFBusinessRelation <NSObject, MAFQueryParameters>

@property (nonatomic, retain, readonly) id<MAFGenericBO> sourceBO; ///< Business Object, for which we want get the joined entries
@property (nonatomic, retain, readonly) NSString* relationID; ///< Relation Id, identifies the relation between sourceBO and joined objects

/**
 Initialize and return MAFBusinessRelation
 @param BO_in source Business Object, shall be specified
 @param relationId_in Id of relation between source and joined business objects
 */
-(id<MAFBusinessRelation>) initWithSourceBO:(id<MAFGenericBO>)BO_in relationID:(NSString*) relationID_in;

@end
