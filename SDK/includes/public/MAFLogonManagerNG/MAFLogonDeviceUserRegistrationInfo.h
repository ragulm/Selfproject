//
//  MAFLogonDeviceUserRegistrationInfo.h
//  MAFLogonManagerNG
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This class holds basic information about a device-specific user user that is about to be created. An object of this
 type is used solely and exclusively during the registration process. It does not represent an already registered user.
 
 During registration in multi-user mode, an object of this type is carried by the 'MAFLogonRegistrationContext'.
 */
@interface MAFLogonDeviceUserRegistrationInfo : NSObject

/**
 The display name of the user that is about to be registered.
 */
@property (nonatomic) NSString* displayName;

@end
