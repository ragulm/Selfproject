//
//  MAFLogonPerformanceMeter.h
//  MAFLogonManagerNG
//

#import <Foundation/Foundation.h>

#pragma mark - Performance meter class

/**
 Helper class for performing performance measurements. The measurement methods do nothing unless the performance log is
 enabled with <code>enablePerformanceLog</code>.
 <p>
 This class is thread-safe.
 </p>
 */
@interface MAFLogonPerformanceMeter : NSObject

/**
 Enables/disables the performance log.
 
 @param enable YES to enable, NO to disable the performance logs
 */
+(void) enablePerformanceLog:(BOOL)enable;

/**
 Starts a measurement and emits the specified message. Does nothing if the measurements are turned off.
 
 @param message the message to emit, must be non-nil
 */
+(void) startMeasurementWithMessage:(NSString*)message;

/**
 Ends the measurement that has been started with the same message. This method is for convenience and is equivalent to calling <code>endMeasurementWithMessage:withMax:</code> with
 a limit of 0.
 <p>
 This method does nothing if performance measurements are turned off.
 </p>
 
 @param message the message, must be non-nil
 */
+(void) endMeasurementWithMessage:(NSString*)message;

/**
 Ends the measurement by calculating the elapsed time between now and the start time belonging to the given message. It additionally emits a warning log entry
 should the elapsed time go over the limit (measured in milliseconds).
 <p>
 This method does nothing if performance measurements are turned off or if no measurement has started with the given message.
 </p>
 
 @param message the message, must be non-nil
 @param limit the limit in miliseconds. Counts only if its nonzero.
 */
+(void) endMeasurementWithMessage:(NSString*)message withMax:(int)limit;

@end

#pragma mark - Helper macros

#define LOGPS(_message)             [MAFLogonPerformanceMeter startMeasurementWithMessage:_message];
#define LOGPE(_message)             [MAFLogonPerformanceMeter endMeasurementWithMessage:_message];