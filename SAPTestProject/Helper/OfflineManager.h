//
//  OfflineManager.h
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import "SODataOfflineStore.h"
#import "SODataStore.h"
#import "SODataStoreSync.h"
#import "SODataStoreAsync.h"
#import "SODataOfflineStoreOptions.h"
#import "SODataOfflineStore.h"
#import "MAFLogonRegistrationData.h"


@class Synchronization;
@class DBMethodCls;


@interface OfflineManager : SODataOfflineStore <SODataStore, SODataStoreSync, SODataStoreAsync,SODataOfflineStoreDelegate>
{
    Synchronization *synchronization;
    DBMethodCls *dbMethodCls;
}
@property(nonatomic, strong)NSDateFormatter *dateformatter;
@property (strong, nonatomic) MAFLogonRegistrationData *mData;
@property(nonatomic, strong) HttpConversationManager * conversation ;
@property(nonatomic, strong) NSArray *definingArray;


+(instancetype) sharedInstance;
- (void) openStoreWithCompletion:(void(^)(BOOL success))completion;
-(void)updateSyncHistory;
- (void) flushAndRefresh:(void(^)(BOOL success))completion;
- (void) refreshCollection:(NSString *)subset : (void(^)(BOOL success))completion;
- (void) flush:(void(^)(BOOL success))completion;
- (void) freshSync:(NSString *)subset : (void(^)(BOOL success))completion;
@end
