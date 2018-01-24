//
//  CommonMethods.h
//  SAPIntergration
//
//  Created by Arteria on 08/12/17.
//  Copyright © 2017 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoreLocation/CoreLocation.h"
#import <UIKit/UIKit.h>
#import "SODataGuid.h"
#import "SAPSupportabilityFacade.h"
#import "SODataRequestParamSingleDefault.h"
#import "BatchRequest.h"
#import "SODataRequestParamBatchDefault.h"
#import "SODataRequestChangesetDefault.h"
#import "SODataEntityDefault.h"


@class MBProgressHUD;
@class AppDelegate;

@interface CommonMethods : NSObject<CLLocationManagerDelegate>
{
    MBProgressHUD *indicator;
    NSDateFormatter *dateFormatter;
}

@property(nonatomic, strong) NSString *latitude;
@property(nonatomic, strong) NSString *longitude;
@property(nonatomic, strong) CLLocationManager *locationManager;

@property(nonatomic, strong) NSMutableArray *salesOrderList;
@property(nonatomic, strong) NSMutableArray *customerTrackList;

@property(nonatomic, strong) NSMutableArray *salesPersonDetails;

@property(nonatomic, strong) NSMutableArray *myProfiles;

@property(nonatomic, strong) NSMutableArray *authorizations;
@property(nonatomic, strong) NSMutableArray *selectedOrderType;
@property(nonatomic, strong) NSMutableArray *selectedSalesArea;
@property(nonatomic, strong) NSMutableArray *otherBeatsArray;

@property(nonatomic, strong) NSMutableArray *selectedMaterial;
@property(nonatomic, strong) NSMutableArray *shippingPoint;
@property(nonatomic, strong) NSMutableArray *transporterList;
@property(nonatomic, strong) NSMutableArray *plant;
@property(nonatomic, strong) NSMutableArray *shippingCondition;
@property(nonatomic, strong) NSMutableArray *incoTerms1;
@property(nonatomic, strong) NSMutableDictionary *soValuesDict;
@property(nonatomic, strong) NSMutableArray *materials;
@property(nonatomic, strong) NSMutableDictionary *itemDateValues;
@property(nonatomic, strong) NSMutableDictionary *itemQuantityValues;
@property(nonatomic, strong) NSMutableArray *pricingArray;
@property(nonatomic, strong) SODataEntityDefault *salesOrderEntity;
@property(nonatomic, strong) SODataEntityDefault *salesOrderItemEntity;
@property(nonatomic, strong) SODataEntityDefault *salesOrderItemSchedulesEntity;
@property(nonatomic, strong) SODataEntityDefault *salesOrderTextEntity;
@property(nonatomic, strong) SODataEntityDefault *invoiceEntity;

@property(nonatomic, strong) NSMutableArray *soDeliverySchedules;
@property(nonatomic, strong) NSMutableArray *soDeliverySchedulesForEdit;
@property(nonatomic, assign) int wrongEntryCount;
@property(nonatomic, strong) NSMutableDictionary *deliverySchedule;
@property(nonatomic, assign) NSMutableArray *soStatusArray;
@property(nonatomic, assign) NSMutableArray *deliveryStatusArray;
@property(nonatomic, assign) NSMutableArray *invoicesList;
@property(nonatomic, strong) NSMutableArray *visitStartedDealers;


+ (void)showAlertWithTitle:(NSString *)title andMessage:(NSString *)message;
+ (NSArray *)buttonXValues;
+ (NSArray *)buttonYValues;

+ (NSArray *)viewYValues;
+ (NSArray *)labelXValues;
+ (NSArray *)labelYValues;
+ (float) labelWidth;
+ (float) labelHeight;
+ (float) buttonWidth;
+ (float) buttonHeight;

+(NSString *)entityType;
+(NSString *)numberOfDays;

+(NSString *)getNameSpace;
-(void)showProgressIndicatorWithTitle:(NSString *)title;
-(void)hideProgressIndicator;
+(NSArray *)definingRequest;
+(NSArray *)openStoreEntities;


+(instancetype)sharedInstance;

-(NSString *)stringFromDate :(NSDate *)date;
-(NSDate *)dateFromString :(NSString *)string;
+ (UIColor *)titleColor;
+ (UIColor *)buttonBorderColor;
+ (UIColor *)titleLabelColor;
+ (UIFont *)fontName;
+ (UIColor *)buttonBackGroundColor;
+(UIColor *)headerBackgroundColor;
+(UIColor *)sectionBackgroundColor;
+(UIColor *)themeColor;


-(void) getVisitActivity:(NSString *)cpGuid :(void (^)(NSArray *visitedArray))completionBlock;
-(void)otherBeatRetailers :(NSArray* )todayBeatArray : (void (^)( NSArray* otherBeatArray))completionBlock;
-(void)getVisitStartedDealers : (BOOL)previousDay : (void (^)( NSArray *visitedArray))completionBlock;

-(NSString *)getNameSpace;
- (void) saveLogMessage:( NSString *)message;
- (void) saveErrorLogMessage:( NSString *)message;

-(NSString *) getDateFromStirng:(SODataEntityDefault*) enitites key:(NSString *)key;

@end

