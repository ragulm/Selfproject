//
//  MAFLogonDeviceUser.h
//  MAFLogonManagerNG
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#ifndef MAFLogonDeviceUser_h
#define MAFLogonDeviceUser_h

#import <Foundation/Foundation.h>

/**
 Enumeration defining the possible scopes of the 'userId' and 'displayName' properties of a 'MAFLogonDeviceUser' object
 */
typedef NS_ENUM(NSInteger, DeviceUserNameScope) {
    /**
     The user name is local to the device and the application and is in no relation with any user information
     maintained by the server(s) MAF Logon communicates with.
     */
    DEVICE,
    
    /**
     The user name is acquired from the server or otherwise ensured that it references a valid user on the server
     MAF Logon communicates with.
     */
    SERVER
};

/**
 This is an immutable value-object storing information about a particular user registered with MAF Logon
 on a particular device within the context of a particular application.
 
 Do not confuse this object with 'MAFLogonDeviceUserRegistrationInfo' which is class that holds a subset of the information found
 in this class only for the purpose of carrying data about a new user during the registration process before the device user is
 actually created.
 */
@interface MAFLogonDeviceUser : NSObject

/**
 The unique device user identifier which is valid within the scope of the application on a concrete device. This property is always
 non-nil.
 */
@property (nonatomic, readonly) NSString* deviceUserId;

/**
 The display name of a user. If it's not available then it is nil.
 */
@property (nonatomic, readonly) NSString* displayName;

/**
 The scope of the display name of the user.
 */
@property (nonatomic, readonly) DeviceUserNameScope scope;

/**
 This flag is YES if the user is using the default passcode and NO in any other case.
 */
@property (nonatomic, readonly) BOOL usingDefaultPasscode;

@end

#endif /* MAFLogonDeviceUser_h */
