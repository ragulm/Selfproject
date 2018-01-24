//
//  RequestListener.h
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SODataEntitySetDefault.h"
#import "SODataRequestDelegate.h"
#import "OfflineManager.h"
#import "OnlineStore.h"
#import "SODataDownloadMediaResultDefault.h"
#import "SODataDownloadMediaDelegate.h"



@interface RequestListener : NSObject<SODataRequestDelegate,SODataOnlineStoreDelegate, SODataDownloadMediaDelegate>

@property (nonatomic, strong) OfflineManager *offlineManager;
@property (nonatomic, strong) OnlineStore *onliningStore;
@property (strong, nonatomic) MAFLogonRegistrationData *dataMAF;
@property(nonatomic, strong) HttpConversationManager * conversation ;
@property (nonatomic, strong) NSMutableData *imageData;

@property (nonatomic, strong) OnlineStore *onliningStoreForComplaint;

@property BOOL isRegistered;

-(NSString *) getDate;

+ (instancetype)shared;
- (void) scheduleRequestForResource:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntitySet> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion;

- (void) scheduleRequestForEntity:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntity> entity, id<SODataRequestExecution>requestExecution, NSError *error))completion;
//
- (void) scheduleRequest:(id<SODataRequestParam>)request resourcePath:(NSString *)resourcePath completionHandler:(void(^)(id<SODataEntitySet> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion;

-(void)scheduleOnlineRequestForResource:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion;

-(void)createEntity:(id<SODataEntity>) entity withCompletion:(void(^)(BOOL success))completion;

- (void)setupOnlineStore;
- (void)setupOnlineStoreForComplaint;

-(void)scheduleOnlineRequestForComplaint:(NSString *)resourcePath withMode:(SODataRequestModes)mode withEntity:(id<SODataEntity>)entity withCompletion:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion;

- (void) scheduleOnlineRequestComplaint:(id<SODataRequestParam>)request resourcePath:(NSString *)resourcePath completionHandler:(void(^)(id<SODataEntity> entities, id<SODataRequestExecution>requestExecution, NSError *error))completion;


- (void) saveLogMessage:( NSString *)message;
-(NSMutableData *)mediaDownloadServerResponse:(NSInputStream *) stream;
-(void) mediaDownloadServerResponse:(NSInputStream *) stream completion:(void(^)(NSMutableData *data))completion;
@end
