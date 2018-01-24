/**
 *  DataVault.h
 *
 *  Class to store given data in a secure manner
 *  An application can choose to store multiple items of data withing the vault
 *  Each data can be accessed by a name (like storing DB encryption Key and X.509 certificate etc.)
 *  The vault is accessed by unique vaultId
 *  DataVault is unlocked by a Password
 */

#ifndef __DATAVAULT_H__
#define __DATAVAULT_H__

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - Defines and Constants
/**
 *  ID of the standard messaging data vault.
 *  Messaging vault must be unlocked before calling startEngine which will use the key from this vault to decrypt the messaging queue database
 */
extern NSString * const kMessagingDataVaultID;

/**
 *  Standard password and salt used in "No" security mode
 */
extern NSString * const kDVStandardPassword;
extern NSString * const kDVStandardSalt;

#define kDVUnlimitedRetriesAllowed   0 ///< Use this constant for 'retryLimit' if unlimited failure attempts can be allowed during unlock
#define kDVNoLockTimeout             0 ///< Use this constant for 'lockTimeout' if application requires user to enter PIN everytime the app is launched
#define kDVNameLengthLimit         255 ///< This is the limit of names used in DataVault, including vault ID and name of value

/**
 *  Default values for password policy attributes
 */
#define kPwdPolicyDefValueDefPwdAllowed   1     ///< Default password policy allowed: YES
#define kPwdPolicyDefValueMinLength       8     ///< Minimum length for user password: 8
#define kPwdPolicyDefValueHasDigits       0     ///< Passwords must contain a minimum of 1 numeric character [0-9]: NO
#define kPwdPolicyDefValueHasUpper        0     ///< Passwords must contain a minimum of 1 upper case letter [A-Z]: NO
#define kPwdPolicyDefValueHasLower        0     ///< Passwords must contain a minimum of 1 lower case letter [a-z]: NO

#define kPwdPolicyDefValueHasSpecial      0     ///< Passwords must contain a minimum of 1 special character: NO
#define kPwdPolicyDefValueExpirationDays  0     ///< Password policy expiration (in days): ∞
#define kPwdPolicyDefValueMinUniqueChars  0     ///< Min. number of unique characters that the password shall contain: 0
#define kPwdPolicyDefValueLockTimeout     kDVNoLockTimeout
#define kPwdPolicyDefValueRetryLimit      kDVUnlimitedRetriesAllowed

extern NSString * const DataVaultExceptionName; ///< Name of the exception thrown for DataVault errors

/**
 *  Error codes for Datavault exception thrown
 */
#define kDataVaultExceptionErrorCodeUnknown           0           ///< doesn't occur in iOS; included for consistency with other platforms
#define kDataVaultExceptionErrorCodeAlreadyExists     1
#define kDataVaultExceptionErrorCodeConversionError   2           ///< doesn't occur in iOS; included for consistency with other platforms
#define kDataVaultExceptionErrorCodeDoesNotExist      3
#define kDataVaultExceptionErrorCodeInvalidArg        4
#define kDataVaultExceptionErrorCodeInvalidPassword   5
#define kDataVaultExceptionErrorCodeIOReadError       6           
#define kDataVaultExceptionErrorCodeIOWriteError      7           
#define kDataVaultExceptionErrorCodeLocked            8
#define kDataVaultExceptionErrorCodeNameTooLong       9
#define kDataVaultExceptionErrorCodeValueTooLarge     10          ///< doesn't occur in iOS; included for consistency with other platforms
#define kDataVaultExceptionErrorCodeDataTypeErrror    12
#define kDataVaultExceptionErrorCodeOutOfMemory       13

/**
 *  Error codes for password policy violations
 */
#define kDataVaultExceptionErrorCodePasswordRequired        50
#define kDataVaultExceptionErrorCodePasswordUnderMinLength  51
#define kDataVaultExceptionErrorCodePasswordRequiresDigit   52
#define kDataVaultExceptionErrorCodePasswordRequiresUpper   53
#define kDataVaultExceptionErrorCodePasswordRequiresLower   54
#define kDataVaultExceptionErrorCodePasswordRequiresSpecial 55
#define kDataVaultExceptionErrorCodePasswordUnderMinUnique  56
#define kDataVaultExceptionErrorCodePasswordExpired         57

/**
 *  Reasons/Error messages for exception thrown
 */
extern NSString * const kDataVaultExceptionReasonAlreadyExists;
extern NSString * const kDataVaultExceptionReasonDoesNotExist;
extern NSString * const kDataVaultExceptionReasonInvalidArg;
extern NSString * const kDataVaultExceptionReasonInvalidPassword;
extern NSString * const kDataVaultExceptionReasonLocked;
extern NSString * const kDataVaultExceptionReasonDataTypeError;
extern NSString * const kDataVaultExceptionReasonOutOfMemory;
extern NSString * const kDataVaultExceptionReasonNameTooLong;

/**
 *  Reasons/Error messages for password policy violations
 */
extern NSString * const kDataVaultExceptionReasonPasswordRequired;
extern NSString * const kDataVaultExceptionReasonPasswordUnderMinLength;
extern NSString * const kDataVaultExceptionReasonPasswordRequiresDigit;
extern NSString * const kDataVaultExceptionReasonPasswordRequiresUpper;
extern NSString * const kDataVaultExceptionReasonPasswordRequiresLower;
extern NSString * const kDataVaultExceptionReasonPasswordRequiresSpecial;
extern NSString * const kDataVaultExceptionReasonPasswordUnderMinUniqueChars;
extern NSString * const kDataVaultExceptionReasonIORead;
extern NSString * const kDataVaultExceptionReasonIOWrite;
extern NSString * const kDataVaultExceptionReasonPasswordExpired;

typedef NS_ENUM(NSInteger, DVDataType) {
   kDVDataTypeUnknown,
   kDVDataTypeString,
   kDVDataTypeBinary
};

#pragma mark - Password Policy

@interface DVPasswordPolicy : NSObject

@property( nonatomic, readonly ) BOOL isDefaultPolicy; ///< returns whether the instance contains exclusively default values

@property (nonatomic, assign) BOOL defaultPasswordAllowed;
@property (nonatomic, assign) NSInteger minLength;
@property (nonatomic, assign) BOOL hasDigits;
@property (nonatomic, assign) BOOL hasUpper;
@property (nonatomic, assign) BOOL hasLower;
@property (nonatomic, assign) BOOL hasSpecial;
@property (nonatomic, assign) NSInteger expirationDays;
@property (nonatomic, assign) NSInteger minUniqueChars;
@property (nonatomic, assign) NSInteger lockTimeout;
@property (nonatomic, assign) NSInteger retryLimit;

@end

#pragma mark - Data name / type structure

@interface DVDataName : NSObject {
   NSString * name;
   DVDataType type;
}

@property (nonatomic, strong) NSString * name;
@property (nonatomic, assign) DVDataType type;

@end

#pragma mark - Data Vault

@interface DataVault : NSObject

#pragma mark - Public instance methods supported by this class

/**
 *  Class method specific for iPhone implementation.
 *  This method must be called before accessing any DataVault methods.
 *
 *  @param accessGroup Access group must be set only if DataVault must be shared by more than one application.
 *  If the DataVault is used only by one application access group should not be set.
 *  This access group in keychain-access-groups property of entitlements plist file is usually in format "<BundleSeedID>.com.yourcompany.DataVault".
 */
+ (void)setAccessGroup:(NSString *)accessGroup;

/**
 *  Creates a new vault and returns it with unlocked state.
 *
 *  @param dataVaultID  *  If a vault already exists with same name this will throw exception with kDataVaultExceptionReasonAlreadyExists as reason
 *  Throws exception with reason kDataVaultExceptionReasonNameTooLong when dataVaultID is longer than 255 bytes.
 *  @param aPassword   password for this DataVault instance
 *
 *  @return unlocked DataVault instance
 */
+ (DataVault*)createVault:(NSString *)dataVaultID password:(NSString *)aPassword;

/**
 *  Deprecated, use createVault:password:
 */
+ (DataVault*)createVault:(NSString *)dataVaultID password:(NSString *)aPassword salt:(NSString *)aSalt __deprecated_msg("Use createVault:password:");

/**
 *  Returns vault with given ID. This vault is in locked state.
 *  @note Throws an exception if a vault does not exist with given ID (kDataVaultExceptionReasonDoesNotExist).
 *  @note Throws exception (with reason kDataVaultExceptionReasonIORead) if error happens when reading keychain item.
 *
 *  @param dataVaultID vault ID
 *
 *  @return vault with given ID
 */
+ (DataVault*)getVault:(NSString *)dataVaultID;

/**
 *  Returns YES if a vault with given ID exists.
 *
 *  @param dataVaultID vault ID
 *
 *  @return boolean value
 */
+ (BOOL)vaultExists:(NSString *)dataVaultID;

/**
 *  Returns YES if a vault with given ID exists.
 *  @note Throws exception (with reason kDataVaultExceptionReasonIORead) if error happens when reading keychain item.
 *
 *  @param dataVaultID vault ID
 *
 *  @return boolean value
 */
+ (BOOL)vaultExists2:(NSString *)dataVaultID;

/**
 *  Deletes vault with given ID.
 *  @note Throws exception if a vault does not exist with given ID (kDataVaultExceptionReasonDoesNotExist).
 *
 *  @param dataVaultID vault ID
 */
+ (void)deleteVault:(NSString *)dataVaultID;

/**
 *  Unlocks the vault with given password.
 *  Should be called before accessing the data stored in the vault.
 *  Do not use for DataVaults created by older libraries.
 *  @note Throws exception with kDataVaultExceptionReasonInvalidPassword as reason if password given is incorrect
 *
 *  @param curPassword password for the vault
 */
- (void)unlock:(NSString *)curPassword;

/**
 *  Unlock will migrate the DataVault to the latest version which uses always a generated salt. Use this method for DataVaults created by previous versions of DataVault and switch to the new method after all the DataVaults are migrated.
 */
- (void)unlock:(NSString *)curPassword salt:(NSString *)curSalt __deprecated_msg("Use unlock: for new development.");

/**
 *  Locks the vault.
 *  If the vault is already locked calling this method has no effect.
 */
- (void)lock;

/**
 *  Indicates if the vault is currently locked.
 *
 *  @return Returns YES if vault is locked and NO if vault is unlocked.
 */
@property (nonatomic, getter=isLocked, readonly) BOOL locked;

/**
 *  Indicates if default password is used.
 *
 *  @return Return YES if default password is used.
 */
@property (nonatomic, getter=isDefaultPasswordUsed, readonly) BOOL defaultPasswordUsed;

/**
 *  Changes the password of vault.
 *  The vault must be unlocked before changing the password.
 *  If newPassword is nil then a default password will be generated if password policy allows it.
 *  Always generates a salt.
 *  @note Throws exception (with reason kDataVaultExceptionReasonPassword...) if newPassword is not compatible with password policy (if it is set)
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *
 *  @param newPassword the new password for the vault
 */
- (void)changePassword:(NSString *)newPassword;

/**
 *  Changes the password of vault.
 *  The vault must be unlocked before changing the password.
 *  If newSalt is nil then a salt will be generated.
 *  If newPassword is nil then a default password will be generated if password policy allows it.
 *  @note Throws exception (with reason kDataVaultExceptionReasonPassword...) if newPassword is not compatible with password policy (if it is set).
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked.
 *
 *  @param newPassword the new password for the vault
 *  @param newSalt     the new salt
 */
- (void)changePassword:(NSString *)newPassword salt:(NSString *)newSalt __deprecated_msg("Use changePassword: for new development. Unlock will migrate the DataVault to the latest version which uses always a generated salt.");

/**
 *  Overloaded version of changePassword.
 *  When the data vault is locked use this version to unlock and change the password.
 *  @note Throws exception with kDataVaultExceptionReasonInvalidPassword as reason if current password is incorrect.
 *
 *  @param curPassword current password
 *  @param curSalt     current salt
 *  @param newPassword the new password
 *  @param newSalt     the new salt
 */
- (void)changePassword:(NSString *)curPassword currentSalt:(NSString *)curSalt newPassword:(NSString *)newPassword newSalt:(NSString *)newSalt __deprecated_msg("Use changePassword:newPassword: for new development. Unlock will migrate the DataVault to the latest version which uses always a generated salt. ");

/**
 *  When the data vault is locked use this version to unlock and change the password.
 *  Do not use for DataVaults created by older libraries.
 *  @note Throws exception with kDataVaultExceptionReasonInvalidPassword as reason if current password is incorrect.
 *
 *  @param curPassword the actual password for the vault
 *  @param newPassword the new password for the vault
 */
- (void)changePassword:(NSString *)curPassword newPassword:(NSString *)newPassword;

/**
 *  Get the data value for given name.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if data with given name does not exist in the vault.
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked.
 *  @note Throws exception (with reason kDataVaultExceptionReasonIORead) if keychain item is not accessible.
 *
 *  @param name name of the data value
 *
 *  @return data value for the name
 */
- (NSData *)getValue:(NSString *)name;

/**
 *  Set the data value for given name.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if data with given name does not exist in the vault
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note Throws exception (with reason kDataVaultExceptionReasonNameTooLong) if name is longer than 255 bytes.
 *
 *  @param name name of the data value
 *  @param data data value for the name
 */
- (void)setValue:(NSString *)name value:(NSData *)data;

/**
 *  Get the string form of data value for given name.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if data with given name does not exist in the vault
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note Throws exception (with reason kDataVaultExceptionReasonConversionError) if unable to convert the data to string
 *  @note Throws exception (with reason kDataVaultExceptionReasonIORead) if keychain item is not accessible
 *
 *  @param name name of the data value
 *
 *  @return data value as string
 */
- (NSString *)getString:(NSString *)name;

/**
 *  Set the string form of data value for given name.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if data with given name does not exist in the vault
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note Throws exception (with reason kDataVaultExceptionReasonConversionError) if unable to convert the data from string
 *  @note Throws exception (with reason kDataVaultExceptionReasonNameTooLong) if name is longer than 255 bytes.
 *
 *  @param name    name of the data value
 *  @param strData value as string
 */
- (void)setString:(NSString *)name value:(NSString *)strData;

/**
 *  Deletes the value from the vault.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if data with given name is nil or empty
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *
 *  @param name name of the data value
 */
- (void)deleteValue:(NSString *)name;

/**
 *  Fetches the name of all the data stored in the vault.
 *  Returns array of DVDataName objects.
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note Throws exception (with reason kDataVaultExceptionReasonIORead) if keychain item is not accessible
 *
 *  @return array of names
 */
@property (nonatomic, getter=getDataNames, readonly, copy) NSArray *dataNames;

/**
 *  Sets or fetches the password policy
 *  If password policy is not set, the getter returns DVPasswordPolicy object with default values in each of its attribute.
 *  When setting, if nil is passed as pwdPolicy, default values apply for each attribute
 *
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if there is no datavault instance for given ID
 *
 *  @return password policy
 */
@property (nonatomic, getter=getPasswordPolicy, strong) DVPasswordPolicy *passwordPolicy;

/**
 *  Resets the lock timeout effectively extending the timeout period from now.
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked.
 */
- (void)resetLockTimeout;

// *  Get the lock timeout value.
// *  kDVNoLockTimeout is returned if no lock timeout is specified.
// *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
// *  @note This API will be deprecated. Instead use lockTimeout member in DVPasswordPolicy object.
// *
// *  @return lock timeout value
- (NSInteger) getLockTimeout __deprecated_msg("Use lockTimeout member in DVPasswordPolicy object instead.");

/**
 *  Set the lock timeout value.
 *  kDVNoLockTimeout can be passed to remove any existing lock timeout.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if invalid timeout (like negative) value is passed
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note This API will be deprecated. Instead use lockTimeout member in DVPasswordPolicy object.
 *
 *  @param timeout lock timeout value
 */
- (void)setLockTimeout:(NSInteger)timeout __deprecated_msg("Use lockTimeout member in DVPasswordPolicy object instead.");

// *  Get retry limit value.
// *  kDVUnlimitedRetriesAllowed indicates unlimited retries are allowed.
//*  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
//*  @note  This API is deprecated. Instead use retryLimit member in DVPasswordPolicy object
// *
// *  @return retry limit value
- (NSInteger) getRetryLimit __deprecated_msg("Use retryLimit member in DVPasswordPolicy object instead.");

/**
 *  Set the retry limit value.
 *  kDVUnlimitedRetriesAllowed can be passed to remove any existing retry limits.
 *  @note Throws exception (with reason kDataVaultExceptionReasonInvalidArg) if invalid retry limit (like negative) value is passed
 *  @note Throws exception (with reason kDataVaultExceptionReasonLocked) if vault is locked
 *  @note This API is deprecated. Instead use retryLimit member in DVPasswordPolicy object
 *
 *  @param retryLimitValue retry limit value
 */
- (void)setRetryLimit:(NSInteger)retryLimitValue __deprecated_msg("Use retryLimit member in DVPasswordPolicy object instead.");

#pragma mark - Encrypt / decrypt APIs for custom data
/**
 *  Encrypts data using an AES 256 encryption key
 *  @remark For large data use the stream-based API version
 *  @see encrypt:toStream:completion:
 *  @param data  data to encrypt
 *  @param error nil on success
 *
 *  @return encrypted data
 */
-(NSData*) encrypt:(NSData*)data error:(NSError**)error;

/**
 *  Decrypts data previously encoded using encrypt:error:
 *  @remark For large data use the stream-based API version
 *  @see decrypt:toStream:completion:
 *
 *  @param data  data to decrypt
 *  @param error nil on success
 *
 *  @return unencrypted data
 */
-(NSData*) decrypt:(NSData*)data error:(NSError**)error;

/**
 *  Encrypts streamed data; use for large data sets
 *  @remark Both stream parameters should be mapped to file to avoid low memory conditions
 *
 *  @param unencryptedStream  stream pointing to data to be encrypted
 *  @param encryptedStreamRef encrypted data gets written to this stream. Stream should be mapped to a file.
 *  @param completionBlock    invoked upon completion
 *
 *  Usage example:
    @code
    // open and unlock the datavault
    DataVault* m_DataVault = [DataVault getVault:datavaultId];
    [m_DataVault unlock:nil];
 
    // prepare file mapped input stream pointing to data to be encrypted
    NSString* toEncPath = [NSString stringWithFormat:@"%@/%@", NSTemporaryDirectory(), @"toEncData.txt"];
    NSInputStream* inputStream = [NSInputStream inputStreamWithFileAtPath:toEncPath];
    [inputStream open];
 
    // prepare file mapped output stream for encrypted data
    NSString* path = [NSString stringWithFormat:@"%@/%@", NSTemporaryDirectory(), @"encryptedData.txt"];
 
    NSOutputStream* outputStream = [NSOutputStream outputStreamToFileAtPath:path append:NO];
    [outputStream open];

    // encrypt data
    [m_DataVault encrypt:inputStream toStream:outputStream completion:^(NSError *error) {
        if( error )
        {
            NSString* errMessage = [NSString stringWithFormat:@"Error occured while encrypting: %@", [error debugDescription]);
        }
        else
        {
            // data succesfully encrypted to file "encryptedData.txt"
            ...
        }
 
        [inputStream close];
        [outputStream close];
    }];
    @endcode
 */
-(void) encrypt:(NSInputStream*)unencryptedStream
       toStream:(NSOutputStream*)encryptedStream
     completion:( void (^)( NSError* error ) )completionBlock;

/**
 *  Decrypts streamed data; use for large data sets
 *  @remark Both stream parameters should be mapped to file to avoid low memory conditions
 *
 *  @param encryptedStream stream pointing to data to be encrypted
 *  @param unencryptedStreamRef decrypted data gets written to this stream. Stream should be mapped to a file.
 *  @param completionBlock      invoked upon completion
 *
 *  Usage example:
    @code
    // open and unlock the datavault
    DataVault* m_DataVault = [DataVault getVault:datavaultId];
    [m_DataVault unlock:nil];
 
    // prepare file mapped input stream pointing to encrypted data
    NSString* toDecPath = [NSString stringWithFormat:@"%@/%@", NSTemporaryDirectory(), @"toDecData.txt"];
    NSInputStream* inputStream = [NSInputStream inputStreamWithFileAtPath:toDecPath];
    [inputStream open];
 
    // prepare file mapped output stream for unencrypted data
    NSString* path = [NSString stringWithFormat:@"%@/%@", NSTemporaryDirectory(), @"unencryptedData.txt"];
 
    NSOutputStream* outputStream = [NSOutputStream outputStreamToFileAtPath:path append:NO];
    [outputStream open];
 
    // decrypt data
    [m_DataVault decrypt:inputStream toStream:outputStream completion:^(NSError *error) {
        if( error )
        {
            NSString* errMessage = [NSString stringWithFormat:@"Error occured while decrypting: %@", [error debugDescription]);
        }
        else
        {
            // data succesfully unencrypted to file "unencryptedData.txt"
            ...
        }
 
        [inputStream close];
        [outputStream close];
    }];
    @endcode
 */
-(void) decrypt:(NSInputStream*)encryptedStream
       toStream:(NSOutputStream*)unencryptedStream
     completion:( void (^)( NSError* error ) )completionBlock;

@end

#pragma mark - DataVault Exception
/**
 *  Exception used in DataVault
 */
@interface DataVaultException : NSException
/**
 *  If errorCode, errorMessage and nativeErrorCode are provided when throwing DataVaultException, they are stored in
 *  [NSException userInfo] NSDictionary. 
 *
 *  @param reason reason of the exceptions
 *
 *  @return DataVaultException
 */
- (instancetype)initWithReason: (NSString *)reason;

/**
 *  If errorCode, errorMessage and nativeErrorCode are provided when throwing DataVaultException, they are stored in
 *  [NSException userInfo] NSDictionary. Using the following key to retrieve their value from the dictionary:
 *  key for errorCode:         "ErrorCode"
 *  key for errorMessage:      "ErrorMessage"
 *
 *  @param errorCode    the error code
 *  @param errorMessage error message
 *
 *  @return DataVaultException
 */
- (instancetype)initWithErrorAndMessage: (int)errorCode message:(NSString *)errorMessage;

 /**
 *  If errorCode, errorMessage and nativeErrorCode are provided when throwing DataVaultException, they are stored in
 *  [NSException userInfo] NSDictionary. Using the following key to retrieve their value from the dictionary:
 *  key for errorCode:         "ErrorCode"
 *  key for errorMessage:      "ErrorMessage"
 *  key for nativeErrorCode:   "NativeErrorCode"
 *
 *  @param errorCode       the error code
 *  @param errorMessage    error message
 *  @param nativeErrorCode native error code
 *
 *  @return DataVaultException
 */
- (instancetype)initWithErrorAndMessage: (int)errorCode message:(NSString *)errorMessage nativeError:(int)nativeErrorCode;

@end

#endif // __DATAVAULT_H__
