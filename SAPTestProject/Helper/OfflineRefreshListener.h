//
//  OfflineRefreshListener.h
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SODataOfflineStore.h"
#import "SAPSupportabilityFacade.h"
#import "CommonAuthenticationConfigurator.h"



@interface OfflineRefreshListener : NSObject<SODataOfflineStoreRefreshDelegate, SAPSupportabilityFacade, SAML2ConfigProviderProtocol>

+(instancetype) sharedInstance;

@end
