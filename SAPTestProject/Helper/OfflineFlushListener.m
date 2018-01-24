//
//  OfflineFlushListener.m
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "OfflineFlushListener.h"
#import "SAPSupportabilityFacade.h"
#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
//#import "Constants.h"
#import "OfflineManager.h"
#import "SODataPropertyDefault.h"
#import "SODataEntityDefault.h"
#import "SODataRequestParamSingle.h"
#import "SODataRequestParam.h"
#import "SODataPayload.h"
#import "SODataRequestBatchItem.h"
#import "RequestListener.h"


@implementation OfflineFlushListener



+(instancetype) sharedInstance
{
    static dispatch_once_t onceToken;
    static OfflineFlushListener* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [OfflineFlushListener new];
    });
    return instance;
    
}



#pragma mark - OfflineStore Flush Delegate methods
- (void) offlineStoreFlushStarted:(SODataOfflineStore*) store
{
      NSLog(@"%s", __PRETTY_FUNCTION__);
}
- (void) offlineStoreFlushFinished:(SODataOfflineStore*) store
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    
    NSLog(@"Flush finished");
    
}
- (void) offlineStoreFlushSucceeded:(SODataOfflineStore*) store
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    [[NSNotificationCenter defaultCenter] postNotificationName:[[NSUserDefaults standardUserDefaults]objectForKey:@"kFlushDelegateFinished"] object:nil];
    
}
- (void) offlineStoreFlushFailed:(SODataOfflineStore*) store error:(NSError*) error
{
    NSLog(@"%s", __PRETTY_FUNCTION__);
    [[NSNotificationCenter defaultCenter] postNotificationName:[[NSUserDefaults standardUserDefaults]objectForKey:@"kFlushDelegateFailed"] object:error];
}

//
//-(void)offlineStoreRequestFailed:(SODataOfflineStore *)store request:(id<SODataRequestExecution>)requestExecution error:(NSError *)error
//{
//    NSLog(@"Flush failed %@", error.description);
//    NSLog(@"Request %@", [requestExecution request]);
//    
//    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
//    [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];
//    
//    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:kCustomLogger];
//    
//    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@ Store refresh failed with error %@", [dateFormatter stringFromDate:[NSDate date]], error.localizedDescription]];
//}


-(void)offlineStoreRequestFailed:(SODataOfflineStore *)store request:(id<SODataRequestExecution>)requestExecution error:(NSError *)error
{
    NSMutableString *messageError = [[NSMutableString alloc]init];
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];

     id<SODataRequestParam> requestParam = requestExecution.request;
     id<SODataRequestParamSingle> request = (id<SODataRequestParamSingle>)requestParam;
     NSString *resourcePath = [NSString stringWithFormat:@"ErrorArchive"];
     [[RequestListener shared] scheduleRequestForResource:resourcePath withMode:SODataRequestModeRead withEntity:nil withCompletion:^(id<SODataEntitySet> entities, id<SODataRequestExecution> requestExecution, NSError *error)
      {
     
          if(error == nil)
          {
              SODataEntitySetDefault *valueEntitySet = [[SODataEntitySetDefault alloc]init];
              valueEntitySet= entities;
              NSArray *entityArray  = [[NSMutableArray alloc]initWithArray:valueEntitySet.entities];
              for(int i = 0; i<[entityArray count]; i++)
              {
                  id<SODataEntity> entity = [entityArray objectAtIndex:i];
                  
                  NSLog(@"%@", entity.properties);
                  
                  
                  NSLog(@"%@", [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"Message"] value]]);
                  
                  
                  NSString *message = [NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"Message"] value]];
                  
                  NSString *value;
                  if([[message componentsSeparatedByString:@"value\":"] count]>1)
                  {
                     value = [[[[message componentsSeparatedByString:@"value\":"] objectAtIndex:1] componentsSeparatedByString:@"},"]objectAtIndex:0];
                  }
                  
                  NSString *url =[NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"RequestURL"] value]];
                  [messageError appendString:@" " ];
                  [messageError appendString:[url substringFromIndex:1]];
                  [messageError appendString:@",  With error : " ];
                  
                  if(value != nil)
                  {
                      [messageError appendString:value];
                  }
                  NSLog(@"%@", messageError);
                  
                 [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
                  
                 [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"]logError:[NSString stringWithFormat:@"%@ Store flush request failed with error %@", [dateFormatter stringFromDate:[NSDate date]], messageError]];
                  
                  [self deleteErrorArchieve:entity.resourcePath];

              }
              
              // obj_DBMethodCls.resultLog_Table = [(NSArray*)entityArray mutableCopy];
          }
     
     }];
    
    
    if(dateFormatter == nil)
    {
        dateFormatter = [[NSDateFormatter alloc]init];
        [dateFormatter setDateFormat:@"dd-MMM-yyyy HH:mm:ss"];
    }
  
    
//    NSString *value = [[[[error.localizedDescription componentsSeparatedByString:@"value\":"] objectAtIndex:1] componentsSeparatedByString:@"},"]objectAtIndex:0];
//    
   
    //    [[DataController shared].logger logError:[NSString stringWithFormat:@"%@ Store flush request failed with error %@", [dateformatter stringFromDate:[NSDate date]], error.localizedDescription]];
    
    NSLog(@"Flush failed %@", error.description);
    NSLog(@"Request %@", [requestExecution request]);
}


-(void)deleteErrorArchieve:(NSString *)resourcePath
{
    [[OfflineManager sharedInstance]scheduleDeleteEntity:resourcePath etag:nil delegate:[RequestListener shared] options:nil];

}

@end
