//
//  ODataUsage.h
//  ODataUsage
//


#import <Foundation/Foundation.h>
#import "Timer.h"
#import "HttpConversationManager.h"
#import "UsageErrors.h"
#import "UsageInfo.h"

/**
 * The purpose of the Client Usage Collection feature is to enable customer administrators to view and generate
 * reports on application usage KPI's, across dimensions of device type & version, operating system type &
 * version,and sdk type & version. This class provides the main interface of the Usage library. The Usage feature
 * only supports Hana Mobile Server for now.
 *
 * Dependencies: HTTPConversation library
 *
 * Example to configure HTTPConversationManager:
 * 
 *  //instantiate manager object
 *  HttpConversationManager* manager = [[HttpConversationManager alloc] init];
 *
 *  //configurate with a CommonAuthenticationConfigurator which can handle most authentication processes
 *  //the CommonAuthenticationConfigurator can be found in the HTTPConvAuthFlows library
 *  CommonAuthenticationConfigurator* customConfigurator = [[CommonAuthenticationConfigurator alloc] init];
 *  [customConfigurator configureManager:manager];
 *
 * Example to initialize Usage library:
 * 
 *  //Create the URL to the HCPms server (Hana Cloud Platform Mobile Services)
 *  NSString* urlForRequest = [NSString stringWithFormat:@"%@://%@:%@/clientusage", protocol, host, port];
 *
 *  //Usage object is a singleton object. Use [Usage sharedInsnce] selector to get Shared Instance of it
 *
 *  //Error handling
 *  NSError* error = nil;
 *
 *  //Call init method with encripytion key if you want to store your local data encrypted:
 *  [[Usage sharedInstance] initUsageWithURL:[NSURL URLWithString:urlForRequest] httpConversationManager:manager dataEncryptionKey:encrKey withError:&error ]
 *
 *  //Or without the encryption key
 *  [[Usage sharedInstance] initUsageWithURL:[NSURL URLWithString:urlForRequest] httpConversationManager:manager withError:&error]
 *
 *  if(error!=nil) {
 *     NSLog(@"Error occured: %@", error);
 *  }
 *
 * Example to use Timers:
 *  //start Timer with key:
 *  [[Usage sharedInstance] timeStart:@"MasterViewController" withError:&error];
 *
 *  if(error!=nil) {
 *     NSLog(@"Error occured: %@", error);
 *  }
 *
 *  //stop and persist the previous timer:
 *  [[Usage sharedInstance] timeEnd:@"MasterViewController" withError:&error];
 *
 *  if(error!=nil) {
 *     NSLog(@"Error occured: %@", error);
 *  }
 *
 *  //stop Timer with key and additional information
 *  NSMutableDictionary* info = [[NSMutableDictionary alloc]init];
 *  [info setValue.... forKey.... ];
 *  [[Usage sharedInstance] timeEnd:@"DetailViewController" info:info type:@"customTimer" withError:&error]
 *
 *  if(error!=nil) {
 *     NSLog(@"Error occured: %@", error);
 *  }
 */
@interface Usage : NSObject

/**
 * Stores Usage object is initialization state. When  initialized the DB behind is existing and opened, thus the object is ready to manage usage information.
 */
@property (nonatomic, readonly) BOOL initialized;

/**
 * Check if the Database was previously created and existing. Does not tell anything about if the Usage object is initialized or not.
 */
@property (nonatomic, readonly) BOOL dbExists;

/**
 * Number of days to wait before uploading data over 3G. This is to protect 3G data plan.
 */
@property (nonatomic, assign, setter=setTimeFor3GUpload:) NSNumber *timeFor3GUpload;

/**
 * Get shared instance of the Usage Singleton.
 */
+(Usage*) sharedInstance;

/**
 * Initialize the Usage library, read the persisted entries, create the database tables if it's not exists, start the current application session.
 * Need to call first by the application
 * @param url     upload URL; see example
 * @param httpConversationManager  manager to use during upload; see example to configurate
 * @param error NSerror object
 */
-(BOOL)initializeUsageWithURL:(NSURL*)url httpConversationManager:(HttpConversationManager*)httpConversationManager withError:(NSError **)error;

/**
 *  Initialize the Usage library, read the persisted entries, create the database tables if it's not exists,encrypt it with the given key, start the current application session.
 *  Need to call first by the application
 *  @param url     upload URL
 *  @param httpConversationManager     manager to use during upload
 *  @param dataEncryptionKey     encryption key 
 */
-(BOOL)initializeUsageWithURL:(NSURL*)url httpConversationManager:(HttpConversationManager*)httpConversationManager dataEncryptionKey:(NSString*)key withError:(NSError **)error;

/**
 * Start a timer with and stores in memory with the given key. The timer is handled by the Usage library. To stop the timer call [Usage timeEnd:key] with the same key.
 * If the key is nil, no Timer will be started.
 * If the key is already used the pervious timer will be overwritten. If you need handle Timers with the same key please use the (Timer*)makeTimer:key API
 * @param key     Key to identify the timer
 * @param error NSerror object
 */
-(BOOL)timeStart:(NSString *)key withError:(NSError **)error;
/**
 * Stops the timer started with API call [Usage timeStart:key] and persisited the result record into a database
 * @param key     Key to identify the timer
 * @param info    Optional UsageInfo which contains information about the given timer or nil.
 * @param type    Type of the given timer or nil
 * @param error NSerror object
 */
-(BOOL)timeEnd:(NSString *)key info:(UsageInfo *)info type:(NSString *)type withError:(NSError **)error;

/**
 * Creates and starts a timer identified by the given key.
 * @remark Use the stopTimer: API to stop a timer
 * @param key Key to identify the timer. Passing nil will create a new Timer instance (with no key).
 * @param error NSerror object
 */
-(Timer*)makeTimer:(NSString*)key withError:(NSError **)error;

/**
 * Stops and persists the given Timer. Can be used to timers made by [Usage makeTimer:key] API.
 * @param timer   Given timer to be stoped and persisted.
 * @param info    Optional UsageInfo which contains information about the given timer or nil.
 * @param type    Type of the given timer or nil
 * @param error NSerror object
 */
-(BOOL)stopTimer:(Timer *)timer info:(UsageInfo *)info type:(NSString *)type withError:(NSError **)error;

/**
 * Create an usage record with the given key, info, and type and persisted into a database
 * @param key     Key to identify the usage log entry
 * @param info    Optional UsageInfo which contains information about the given usage log or nil
 * @param type    Type of the given usage log or nil
 * @param error NSerror object
 */
-(BOOL)log:(NSString *)key info:(UsageInfo *)info type:(NSString *)type withError:(NSError **)error;

/**
 * Retrieves all the available reports as a formatted JSON string
 * @param error NSerror object
 */
-(NSString*)getReportsWithError:(NSError **)error;

/**
 * Can be used to manually trigger upload of database content. The same amdinistrator policy rules will apply as to the automatic upload uplon initialization.
 * Consider using this only for testing.
 * @param error NSerror object
 */
-(void)uploadReports;

/**
 * Erase database from file system. As a result the checkExists and isInitialized methods should both return NO
 * @param error NSerror object
 */
-(BOOL)destroyWithError:(NSError**) error;

/**
 * Change encryption key of the database.
 * @param oldKey the current encription key used previously, can be nil if newKey is not nil
 * @param newKey the new encription key used previously, can be nil if oldKey is not nil
 * @param error NSerror object
 * Possible options include:
 *   nil -> newKey
 *   oldKey -> newKey
 *   oldKey -> nil
 */
-(BOOL)changeEncryptionKey:(NSString *) oldKey toNewKey:(NSString *) newKey withError:(NSError**) error;

@end
