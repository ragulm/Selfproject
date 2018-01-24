//
//  OnlineStore.h
//  mSecSales
//
//  Created by Arteria on 22/04/16.
//  Copyright © 2016 Arteria. All rights reserved.
//

#import "SODataOnlineStore.h"
#import "SODataStore.h"
#import "SODataStoreSync.h"
#import "SODataStoreAsync.h"

@interface OnlineStore : SODataOnlineStore <SODataStore, SODataStoreSync, SODataStoreAsync, SODataOnlineStoreDelegate>

- (void) openStoreWithCompletion:(void(^)(BOOL success))completion;
- (void) openingStoreWithCompletion:(void(^)(BOOL success))completion;

@end
