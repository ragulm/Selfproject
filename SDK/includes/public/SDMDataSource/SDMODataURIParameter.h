//
//  SDMODataURIParameter.h
//  SDMDataSource
//
//  Created by Vass, Gabor on 2012.07.13..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDMODataURIParameter : NSObject

@property (nonatomic, strong) NSString* topValue;
@property (nonatomic, strong) NSString* orderByValue;
@property (nonatomic, strong) NSString* skipValue;
@property (nonatomic, strong) NSString* filterValue;
@property (nonatomic, strong) NSString* selectValue;

-(SDMODataURIParameter*) initWith :(NSString*)topVal_in orderByVal:(NSString*)orderByVal_in skipVal:(NSString*)skipVal_in filterVal:(NSString*)filterVal_in selectVal:(NSString*)selectVal_in;

-(NSString*) generateURIParameterString;


@end
