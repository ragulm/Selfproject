//
//  OnlineRequestListener.m
//  mSecSales
//
//  Created by Arteria on 25/05/16.
//  Copyright © 2016 Arteria. All rights reserved.
//

#import "OnlineRequestListener.h"
#import "LogonHandler.h"
#import "RequestListener.h"

#import "SODataRequestDelegate.h"
#import "SODataRequestExecution.h"
#import "SODataResponseSingle.h"
#import "SODataPayload.h"
#import "SODataEntity.h"
#import "SODataProperty.h"
#import "SODataError.h"
#import "SODataRequestParamSingleDefault.h"
#import "SODataEntityDefault.h"
#import "SODataErrorDefault.h"
#import "SODataNavigationProperty.h"


#import "SAPSupportabilityFacade.h"

#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
//#import "Constants.h"

@implementation OnlineRequestListener

+(instancetype) shared
{
    static dispatch_once_t onceToken;
    static OnlineRequestListener* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [OnlineRequestListener new];
        
        
    });
    return instance;
    
}

#pragma mark - SODataRequestDelegate methods

- (void) requestFailed:(id<SODataRequestExecution>)requestExecution error:(NSError *)error
{
    
    NSLog(@"%@", error);
    [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"SYNCFAILED"];
    [[NSUserDefaults standardUserDefaults]synchronize];
}


- (void) requestServerResponse:(id<SODataRequestExecution>)requestExecution
{
    SODataRequestParamSingleDefault *requestParam = (SODataRequestParamSingleDefault *)requestExecution.request;
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/mm/yyyy HH:mm:ss"];
    
    if(requestParam.mode == SODataRequestModeCreate)
    {
        if([requestParam.resourcePath isEqualToString:@"FinancialPostings"])
        {
            id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
            if ([responseSingle.payload conformsToProtocol:@protocol(SODataEntity)])
            {
                
                id<SODataEntity> fipEntity = (id<SODataEntity>)responseSingle.payload;
                NSString *FIPDocNo = (NSString *)[(id<SODataProperty>)fipEntity.properties[@"FIPDocNo"] value];
                
                NSString *message = [NSString stringWithFormat:@"FIPDocNo %@", FIPDocNo];
                
                [[NSUserDefaults standardUserDefaults]setObject:FIPDocNo forKey:@"New_FIPDocNo"];
                [[NSUserDefaults standardUserDefaults] synchronize];
                
                 [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                 [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ : Collection # %@ created successfully.", [dateFormatter stringFromDate:[NSDate date]],FIPDocNo]];
                NSLog(@"%@", message);
            }
        }
        else if ([requestParam.resourcePath isEqualToString:@"SSInvoices"])
        {
            id<SODataResponseSingle> responseSingle = (id<SODataResponseSingle>)requestExecution.response;
            if ([responseSingle.payload conformsToProtocol:@protocol(SODataEntity)])
            {
                
                id<SODataEntity> invEntity = (id<SODataEntity>)responseSingle.payload;
                NSString *InvoiceNo = (NSString *)[(id<SODataProperty>)invEntity.properties[@"InvoiceNo"] value];
                
                NSString *message = [NSString stringWithFormat:@"InvoiceNo %@", InvoiceNo];
                
                [[NSUserDefaults standardUserDefaults]setObject:InvoiceNo forKey:@"New_InvoiceNo"];
                [[NSUserDefaults standardUserDefaults] synchronize];
                NSLog(@"%@", message);
                
                [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logInfo:[NSString stringWithFormat:@"%@ : Invoice # %@ created successfully.", [dateFormatter stringFromDate:[NSDate date]],InvoiceNo]];
                
                NSObject* navigationProperty = [(id<SODataEntity>)invEntity navigationPropertyForRelationIdentifier:@"SSInvoiceItemDetails"];

                id<SODataNavigationProperty> imageNavigationProperty = (id<SODataNavigationProperty>)navigationProperty;
                NSObject *navigationContent = [imageNavigationProperty navigationContent];
                
                SODataEntitySetDefault *invItems = [[SODataEntitySetDefault alloc]init];
                invItems= (id<SODataEntitySet>)navigationContent;
                NSArray *entityArray  = [[NSMutableArray alloc]initWithArray:invItems.entities];

                for(int count = 0; count<[entityArray count]; count++)
                {
                    id<SODataEntity> entity = [entityArray objectAtIndex:count];
                    NSString *unitPrice =[NSString stringWithFormat:@"%@", [(id<SODataProperty>)entity.properties[@"UnitPrice"] value]] ;
                     NSString *grossAmount =[NSString stringWithFormat:@"%@", [(id<SODataProperty>)entity.properties[@"GrossAmount"] value]] ;
//                    NSString *grossAmount = (NSString *)[(id<SODataProperty>)entity.properties[@"GrossAmount"] value];
                    
                    NSLog(@"Unit Price %@", unitPrice);
                    
                    NSLog(@"grossAmount Price %@", grossAmount);
                    
                    NSLog(@"grossAmount Price %@", (id<SODataProperty>)entity.properties);
                    
                    [[NSUserDefaults standardUserDefaults]setObject:unitPrice forKey:@"UNIT_PRICE"];
                    [[NSUserDefaults standardUserDefaults]setObject:grossAmount forKey:@"TOTAL_PRICE"];
                    [[NSUserDefaults standardUserDefaults]synchronize];

                    


                    

                }
//                
//               // SODataEntitySetDefault *entitySet = imageNavigationProperty.navigationContent;
//                
//                
////                SODataNavigationProperty  *navProp = [invEntity navigationPropertyForRelationIdentifier:@"SSInvoiceItemDetails"];
//                properties = oEntity.getProperties();
//                property=properties.get(Constants.InvoiceNo);
//                Constants.InvoiceNumber = property.getValue().toString();
//                if(navProp.getNavigationType().toString().equalsIgnoreCase("EntitySet")){
//                    try {
//                        ODataEntitySet feed = (ODataEntitySet) navProp.getNavigationContent();
//                        List<ODataEntity> entities = feed.getEntities();
//                        for (ODataEntity entity: entities) {
//                            properties = entity.getProperties();
//                            property=properties.get(Constants.UnitPrice);
//                            if(property!=null){
//                                BigDecimal mUnitPrice = (BigDecimal) property.getValue();
//                                Constants.MaterialUnitPrice = mUnitPrice.doubleValue();
//                            }
//                            property=properties.get(Constants.GrossAmount);
//                            if(property!=null){
//                                BigDecimal mGrossAmt = (BigDecimal) property.getValue();
//                                Constants.MaterialNetAmount = mGrossAmt.doubleValue();
//                            }
//
                
                
                
            }
            
        }

    }
    
    
    [[NSUserDefaults standardUserDefaults]setBool:NO forKey:@"SYNCFAILED"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    /*
     You may handle the server response from this callback, or the requestFinished
     callback.  The same content should be available in both, when requesting over
     network.
     
     At such time as it is possible to read from cache, as well as from network, then
     this callback will only reflect content from over the network, while requestFinished
     will reflect the finished response of both cache and server
     
     In this example, the response will be handled in requestFinished: only.
     */
}

- (void) requestStarted:(id<SODataRequestExecution>)requestExecution
{
    
    
}

- (void) requestFinished:(id<SODataRequestExecution>)requestExecution
{
    NSLog(@"%s", __PRETTY_FUNCTION__);

    // build notification tag for this request
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@", requestExecution.request];
    // send notification for the finished request
    [[NSNotificationCenter defaultCenter] postNotificationName:finishedSubscription object:requestExecution];
    
}

- (void) requestCacheResponse:(id<SODataRequestExecution>)requestExecution
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
}

-(void)createEntity:(SODataEntityDefault *) entity forResource:(NSString *)resourcePath withCompletion:(void(^)(BOOL success))completion
{
    
    
    SODataRequestParamSingleDefault* requestParam = [[SODataRequestParamSingleDefault alloc] initWithMode:SODataRequestModeCreate resourcePath:resourcePath];
    
    requestParam.payload = entity;
    [[RequestListener shared].onliningStore scheduleRequest:requestParam delegate:self];
    
    
    NSString *finishedSubscription = [NSString stringWithFormat:@"com.sap.sdk.request.delegate.finished.%@",  requestParam];
    // send notification for the finished request
    
    [[NSNotificationCenter defaultCenter] addObserverForName:finishedSubscription object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification *note) {
        NSLog(@"Created successfully");
        
        if([[NSUserDefaults standardUserDefaults]boolForKey:@"SYNCFAILED"])
        {
            completion(NO);

        }
        else
        {
            completion(YES);

        }
        
        
    }];
    

   
}
#pragma mark - OfflineStoreRefresh block wrapper

- (void) refreshCollection:(NSString *)subset : (void(^)(BOOL success))completion
{
    NSString *refreshFinishedNotification = [NSString stringWithFormat:@"kRefreshDelegateFinished,%@",  self.description];
    NSString *refreshFailedNotification = [NSString stringWithFormat:@"kRefreshDelegateFailed,%@",  self.description];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFinishedNotification forKey:@"kRefreshDelegateFinished"];
    [[NSUserDefaults standardUserDefaults]setObject:refreshFailedNotification forKey:@"kRefreshDelegateFailed"];
    [[NSUserDefaults standardUserDefaults]synchronize];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFinishedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(YES);
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:refreshFailedNotification object:nil queue:nil usingBlock:^(NSNotification *note) {
        
        NSLog(@"%s", __PRETTY_FUNCTION__);
        
        completion(NO);
    }];
    if ([subset isEqualToString:@"All"]) {
//        [self scheduleRefreshWithDelegate:[OfflineRefreshListener sharedInstance]];
//        [self sche]
        
//           [[RequestListener shared].onliningStore schedulerefre];
//        [ol]
    }
    else
    {
//        [self scheduleRefreshWithRefreshSubset:subset delegate:[OfflineRefreshListener sharedInstance]];
        
    }
}


@end
