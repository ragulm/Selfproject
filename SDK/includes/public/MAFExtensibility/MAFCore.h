//
//  MAFCore.h
//  MAFExtensibility
//
//  Created by Egresits, David on 1/18/12.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFConfigurationManager.h"
#import "MAFUIManager.h"
#import "MAFBOManager.h"
#import "MAFTileCreatorDelegate.h"
#import "MAFUIElementCreatorDelegate.h"

//@interface MAFGlobalContext : NSObject
//
///**
// Add object to global context with the defined key
// @param key_in key of object
// */
//-(void) addObject:(id)object_in withKey:(NSString*)key_in;
//
///**
// Read object from global context
// @param key_in key of object
// @return object if exist, nil if not
// */
//-(id) readObjectWithKey:(NSString*)key_in;
//
///**
// Remove object from global context
// @param key_in key of object
// */
//-(void) deleteObjectWith:(NSString*)key_in;
//
//@end

// ignore deprecations
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-implementations"

@protocol MAFDataSourceAdapter;

@interface MAFCore : NSObject

typedef NS_ENUM(NSUInteger, VALIDATION_RESULT)
{
    CUSTOM_CONFIGURATION_NOT_VALIDATED = 0,
    CUSTOM_CONFIGURATION_NOT_FOUND = 1,
    CUSTOM_CONFIGURATION_FOUND_AND_NOT_VALID = 2,
    CUSTOM_CONFIGURATION_FOUND_AND_VALID = 3,
    CUSTOM_CONFIG_INVALID_SETTINGS = 100,
};

@property (nonatomic, readonly, retain) MAFConfigurationManager* configurationManager;
@property (nonatomic, readonly, retain) MAFUIManager* uiManager;
@property (nonatomic, readonly, retain) MAFBOManager* boManager;
//@property (nonatomic, readonly, retain) MAFGlobalContext* globalContext;

/**
 Sets which configuration file should be used by the framework
 If set to yes, the framework will load the configuration delivered inside the application's main bundle.
 By default it set to NO.
 */
@property (nonatomic, assign) BOOL useBuiltInConfiguration;

@property (nonatomic, readonly, retain) NSString* applicationDataFolder;

/**
 Property to store MAFDataSourceAdapter protocol implementation.
 If implementation is not provided, a MAFExtensibility exception will be thrown if the application tries to access it.
 */
@property (nonatomic, retain, getter = dataSourceAdapter) id<MAFDataSourceAdapter> dataSourceAdapter;

/**
 Property to set path to configuration file.
 Use only if the standard name of configuration file (layout_<phone|tablet>.xml) is not usable. 
 */
@property (nonatomic, retain) NSString* configurationPath;

@property (nonatomic, retain) NSString* applicationSpecificStylePath;

/**
 * Delegate class could be registered here to create or decorate custom Tiles.
 */
@property (nonatomic, assign) id<MAFTileCreatorDelegate> tileCreatorDelegate;

/**
 * Delegate class could be registered here to create or decorate custom UIElements globally for all Tiles.
 */
@property (nonatomic, assign) id<MAFUIElementCreatorDelegate> uiElementCreatorDelegate;

#pragma mark - Initialization

/**
 * Factory Method
 * @return The singleton MAFCore instance
 */
+ (MAFCore*)sharedInstance;
 
#pragma mark - Extensibility Loader APIS

/**
 * Loads the Extensibility framework
 * The configuration xml shall be called layout_<phone|tablet>.xml and must be located in the application's main bundle. If you want to use custom named configuration xml, use loadWithWindow:configurationPath:andCompletionBlock or loadWithWindow:configurationPath:datasourceAdapter:andCompletionBlock instead.
 * @remark Check for non-nil NSError returned in the completion block for potential issues
 * <pre>
 * Usage (on client side)
 * <code>
 * - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
 * {
 *  // ...
 *  // the completion callback should check for error and handle both success and failure cases
 *  [[MAFCore sharedInstance]loadWithWindow:self.window andCompletionBlock:^(NSError* error) {
 *        if(error)
 *        {
 *          // perform error handling (we only log the issue for brevity)
 *          NSLog( @"Error occured during model loading. Domain: %@, error code %i, details:%@", error.domain, error.code, [error.userInfo objectForKey:NSLocalizedDescriptionKey] );
 *        }
 *        else
 *        {
 *          // display the window
 *          [self.window makeKeyAndVisible];
 *        }
 *  }];
 * }
 * ...
 * </code>
 * </pre>
 * @param window_in a valid UIWindow object
 */
-(void) loadWithWindow:(UIWindow*)window_in andCompletionBlock:(void (^)(NSError* error))completionBlock;

/**
 * Loads the Extensibility framework
 * @remark Check for non-nil NSError returned for potential issues
 * @param window_in a valid UIWindow object
 * @return error object, which is nil if the load is successful
 */
-(NSError*) loadWithWindow:(UIWindow *)window_in;

/**
 * Loads the Extensibility framework and injects a custom data source adapter;
    unless you really have to use a custom Data Source Adapter, consider using loadWithWindow:andCompletionBlock: or loadWithWindow:configurationPath:andCompletionBlock: instead
 *
 * @remark Check for non-nil NSError returned in the completion block for potential issues
 * @param window_in a valid UIWindow object
 * @param dataSourceAdapter_in Custom DataSourceAdapter; shall adhere to MAFDataSourceAdapter protocol
 * @see MAFDataSourceAdapterProtocol
 */
-(void) loadWithWindow:(UIWindow*)window_in datasourceAdapter:(id<MAFDataSourceAdapter>)dataSourceAdapter_in andCompletionBlock:(void (^)(NSError* error))completionBlock;

/**
 * Loads the default, the application specific and the provisioned styles in case these are available.
 * @remark Call in didFinishLaunchingWithOptions of your AppDelegate. Call only in case the application has native
 * parts as well. In case the application is fully MAF driven, loadWithWindow takes care of this step.
 */
-(void) loadStyles;

#pragma mark - Provisioning and Configuration Management
/**
 * Unzips the provided file to documents folder
 * @param path_in path of zipped file
 */
-(void) passConfigurationBundle:(NSString*) configPackagePath;

/**
 * Validates the provided custom configuration and returns the result
 * @param path_in path of custom configuration xml
 * @return VALIDATION_RESULT enum
 * @remark if the useBuiltInConfiguration is set to YES then the method will return CUSTOM_CONFIGURATION_INVALID value
 * @discussion Deprecated, should call validateCustomConfiguration instead.
 */
-(VALIDATION_RESULT) validateCustomConfiguration:(NSString*) path_in DEPRECATED_ATTRIBUTE;
@property (nonatomic, readonly) VALIDATION_RESULT validateCustomConfiguration;

/**
 * Obtains the data of the specified resource from the provisioning provided bundle.
 * @param name_in the name of the resource
 * @remark name_in can be either a single file name with extension (e.g. 'A.png'),
 *          or a relative path to the resource file (e.g. 'pictures/A.png')
 * @return The resource's byte content, or nil in case the resource does not exist or not found
 */
-(NSData*) getProvisioningResourceContent:(NSString*)name_in;

/**
 * Obtains the configuration file from the provisioning provided bundle.
 * @param path_in the path of the resource inside the bundle, e.g. tiles/layout_phone.xml
 * @return The configuration content as string, or nil in case the configuration does not exist or not found
 */
-(NSString*) configurationByPathAsString:(NSString*) path_in;

/**
 * Obtains the configuration file from the provisioning provided bundle.
 * @param path_in the path of the resource inside the bundle, e.g. tiles/layout_phone.xml
 * @return The configuration's byte content, or nil in case the configuration does not exist or not found
 */
-(NSData*) configurationByPath:(NSString*) path_in;

/**
 * Add application specific configuration to the framework. The provided content will be persisted and later
 * it can be retrieved using configurationByPath methods.
 * @param configData_in the content of custom configuration
 * @param name_in identifier of custom configuration
 * @param overwrite_in overwrite existing custom configuration
 * @param error_in error description if could not persist
 * @return result of operation
 */
-(BOOL) addCustomConfiguration:(NSData*) configData_in withName:(NSString*) name_in overwriteIfExists:(BOOL)overwrite_in error:(NSError**) error_in;


#pragma mark - Accessing Localized Strings

/**
 * Obtains localized text for the provided key.
 * @param key_in Key of localized text in Localizable.strings file
 * @return The localized text as string or the key if text not found.
 */
-(NSString*) localizedText:(NSString*) key_in;


#if OFFICIAL_PERF_MEASUREMENT

#pragma mark -
#pragma mark Performance Measurement
/**
 * Enable or disable performance logging
 * @remark Performance logging is disabled by default
 * @param isConsoleEnabled_in if YES, logs to XCode console
 * @param isFileEnabled_in if YES, logs to a file, which can be checked in iTunes (enable iTunes file sharing for your app to allow retrieving this file!)
 */
+(void) enablePerformanceLogging:(BOOL)enabled outputToConsole:(BOOL)isConsoleEnabled_in outputToFile:(BOOL)isFileEnabled_in;

/**
 * Returns the current performance logging status
 * The default is disabled
 */
+(BOOL) isPerformanceLoggingEnabled;

#endif

#pragma mark -
#pragma mark Versioning

/**
 * Retrieves the version number of the MAF Extensibility library
 * @remark Version number is generated on the build server
 */
+(NSString*) libMAFExtVersion;

#pragma mark -
#pragma mark Error Handling

/**
 * Returns the state of the built-in error handler
 * @remark Enabled by default
 * @see MAFErrorHandler
 */
+(BOOL) isBuiltinErrorHandlerEnabled;

/**
 * Allows disabling or enabling the internal error handler
 * The error handler automatically intercepts and logs uncaught exceptions
 * @remark Enabled by default
 * @see MAFErrorHandler
 */
+(void) useBuiltInErrorHandler:(BOOL)enabled_in;

@end
