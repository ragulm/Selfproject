//
//  MAFExtensibilityException.h
//  MAFExtensibility
//
//  Created by Farkas, Zoltan on 01/04/12.
//  Copyright 2011 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Foundation/NSException.h>

/**
 *	MAFExtensibilityException
 */
@interface MAFExtensibilityException : NSException {
}

@property (nonatomic, readonly, retain, getter=getError) NSString* error;
@property (nonatomic, readonly, retain, getter=getDetailedError) NSString* detailedError;
@property (nonatomic, readonly, assign, getter=getStatusCode) NSInteger statusCode;

-(instancetype) init;
-(instancetype) initWithError:(NSString*)error_in detailedError:(NSString*)details_in;
-(instancetype) initWithError:(NSString*)error_in detailedError:(NSString*)details_in statusCode:(NSInteger)statusCode_in;

@end
