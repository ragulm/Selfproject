//
//  MAFFormattersException.h
//  MAFFormatters
//
//  Copyright (c) 2015 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Foundation/NSException.h>

/**
 * Exception propagated from the library
 * @remark clients should handle this when calling the synchronous library APIs
 */
@interface MAFFormattersException : NSException {
}

@property (nonatomic, readonly, retain, getter=getError) NSString* error;
@property (nonatomic, readonly, retain, getter=getDetailedError) NSString* detailedError;

-(id) init;
-(id) initWithError:(NSString*)error_in detailedError:(NSString*)details_in;

@end
