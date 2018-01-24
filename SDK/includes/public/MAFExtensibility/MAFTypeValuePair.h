//
//  MAFTypeValuePairProtocol.h
//  MAFExtensibility
//
//  Created by Vass, Gabor on 2012.06.22..
//  Copyright (c) 2012 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MAFTypeValuePair <NSObject>

@property (nonatomic, assign) int type;
@property (nonatomic, retain) id value;

-(instancetype) initWithType:(int)type_in andValue:(id)value_in;

@end

