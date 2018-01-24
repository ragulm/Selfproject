//
//  EmbeddedFileDescriptor.h
//  MAFZipHelper
//
//  Copyright (c) 2015 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Describes an embedded file in a zip file.
 */
@interface MAFEmbeddedFileDescriptor : NSObject

@property (nonatomic, retain) NSString*     fileName;
@property (nonatomic, assign) unsigned int  compressedSize;
@property (nonatomic, assign) unsigned int  uncompressedSize;

@end
