
//
//  RequestListener.m
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "RequestListener.h"
#import "LogonHandler.h"

#import "SODataRequestDelegate.h"
#import "SODataRequestExecution.h"
#import "SODataResponseSingle.h"
#import "SODataPayload.h"
#import "SODataEntity.h"
#import "SODataError.h"
#import "SODataRequestParamSingleDefault.h"
#import "SODataEntityDefault.h"
#import "SODataErrorDefault.h"
#import "SMPUserManager.h"
#import "SMPAppSettings.h"
#import "SODataProperty.h"
#import "SODataNavigationProperty.h"
#import "SODataResponseBatch.h"
#import "SODataResponseChangesetDefault.h"

#import "OnlineRequestListener.h"
#import "SAPSupportabilityFacade.h"

#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
#import "OfflineFlushListener.h"
#import "SODataDownloadMediaResultDefault.h"
#import "CommonMethods.h"
#import "Constants.h"

@implementation RequestListener
@synthesize offlineManager;
@synthesize onliningStore;
@synthesize onliningStoreForComplaint;

@synthesize imageData;


+(instancetype) shared
{
    static dispatch_once_t onceToken;
    static RequestListener* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [RequestListener new];
        
        
    });
    return instance;
    
}

- (void)setupOnlineStore
{
  


//    if ([LogonHandler singeltonLogonHandler].logonManager.logonState.isUserRegistered) {

    
    if ([[NSUserDefaults standardUserDefaults] boolForKey:@"REGISTERED"]) {
        NSError *localError;

//        MAFLogonRegistrationData *data = [[LogonHandler singeltonLogonHandler].logonManager registrationDataWithError:&localError];
        
        //        NSString *baseURL = @"http://172.25.12.10:8080/com.arteriatech.mSecSalesQA";
//        ENDPOINT
        NSString *baseURL = [NSString stringWithFormat:@"%@", [[NSUserDefaults standardUserDefaults] objectForKey:@"ENDPOINT"]];
//        NSString *baseURL = [NSString stringWithFormat:@"%@",data.applicationEndpointURL];
        if(self.onliningStore == nil)
        {

            self.onliningStore = [[OnlineStore alloc] initWithURL:[NSURL URLWithString:baseURL]
                                          httpConversationManager:[LogonHandler singeltonLogonHandler].conversationManager];
        }
    }
    
}

- (void)setupOnlineStoreForComplaint
{
    
    if ([[NSUserDefaults standardUserDefaults] boolForKey:@"REGISTERED"]) {
        NSError *localError;
        
        
 
        NSString *endpontURL = [NSString stringWithFormat:@"%@", [[NSUserDefaults standardUserDefaults] objectForKey:@"ENDPOINT"]];
        NSArray *items = [endpontURL componentsSeparatedByString:@"/"]; // /c4codata

        NSString *baseURL = [NSString stringWithFormat:@"%@//%@/c4codata", [items objectAtIndex:0],[items objectAtIndex:2]];

        if(self.onliningStoreForComplaint == nil)
        {
            
            self.onliningStoreForComplaint = [[OnlineStore alloc] initWithURL:[NSURL URLWithString:baseURL]
                                          httpConversationManager:[LogonHandler singeltonLogonHandler].conversationManager];
        }
    }

}

-(void)scheduleOnlineRequestForComplaint:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    
    [self setupOnlineStoreForComplaint];
    
    [self.onliningStoreForComplaint openingStoreWithCompletion:^(BOOL success) {
        
        
        
        NSMutableString *path = [[NSMutableString alloc]init];
        if([resourcePath isEqualToString:@"UserCustomers"])
        {
            [path appendString:[NSString stringWithFormat:@"UserCustomers/?$filter=LoginID eq '%@'", [[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"]]];
        }
        else if([resourcePath isEqualToString:@"UserProfiles"])
        {
            [path appendString:[NSString stringWithFormat:@"UserProfiles(Application='PD')"]];
        }
        else if([resourcePath isEqualToString:@"UserProfileAuthSet"])
        {
            [path appendString:[NSString stringWithFormat:@"UserProfileAuthSet/?$filter=Application eq 'PD'"]];
        }
        else if([resourcePath containsString:@"SalesDocflowItems"] || [resourcePath containsString:@"Tasks"])
        {
            [path appendString:resourcePath];
            [path appendString:[NSString stringWithFormat:@" and LoginID eq '%@'",[[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"]]];
        }
        else
        {
            [path appendString:resourcePath];
        }
        
        SODataRequestParamSingleDefault *myRequest = [[SODataRequestParamSingleDefault alloc] initWithMode:mode resourcePath:path];
        
        if([resourcePath isEqualToString:@"UserProfiles"] || [resourcePath isEqualToString:@"UserProfileAuthSet"] || [resourcePath containsString:@"SOs"] || [resourcePath containsString:@"Tasks"] || [resourcePath containsString:@"Customers"] || [resourcePath containsString:@"AttributeTypesetTypes"] || [resourcePath containsString:@"SalesDocflowItems"] || [resourcePath containsString:@"SOItemDetails"]|| [resourcePath containsString:@"ServiceRequestCollection"])
        {
            myRequest.customHeaders = [[NSMutableDictionary alloc]initWithObjectsAndKeys:[[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"],@"x-arteria-loginid",nil];
        }
        
        myRequest.payload = entity ? entity : nil;
        myRequest.customTag = entity.etag;
        
        [self scheduleOnlineRequestComplaint:myRequest resourcePath:path completionHandler:^(id<SODataEntity> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            completion(entities, requestExecution, error);
        }];
    }];
    
}





-(void)scheduleOnlineRequestForResource:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    
    [self setupOnlineStore];
    
    [self.onliningStore openingStoreWithCompletion:^(BOOL success) {
        
        
        
    NSMutableString *path = [[NSMutableString alloc]init];
        if([resourcePath isEqualToString:@"UserCustomers"])
        {
            [path appendString:[NSString stringWithFormat:@"UserCustomers/?$filter=LoginID eq '%@'", [[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"]]];
        }
        else if([resourcePath isEqualToString:@"UserProfiles"])
        {
            [path appendString:[NSString stringWithFormat:@"UserProfiles(Application='PD')"]];
        }
        else if([resourcePath isEqualToString:@"UserProfileAuthSet"])
        {
            [path appendString:[NSString stringWithFormat:@"UserProfileAuthSet/?$filter=Application eq 'PD'"]];
        }
        else if([resourcePath containsString:@"SalesDocflowItems"] || [resourcePath containsString:@"Tasks"] || [resourcePath containsString:@"Deliverys"] || [resourcePath containsString:@"InvoiceItems"] || [resourcePath containsString:@"CustomerPartnerFunctions"] || [resourcePath containsString:@"OutstandingInvoiceItems"])
        {
            [path appendString:resourcePath];
            [path appendString:[NSString stringWithFormat:@" and LoginID eq '%@'",[[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"]]];
        }
        else
        {
            [path appendString:resourcePath];
        }
        
        SODataRequestParamSingleDefault *myRequest = [[SODataRequestParamSingleDefault alloc] initWithMode:mode resourcePath:path];
        
        if([resourcePath isEqualToString:@"UserProfiles"] || [resourcePath isEqualToString:@"UserProfileAuthSet"] || [resourcePath containsString:@"SOs"] || [resourcePath containsString:@"Tasks"] || [resourcePath containsString:@"Customers"] || [resourcePath containsString:@"AttributeTypesetTypes"] || [resourcePath containsString:@"SalesDocflowItems"] || [resourcePath containsString:@"SOItemDetails"] || [resourcePath containsString:@"ValueHelps"] || [resourcePath containsString:@"Deliverys"] || [resourcePath containsString:@"Invoices"] || [resourcePath containsString:@"OutstandingInvoiceItems"])
        {
            myRequest.customHeaders = [[NSMutableDictionary alloc]initWithObjectsAndKeys:[[NSUserDefaults standardUserDefaults]objectForKey:@"USERSESSION"],@"x-arteria-loginid",nil];
        }
        
        myRequest.payload = entity ? entity : nil;  
        
        
        [self scheduleOnlineRequest:myRequest resourcePath:path completionHandler:^(id<SODataEntity> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
                     
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            completion(entities, requestExecution, error);
        }];
    }];
    
}

-(void) allSync
{
    
//    [self setupOnlineStore];
//
//    [self.onliningStore openingStoreWithCompletion:^(BOOL success) {
//
//        if (success)
//        {
//            self.onliningStore
//        }
//
//
//    }];
}


- (void) scheduleRequestForResource:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntitySet> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    SODataRequestParamSingleDefault *myRequest = [[SODataRequestParamSingleDefault alloc] initWithMode:mode resourcePath:resourcePath];
    myRequest.payload = entity ? entity : nil;
    
    myRequest.options = [[NSDictionary alloc]initWithObjectsAndKeys:[[NSUserDefaults standardUserDefaults]objectForKey:@"USERNAME"], @"LoginID", nil];
    
    if(self.offlineManager == nil)
    {
        self.offlineManager = [OfflineManager sharedInstance];
        
        [self.offlineManager setOfflineStoreDelegate:self.offlineManager];
        [self.offlineManager setRequestErrorDelegate:[OfflineFlushListener sharedInstance]];
        
        
    }
    
    
    
    [self.offlineManager openStoreWithCompletion:^(BOOL success) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        [self scheduleRequest:myRequest resourcePath:resourcePath completionHandler:^(id<SODataEntitySet> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            completion(entities, requestExecution, error);
        }];
        
        
    }];
    
    
    
}



- (void) scheduleRequest:(id<SODataRequestParam>)request resourcePath:(NSString *)resourcePath completionHandler:(void(^)(id<SODataEntitySet> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@ %@",  request, resourcePath];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:finishedSubscription object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        // this code will handle the <requestExecution> response, and call the completion block.
        id<SODataRequestExecution>requestExecution = note.object;
        
        id<SODataResponse> response = requestExecution.response;
        
        if (response.isBatch)
        {
            // not yet implemented
        }
        else // not a batch response, only one response to handle
        {
            id<SODataResponseSingle> respSingle = (id<SODataResponseSingle>) response;
            // extract the payload
            id<SODataPayload> p = respSingle.payload;
            
            // response is an entity set, return EntitiesSet
            if ([respSingle payloadType] == SODataTypeEntitySet)
            {
                // copy and cast the entities from the response payload
                id<SODataEntitySet> entities = (id<SODataEntitySet>)p;
                
                // call completion block, with entities, requestExecution, and no error
                completion(entities, requestExecution, nil);
            }
            
            // if payload is an error, return Error
            else if ([respSingle payloadType] == SODataTypeError)
            {
                NSLog(@"Error payload");
                
                id<SODataPayload>p = respSingle.payload;
                SODataErrorDefault *e = p;
                
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:e.message forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:e.code userInfo:errorDetail];
                
                //                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                //                                                                message:[NSString stringWithFormat:@"Code: %@\nMessage: %@", e.code, e.message]
                //                                                               delegate:self
                //                                                      cancelButtonTitle:@"OK"
                //                                                      otherButtonTitles:nil, nil];
                //                [alert show];
                // call the completion block with error and requestExecution
                
                
                completion(nil, requestExecution, error);
            }
            
            // response type == SODataTypeNone for CUD operations
            else if ([respSingle payloadType] == SODataTypeNone) {
                
                completion(nil, requestExecution, nil);
            }
            
            else if ([respSingle payloadType] == SODataTypeEntity) {
                
                id<SODataPayload> p = respSingle.payload;
                id<SODataEntitySet> entities = (id<SODataEntitySet>)p;
                completion(entities, requestExecution, nil);
                
                
                
            }
            
            // if payload is unhandled type, construct error
            else
            {
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:@"Unexpected payload type" forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:100 userInfo:errorDetail];
                
                // call the completion block with error and requestExecution
                completion(nil, requestExecution, error);
                return;
            }
        }
        
    }];
    // then, the original SODataAsynch API is called
    [self.offlineManager scheduleRequest:request delegate:self];
    
    
    
}



- (void) scheduleOnlineRequest:(id<SODataRequestParam>)request resourcePath:(NSString *)resourcePath completionHandler:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = dateFormate;
    [formatter setTimeZone:[NSTimeZone timeZoneWithName:@"IST"]];
    

    
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@ %@",  request, resourcePath];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:finishedSubscription object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        
        [self updateSyncHistory:resourcePath];
        
        NSLog(@"%s", __PRETTY_FUNCTION__);

        // this code will handle the <requestExecution> response, and call the completion block.
        id<SODataRequestExecution>requestExecution = note.object;
        
        id<SODataResponse> response = requestExecution.response;
        
        if (response.isBatch)
        {
            // not yet implemented
        }
        else // not a batch response, only one response to handle
        {
            id<SODataResponseSingle> respSingle = (id<SODataResponseSingle>) response;
            // extract the payload
            id<SODataPayload> p = respSingle.payload;
            
            // response is an entity set, return EntitiesSet
            if ([respSingle payloadType] == SODataTypeEntitySet)
            {
                NSLog(@"SODataTypeEntitySet payload");
                // copy and cast the entities from the response payload
                id<SODataEntitySet> entities = (id<SODataEntitySet>)p;
                
                // call completion block, with entities, requestExecution, and no error
                completion(entities, requestExecution, nil);
            }
            
            // if payload is an error, return Error
            else if ([respSingle payloadType] == SODataTypeError)
            {
                NSLog(@"Error payload");
                
                id<SODataPayload>p = respSingle.payload;
                SODataErrorDefault *e = p;
                
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:e.message forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:e.code userInfo:errorDetail];
                
                //                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                //                                                                message:[NSString stringWithFormat:@"Code: %@\nMessage: %@", e.code, e.message]
                //                                                               delegate:self
                //                                                      cancelButtonTitle:@"OK"
                //                                                      otherButtonTitles:nil, nil];
                //                [alert show];
                // call the completion block with error and requestExecution
                
                
                completion(nil, requestExecution, error);
            }
            
            // response type == SODataTypeNone for CUD operations
            else if ([respSingle payloadType] == SODataTypeNone) {
                
                completion(nil, requestExecution, nil);
            }
            
            else if ([respSingle payloadType] == SODataTypeEntity) {
                
                NSLog(@"SODataTypeEntity payload");
                
                id<SODataPayload> p = respSingle.payload;
                id<SODataEntity> entities = (id<SODataEntity>)p;
                completion(entities, requestExecution, nil);
                
                
            }
            
            // if payload is unhandled type, construct error
            else
            {
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:@"Unexpected payload type" forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:100 userInfo:errorDetail];
                
                // call the completion block with error and requestExecution
                completion(nil, requestExecution, error);
                return;
            }
        }
        
    }];
    // then, the original SODataAsynch API is called
    [self.onliningStore scheduleRequest:request delegate:self];
    
    
    
}


- (void) scheduleOnlineRequestComplaint:(id<SODataRequestParam>)request resourcePath:(NSString *)resourcePath completionHandler:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = dateFormate;
    [formatter setTimeZone:[NSTimeZone timeZoneWithName:@"IST"]];
    
    
    
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@ %@",  request, resourcePath];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:finishedSubscription object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        
        [self updateSyncHistory:resourcePath];
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        // this code will handle the <requestExecution> response, and call the completion block.
        id<SODataRequestExecution>requestExecution = note.object;
        
        id<SODataResponse> response = requestExecution.response;
        
        if (response.isBatch)
        {
            // not yet implemented
        }
        else // not a batch response, only one response to handle
        {
            id<SODataResponseSingle> respSingle = (id<SODataResponseSingle>) response;
            // extract the payload
            id<SODataPayload> p = respSingle.payload;
            
            // response is an entity set, return EntitiesSet
            if ([respSingle payloadType] == SODataTypeEntitySet)
            {
                NSLog(@"SODataTypeEntitySet payload");
                // copy and cast the entities from the response payload
                id<SODataEntitySet> entities = (id<SODataEntitySet>)p;
                
                // call completion block, with entities, requestExecution, and no error
                completion(entities, requestExecution, nil);
            }
            
            // if payload is an error, return Error
            else if ([respSingle payloadType] == SODataTypeError)
            {
                NSLog(@"Error payload");
                
                id<SODataPayload>p = respSingle.payload;
                SODataErrorDefault *e = p;
                
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:e.message forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:e.code userInfo:errorDetail];
                
                //                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                //                                                                message:[NSString stringWithFormat:@"Code: %@\nMessage: %@", e.code, e.message]
                //                                                               delegate:self
                //                                                      cancelButtonTitle:@"OK"
                //                                                      otherButtonTitles:nil, nil];
                //                [alert show];
                // call the completion block with error and requestExecution
                
                
                completion(nil, requestExecution, error);
            }
            
            // response type == SODataTypeNone for CUD operations
            else if ([respSingle payloadType] == SODataTypeNone) {
                
                completion(nil, requestExecution, nil);
            }
            
            else if ([respSingle payloadType] == SODataTypeEntity) {
                
                NSLog(@"SODataTypeEntity payload");
                
                id<SODataPayload> p = respSingle.payload;
                id<SODataEntity> entities = (id<SODataEntity>)p;
                completion(entities, requestExecution, nil);
                
                
            }
            
            // if payload is unhandled type, construct error
            else
            {
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:@"Unexpected payload type" forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:100 userInfo:errorDetail];
                
                // call the completion block with error and requestExecution
                completion(nil, requestExecution, error);
                return;
            }
        }
        
    }];
    // then, the original SODataAsynch API is called
    [self.onliningStoreForComplaint scheduleRequest:request delegate:self];
    
    
    
}




#pragma mark - read entit

-(void)scheduleRequestForEntity:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void (^)(id<SODataEntity>, id<SODataRequestExecution>, NSError *))completion
{
    
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    SODataRequestParamSingleDefault *myRequest = [[SODataRequestParamSingleDefault alloc] initWithMode:mode resourcePath:resourcePath];
    myRequest.payload = entity ? entity : nil;
    
    if(self.offlineManager == nil)
    {
        self.offlineManager = [OfflineManager sharedInstance];
        
        [self.offlineManager setOfflineStoreDelegate:self.offlineManager];
        [self.offlineManager setRequestErrorDelegate:[OfflineFlushListener sharedInstance]];
        
        
    }
    
    
    
    [self.offlineManager openStoreWithCompletion:^(BOOL success) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        [self scheduleRequestEntity:myRequest completionHandler:^(id<SODataEntity> entity, id<SODataRequestExecution> requestExecution, NSError *error) {
            
            NSLog(@"%s", __PRETTY_FUNCTION__);
            
            completion(entity, requestExecution, error);
        }];
        
        
    }];
    
    
}



- (void) scheduleRequestEntity:(id<SODataRequestParam>)request completionHandler:(void(^)(id<SODataEntity> entity, id<SODataRequestExecution>requestExecution, NSError *error))completion
{
    
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@",  request];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:finishedSubscription object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        // this code will handle the <requestExecution> response, and call the completion block.
        id<SODataRequestExecution>requestExecution = note.object;
        
        id<SODataResponse> response = requestExecution.response;
        
        if (response.isBatch)
        {
            // not yet implemented
        }
        else // not a batch response, only one response to handle
        {
            id<SODataResponseSingle> respSingle = (id<SODataResponseSingle>) response;
            // extract the payload
            
            // if payload is an error, return Error
            // else
            if ([respSingle payloadType] == SODataTypeError)
            {
                id<SODataPayload>p = respSingle.payload;
                SODataErrorDefault *e = p;
                
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:e.message forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:e.code userInfo:errorDetail];
                
                //                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error"
                //                                                                message:[NSString stringWithFormat:@"Code: %@\nMessage: %@", e.code, e.message]
                //                                                               delegate:self
                //                                                      cancelButtonTitle:@"OK"
                //                                                      otherButtonTitles:nil, nil];
                //                [alert show];
                // call the completion block with error and requestExecution
                completion(nil, requestExecution, error);
            }
            
            // response type == SODataTypeNone for CUD operations
            else if ([respSingle payloadType] == SODataTypeNone) {
                
                completion(nil, requestExecution, nil);
            }
            
            else if ([respSingle payloadType] == SODataTypeEntity) {
                
                id<SODataPayload> p = respSingle.payload;
                id<SODataEntity> entities = (id<SODataEntity>)p;
                completion(entities, requestExecution, nil);
                
                
                
            }
            
            // if payload is unhandled type, construct error
            else
            {
                NSMutableDictionary *errorDetail = [NSMutableDictionary dictionary];
                [errorDetail setValue:@"Unexpected payload type" forKey:NSLocalizedDescriptionKey];
                NSError *error = [NSError errorWithDomain:@"myDomain" code:100 userInfo:errorDetail];
                
                // call the completion block with error and requestExecution
                completion(nil, requestExecution, error);
                return;
            }
        }
        
    }];
    // then, the original SODataAsynch API is called
    [self.offlineManager scheduleRequest:request delegate:self];
    
    
}



#pragma mark - SODataRequestDelegate methods

- (void) requestFailed:(id<SODataRequestExecution>)requestExecution error:(NSError *)error
{
    [[NSUserDefaults standardUserDefaults]setBool:TRUE forKey:@"ITEM_ERROR"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
    
    SODataRequestParamSingleDefault *requestParam = (SODataRequestParamSingleDefault *)requestExecution.request;
    if (responseSingle.isBatch)
    {
        [[NSUserDefaults standardUserDefaults] setBool:FALSE forKey:@"ISBATCHREQUEST"];
        [[NSUserDefaults standardUserDefaults] synchronize];
        NSLog(@"Batch Request");
    }
    else
    {
        
        NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
        [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];
        if([requestParam isKindOfClass:[SODataRequestParamSingleDefault class]])
        {
            if(requestParam.mode == SODataRequestModeUpdate)
            {
                if([requestParam.resourcePath containsString:@"Tasks"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                    {
                        
                        id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                        NSString *message = fipEntity.message;
                        [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                        
                        [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                        NSLog(@"%@", message);
                        
                    }
                }
                else if([requestParam.resourcePath containsString:@"SOs"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                    {
                        
                        id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                        NSString *message = fipEntity.message;
                        [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                        
                        [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                        NSLog(@"%@", message);
                        
                    }
                }
                
                else if([requestParam.resourcePath containsString:@"ServiceRequestCollection"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    
                    NSDictionary *headerDict = [responseSingle headers];
                    
                    if ([[headerDict valueForKey:@"http.code"] isEqualToString:@"0"]) {
                        
                        [[NSUserDefaults standardUserDefaults]setObject:@"We are unable to make a internet connection at this time. Some functionality will be limited until a connection is made." forKey:@"ERROR_MESSAGE"];
                    }
                    
                    else
                    {
                        if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                        {
                            
                            id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                            NSString *message = fipEntity.message;
                            [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                            
                            [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                            [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                            NSLog(@"%@", message);
                            
                        }
                        
                    }
                    
                }
            }
            else if(requestParam.mode == SODataRequestModeCreate)
            {
                if([requestParam.resourcePath containsString:@"SOs"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                    {
                        
                        id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                        NSString *message = fipEntity.message;
                        [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                        
                        [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                        NSLog(@"%@", message);
                        
                    }
                }
            }
            
            else if(requestParam.mode == SODataRequestModeRead)
            {
                if([requestParam.resourcePath containsString:@"SOs"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                    {
                        
                        id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                        NSString *message = fipEntity.message;
                        [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                        
                        [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                        NSLog(@"%@", message);
                        
                    }
                }
                else if([requestParam.resourcePath containsString:@"ServiceRequestCollection"])
                {
                    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                    if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                    {
                        
                        id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                        NSString *message = fipEntity.message;
                        [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                        
                        [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                        [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                        NSLog(@"%@", message);
                        
                    }
                }
                
            }
            else if(requestParam.mode == SODataRequestModeDelete)
            {
            }
            
        }
    }
    
    [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"SYNCFAILED"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    //    NSLog(@"%@", error.localizedDescription, responseSingle.res);
    //        NSString *message = [[[[[theRequest responseString] componentsSeparatedByString:@"<message xml:lang=\"en\">"] objectAtIndex:1] componentsSeparatedByString:@"</message>"]objectAtIndex:0];
    //
    
    
}


- (void) requestServerResponse:(id<SODataRequestExecution>)requestExecution
{
    
    [[NSUserDefaults standardUserDefaults]setBool:NO forKey:@"SYNCFAILED"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    SODataRequestParamSingleDefault *requestParam = (SODataRequestParamSingleDefault *)requestExecution.request;
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/mm/yyyy HH:mm:ss"];
    
    CommonMethods *singelton = [CommonMethods sharedInstance];
    singelton.pricingArray = [[NSMutableArray alloc]init];
    
    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
    
    
    if (responseSingle.isBatch)
    {
        [[NSUserDefaults standardUserDefaults] setBool:TRUE forKey:@"ISBATCHREQUEST"];
        [[NSUserDefaults standardUserDefaults] synchronize];
        
        id<SODataResponseBatch> batchRespose = (id<SODataResponseBatch>)requestExecution.response;
        NSArray *responses = [[NSArray alloc]initWithArray:batchRespose.responses];
        
        id<SODataResponseChangeset> responseChangeSet = (id<SODataResponseChangeset>)[responses objectAtIndex:0];
        
        /* if ([responseChangeSet.responses count] > 0)
         {
         NSArray *changeSetResponses = [[NSArray alloc]initWithArray:responseChangeSet.responses];
         
         id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)[changeSetResponses objectAtIndex:0];
         
         NSString *successMessage = [[responseSingle headers]objectForKey:@"sap-message"];
         NSRange r1 = [successMessage rangeOfString:@"<message>"];
         NSRange r2 = [successMessage rangeOfString:@"</message>"];
         NSRange rSub = NSMakeRange(r1.location + r1.length, r2.location - r1.location - r1.length);
         NSString *sub = [successMessage substringWithRange:rSub];
         [[NSUserDefaults standardUserDefaults]setObject:sub forKey:@"UPDATE_MESSAGE"];
         [[NSUserDefaults standardUserDefaults] synchronize];
         NSLog(@"Batch Request");
         }*/
    }
    
    
    else
    {
        
        if(requestParam.mode == SODataRequestModeCreate)
        {
            id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
            if([[NSUserDefaults standardUserDefaults]boolForKey:@"SO_CREATE"])
            {
                NSString *successMessage = [[responseSingle headers]objectForKey:@"sap-message"];
                NSRange r1 = [successMessage rangeOfString:@"<message>"];
                NSRange r2 = [successMessage rangeOfString:@"</message>"];
                NSRange rSub = NSMakeRange(r1.location + r1.length, r2.location - r1.location - r1.length);
                NSString *sub = [successMessage substringWithRange:rSub];
                [[NSUserDefaults standardUserDefaults]setObject:sub forKey:@"SO_MESSAGE"];
                [[NSUserDefaults standardUserDefaults] synchronize];
            }
            else if ([[requestParam resourcePath] isEqualToString:@"Expenses"])
            {
                NSString *successMessage = [[responseSingle headers]objectForKey:@"sap-message"];
                NSRange r1 = [successMessage rangeOfString:@"<message>"];
                NSRange r2 = [successMessage rangeOfString:@"</message>"];
                NSRange rSub = NSMakeRange(r1.location + r1.length, r2.location - r1.location - r1.length);
                NSString *sub = [successMessage substringWithRange:rSub];
                [[NSUserDefaults standardUserDefaults]setObject:sub forKey:@"EXP_MESSAGES"];
                [[NSUserDefaults standardUserDefaults] synchronize];
            }
            else if([requestParam.resourcePath containsString:@"ServiceRequestCollection"])
            {
                id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                if ([responseSingle.payload conformsToProtocol:@protocol(SODataEntity)])
                {
                    
                    id<SODataEntity> serviceRequestCollectionEntity = (id<SODataEntity>)responseSingle.payload;
                    
                    
                    NSString *objectID = (NSString *)[(id<SODataProperty>)serviceRequestCollectionEntity.properties[@"ObjectID"] value];
                    
                    NSString *complaintNo = (NSString *)[(id<SODataProperty>)serviceRequestCollectionEntity.properties[@"ID"] value];
                    
                    [[NSUserDefaults standardUserDefaults] setObject:[NSString stringWithFormat:@"%@",complaintNo] forKey:@"COMPLAINTNO"];
                    
                    [[NSUserDefaults standardUserDefaults] setObject:[NSString stringWithFormat:@"%@",objectID] forKey:@"OBJECTID"];
                    [[NSUserDefaults standardUserDefaults] synchronize];
                    
                    
                }
            }
            
            else
            {
                if ([responseSingle.payload conformsToProtocol:@protocol(SODataEntity)])
                {
                    /*
                     id<SODataEntity> salesOrderEntity = (id<SODataEntity>)responseSingle.payload;
                     
                     
                     NSString *soAmount = (NSString *)[(id<SODataProperty>)salesOrderEntity.properties[@"TotalAmount"] value];
                     NSString *currency = (NSString *)[(id<SODataProperty>)salesOrderEntity.properties[@"Currency"] value];
                     
                     
                     //So Items
                     NSObject* navigationProperty = [(id<SODataEntity>)salesOrderEntity navigationPropertyForRelationIdentifier:@"SOItemDetails"];
                     
                     id<SODataNavigationProperty> imageNavigationProperty = (id<SODataNavigationProperty>)navigationProperty;
                     NSObject *navigationContent = [imageNavigationProperty navigationContent];
                     
                     SODataEntitySetDefault *invItems = [[SODataEntitySetDefault alloc]init];
                     invItems= (id<SODataEntitySet>)navigationContent;
                     NSArray *itemArray  = [[NSMutableArray alloc]initWithArray:invItems.entities];
                     
                     id<SODataEntity> itemEntity = [itemArray objectAtIndex:0];
                     
                     NSString *uom = (NSString *)[(id<SODataProperty>)itemEntity.properties[@"UOM"] value];
                     NSString *unitPrice = (NSString *)[(id<SODataProperty>)itemEntity.properties[@"UnitPrice"] value];
                     
                     
                     
                     
                     NSObject* itemNavigationProperty = [(id<SODataEntity>)itemEntity navigationPropertyForRelationIdentifier:@"SOConditionItemDetails"];
                     
                     id<SODataNavigationProperty> itemConditionNavigationProperty = (id<SODataNavigationProperty>)itemNavigationProperty;
                     NSObject *itemNavigationContent = [itemConditionNavigationProperty navigationContent];
                     
                     SODataEntitySetDefault *conditionItems = [[SODataEntitySetDefault alloc]init];
                     conditionItems= (id<SODataEntitySet>)itemNavigationContent;
                     NSMutableArray *pricingArray  = [[NSMutableArray alloc]initWithArray:conditionItems.entities];
                     
                     for(int i = 0; i<[pricingArray count]; i++)
                     {
                     id<SODataEntity> entity = [pricingArray objectAtIndex:i];
                     NSString *conditionType = [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"ConditionTypeDesc"] value]];
                     NSString *conditionAmount = [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"Amount"] value]];
                     NSString *conditionValue = [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"ConditionValue"] value]];
                     NSString *currency = [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"Currency"] value]];
                     if(conditionType.length > 0)
                     {
                     NSDictionary *dict = [[NSDictionary alloc]initWithObjectsAndKeys:conditionType, @"ConditionType", conditionAmount, @"ConditionAmount", conditionValue, @"ConditionValue",currency, @"Currency", nil];
                     
                     [singelton.pricingArray addObject:[dict copy]];
                     }
                     
                     
                     
                     }
                     
                     [[NSUserDefaults standardUserDefaults]setObject:currency forKey:@"CURRENCY"];
                     
                     [[NSUserDefaults standardUserDefaults]setObject:uom forKey:@"UOM"];
                     [[NSUserDefaults standardUserDefaults]setObject:unitPrice forKey:@"UNITPRICE"];
                     [[NSUserDefaults standardUserDefaults]setObject:soAmount forKey:@"SOPRICE"];
                     [[NSUserDefaults standardUserDefaults]setObject:singelton.pricingArray forKey:@"PRICING_ARRAY"];
                     
                     [[NSUserDefaults standardUserDefaults] synchronize];
                     
                     NSLog(@"%@", singelton.pricingArray);
                     
                     */
                }
            }
            
            
            
        }
        else  if(requestParam.mode == SODataRequestModeUpdate)
        {
            if([requestParam.resourcePath containsString:@"Tasks"])
            {
                id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
                if ([responseSingle.payload conformsToProtocol:@protocol(SODataError)])
                {
                    
                    //                    id<SODataError> fipEntity = (id<SODataError>)responseSingle.payload;
                    //                    NSString *message = fipEntity.message;
                    //                    [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"SUCCESS_MESSAGE"];
                    //
                    //                    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                    //                    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                    //                    NSLog(@"%@", message);
                    
                }
            }
        }
        
        
    }
    
    [[NSUserDefaults standardUserDefaults]setBool:NO forKey:@"SYNCFAILED"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
}

- (void) requestStarted:(id<SODataRequestExecution>)requestExecution
{
    
    [[NSUserDefaults standardUserDefaults]setBool:FALSE forKey:@"ITEM_ERROR"];
    [[NSUserDefaults standardUserDefaults]synchronize];
}

- (void) requestFinished:(id<SODataRequestExecution>)requestExecution
{
    SODataRequestParamSingleDefault *requestParam = (SODataRequestParamSingleDefault *)requestExecution.request;
    
    id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
    
    
    if (responseSingle.isBatch)
    {
        NSLog(@"Batch Request");
        {
            [[NSUserDefaults standardUserDefaults] setBool:TRUE forKey:@"ISBATCHREQUEST"];
            [[NSUserDefaults standardUserDefaults] synchronize];
            
            id<SODataResponseBatch> batchRespose = (id<SODataResponseBatch>)requestExecution.response;
            NSArray *responses = [[NSArray alloc]initWithArray:batchRespose.responses];
            
            id<SODataResponseChangeset> responseChangeSet = (id<SODataResponseChangeset>)[responses objectAtIndex:0];
            if([responseChangeSet conformsToProtocol:@protocol(SODataResponseChangeset)])
            {
                
                NSArray *changeSetResponses = [[NSArray alloc]initWithArray:responseChangeSet.responses];
                
                id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)[changeSetResponses objectAtIndex:0];
                
                NSString *successMessage = [[responseSingle headers]objectForKey:@"sap-message"];
                NSRange r1 = [successMessage rangeOfString:@"<message>"];
                NSRange r2 = [successMessage rangeOfString:@"</message>"];
                NSRange rSub = NSMakeRange(r1.location + r1.length, r2.location - r1.location - r1.length);
                NSString *sub = [successMessage substringWithRange:rSub];
                [[NSUserDefaults standardUserDefaults]setObject:sub forKey:@"UPDATE_MESSAGE"];
                [[NSUserDefaults standardUserDefaults] synchronize];
                NSLog(@"Batch Request");
            }
            else if ([responseChangeSet conformsToProtocol:@protocol(SODataResponseSingle)])
            {
                id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)responseChangeSet;
                NSString *statusCode = responseSingle.headers[kSODataResponseHeaderCode];
                if ([[responseSingle payload] conformsToProtocol:@protocol(SODataError)])
                {
                    
                    [[NSUserDefaults standardUserDefaults]setBool:TRUE forKey:@"ITEM_ERROR"];
                    [[NSUserDefaults standardUserDefaults]synchronize];
                    NSString *message = [(id<SODataError>)[responseSingle payload] message];
                    
                    [[NSUserDefaults standardUserDefaults]setObject:message forKey:@"ERROR_MESSAGE"];
                    
                    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
                    dateFormatter.dateStyle = NSDateFormatterShortStyle;
                    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ : %@", [dateFormatter stringFromDate:[NSDate date]],message]];
                    NSLog(@"%@", message);
                }
                
            }
            
            
            
            
        }
        
        // build notification tag for this request
        NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@ %@", requestExecution.request, requestParam.customTag];
        // NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@", requestExecution.request];
        
        // send notification for the finished request
        [[NSNotificationCenter defaultCenter] postNotificationName:finishedSubscription object:requestExecution];

    }
    else
    {
        // build notification tag for this request
        if([requestParam isKindOfClass:[SODataRequestParamSingleDefault class]])
        {
            NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@ %@", requestExecution.request, requestParam.resourcePath];
            // NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@", requestExecution.request];
            
            // send notification for the finished request
            [[NSNotificationCenter defaultCenter] postNotificationName:finishedSubscription object:requestExecution];
        }
        

    }
    
    
}

- (void) requestCacheResponse:(id<SODataRequestExecution>)requestExecution
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
}

//create entity

-(void)createEntity:(id<SODataEntity>) entity withCompletion:(void(^)(BOOL success))completion
{
    
}


#pragma mark - Save Log enties

- (void) saveLogMessage:( NSString *)message
{
    
    
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/mm/yyyy HH:mm:ss"];
    
    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@",message]];
    //    NSLog(@"%@", message);
    
    
}



#pragma mark - media download
-(void)mediaDownloadServerResponse:(id<SODataDownloadMediaExecution>)requestExecution result:(id<SODataDownloadMediaResult>)result
{
    SODataDownloadMediaResultDefault *mediaRes = result;
    NSInputStream *stream = [mediaRes inputStream];
    
    
    
    NSMutableData *data = [[NSMutableData alloc] init];
    
    NSInteger len = 0;
    
    [stream open];
    
    while ([stream hasBytesAvailable]) {
        
        uint8_t buffer[25*1024];
        
        len = [(NSInputStream *)stream read:buffer maxLength:1024];
        
        
        
        if(len) {
            
            [data appendBytes: (const void *)buffer length:len];
            
        }
        
    }
    
    [stream close];
    imageData=[[NSMutableData alloc]initWithData:data];
    NSLog(@"offline Image%@",imageData);
    

    
    
    //    UIImage *image = [[UIImage alloc] initWithData:data];
    
}
-(void)mediaDownloadFailed:(id<SODataDownloadMediaExecution>)requestExecution error:(NSError *)error
{
    
    NSLog(@"Media Download failed");
}

-(void)mediaDownloadStarted:(id<SODataDownloadMediaExecution>)requestExecution
{
    
    NSLog(@"Media Download started");
    
}

-(void)mediaDownloadCacheResponse:(id<SODataDownloadMediaExecution>)requestExecution result:(id<SODataDownloadMediaResult>)result
{
    
    NSLog(@"In Media Cache Response");
    
}

-(void)mediaDownloadFinished:(id<SODataDownloadMediaExecution>)requestExecution
{
    
    NSLog(@"Media Download finished");
    
//    SODataRequestParamSingleDefault *requestParam = (SODataRequestParamSingleDefault *)requestExecution.
    // build notification tag for this request
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.mediadownload.delegate.finished"];
    // NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@", requestExecution.request];
    
    // send notification for the finished request
    [[NSNotificationCenter defaultCenter] postNotificationName:finishedSubscription object:requestExecution];
    
    
}


#pragma mark - downLoadImage

-(NSMutableData *)mediaDownloadServerResponse:(NSInputStream *) stream
{
    
    
    NSMutableData *data = [[NSMutableData alloc] init];
    NSInteger len = 0;
    [stream open];
    while ([stream hasBytesAvailable]) {
        uint8_t buffer[25*1024];
        len = [(NSInputStream *)stream read:buffer maxLength:1024];
        if(len) {
            [data appendBytes: (const void *)buffer length:len];
        }
    }
    [stream close];
    
    imageData=[[NSMutableData alloc]initWithData:data];
//    NSLog(@"offline Image%@",imageData);
    
//    NSString *imageDowlaod = [NSString stringWithFormat:@"DownloadStream Completed"];
//    
//    [[NSNotificationCenter defaultCenter] postNotificationName:imageDowlaod object:nil]; ces:(void(^)(BOOL success))completion
    
    return  data;
    
}

-(void) mediaDownloadServerResponse:(NSInputStream *) stream completion:(void(^)(NSMutableData *data))completion
{
    
    NSString *imageDowlaod = [NSString stringWithFormat:@"DownloadStream Completed"];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:imageDowlaod object:nil];
    
    
    NSMutableData *data = [[NSMutableData alloc] init];
    NSInteger len = 0;
    [stream open];
    while ([stream hasBytesAvailable]) {
        uint8_t buffer[25*1024];
        len = [(NSInputStream *)stream read:buffer maxLength:1024];
        if(len) {
            [data appendBytes: (const void *)buffer length:len];
        }
    }
    [stream close];
    
    imageData=[[NSMutableData alloc]initWithData:data];
    
    completion(data);
    //    NSLog(@"offline Image%@",imageData);
    
    
    
//    return  data;
    
}

-(NSString *) getDate
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    dateFormatter.dateFormat = dateFormate;
    [dateFormatter setTimeZone:[NSTimeZone timeZoneWithName:@"IST"]];
    
    return [dateFormatter stringFromDate:[NSDate date]];
    
}
-(void)updateSyncHistory:(NSString *)tableName

{
    
}

@end
