//
//  MAFLogonRegistrationContext.h
//  MAFLogonCore
//
//  Copyright (c) 2013 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFLogonDeviceUserRegistrationInfo.h"

#define keyMAFLogonConnectionDataApplicationSettings            @"keyMAFLogonConnectionDataApplicationSettings"
#define keyMAFLogonConnectionDataCertificateIdentifyReference   @"keyMAFLogonConnectionDataCertificateIdentifyReference"

/**
 MAF specific Password Policy to store more values
 */

@class MAFSecureStorePasswordPolicy;

@interface MAFLogonRegistrationContext : NSObject<NSCopying, NSMutableCopying, NSCoding>

/**
 Application id.
 Set after the registration is successful
 **/
@property (copy) NSString* applicationId;

/**
 Host of the server.
 **/
@property (copy) NSString* serverHost;

/**
 Domain for server. Can be used in case of SMP communication.
 **/
@property (copy) NSString* domain;

/**
 Resource path on the server. 
 The path is used mainly for path based reverse proxy but can contains custom relay server path as well.
 **/
@property (copy) NSString* resourcePath;

/**
 Port of the server.
 **/
@property (assign) int serverPort;

/**
 Marks whether the server should be accessed in a secure way
 **/
@property (assign) BOOL isHttps;

/**
 Username in the backend
 **/
@property (copy) NSString* backendUserName;

/**
 Password for the backend user
 **/
@property (copy) NSString* backendPassword;

/**
 Password for certificate should download from a server. Used in case of Afaria certificate mode.
 */
@property (copy) NSString* afariaCertificatePassword;

/**
 FarmId of the server. Can be nil. Used in case of Relay server or SitMinder.
 **/
@property (copy) NSString* farmId;

/**
 Id of the communicator manager which will be used for performing the logon
 **/
@property (copy) NSString* communicatorId;

/**
 Security configuration. If nil the default configuration will be used.
 **/
@property (copy) NSString* securityConfig;

/**
 Holds all the connection related data coming from the server. Filled after a successful registration.
 Readonly value.
 **/
@property (strong) NSMutableDictionary* connectionData;

/**
 Contains the application endpoint url after a successful registration.
 */
@property (copy) NSString *applicationEndpointURL;

/**
 Mobile User. Used in case of IMO manual user creation.
 **/
@property (copy) NSString* mobileUser;

/**
 Activation Code. Used in case of IMO manual user creation.
 **/
@property (copy) NSString* activationCode;

/**
 Indentifies the type of the web server: needed for SUP RelayServer mode. Determined automatically during registration if possible.
 */
@property (copy) NSString *webServerType;

/**
 The key string which identifies the client on the gateway. Used in Gateway only registration mode. The value will be used as adding the parameter: sap-client=<gateway client>
 */
@property (copy) NSString *gatewayClient;

/**
 The custom path of the ping url on the gateway. Used in case of Gateway only registration mode.
 */
@property (copy) NSString *gatewayPingPath;

/**
 Challenge code, used with onboarding portal
 **/
@property (copy)NSString* challengeCode;

/**
 @warning deprecated, registrationServiceVersion will be readonly after SP14
 Registration service version
 Possible values: "default", "latest", "v1", "v2", "v3", "v4"
 If other value set than "default", only the specified version will be used, no fallback to other version
 default : tries to get the supported registration service version from the server, if got it, it will use that. If not, it will try to register using the most recent registration service version, if fails, it will fallback to the previous ones.
 latest: always the highest version which is available on the server, no fallback
**/
@property (copy) NSString* registrationServiceVersion DEPRECATED_ATTRIBUTE;

/**
 This is the info object describing the user to be registered. It is utilized only in multi-user mode as follows:
 <ul>
    <li>During registration, its 'displayName' property is attempted to be inferred from the server. If it succeeds its value becomes non-nil.</li>
    <li>If the value is nil then it must be set (for ex.: via an input field on the UI) in the context passed to 'persistRegistration'.</li>
 </ul>
 In multi-user mode, this property is set to a non-nil value by the 'registerWithContext' and read by the 'persistRegistration' method of MAFLogonCore. In single-user mode this 
 property is unused.
 */
@property (strong) MAFLogonDeviceUserRegistrationInfo* userRegistrationInfo;

@end
