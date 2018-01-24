//
//  MAFLogonCore.h
//  MAFLogonCore
//
//  Copyright (c) 2013 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFLogonCoreDelegate.h"
#import "MAFApplicationSettings.h"
#import "MAFLogonDeviceUser.h"

@class MAFLogonContext;
@class MAFLogonCoreState;
@class HttpConversationManager;

#define keyMAFLogonApplicationId                        @"keyMAFLogonApplicationId"

/**
 *  States for passcode policy change
 */
typedef NS_ENUM( NSInteger, PasscodePolicyState ) {
    UNKNOWN,    ///< policy change could not be determined
    UNCHANGED,  ///< no policy change
    UPDATED,    ///< policy updated on the server
};

/**
 Main component for logon related activities. It can be initialized in either single- or multi-user mode. During normal operation, Logon Core writes to a series of
 persistent storages whose layout differs in single- and multi-user cases. The initialization therefore depends on the following factors:
 <ul>
    <li>The multi-user support flag defined during initialization. Possible values: YES or NO.</li>
    <li>The layout of persistent storages which can be either: single-user or multi-user layout.</li>
 </ul>
 Depending on the above factors the following cases are possible during initialization:
 <table border='1' cellpadding='5' width='100%'>
    <tr>
        <th>Multi-user flag/Storage layout</th>
        <th>Single-user layout</th>
        <th>Multi-user layout</th>
        <th>No storages (fresh start)</th>
    </tr>
    <tr>
        <td>NO (single-user mode)</td>
        <td>Okay</td>
        <td>Flag is changed to YES. Event is logged.</td>
        <td>Okay</td>
   </tr>
   <tr>
        <td>YES (multi-user mode)</td>
        <td>Layout is migrated to multi-user.</td>
        <td>Okay</td>
        <td>Okay</td>
    </tr>
 </table>
 <p>
    Consequently, whenever the layout is incompatible with the flag used during initialization, MAFLogonCore takes the necessary actions to initialize properly.
    This means that MAFLogonCore tends to initialize itself in multi-user mode if discrepancies are detected: if the layout is incompatible with the flag then
    the layout is migrated. If the flag is incompatible with the layout then the flag is set to multi-user to match the layout.
 </p>
 <p>
    Application developers therefore have to make a conscious decision about whether single- or multi-user mode is used. The above logic should be taken into consideration
    if an app switches modes in between application startups.
 </p>
 */
@interface MAFLogonCore : NSObject

#pragma mark -
#pragma mark Properties

/**
 Flag indicating whether this MAFLogonCore instance is in single- or multi-user mode.
 */
@property (nonatomic, readonly) BOOL multiUserMode;

/**
 This is the device user ID of the user that has been last activated using 'activateUser:withPasscode:error:'. If there was no user active previously or
 the last active user has been deleted in the meantime using 'removeDeviceUser:withError:' then this property is nil.
 */
@property (nonatomic, readonly) NSString* lastActivatedUser;

/**
 The device user ID of the currently active user. This is always nil in single-user mode. In multi-user mode a nil value
 indicates that no user is active. A non-nil value refers to the user ID of the currently active user. This field changes
 in the following cases:
 <ul>
    <li>After 'persistRegistration' completes and a new user is persisted on the device.</li>
 </ul>
 */
@property (nonatomic, readonly) NSString* currentDeviceUserId;

/**
 The HTTPConversationManager used to perform network requests.
 **/
@property (nonatomic, strong) HttpConversationManager* conversationManager;

/**
 Called by the logon core when an asynchronous method call finished.
 */
@property (nonatomic, weak) id<MAFLogonCoreDelegate> logonCoreDelegate;
/**
 Marks whether the trace should be enabled.
 */
@property (assign) BOOL traceEnabled;
/**
 Marks whether the performanc trace should be enabled.
 */
@property (assign) BOOL performanceTraceEnabled;
/**
 Describes the level of the trace
 */
@property (assign) int traceLevel;
/**
 * ApplicationSettings of the registered application
 */
@property (nonatomic, strong, readonly) MAFApplicationSettings* applicationSettings;

#pragma mark -
#pragma mark Initializers

/**
 Initializes the central component of MAF Logon with multi-user support disabled. If the persistent storage layout is already multi-user then the flag is silently changed
 to YES and a log message is emitted.

 @param applicationId the application ID
 @return MAFLogonCore instance
 */
-(instancetype) initWithApplicationId:(NSString*)applicationId;

/**
 Designated initializer booting up the MAF Logon component with the specified application user ID and multi-user mode. If the persistent storage layout is single-user then this
 method auto-migrates it to the multi-user layout if the flag is set to YES. However, if the flag is NO and the layout is already multi-user then the flag is changed to YES implicitly.
 
 @param applicationId identifies the app on the SUP server and also used to identify the SecureStore used by the logon. If nil the keyMAFApplicationId set in the application's info.plist will be used.
 @param enable YES to enable multi-user support, NO to work only in single-user mode
 @param dataVault NSString type of data vault
 */
-(instancetype) initWithApplicationId:(NSString *)applicationId multiUserSupport:(BOOL)multiUserSupport;
-(instancetype) initWithApplicationId:(NSString *)applicationId multiUserSupport:(BOOL)multiUserSupport dataVault:(NSString*)type NS_DESIGNATED_INITIALIZER;


#pragma mark -
#pragma mark Device user management in multi-user mode

/**
 Renames the currently active user identified by the 'currentDeviceUserId' property to the given display name. Being a local rename, the scope of the display name is
 set to 'DEVICE' automatically. The returned error contains the domains and error codes specified by 'MAFLogonDeviceUserManagerErrors.h'.
 <p>
 This method should be called only when there's an active user and multi-user mode is on, otherwise an error is returned.
 The returned error contains the domains and error codes specified by 'MAFLogonDeviceUserManagerErrors.h'.
 </p>

 @param deviceUserId the device user ID, must be non-nil
 @param displayName the new display name, can be nil
 @param anError the reference to the error, can be nil
 @return the modified device user info object or nil if an error occured
 */
-(MAFLogonDeviceUser*) renameCurrentUserToDisplayName:(NSString*)displayName withError:(NSError* __autoreleasing *)anError;

/**
 Deletes all data belonging to the specified device user ID. This wipes the corresponding persisted 'MAFLogonDeviceUser' entry and all persistent storages
 that 'MAFLogonCore' associated with the user, including the data vault. If the deleted user happens to be the active one then this method deactivates it first.
 <p>
 An error is signaled if the specified user does not exist or when multi-user mode is off. The returned error contains the domains and error
 codes specified by 'MAFLogonDeviceUserManagerErrors.h'.
 </p>

 @param deviceUserId the device user ID, can be nil
 @param anError the reference to the error, can be nil
 @return YES upon success, NO if an error occured
 */
-(BOOL) removeDeviceUser:(NSString*)deviceUserId withError:(NSError* __autoreleasing *)anError;

/**
 Removes all device users along with all their data. This logically works the same way as if 'removeDeviceUser:withError:' were called on every
 individual user.
 
 @param anError the reference to the error, can be nil
 @return YES upon success, NO if an error occured
 */
-(BOOL) removeAllDeviceUsersWithError:(NSError* __autoreleasing *)anError;

/**
 Returns the array of device users currently registered with MAF Logon. Returns nil in single user mode.

 @return the array of device users, nil in single user mode
 */
-(NSArray<MAFLogonDeviceUser*>*) deviceUsers;

/**
 Returns the device user info object for the specified ID. Nil is returned if multi-user mode is disabled.

 @return the device user info object or nil if no such user is registered for the specified ID
 */
-(MAFLogonDeviceUser*) deviceUserForId:(NSString*)deviceUserId;

#pragma mark -
#pragma mark LogonCore API

/**
 *  Performs user registration. In multi-user mode, the 'userRegistrationInfo' property of the registration context within the specified
 *  argument will be set. If a display name could have been inferred from the server response then its 'displayName' property will be non-nil.
 *
 *  @param logonContext holds the registration context; see registrationContext field
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate
 */
-(void) registerWithContext:(MAFLogonContext*)logonContext;

/**
 *  Unregisters current user. In multi-user mode, if there's no active user (as of 'currentDeviceUserId') then this method does nothing and simply
 *  invokes the delegate right away.
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate
 */
-(void) unregister;

/**
 *  Cancels registration.
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate
 */
-(void) cancelRegistration;

/**
 *  Creates a secure store and persists the registration information. In multi-user mode the 'userRegistrationInfo' property and its 'displayName' property must all be set,
 *  otherwise the registration fails. If it's supplied then a new user is created with this display name. This method sets the 'currentDeviceUserId' property and as
 *  such activates the new user.
 *
 *  @remark The secure store will be created using the server password policy if provided; else the password policy included in the context will be used
 *  @param aPasscode    a passcode to protect the secure store; use nil for default passcode. Shall match the password policy!
 *  @param logonContext the context can be used to pass a custom password policy; this policy will be used only if the server didn't provide a policy
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) persistRegistration:(NSString*)aPasscode logonContext:(MAFLogonContext*)logonContext error:(NSError**)anError;

/**
 *  Returns the logon core state
 *
 *  @return current logon core state
 */
-(MAFLogonCoreState*) state;

/**
 *  Downloads application settings from the server. The results can be retrieved via 'getContext'. In multi-user mode the settings are downloaded for the current user only. This method
 *  therefore cannot be invoked if no user is active (as of the 'currentDeviceUserId' property).
 *
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate
 */
-(void) refreshApplicationSettings;

/**
 *  Checks whether the passcode policy has changed on the server. In multi-user mode this check executes in the context of the active user. Consequently, this method cannot be
 *  invoked if the 'currentDeviceUserId' property is nil and multi-user mode is on.
 *
 *  @param completionBlock the completion block will include the policy state, the updated password policy (if any), and an error instance if any error occured
 */
-(void) hasServerPasscodePolicyChanged:(void (^)(PasscodePolicyState policyState, MAFSecureStorePasswordPolicy* newPolicy, NSError* error))completionBlock;

/**
 *  Retrieves the logon core context
 *  @remark Before registration, the context will contain defaults; after registration, the returned context will match the context used for registration
 *
 *  @param anError  the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @see persistRegistration
 *
 *  @return logon core context
 */
-(MAFLogonContext*) getContext:(NSError**)anError;

/**
 *  Locks the secure store. In multi-user mode this locks the store of the currently active user. Consequently, this method cannot be
 *  invoked if the 'currentDeviceUserId' property is nil and multi-user mode is on.
 *
 *  @param anError the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) lockSecureStore:(NSError**)anError;

/**
 *  Opens the secure store. In multi-user mode there must be an active user (as of the 'currentDeviceUserId' property). Consequently, this method cannot be
 *  invoked if the 'currentDeviceUserId' property is nil and multi-user mode is on.
 *
 *  @param aPasscode passcode used to unlock the store
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) unlockSecureStore:(NSString*)aPasscode error:(NSError**)anError;

/**
 Opens the secure store for the specified user ID and passcode. This essentially switches the user and makes it the active one by changing the internal state of LogonCore and updating
 the 'currentDeviceUserId' property. If there's an active user then this method locks its secure store and deactivates it by invoking 'deactivate' first.
 Apart from the errors 'unlockSecureStore:error:' reports, this method reports an error if the specified user does not exist. This happens after the previous user (if there was any) has been
 logged out. If the currently activated user is activated again then this will result in the same behaviour as unlockSecureStore:error:.
 <p>
 If the currently active user is the same as the one specified by the parameter then this method does nothing but returns immediately with YES.
 </p>

 @param deviceUserId the ID of the user to switch to
 @param aPasscode the passcode for the user to switch to
 @param anError the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 @return YES on success, NO otherwise
 */
-(BOOL) activateUser:(NSString*)deviceUserId withPasscode:(NSString*)aPasscode error:(NSError**)anError;

/**
 This method can be invoked in multi-user mode only. If there's an active user (as of the 'currentDeviceUserId' property) then this method locks its secure store and
 deactivates it.
 @param anError the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 @return YES on success, NO otherwise
 */
-(BOOL) deactivateUserWithError:(NSError**)anError;

/**
 Use this method if the caller application is not using the conversation manager to fire requests. This restores the cookies for the current user in multi-user mode provided that
 there's a current user (as of the currentDeviceUserId property) and the secure store is open. An error is returned if the application endpoint couldn't have been determined or if
 the secure store contains no APPCID.
 <p>
 Invoke this method right after 'activateUser:withPasscode:error:'. Do not use this method if the application uses the HttpC library and the conversation manager exposed by this class.
 </p>

 @param error the error reference, can be nil
 @return YES on success, NO otherwise
 */
-(BOOL) restoreCookieStoreForUserWithError:(NSError**)error;

/**
 *  Updates the passcode used to protect the secure store. In multi-user mode a user must be active (as of the 'currentDeviceUserId' property). When changing the passcode for a given user
 *  in multi user mode, consider using the <code>changePasscode:newPasscode:forUser:error:</code> method instead.
 *
 *  @param oldPasscode current passcode; use nil for default password
 *  @param newPasscode new passcode; use nil for default password. The new password shall match the password policy!
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) changePasscode:(NSString*)oldPasscode newPasscode:(NSString*)newPasscode error:(NSError**)anError;

/**
 Changes the passcode of the specified user. This method can be used only in multi-user mode. If the user happens to be the same as the one currently logged in (as of
 the <code>currentDeviceUserId</code> property) then this method acts exactly the same as <code>changePasscode:newPasscode:error:</code>. Otherwise, this method deactivates the current user (if
 there's any) and activates the one specified by the argument, just like <code>activateUser:withPasscode:error</code> would.

 @param oldPasscode current passcode; use nil for default password
 @param newPasscode new passcode; use nil for default password. The new password shall match the password policy!
 @param deviceUserId the ID of the user whose passcode is to be changed, must be non-nil
 @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 @return YES on success, NO otherwise
 */
-(BOOL) changePasscode:(NSString*)oldPasscode newPasscode:(NSString*)newPasscode forUser:(NSString*)deviceUserId error:(NSError**)anError;

/**
 *  Updates the backend password and persists it in the secure store. In multi-user mode a user must be active (as of the 'currentDeviceUserId' property).
 *
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate
 *
 *  @param newPassword new password
 */
-(void) changeBackendPassword:(NSString*)newPassword;

/**
 Saves an object to the secure store with the given key.
 @param anObject the object to save in the secure store. Should implement the NSCoding protocol.
 @param aKey the key for which the object will be stored.
 @param anError should contain the address of an NSError*. Will contain the address of an error on return or nil on success.
 */
/**
 *  Persists a key-value pair in the secure store. In multi-user mode a user must be active (as of the 'currentDeviceUserId' property).
 *
 *  @param anObject object to be store; must be NSCoding compliant
 *  @param aKey     unique key
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) setObjectInSecureStore:(NSObject<NSCoding>*)anObject key:(NSString*)aKey error:(NSError**)anError;

/**
 *  Removes an object identified by the given key from the secure store. In multi-user mode a user must be active (as of the 'currentDeviceUserId' property).
 *
 *  @param aKey    unique key
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) deleteObjectFromSecureStore:(NSString*)aKey error:(NSError**)anError;

/**
 *  Retrieves an object from the secure store. In multi-user mode a user must be active (as of the 'currentDeviceUserId' property).
 *
 *  @param aKey    unique key
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(NSObject<NSCoding>*) objectFromSecureStore:(NSString*)aKey error:(NSError**)anError;

/**
 *  Uploads the trace to the registered server
 *  @remark This is an asynchronous API; logon core delegates will be called upon completion
 *  @see MAFLogonCoreDelegate -uploadTraceFinished:
 */
-(void) uploadTrace;

/**
 *  Persists the trace on the client
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 */
-(BOOL) saveTrace:(NSError**)anError;

/**
 *  @warning deprecated, use setUrl: sourceApplication: method
 *  Call this method if the application:openURL:sourceApplication:annotation: method is called in the app delegate and the application should use afaria.
 *
 *  @param url url In the openURL parameter
 */
-(void) setUrl:(NSURL*)url DEPRECATED_ATTRIBUTE;

/**
 *  Call this method if the application:openURL:sourceApplication:annotation: method is called in the app delegate and the application should use afaria. This method does nothing in multi-user mode.
 *
 *  @param url               url In the openURL parameter
 *  @param sourceApplication <#sourceApplication description#>
 */
-(void) setUrl:(NSURL*)url sourceApplication:(NSString*)sourceApplication;

/**
 *  Sets the SSO pin code. This method yields an error in multi-user mode.
 *
 *  @param aPin    pin code
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL)setMCIMSSOPin:(NSString*)aPin error:(NSError**)anError;

/**
 *  Skips MCIM usage during registration; decouple from MCIM if user is already registered. There's no need to call this method in multi-user mode as it is skips MCIM during registration
 *  by default.
 */
-(void)skipMCIM;

/**
 *  Retrieves the SecIdentityRef in case of successful mutual certificate based registration if the SecureStore is open.
 *  @param identityRef address of a SecIdentityRef variable, which will store the returning value on success
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) getClientIdentity:(SecIdentityRef *)identityRef error:(NSError**)anError;

/**
 *  Sets the SecIdentityRef which will be used for register the user
 *  @param identityRef SecIdentityRef
 */
-(void) setClientIdentity:(SecIdentityRef)identityRef;

/**
 *  Sets username and password for Afaria configuration downloading. This method can be called only in single-user mode, otherwise an error is returned.
 *  @param user
 *  @param password
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
-(BOOL) setAfariaCredentialWithUser:(NSString*)user password:(NSString*)password error:(NSError**)anError;

/**
 *  Sets the default values for different parameters.
 *  @param defaultValues defaultValues to be set; the structure shall match the MAFLogonOperationContextDefaultValues.plist
 *  @remark In order to use the correct structure, first get the default values using the proper method, and make the changes on the returned object.
 */
-(void) setDefaultValues:(NSMutableDictionary *)defaultValues;

/**
 *  Returns the default values read from MAFLogonOperationContextDefaultValues.plist
 *  @return default values dictionary
 */
-(NSMutableDictionary*) defaultValues;

/**
 *  Retrieves the SecIdentityRef in case of successful mutual certificate based registration if the SecureStore is open.
 *  Designed for very special cases where the MAFLogonCore instance is unaccessble - for example if used with a Cordova plugin.
 *  @param identityRef address of a SecIdentityRef variable, which will store the returning value on success
 *  @param anAppId application identifier which was used during the registration
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
+(BOOL) getClientIdentity:(SecIdentityRef *)identityRef applicationID:(NSString*)anAppId error:(NSError**)anError;

/**
 *  Call this method if the application:openURL:sourceApplication:annotation: method is called in the app delegate and the application should use afaria.
 *  This method can be called only in single-user mode, otherwise an error is returned.
 *  Designed for very special cases where the MAFLogonCore instance is unaccessble - for example if used with a Cordova plugin.
 *  @param url In the openURL parameter
 *  @param anAppId application identifier which was used during the registration
 *  @param anError      the address of an uninitialized NSError* instance; can be nil. If the reference is valid, the instance will be populated with any error the API encounters or nil on success
 *
 *  @return YES on success, NO otherwise
 */
+(BOOL) setUrl:(NSURL*)url applicationId:(NSString*)anAppId error:(NSError**)anError;

@end
