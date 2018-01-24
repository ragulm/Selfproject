//
//  OnlineRequestListener.h
//  mSecSales
//
//  Created by Arteria on 25/05/16.
//  Copyright © 2016 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SODataEntitySetDefault.h"
#import "SODataRequestDelegate.h"
#import "OnlineStore.h"
#import "SODataEntityDefault.h"


@interface OnlineRequestListener : NSObject<SODataRequestDelegate>
@property (nonatomic, strong) OnlineStore *onlineStore;


+ (instancetype)shared;
-(void)createEntity:(SODataEntityDefault *) entity forResource:(NSString *)resourcePath withCompletion:(void(^)(BOOL success))completion;

@end
