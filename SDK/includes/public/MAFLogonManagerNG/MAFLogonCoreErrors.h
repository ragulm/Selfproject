//
//  MAFLogonManagerNGErrors.h
//
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import "MAFLogonDeviceUserManagerErrors.h"

#define kErrorDomainLogonCore @"MAFLogonCoreErrorDomain"
#define kErrorDomainApplicationSettings @"MAFApplicationSettingsErrorDomain"

#define errMAFLogonErrorOperationCancelled           0
#define errMAFLogonErrorInvalidParameter             1
#define errMAFLogonErrorInvalidOperationCode         2
#define errMAFLogonErrorCommunicationManagerError    3
#define errMAFLogonErrorUserAlreadyLoggedIn          4
#define errMAFLogonErrorOperationExecutionInProgress 5
#define errMAFLogonErrorInvalidOperationContext      6
#define errMAFLogonErrorInvalidCommunicatorId        7
#define errMAFLogonErrorInvalidActionItemId          8
#define errMAFLogonErrorCouldNotDecideCommunicator   9
#define errMAFLogonErrorPasswordsNotEqual            10
#define errMAFLogonErrorOperationNotAllowed          11
#define errMAFLogonErrorInvalidServerHost            12
#define errMAFLogonErrorInvalidBackendPassword       13
#define errMAFLogonErrorPasscodeChangeNotEnabled     14
#define errMAFLogonErrorUploadTraceFailed            15
#define errMAFLogonErrorInvalidMCIMSSOPin            16
#define errMAFLogonErrorKeychainError                17
#define errMAFLogonErrorCertificateKeyError          18
#define errMAFLogonErrorCertificateError             19
#define errMAFLogonErrorAfariaInvalidCredentials     20
#define errMAFLogonErrorAfariaInitializationFailed   21
#define errMAFLogonErrorURLValidationFailed          22
#define errMAFLogonErrorClientIdentityNotFound       23
#define errMAFLogonErrorMultiUserModeRequired        24
#define errMAFLogonErrorDeviceUserNotFound           25
#define errMAFLogonErrorDeviceUserNameNotDefined     26
#define errMAFLogonErrorAPPCIDNotPresent             27
#define errMAFLogonErrorDeviceUserIdNotDefined       28
#define errMAFLogonErrorEmptyParameter               70004 //legacy reasons
#define errMAFLogonErrorAppSettingsValidation        70005
#define errMAFLogonErrorXMLParserError               70008
#define errMAFLogonErrorJSONParserError              70009
#define errMAFLogonErrorInvalidJSONData              70010
#define errMAFLogonErrorSettingsDownloadFailed       70011
#define errMAFLogonErrorHTTPDomainError              70012
#define errMAFLogonErrorSettingsUploadFailed         70013
#define errMAFLogonErrorXMLParserInitializationError 254099 //legacy reasons


#define keyErrDescrMAFLogonErrorInvalidParameter             @"keyErrDescrMAFLogonErrorInvalidParameter"
#define keyErrDescrMAFLogonErrorInvalidOperationCode         @"keyErrDescrMAFLogonErrorInvalidOperationCode"
#define keyErrDescrMAFLogonErrorCommunicationManagerError    @"keyErrDescrMAFLogonErrorCommunicationManagerError"
#define keyErrDescrMAFLogonErrorUserAlreadyLoggedIn          @"keyErrDescrMAFLogonErrorUserAlreadyLoggedIn"
#define keyErrDescrMAFLogonErrorOperationExecutionInProgress @"keyErrDescrMAFLogonErrorOperationExecutionInProgress"
#define keyErrDescrMAFLogonErrorInvalidOperationContext      @"keyErrDescrMAFLogonErrorInvalidOperationContext"
#define keyErrDescrMAFLogonErrorInvalidCommunicatorId        @"keyErrDescrMAFLogonErrorInvalidCommunicatorId"
#define keyErrDescrMAFLogonErrorInvalidActionItemId          @"keyErrDescrMAFLogonErrorInvalidActionItemId"
#define keyErrDescrMAFLogonErrorCouldNotDecideCommunicator   @"keyErrDescrMAFLogonErrorCouldNotDecideCommunicator"
#define keyErrDescrMAFLogonErrorPasswordsNotEqual            @"keyErrDescrMAFLogonErrorPasswordsNotEqual"
#define keyErrDescrMAFLogonErrorOperationNotAllowed          @"keyErrDescrMAFLogonErrorOperationNotAllowed"
#define keyErrDescrMAFLogonErrorInvalidServerHost            @"keyErrDescrMAFLogonErrorInvalidServerHost"
#define keyErrDescrMAFLogonErrorInvalidBackendPassword       @"keyErrDescrMAFLogonErrorInvalidBackendPassword"
#define keyErrDescrMAFLogonErrorUploadTraceFailed            @"keyErrDescrMAFLogonErrorUploadTraceFailed"
#define keyErrDescrMAFLogonErrorCertificateKeyGeneration     @"keyErrDescrMAFLogonErrorCertificateKeyGeneration"
#define keyErrDescrMAFLogonErrorCertificateGeneration        @"keyErrDescrMAFLogonErrorCertificateGeneration"
#define keyErrDescrMAFLogonErrorAfariaInvalidCredentials     @"keyErrDescrMAFLogonErrorAfariaInvalidCredentials"
#define keyErrDescrMAFLogonErrorAfariaInitializationFailed   @"keyErrDescrMAFLogonErrorAfariaInitializationFailed"
#define keyErrDescrMAFLogonErrorURLValidationFailed          @"keyErrDescrMAFLogonErrorURLValidationFailed"
#define keyErrDescrMAFLogonErrorClientIdentityNotFound       @"keyErrDescrMAFLogonErrorClientIdentityNotFound"

// general error messages
#define keyErrDescrMAFLogonErrorCheckLoginData               @"keyErrDescrMAFLogonErrorCheckLoginData"
#define keyErrDescrMAFLogonErrorResetErrorCheckNetwork       @"keyErrDescrMAFLogonErrorResetErrorCheckNetwork"
#define keyErrDescrMAFLogonErrorCheckUsernamePassword        @"keyErrDescrMAFLogonErrorCheckUsernamePassword"
#define keyErrDescrMAFLogonErrorConsultWithAdministrator     @"keyErrDescrMAFLogonErrorConsultWithAdministrator"
#define keyErrDescrMAFLogonErrorInvalidLoginData             @"keyErrDescrMAFLogonErrorInvalidLoginData"
#define keyErrDescrMAFLogonErrorPasscodeCorrect              @"keyErrDescrMAFLogonErrorPasscodeCorrect"
#define keyErrDescrMAFLogonErrorPasscodeDigit                @"keyErrDescrMAFLogonErrorPasscodeDigit"
#define keyErrDescrMAFLogonErrorPasscodeDontMatch            @"keyErrDescrMAFLogonErrorPasscodeDontMatch"
#define keyErrDescrMAFLogonErrorPasscodeExpired              @"keyErrDescrMAFLogonErrorPasscodeExpired"
#define keyErrDescrMAFLogonErrorPasscodeLength               @"keyErrDescrMAFLogonErrorPasscodeLength"
#define keyErrDescrMAFLogonErrorPasscodeLowercase            @"keyErrDescrMAFLogonErrorPasscodeLowercase"
#define keyErrDescrMAFLogonErrorPasscodeSpecialCharacters    @"keyErrDescrMAFLogonErrorPasscodeSpecialCharacters"
#define keyErrDescrMAFLogonErrorPasscodeUniqueCharacters     @"keyErrDescrMAFLogonErrorPasscodeUniqueCharacters"
#define keyErrDescrMAFLogonErrorPasscodeUppercase            @"keyErrDescrMAFLogonErrorPasscodeUppercase"
#define keyErrDescrMAFLogonErrorDeviceAlreadyRegistered      @"keyErrDescrMAFLogonErrorDeviceAlreadyRegistered"
#define keyErrDescrMAFLogonErrorOperationNotSupported        @"keyErrDescrMAFLogonErrorOperationNotSupported"
#define keyErrDescrMAFLogonErrorInvalidMCIMSSOPin            @"keyErrDescrMAFLogonErrorInvalidMCIMSSOPin"
#define keyErrDescrMAFLogonErrorAppSettingsValidation        @"keyErrDescrMAFLogonErrorAppSettingsValidation"
#define keyErrDescrMAFLogonErrorXMLParserInitializationError @"keyErrDescrMAFLogonErrorXMLParserInitializationError"
#define keyErrDescrMAFLogonErrorXMLParserError               @"keyErrDescrMAFLogonErrorXMLParserError"
#define keyErrDescrMAFLogonErrorSettingsDownloadFailed       @"keyErrDescrMAFLogonErrorSettingsDownloadFailed"
#define keyErrDescrMAFLogonErrorHTTPDomainError              @"keyErrDescrMAFLogonErrorHTTPDomainError"
#define keyErrDescrMAFLogonErrorInvalidJSONData              @"keyErrDescrMAFLogonErrorInvalidJSONData"
#define keyErrDescrMAFLogonErrorJSONParserError              @"keyErrDescrMAFLogonErrorJSONParserError"
#define keyErrDescrMAFLogonErrorDeviceUserNotFound           @"keyErrDescrMAFLogonErrorDeviceUserNotFound"
#define keyErrDescrMAFLogonErrorDeviceUserNameNotDefined     @"keyErrDescrMAFLogonErrorDeviceUserNameNotDefined"
#define keyErrDescrMAFLogonErrorDeviceUserIdNotDefined       @"keyErrDescrMAFLogonErrorDeviceUserIdNotDefined"
#define keyErrDescrMAFLogonErrorAPPCIDNotDefined             @"keyErrDescrMAFLogonErrorAPPCIDNotDefined"

#define keyErrDescrMAFLogonApplicationSettingsErrorUploadFailed             @"keyErrDescrMAFLogonApplicationSettingsErrorUploadFailed"
#define keyErrDescrMAFLogonApplicationSettingsErrorGetWritableSettingsFailed             @"keyErrDescrMAFLogonApplicationSettingsErrorGetWritableSettingsFailed"
