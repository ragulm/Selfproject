//
//  CommonMethods.m
//  SAPIntergration
//
//  Created by Arteria on 08/12/17.
//  Copyright © 2017 Arteria. All rights reserved.
//

#import "CommonMethods.h"
#import "MBProgressHUD.h"
//#import "AppDelegate.h"
#import "LogonHandler.h"
#import "Constants.h"
#import "SODataGuid.h"
#import "SODataEntity.h"
#import "SODataProperty.h"
#import "SODataMetadata.h"
#import "RequestListener.h"
#import "SODataRequestParamBatchDefault.h"
#import "SODataRequestChangesetDefault.h"
#import "SODataEntityDefault.h"
#import "SODataRequestParamSingleDefault.h"
#import "BatchRequest.h"
#import "SAPSupportabilityFacade.h"
#import "SAPClientLogManager.h"
#import "SAPClientLogger.h"
#import "SAPClientLogLevel.h"
#import "SAPClientLogDestination.h"
#import "SODataPropertyDefault.h"
#import "SODataRequestChangeset.h"
#import "RequestListener.h"
#import "SODataEntity.h"



@implementation CommonMethods
@synthesize salesOrderList, authorizations,myProfiles,selectedMaterial,selectedOrderType,selectedSalesArea, shippingPoint, transporterList, plant, shippingCondition, incoTerms1, soValuesDict, materials, itemDateValues, itemQuantityValues,pricingArray,soDeliverySchedules,salesPersonDetails, soDeliverySchedulesForEdit,customerTrackList, wrongEntryCount, deliverySchedule, soStatusArray, deliveryStatusArray,invoicesList,invoiceEntity,visitStartedDealers,otherBeatsArray;

@synthesize salesOrderEntity,salesOrderItemEntity,salesOrderItemSchedulesEntity,salesOrderTextEntity;
@synthesize latitude, longitude,locationManager;

+(instancetype)sharedInstance
{
    static dispatch_once_t onceToken;
    static CommonMethods* instance = nil;
    dispatch_once(&onceToken, ^{
        instance = [CommonMethods new];
        
        
    });
    return instance;
}

+ (void)showAlertWithTitle:(NSString *)title andMessage:(NSString *)message
{
    
}

+(NSString *)entityType
{
    return @"";
    //    return @"ssgw_all";     return @"ZMAN_SSGW_ALL";
    
    
}

+ (NSArray *)buttonXValues
{
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    CGFloat screenWidth = screenRect.size.width;
    static NSArray *buttonXValues;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        buttonXValues = @[@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80]];
    });
    return buttonXValues;
}
+ (NSArray *)buttonYValues
{
    static NSArray *buttonYValues;
    static dispatch_once_t onceToken;
    //    dispatch_once(&onceToken, ^{
    //        buttonYValues = @[@"10",@"10", @"10",@"110", @"110", @"110",@"210", @"210", @"210", @"310", @"310", @"310",@"410", @"410",@"410" , @"510", @"510", @"510"];
    //    });
    //
    //    dispatch_once(&onceToken, ^{
    //        buttonYValues = @[@"12",@"12", @"12",@"112", @"112", @"112",@"212", @"212", @"212", @"312", @"312", @"312",@"412", @"412",@"412" , @"512", @"512", @"512"];
    //    });
    
    dispatch_once(&onceToken, ^{
        buttonYValues = @[@"12",@"12", @"12",@"127", @"127", @"127",@"232", @"232", @"232", @"342", @"342", @"342",@"452", @"452",@"452" , @"562", @"562", @"562"];
    });
    return buttonYValues;
}
+ (NSArray *)labelXValues
{
    
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    CGFloat screenWidth = screenRect.size.width;
    static NSArray *labelXValues;
    static dispatch_once_t onceToken;
    //    dispatch_once(&onceToken, ^{
    //        labelXValues = @[@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80],@"20", [NSString stringWithFormat:@"%f",(screenWidth/2)-30], [NSString stringWithFormat:@"%f",screenWidth-80]];
    //    });
    dispatch_once(&onceToken, ^{
        labelXValues = @[@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90],@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90],@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90],@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90],@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90],@"15", [NSString stringWithFormat:@"%f",(screenWidth/2)-35], [NSString stringWithFormat:@"%f",screenWidth-90]];
        
    });
    return labelXValues;
}
+ (NSArray *)labelYValues
{
    static NSArray *labelYValues;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        labelYValues = @[@"65",@"65",@"65",@"178",@"178",@"178", @"283",@"283",@"283",@"393",@"393", @"393",@"505", @"505", @"490",@"580", @"580", @"580"];
    });
    
    
    return labelYValues;
}

+ (NSArray *)viewYValues
{
    static NSArray *viewYValues;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        viewYValues = @[@"5",@"115",@"220",@"330",@"440",@"550"];
    });
    return viewYValues;
    
}

#pragma mark - label width
+ (float) labelWidth
{
    
    float labelWidth = 75;
    return labelWidth;
    
}

#pragma mark - label height
+ (float) labelHeight
{
    float labelHeight = 40;
    return labelHeight;
}

#pragma mark - button width
+ (float) buttonWidth
{
    const float buttonWidth = 60;
    return buttonWidth;
}

#pragma mark - button height
+ (float) buttonHeight
{
    const float buttonHeight = 60;
    return buttonHeight;
}

-(void) updateLocation{
    
    locationManager = [[CLLocationManager alloc] init];
    locationManager.delegate = self;
    locationManager.distanceFilter = kCLDistanceFilterNone; //whenever we move
    locationManager.desiredAccuracy = kCLLocationAccuracyBest;
    
    [locationManager startUpdatingLocation];
    [locationManager requestWhenInUseAuthorization]; // Add This Line
}


#pragma mark - CLLocationManagerDelegate

- (void)locationManager:(CLLocationManager *)manager didFailWithError:(NSError *)error
{
    NSLog(@"didFailWithError: %@", error);

}

- (void)locationManager:(CLLocationManager *)manager didUpdateToLocation:(CLLocation *)newLocation fromLocation:(CLLocation *)oldLocation
{
    NSLog(@"didUpdateToLocation: %@", newLocation);
    CLLocation *currentLocation = newLocation;
    
    if (currentLocation != nil) {
        longitude = [NSString stringWithFormat:@"%.8f", currentLocation.coordinate.longitude];
        latitude = [NSString stringWithFormat:@"%.8f", currentLocation.coordinate.latitude];
    }
}

+(NSArray *)definingRequest
{
    static NSArray *definingRequest;
    static dispatch_once_t onceToken;
    static NSString *tsmUser;
    tsmUser = [[NSUserDefaults standardUserDefaults]objectForKey:@"USER_ROLE"]; // X for FOS Users, and Y for TSM and Above Users
    
    [[NSUserDefaults standardUserDefaults] setObject:tsmUser forKey:@"TSMUser"]; // For TSM and Above Users
    [[NSUserDefaults standardUserDefaults] synchronize];

    if ([tsmUser isEqualToString:@"000005"])
    {
        dispatch_once(&onceToken, ^{
            definingRequest = @[@"Attendances",@"UserProfileAuthSet?$filter=Application%20eq%20%27PD%27",@"Documents?$filter=DocumentStore eq 'A' and Application eq 'PD'",@"ChannelPartners",@"Alerts?$filter=Application eq 'PD'",@"Visits",@"SalesPersons",[NSString stringWithFormat:@"ValueHelps?$filter= ModelID eq 'SFGW_ALL' and (EntityType eq 'ExpenseItemDetail' or EntityType eq 'SO' or EntityType eq 'ExpenseConfig' or EntityType eq 'Feedback' or EntityType eq 'Complaints' or EntityType eq 'Collection') and LoginID eq '%@'",[[LogonHandler singeltonLogonHandler].data.backendUserName uppercaseString]]];
        });
        
        
     //   @[@"Attendances",@"UserProfileAuthSet?$filter=Application%20eq%20%27PD%27",@"Customers",,@"SalesPersons",@"SOItems",@"CustomerPartnerFunctions",@"CustomerCreditLimits",@"CustomerSalesAreas",@"MaterialSaleAreas",@"VisitActivities",@"Visits",@"InvoiceItems",@"RoutePlans",@"RouteSchedulePlans",@"RouteSchedules",@"UserProfileAuthSet?$filter=Application%20eq%20%27PD%27",@"SOs", @"SOItemDetails", @"SOTexts?$filter=TextCategory eq 'H' or TextCategory eq 'I'",@"OutstandingInvoices",@"OutstandingInvoiceItemDetails",@"Invoices", @"InvoiceItemDetails",@"ExpenseConfigs",@"Expenses",@"ExpenseItemDetails",@"ExpenseAllowances",@"ExpenseDocuments?$filter= DocumentStore eq 'A'",@"Complaints",@"MaterialByCustomers",@"MerchReviews", @"MerchReviewImages",[NSString stringWithFormat:@"ValueHelps?$filter= ModelID eq 'SFGW_ALL' and (EntityType eq 'ExpenseItemDetail' or EntityType eq 'SO' or EntityType eq 'ExpenseConfig' or EntityType eq 'Feedback' or EntityType eq 'Complaints' or EntityType eq 'Collection') and LoginID eq '%@'",[[LogonHandler singeltonLogonHandler].data.backendUserName uppercaseString]]]
        
     //   @"ConfigTypesetTypes$filter=Typeset eq 'DELVST' or Typeset eq 'INVST' or Typeset eq 'REJRSN' or Typeset eq 'UOMNO0' or Typeset eq 'OINVAG'",@"ConfigTypsetTypeValues?$filter=Typeset eq 'PD' or Typeset eq 'ATTTYP' or Typeset eq 'RVWTYP' or Typeset eq 'FIPRTY' or Typeset eq 'ACTTYP' or Typeset eq 'SF' or Typeset eq 'SC' or Typeset eq 'SS' or Typeset eq 'MC'"
    }
    else{
        //defining request for TSM and above ,@"ExpenseAllowances"
        dispatch_once(&onceToken, ^{
            definingRequest = @[ @"Attendances",
                                 @"Customers",
                                 @"UserProfileAuthSet?$filter=Application%20eq%20%27PD%27",@"Documents?$filter=DocumentStore eq 'A' and Application eq 'PD'",@"SalesPersons",@"ChannelPartners",@"RouteSchedules",@"ExpenseConfigs",@"Expenses",@"KPISet",@"Targets",@"ExpenseAllowances",@"ExpenseItemDetails",@"Alerts?$filter=Application eq 'PD'",
                                 @"ExpenseDocuments?$filter= DocumentStore eq 'A'",
                                 @"Documents?$filter=DocumentStore eq 'A' and Application eq 'PD'",
                                 @"Visits",@"UserProfileAuthSet?$filter=Application%20eq%20%27PD%27",[NSString stringWithFormat:@"ValueHelps?$filter= ModelID eq 'SFGW_ALL' and (EntityType eq 'Attendance' or EntityType eq 'FinancialPosting' or EntityType eq 'SO' or EntityType eq 'FinancialPostingItemDetail' or EntityType eq 'SSInvoice' or EntityType eq 'MerchReview' or EntityType eq 'SegmentedMaterial' or EntityType eq 'ChannelPartner' or EntityType eq 'Feedback' or EntityType eq 'Performance' or EntityType eq 'Evaluation' or EntityType eq 'Target' or EntityType eq 'Visit' or EntityType eq  'SSSOItemDetail' or EntityType eq  'SSSO' or EntityType eq 'SSRO' or EntityType eq  'Complaints' or EntityType eq 'ExpenseConfig' or EntityType eq 'ExpenseItemDetail' or EntityType eq 'Scheme' or EntityType eq 'SchemeSalesArea' or EntityType eq 'SchemeGeo' or EntityType eq 'SchemeCostObject' or EntityType eq 'SchemeSlab' or EntityType eq 'Collection' or EntityType eq 'SchemeCPDoc' or EntityType eq 'SchemeCP') and LoginID eq '%@'",[[LogonHandler singeltonLogonHandler].data.backendUserName uppercaseString]]];
        });
        //ValueHelps?$filter= ModelID eq 'SFGW_ALL' and (EntityType eq 'ExpenseItemDetail' or EntityType eq 'SO' or EntityType eq 'ExpenseConfig' or EntityType eq 'Feedback' or EntityType eq 'Complaints' or EntityType eq 'Collection'
        
      //  @"ConfigTypesetTypes?$filter=Typeset eq 'DELVST' or Typeset eq 'INVST' or Typeset eq 'REJRSN' or Typeset eq 'UOMNO0' or Typeset eq 'OINVAG'",
      //  @"ConfigTypsetTypeValues?$filter=Typeset eq 'PD' or Typeset eq 'ATTTYP' or Typeset eq 'RVWTYP' or Typeset eq 'FIPRTY' or Typeset eq 'ACTTYP' or Typeset eq 'SF' or Typeset eq 'SC' or Typeset eq 'SS' or Typeset eq 'MC'"
        
    }
    

    return definingRequest;
    
}

+(NSArray *)openStoreEntities
{
    static NSArray *entityList;
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        entityList = @[@"UserProfileAuthSet", @"UserCustomers", @"UserProfiles"];
    });
    
    return entityList;
}

+(NSString *)numberOfDays
{
    //    return @"X";
    return @"0";
    
}





//Show PrgressIndicator
-(void)showProgressIndicatorWithTitle:(NSString *)title
{
    indicator = [[MBProgressHUD alloc] init];
    indicator.labelText=title;
    
    
//        AppDelegate *tmpDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
//        UIViewController *presentView = ((UINavigationController*)tmpDelegate.window.rootViewController).visibleViewController;
//        [presentView.view addSubview:indicator];
    indicator.dimBackground = YES;
    [indicator show:YES];
    
}

//Hide ProgressIndicator
-(void)hideProgressIndicator
{
    [indicator hide:YES];
}
+(UIColor *)headerBackgroundColor
{
    UIColor *color = UIColorFromRGB(0x85AEFA);
    //    UIColor *color = [UIColor yellowColor];
    return color;
}

+(UIColor *)themeColor
{
    UIColor *color = UIColorFromRGB(0x20335A);
    //    UIColor *color = [UIColor yellowColor];
    return color;
}

+(UIColor *)sectionBackgroundColor
{
    UIColor *color = UIColorFromRGB(0xD8D8D8);
    //    UIColor *color = [UIColor yellowColor];
    return color;
}

+ (UIColor *)titleColor
{
    UIColor *color = UIColorFromRGB(0x7BAAFF);
    //    UIColor *color = [UIColor yellowColor];
    return color;
}


+ (UIColor *)buttonBorderColor
{
    UIColor *color = UIColorFromRGB(0x183883)
    ;
    return color;
}

+ (UIColor *)buttonBackGroundColor
{
    UIColor *color = UIColorFromRGB(0xF0EFF5)
    
    ;
    return color;
}
+ (UIColor *)titleLabelColor
{
    UIColor *color = [UIColor whiteColor];
    return color;
}
+ (UIFont *)fontName
{
    if([[UIDevice currentDevice]userInterfaceIdiom]==UIUserInterfaceIdiomPhone)
    {
        return [UIFont boldSystemFontOfSize:17];
        
    }
    else
    {
        return [UIFont boldSystemFontOfSize:21];
        
    }
}

+(NSString *)getNameSpace
{
    NSMutableString *nameSpace = [[NSMutableString alloc]init];
    NSArray *metaNameSpaces = [[NSArray alloc]init] ;
    
    id<SODataMetadata> metaData = [RequestListener shared].offlineManager.metadata;
    metaNameSpaces = metaData.metaNamespaces;
    
    nameSpace = [metaNameSpaces objectAtIndex:0];
    
    return nameSpace;
    
    
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

- (void) saveErrorLogMessage:( NSString *)message
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/mm/yyyy HH:mm:ss"];
    
    [[[SAPSupportabilityFacade sharedManager] getClientLogManager] setLogDestination:(CONSOLE | FILESYSTEM) forIdentifier:@"CustomLogger"];
    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logError:[NSString stringWithFormat:@"%@",message]];
    [[[[SAPSupportabilityFacade sharedManager] getClientLogManager] getLogger: @"CustomLogger"] logWarning:[NSString stringWithFormat:@"%@",message]];
    
    
}

-(NSString *) getDateFromStirng:(SODataEntityDefault*) enitites key:(NSString *)key
{
    
    dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    NSString *stringWithDate = [[[NSString stringWithFormat:@"%@", [(id<SODataProperty>)enitites.properties[key] value]] componentsSeparatedByString:@" "]objectAtIndex:0];
    
    NSDate *dateWithString = [dateFormatter dateFromString:stringWithDate];
    
    [dateFormatter setDateFormat:@"dd/MM/yyyy"];
    
    NSString *string = [dateFormatter stringFromDate:dateWithString];
    
    return string;
}

#pragma  mark - visited dealers
-(void)getVisitStartedDealers : (BOOL)previousDay : (void (^)( NSArray *visitedArray))completionBlock
{
    self.visitStartedDealers =[[NSMutableArray alloc] init];
    dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    NSTimeZone *gmt = [NSTimeZone timeZoneWithAbbreviation:@"GMT+5:30"];
    [dateFormatter setTimeZone:gmt];
    NSString *today;
    if(previousDay)
    {
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSDateComponents *components = [cal components:( NSHourCalendarUnit | NSMinuteCalendarUnit | NSSecondCalendarUnit ) fromDate:[[NSDate alloc] init]];
        
        [components setHour:-24];
        [components setMinute:0];
        [components setSecond:0];
        NSDate *yesterday = [cal dateByAddingComponents:components toDate: [NSDate date] options:0];
        
        
        
        today = [NSString stringWithFormat:@"%@T00:00:00",[dateFormatter stringFromDate:yesterday]];
        
    }
    else
    {
        today = [NSString stringWithFormat:@"%@T00:00:00",[dateFormatter stringFromDate:[NSDate date]]];
        
    }
    
    
    NSString *resourcePath = [NSString stringWithFormat:@"Visits?$filter=StartDate eq datetime'%@' and EndDate eq null and StatusID eq '01'", today];
    [[RequestListener shared] scheduleRequestForResource:resourcePath withMode:SODataRequestModeRead withEntity:nil withCompletion:^(id<SODataEntitySet> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
        if(error == nil)
        {
            SODataEntitySetDefault *valueEntitySet = [[SODataEntitySetDefault alloc]init];
            valueEntitySet= entities;
            NSArray *entityArray1  = [[NSMutableArray alloc]initWithArray:valueEntitySet.entities];
            self.visitStartedDealers = [NSMutableArray arrayWithArray:entityArray1];
            if([entityArray1 count]>0)
            {
                id<SODataEntity> entity = [entityArray1 objectAtIndex:0];
                
                
                [self getCPName:[NSString stringWithFormat:@"%@",[(id<SODataProperty>)entity.properties[@"CPGUID"] value]] :^(BOOL success) {
                    if (success) {
                        
                        completionBlock(self.visitStartedDealers);
                    }
                }];
                
                ;
                
                
            } else{
                completionBlock(self.visitStartedDealers);
                
            }
            
            
            
        }
    }];
}

-(void) getCPName:(NSString *)cpGuid :(void (^)(BOOL success))completionBlock {
    
    NSString *resourcePath;
    
    if ([[NSUserDefaults standardUserDefaults] boolForKey:@"CUSTOEMR_ADHOCK"])
    {
        resourcePath = [NSString stringWithFormat:@"Customers?$filter=CustomerNo eq '%@'", cpGuid];
    }
    else
    {
        if ([cpGuid length] == 32) {
            SODataGuid *cpGuid1 = [[SODataGuid alloc]init];
            cpGuid1 = [[SODataGuid alloc]initWithString32:cpGuid];
            NSLog(@"%@", cpGuid1.guidAsString36);
            
            resourcePath = [NSString stringWithFormat:@"ChannelPartners?$filter=CPGUID eq guid'%@'", cpGuid1.guidAsString36];
            
        } else{
            resourcePath = [NSString stringWithFormat:@"ChannelPartners?$filter=CPGUID eq guid'%@'", cpGuid];
            
        }
    }
    
   
    
    
    [[RequestListener shared] scheduleRequestForResource:resourcePath withMode:SODataRequestModeRead withEntity:nil withCompletion:^(id<SODataEntitySet> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
        if(error == nil)
        {
            SODataEntitySetDefault *valueEntitySet = [[SODataEntitySetDefault alloc]init];
            valueEntitySet= entities;
            NSArray *entityArray1  = [[NSMutableArray alloc]initWithArray:valueEntitySet.entities];
            
            if ([entityArray1 count] > 0) {
                
                id<SODataEntity> entity = [entityArray1 objectAtIndex:0];
                
                NSString *cpName = [NSString stringWithFormat:@"%@", [(id<SODataProperty>)entity.properties[@"Name"] value]];
                [[NSUserDefaults standardUserDefaults] setObject:cpName forKey:@"CPNAME"];
                [[NSUserDefaults standardUserDefaults] synchronize];
                
                completionBlock(TRUE);
            }
            else{
                
                [[NSUserDefaults standardUserDefaults] setObject:@"" forKey:@"CPNAME"];
                [[NSUserDefaults standardUserDefaults] synchronize];
                
                completionBlock(TRUE);
            }
            
            
            
            
        }
    }];
    
}
-(void)otherBeatRetailers :(NSArray* )todayBeatArray : (void (^)( NSArray* otherBeatArray))completionBlock
{
    self.otherBeatsArray =[[NSMutableArray alloc] init];
    NSMutableString *filterString = [[NSMutableString alloc]init];
    for (int y = 0; y < [todayBeatArray count]; y++)
    {
        
        
        id<SODataEntity>entity = [todayBeatArray objectAtIndex:y];
        
        SODataGuid *rschGuid = (SODataGuid *)[(id<SODataProperty>)entity.properties[[NSString stringWithFormat:@"RschGuid"]] value];
        NSString *strRschGuid = [rschGuid guidAsString36];
        [filterString appendString:@"("];
        
        [filterString appendString:@"RouteSchGUID  ne guid'"];
        [filterString appendString:strRschGuid];
        [filterString appendString:@"')"];
        if(y < [todayBeatArray count]-1)
        {
            [filterString appendString:@" and "];
            
        }
    }
    NSString *resourcePath = [NSString stringWithFormat:@"RouteSchedules?$filter = %@", filterString];
    [[RequestListener shared] scheduleRequestForResource:resourcePath withMode:SODataRequestModeRead withEntity:nil withCompletion:^(id<SODataEntitySet> entities, id<SODataRequestExecution> requestExecution, NSError *error) {
        if(error == nil)
        {
            SODataEntitySetDefault *valueEntitySet = [[SODataEntitySetDefault alloc]init];
            valueEntitySet= entities;
            NSArray *entityArray1  = [[NSMutableArray alloc]initWithArray:valueEntitySet.entities];
            self.otherBeatsArray = [NSMutableArray arrayWithArray:entityArray1];
            
            completionBlock(self.otherBeatsArray);
            
        }
    }];
    
    
}

@end

