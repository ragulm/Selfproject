//
//  LogonHandler.h
//  mSecSales
//
//  Created by Arteria on 11/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
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
#import "RequestListener.h"
#import "MAFLogonCore.h"
#import "DBMethodCls.h"

@class DBMethodCls;


@interface LogonHandler : NSObject<SODataOnlineStoreDelegate, SAML2ConfigProviderProtocol, MAFLogonCoreDelegate>
{
    NSString *communicatorId;
    NSString *appEndpoint;
    NSString *token;
    NSString *cookie;
    BOOL errorFlag;
   DBMethodCls *dbMethodCls;
    RequestListener * requestListener;
    OfflineManager * offlineManger;
    
}


@property (strong, nonatomic) MAFLogonUIViewManager *logonUIViewManager;
@property (strong, nonatomic) NSObject<MAFLogonNGPublicAPI> *logonManager;
@property (nonatomic, strong) HttpConversationManager *conversationManager;
@property (strong, nonatomic) MAFLogonRegistrationData *data;
@property (strong, nonatomic) MAFLogonCore *logonCore;


-(void)openOnlineStore:(void(^)(BOOL success))completion;
+(instancetype)singeltonLogonHandler;
-(SODataOfflineStoreOptions *)offlinestoreOptions;
-(void)onDeviceRegister:(NSString *)userName : (NSString *)password :(void(^)(BOOL success))completion;
-(void)assignValues;



@end
