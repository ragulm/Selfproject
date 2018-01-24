//
//  MAFExtLoadingDelegate.h
//  MAFExtensibility
//
//  Created by Egresits, David on 4/5/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFBindingDescriptors.h"

@protocol MAFExtLoadingDelegate <NSObject>

@optional

/**
 * This delegate method is called, when the loading process is started. If the method is implemented the Extensibility framework won't show a loading indicator.
 * @param bindingDescriptor_in, which contain the message of the Loading dialog
 * @discussion If this method is implented, the mafExtLoadingFinished method should be also implemented.
 */
- (void)mafExtLoadingStartedForBindingDescriptor:(MAFBindingDescriptorBase*)bindingDescriptor_in;

/**
 * This delegate method is called, when the loading process has been finished. If the method is implemented the Extensibility framework won't hide a loading indicator.
 * @discussion If this method is implented, the mafExtLoadingStarted method should be also implemented.
 */
- (void)mafExtLoadingFinished;

/**
 * This delegate is called when the framework stopped downloading, because of failure
 * @param error_in is an error object, which describes the cause of the failure
 */
- (void) mafExtLoadingFailedWithError:(NSError*)error_in;

@end


