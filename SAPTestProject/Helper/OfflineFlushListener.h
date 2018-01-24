//
//  OfflineFlushListener.h
//  mSecSales
//
//  Created by Arteria on 14/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SODataOfflineStore.h"
#import "SAPSupportabilityFacade.h"

@interface OfflineFlushListener : NSObject<SODataOfflineStoreFlushDelegate, SODataOfflineStoreRequestErrorDelegate>

+(instancetype) sharedInstance;

@end
