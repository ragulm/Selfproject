//
//  MAFApplicationSettings.h
//  MAFLogonManagerNG
//
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import "MAFLogonRegistrationContext.h"
#import "MAFLogonSMPConstants.h"
#import "MAFApplicationSettingsProperty.h"
#import "MAFApplicationSettingsReadOnlyProperty.h"
#import "MAFApplicationSettingsCapability.h"

@class HttpConversationManager;

typedef enum ApplicationSettingsInputFormats {
    ApplicationSettingsInputFormatXML,
    ApplicationSettingsInputFormatJSON
}ApplicationSettingsInputFormats;

@interface MAFDeviceInfo : NSObject

/*
 * The model of the device
 */
@property (nonatomic, copy) NSString* model;

/*
 * The type of the device
 */
@property (nonatomic, copy) NSString* type;

/*
 * The subType of the device
 */
@property (nonatomic, copy) NSString* subType;

/*
 * The phoneNumber of the device
 */
@property (nonatomic, copy) NSString* phoneNumber;

/*
 * The IMSI of the device
 */
@property (nonatomic, copy) NSString* imsi;


@end


@interface MAFUsageSettings : NSObject

/*
 * Indicates whether the application specific client usage keys are enabled or not
 */
@property BOOL isAppSpecificClientUsageKeysEnabled;

/*
 * Shows if the client usage reports should be collected or not
 */
@property BOOL shouldCollectClientUsageReports;

/*
 * Indicates how many days Usage should wait before trying to send data on 3G.
 */
@property NSUInteger usage3GUploadTime;

@end


@interface MAFApplicationSettings : NSDictionary <NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic, strong) HttpConversationManager* conversationManager;

/*
 * Download Settings from SMP
 * @param completionBlock Contains the error if the download failed, nil otherwise
 */
-(void)downloadSettingsWithCompletionBlock:(void (^)(NSError*))completionBlock;

/**
 * Get the writable ApplicationSettings properties from the actual ApplicationSettings values
 * @param error Error object is filled in case of problem occurs during getting the writable settings. This can happen for example in compatibility mode, when the user upgrades from SP07 or prevoius version to newer and does not call downloadSettingsWithCompletionBlock: to refresh to the latest. After downloadSettingsWithCompletionBlock: is called it will be fully functional.
 */
-(NSDictionary*)writableSettingsWithError:(NSError**)error;

/*
 * Updates the Settings on the SMP server
 * @param newSettings The settings needs to be updated on the SMP server
 * @param completionBlock Contains the error if the update failed, nil otherwise
 */
-(void)updateSettings:(NSDictionary*)newSettings completionBlock:(void (^)(NSError*))completionBlock;

/*
 * Updates the deviceInfo on the SMP server
 * @param deviceInfo The deviceInfo contains the device specific data: model, type, subType, phoneNumber
 * @param completionBlock Contains the error if the update failed, nil otherwise
 */
-(void)updateDeviceInfo:(MAFDeviceInfo*)deviceInfo completionBlock:(void (^)(NSError*))completionBlock;

/*
 * Setting data can be accessed with it.
 * @param key Key of the Setting object
 * @returns MAFApplicationSettingsReadOnlyProperty of the setting
 */
-(MAFApplicationSettingsReadOnlyProperty*)objectForKey:(id<NSCopying>)key;

/*
 * The ApplicationEndpoint value from the settings
 */
@property (nonatomic, readonly) NSURL* applicationEndpointURL;

/*
 * The ApplicationConnectionID value from the settings
 */
@property (nonatomic, readonly) NSString* applicationConnectionId;

/*
 * The UserName value from the settings
 */
@property (nonatomic, readonly) NSString* userName;

/*
 * The DeviceInfo values from the settings
 */
@property (nonatomic, readonly) MAFDeviceInfo* deviceInfo;

/*
 * Readonly dictionary for the FeatureVectorPolicy entries
 * Keys are the id-s of the FeatureVectors
 * Values are MAFApplicationSettingsFeatureVectorPolicy class istances
 */
@property (nonatomic, readonly) NSDictionary *featureVectorPolicies;

/*
 * Usage concerned values from the settings
 */
@property(nonatomic, readonly) MAFUsageSettings *usageSettings;

/*
* Readonly dictionary for the Capability entries
* Keys are the categories of the Capabilities
* Values are MAFApplicationSettingsCapability class istances
*/
@property(nonatomic, readonly) NSDictionary *capabilities;

@end
