//  LogonHandler.m
//  mSecSales
//
//  Created by Arteria on 11/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "LogonHandler.h"
#import "MAFLogonNGPublicAPI.h"
#import "MAFLogonUIViewManager.h"
#import "MAFLogonNGDelegate.h"
#import "MAFLogonUICustomizationDelegate.h"
#import "MAFLogonCoreDelegate.h"
#import "SODataOnlineStore.h"
#import "SODataEntity.h"
#import "CommonAuthenticationConfigurator.h"
#import "SODataOfflineStore.h"
#import "SODataOfflineStoreOptions.h"
#import "MAFLogonDictionaryHelper.h"
#import "Constants.h"
#import "CommonMethods.h"
#import "OnlineStore.h"
#import "RequestListener.h"
#import "SODataRequestParamSingleDefault.h"
#import "DBMethodCls.h"

#import "SODataEntity.h"
#import "SODataRequestParamBatchDefault.h"
#import "SODataRequestChangesetDefault.h"
#import "SODataEntityDefault.h"
#import "BatchRequest.h"

#import "MAFLogonCore.h"


#import "SODataPropertyDefault.h"
#import "SODataRequestChangeSet.h"
#import "MAFLogonContext.h"

#import "SAPSupportabilityFacade.h"

#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"


static LogonHandler *singeltonLogonHandler;

@implementation LogonHandler


@synthesize conversationManager;
@synthesize data;
@synthesize logonCore;


+(instancetype)singeltonLogonHandler {
    
    if (singeltonLogonHandler ==nil) {
        
        singeltonLogonHandler= [[LogonHandler alloc] init];
    }
    
    return singeltonLogonHandler;
}

+ (void)resetSharedInstance {
    singeltonLogonHandler = nil;
}

-(id) init{
    self = [super init];
    if(self){
        if(!self.logonUIViewManager)
        {
            self.logonUIViewManager = [[MAFLogonUIViewManager alloc] init];
            
            
            self.logonManager = self.logonUIViewManager.logonManager;
            
            
            //   MAFLogonRegistrationContext
            
            [self.logonManager setApplicationId:appID];
            
            
            
            [self initMAFLogonCore];
            
            
        }
        
    }
    return self;
}


//MAFLogonCore initialize
-(void) initMAFLogonCore
{
    self.logonCore = [[MAFLogonCore alloc]initWithApplicationId:appID];
    self.logonCore.logonCoreDelegate = self;
}

-(void)onDeviceRegister:(NSString *)userName: (NSString *)password:(void(^)(BOOL success))completion
{
    NSError* localError = nil;
    
    
    
    
    self.logonCore = [[MAFLogonCore alloc]initWithApplicationId:appID];
    //    AppDelegate* appDelegate = [[UIApplication sharedApplication] delegate];
    //    appDelegate.logonHandler = self;
    MAFLogonCoreState *state = [self.logonCore state];
    self.logonCore.logonCoreDelegate = self;
    NSLog(@"Logon State: %@",state);
    
    if (!state.isRegistered){
        
        
        self.logonCore.traceEnabled = YES;
        
        self.logonCore.performanceTraceEnabled = YES;
        
        //lc.traceLevel
        
        NSError *error = nil;
        
        MAFLogonContext *mafContext = [self.logonCore getContext:&error];
        NSMutableDictionary *dict = [[NSMutableDictionary alloc]initWithDictionary:self.logonCore.defaultValues];
        NSMutableDictionary *defaultValues = [dict objectForKey:keyMAFLogonOperationContextDefaultValues];
        NSMutableDictionary *registrationValues = [defaultValues objectForKey:idMAFLogonOperationContextTypeRegister];
        
        // idMAFLogonOperationContextTypeRegister
        NSLog(@"User Register Error: %@",error);
        
        
        MAFLogonRegistrationContext *regContext = mafContext.registrationContext;
        
        regContext.serverHost = [registrationValues objectForKey:keyMAFLogonOperationContextServerHost];
        regContext.serverPort = [[registrationValues objectForKey:keyMAFLogonOperationContextServerPort] intValue];
        regContext.isHttps = [[registrationValues objectForKey:keyMAFLogonOperationContextIsHttps] boolValue];
        regContext.farmId = [registrationValues objectForKey:keyMAFLogonOperationContextFarmId];
        regContext.resourcePath = [registrationValues objectForKey:keyMAFLogonOperationContextResourcePath];
        regContext.securityConfig = [registrationValues objectForKey:keyMAFLogonOperationContextSecurityConfig];
        
        
        
        regContext.backendUserName = userName;
        
        regContext.backendPassword = password;
        
        
        
        [self.logonCore setDefaultValues:defaultValues];
        //  self.logonCore.logonCoreDelegate = self;
        
        [[NSNotificationCenter defaultCenter] addObserverForName:@"kDeviceRegistered" object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
            if([[NSUserDefaults standardUserDefaults]boolForKey:@"REGISTRATION_SUCCESS"])
            {
                completion(true);
                
            }
            else
            {
                completion(false);
                
            }
        }];
        [self.logonCore registerWithContext:mafContext];
        
        
    }else
    {
        completion(false);
    }
}

-(void) registerFinished:(NSError*)anError
{
    NSMutableString *errorMessage;
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];
    NSLog(@"logonFinishedWithError:%@", anError);
    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
    
    if (!anError)
    {
        [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"REGISTRATION_SUCCESS"];
        [[NSUserDefaults standardUserDefaults]synchronize];
        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : Device registered successfully", [dateFormatter stringFromDate:[NSDate date]]]];
        [self assignValues];
    }
    else
    {
        
        
        [[NSUserDefaults standardUserDefaults]setBool:NO forKey:@"REGISTRATION_SUCCESS"];
        [[NSUserDefaults standardUserDefaults]setObject:@"Error" forKey:@"ERROR_HEADER"];
        
        NSError * underlyingError = [[anError userInfo] objectForKey:@"NSLocalizedFailureReason"];
        NSLog(@"Underlying error returnted: %@", underlyingError);
        if([[NSString stringWithFormat:@"%@", underlyingError] containsString:@"401"]) //wrong password
        {
            [CommonMethods sharedInstance].wrongEntryCount++;
            int attempt = [CommonMethods sharedInstance].wrongEntryCount;
            int remainingCount = 3-attempt;
            if(attempt < 3)
            {
                NSString *attemptString = [[NSString alloc]init];
                if(remainingCount == 1)
                {
                    attemptString = @"attempt";
                }
                else
                {
                    attemptString = @"attempts";
                    
                }
                NSString *attemptHeader = [NSString stringWithFormat:@"Attempt %d/3",attempt];
                NSString *message = [NSString stringWithFormat:@"[3]- Authentication failed. User will be locked after %d %@. Please contact channel team", remainingCount, attemptString];
                errorMessage = [[NSMutableString alloc]initWithString:message];
                [[NSUserDefaults standardUserDefaults]setObject:attemptHeader forKey:@"ERROR_HEADER"];
            }
            else if(attempt == 3)
            {
                errorMessage = [[NSMutableString alloc]initWithString:@"[A1000] - Attempt 3/3 User locked due to 3 times wrong input. Please contact channel team"];
                NSString *attemptHeader = [NSString stringWithFormat:@"Attempt 3/3"];
                [[NSUserDefaults standardUserDefaults]setObject:attemptHeader forKey:@"ERROR_HEADER"];
                
                
            }
            else
            {
                errorMessage = [[NSMutableString alloc]initWithString:@"[A1000] - User locked due to 3 times wrong input. Please contact channel team"];
            }
            
            
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_URL_NOT_PERMITTED]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_URL_NOT_PERMITTED,can_not_be_register]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_NO_SERVER_RESPONCE]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_NO_SERVER_RESPONCE,reg_failed_no_server_res]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_IMO_LIB_NOT_FOUND]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_IMO_LIB_NOT_FOUND,imo_lib_not_found]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_UNKNOWN_ERROR]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_UNKNOWN_ERROR,reg_failed_unknown_error]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_NO_REG_LIS]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_NO_REG_LIS,no_reg_listner]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_NO_CAPTCH]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_NO_CAPTCH,no_captch_listner]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_HTTP]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_HTTP,http_error]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_PARSER]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_PARSER,parser_error]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_HOST_UN_REACHABLE]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_HOST_UN_REACHABLE,host_is_unreachable]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_USER_AUTH]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_USER_AUTH,user_auth_error]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_BAD_REQUEST]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_BAD_REQUEST,error_bad_req]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_UN_AUTH]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_UN_AUTH,error_un_autorized]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_FORBIDDEN]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_FORBIDDEN,error_forbidden_error]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:ERROR_SERVER_NOT_FOUND]) //Wrong username
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[%@] - %@", ERROR_SERVER_NOT_FOUND,error_not_found]];
        }
        else if ([[NSString stringWithFormat:@"%@", underlyingError] containsString:@"The Internet connection appears to be offline."]) //internet connection
        {
            errorMessage = [[NSMutableString alloc]initWithString:@"[A3000] - Registration cannot be performed due to network unavailability"];
            
        }
        else
        {
            errorMessage = [[NSMutableString alloc]initWithString:[NSString stringWithFormat:@"[A5000] - %@",reg_failed_unknown_error]];
            
            
        }
        
        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]], errorMessage]];
        [[NSUserDefaults standardUserDefaults]setObject:errorMessage forKey:@"ERROR_MESSAGE"];
        [[NSUserDefaults standardUserDefaults]synchronize];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"kDeviceRegistered" object:self];
    }
    
    /*
     
     
     
     
     
     
     }else if(error_code==ERROR_UN_AUTH){
     mStrErrMsg ="["+error_code+"] "+context.getString(R.string.error_un_autorized);
     }else if(error_code==ERROR_FORBIDDEN){
     mStrErrMsg ="["+error_code+"] "+context.getString(R.string.error_forbidden_error);
     }else if(error_code==ERROR_SERVER_NOT_FOUND){
     mStrErrMsg ="["+error_code+"] "+context.getString(R.string.error_not_found);
     }else{
     mStrErrMsg ="["+error_code+"] "+context.getString(R.string.reg_failed_unknown_error);
     }
     
     return mStrErrMsg;
     }
     */
    
}

-(void)assignValues
{
    self.conversationManager = [[HttpConversationManager alloc] init];  //Be sure that this instance will be used later (for online/offline store creation, etc.)
    
    
    [self.logonUIViewManager.logonManager.logonConfigurator configureManager:self.conversationManager]; //It should be configured using the logonConfigurator
    
    CommonAuthenticationConfigurator* commonConfig = [[CommonAuthenticationConfigurator alloc] init];
    
    //add SAML Configuration provider with our implementation
    [commonConfig addSAML2ConfigProvider:self];
    //add Username Password provider with our implementation
    [commonConfig addUsernamePasswordProvider:self];
    //add the Client Certificate provider
    [commonConfig addClientCertProvider:self];
    //   [commonConfig setParentView:self];
    
    //[commonConfig addOAuth2ConfigProvider:self];
    //initialize manager
    self.conversationManager = [[HttpConversationManager alloc] init];
    //configure manager with standard set of plugins but with our own implementation of some providers
    [commonConfig configureManager:self.conversationManager];
    
    
    NSLog(@"User login successful");
    NSError* localError = nil;
    
    
    // save reference to LogonManager for code readability
    
    self.data = [self.logonManager registrationDataWithError:&localError];
    
    
    if (localError) {
        //handle error
    } else {
        
        NSError *error = nil;
        
        MAFLogonContext *mafContext = [self.logonCore getContext:&error];
        
        [self.logonCore persistRegistration:nil logonContext:mafContext error:&error];
        
        MAFLogonRegistrationContext *regContext = mafContext.registrationContext;
      dbMethodCls= [[DBMethodCls alloc]init];
        //access registration data, like:
        communicatorId = regContext.communicatorId;
        appEndpoint = regContext.applicationEndpointURL;
        
        [[NSUserDefaults standardUserDefaults]setObject:regContext.backendUserName forKey:@"USERNAME"];
        [[NSUserDefaults standardUserDefaults]setObject:regContext.backendPassword forKey:@"PASSWORD"];
        // [[NSUserDefaults standardUserDefaults]setObject:regContext.applicationConnectionId forKey:@"ApplicationConnectionID"];
        [[NSUserDefaults standardUserDefaults]setObject:regContext.serverHost forKey:@"HOST"];
        [[NSUserDefaults standardUserDefaults]setObject:[NSString stringWithFormat:@"%d",regContext.serverPort] forKey:@"PORT"];
        [[NSUserDefaults standardUserDefaults]setObject:regContext.securityConfig forKey:@"SECCONFIG"];
        [[NSUserDefaults standardUserDefaults]setObject:regContext.applicationEndpointURL forKey:@"ENDPOINT"];
        
        [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"LOGIN_SUCCESS"];
        [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"REGISTERED"];
        
        
        [[NSUserDefaults standardUserDefaults]synchronize];
        
        [[NSNotificationCenter defaultCenter] postNotificationName:@"kDeviceRegistered" object:self];
        
        //  [self openOnlineStore];
        
        //            if([DataController shared].logger == nil)
        //            {
        //                [DataController shared].logger = [[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"];
        //
        //                [[DataController shared].logger logInfo:[NSString stringWithFormat:@"Login successful"]];
        //
        //
        //            }
        
    }
}
-(void)openOnlineStore :(void(^)(BOOL success))completion
{
//    [[Synchronization singeltonInstance] getSession];

//    [Synchronization  getNameSpace];
    
//    [Synchronization sing]
//    Synchronization getR
    
//    Synchronization *sync = [Synchronization ]
    
//    Synchronization getR
    
  /*  [[RequestListener shared] setupOnlineStore];
    [[RequestListener shared].onliningStore openStoreWithCompletion:^(BOOL success) {
        //reading data from the collection
        
//         and LoginID+eq+'%@'", [[[NSUserDefaults standardUserDefaults]objectForKey:@"USERNAME"] uppercaseString]]
        NSString *read_resourcePath = [NSString stringWithFormat:@"UserProfiles?$filter=Application+eq+'PD'"];
        [[RequestListener shared] scheduleOnlineRequestForResource:read_resourcePath withMode:SODataRequestModeRead withEntity:nil withCompletion:^(id<SODataEntity> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
            if(error == nil)
            {
                SODataEntitySetDefault *valueEntitySet = [[SODataEntitySetDefault alloc]init];
                valueEntitySet = entities;
                NSArray *entityArray  = [[NSMutableArray alloc]initWithArray:valueEntitySet.entities];
                if([entityArray count] >0)
                {
                    id<SODataEntity> entity= [entityArray objectAtIndex:0];
                    NSString *userRole = [NSString stringWithFormat:@"%@", [(id<SODataProperty>)entity.properties[@"RoleID"] value]];
                    [[NSUserDefaults standardUserDefaults] setObject:userRole forKey:@"USER_ROLE"];
                    
                    [[NSUserDefaults standardUserDefaults]synchronize];
                    
                    completion(YES);
                }
                
            }
            else
            {
                completion(NO);
            }
        }];
    }];
  */
}

-(SODataOfflineStoreOptions *)offlinestoreOptions
{
    NSError* localError = nil;
    
    MAFLogonContext *mafContext = [self.logonCore getContext:&localError];
    
    MAFLogonRegistrationContext *regContext = mafContext.registrationContext;
    
    SODataOfflineStoreOptions *storeOptions = [[SODataOfflineStoreOptions alloc] init];
    self.data = [self.logonManager registrationDataWithError:&localError];
    
    storeOptions.enableHttps = regContext.isHttps;
    storeOptions.host = regContext.serverHost;
    storeOptions.port = regContext.serverPort;
    storeOptions.serviceRoot = [NSString stringWithFormat:@"/%@", regContext.applicationId];
    
    
    storeOptions.urlSuffix = [NSString stringWithFormat:@"/%@/%@", regContext.resourcePath, regContext.farmId];
    if(storeOptions.conversationManager == nil)
    {
        storeOptions.conversationManager = self.conversationManager;
        
    }
    storeOptions.enableRepeatableRequests = YES;
    
    storeOptions.storeName = @"mSecSales_Offline";
    
    storeOptions.customHeaders[@"x-arteria-daysfilter"] = [CommonMethods numberOfDays];
    // storeOptions.customHeaders[@"sap-client"] = [CommonMethods client];
    
    for(NSString *definingRequest in [CommonMethods definingRequest])
    {
        NSString *name;
        NSArray *subString = [definingRequest componentsSeparatedByString:@"?$filter"];
        if([subString count] > 1)
        {
            name = [subString objectAtIndex:0];
        }
        else
        {
            name = definingRequest;
        }
        if(![definingRequest isEqualToString:@"MerchReviewImages"])
        {
            [storeOptions addDefiningRequestWithName:[NSString stringWithFormat:@"%@",name] url:[NSString stringWithFormat:@"/%@", definingRequest] retrieveStreams:FALSE];
        }
        else
        {
            [storeOptions addDefiningRequestWithName:[NSString stringWithFormat:@"%@",name] url:[NSString stringWithFormat:@"/%@", definingRequest] retrieveStreams:TRUE];
        }
       
    }
    
    return storeOptions;
    
}




-(void)provideUsernamePasswordForAuthChallenge:(NSURLAuthenticationChallenge *)authChallenge completionBlock:(void (^)(NSURLCredential *, NSError *))completionHandler {
    NSError *error;
    NSLog(@"ERROR!!!!!!!!!!!!provideUsernamePasswordForAuthChallenge %@ %@, %@, %@", error.localizedDescription , error.localizedFailureReason, error.localizedRecoveryOptions, error.localizedRecoverySuggestion);
    NSURLCredential* credential = [NSURLCredential credentialWithUser:[[NSUserDefaults standardUserDefaults]objectForKey:@"USERNAME"] password:[[NSUserDefaults standardUserDefaults]objectForKey:@"PASSWORD"] persistence:NSURLCredentialPersistenceForSession];
    completionHandler(credential, nil);
}

-(void) provideSAML2ConfigurationForURL:(NSURL*)url completionBlock:(void (^)(NSString* responseHeader, NSString* finishEndPoint, NSString* finishParameters))completionBlock
{
    completionBlock(nil, nil, nil);
}
-(void) provideClientCertForAuthChallenge:(NSURLAuthenticationChallenge*)authChallenge completionBlock:(void (^)(NSURLCredential*, NSError*))completionBlock
{
    
    
    NSError *error;
    NSLog(@"ERROR!!!!!!!!!!!!provideClientCertForAuthChallenge %@ %@, %@, %@", error.localizedDescription , error.localizedFailureReason, error.localizedRecoveryOptions, error.localizedRecoverySuggestion);
    NSURLCredential* credential = [NSURLCredential credentialWithUser:[[NSUserDefaults standardUserDefaults]objectForKey:@"USERNAME"] password:[[NSUserDefaults standardUserDefaults]objectForKey:@"PASSWORD"] persistence:NSURLCredentialPersistenceForSession];
    completionBlock(credential, nil);
    
}

@end

