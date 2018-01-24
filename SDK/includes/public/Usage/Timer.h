//
//  Timer.h
//  


#import <Foundation/Foundation.h>
/**
 * Timer object to measure events. Do not instantiate, please use the Usage APIs:
 *
 * Example to handle Timer object:
 *  //get a Timer with instance:
 *  Timer* timer = [Usage makeTimer:@"MasterViewController"];
 *
 *  //stop and persist the p:
 *  [Usage stopTimer:timer];
 *
 *  //stop Timer with key and additional information
 *  NSMutableDictionary* info = [[NSMutableDictionary alloc]init];
 *  [info setValue.... forKey.... ];
 *  [Usage stopTimer:timer info:info type:@"customTimer"];
 *
 *
*/
@interface Timer : NSObject

- (instancetype) initWithKey:(NSString*)aKey;

/**
 * Duration in ms that passed between calls to startTimer and startTimer, or startTimer and querying the duration property
 */
@property (nonatomic, retain, readonly) NSNumber* duration;

/**
 * Timestamp of the start date
 */
@property (nonatomic, retain, readonly) NSString* startDateTimeStamp;

/**
 * Key of the Timer
 */
@property (nonatomic, readonly) NSString * keyName;

/**
 * Start the timer
 */
-(void)startTimer;

/**
 * Stop the timer
 */
-(void)stopTimer;

@end
