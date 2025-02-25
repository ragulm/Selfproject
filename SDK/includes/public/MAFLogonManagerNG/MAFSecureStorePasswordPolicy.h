//
//  MAFSecureStorePasswordPolicy.
//
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Describes the password policy.
 */
@interface MAFSecureStorePasswordPolicy:NSObject<NSCopying>

/**
 *  Compares instance with another instance
 *
 *  @param object <#object description#>
 *
 *  @return <#return value description#>
 */
- (NSComparisonResult)compare:(MAFSecureStorePasswordPolicy*)policy;

/**
 The password should contain digits.
 */
@property BOOL hasDigits;

/**
 The password should contain lower case letters.
 */
@property BOOL hasLowerCaseLetters;

/**
 The password should contain special letters.
 */
@property BOOL hasSpecialLetters;

/**
 The password should contain upper case letters.
 */
@property BOOL hasUpperCaseLetters;

/**
 The default password is allowed.
 */
@property BOOL isDefaultPasswordAllowed;

/**
 The password policy is in use.
 */
@property BOOL isEnabled;

/**
 The number of days after the password will expires.
 */
@property NSInteger expirationDays;

/**
 The password policy will be locked after the this number of seconds.
 */
@property NSInteger lockTimeout;

/**
 The password length minimum.
 */
@property NSInteger minLength;

/**
 The password should contain minimum these number of unique characters.
 */
@property NSInteger minUniqueChars;

/**
 The number of trying giving password.
 */
@property NSInteger retryLimit;

@end

