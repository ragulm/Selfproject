//
//  DBMethodCls.h
//  SMP3DEMOAPP
//
//  Created by Arteria on 20/02/15.
//  Copyright (c) 2015 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>`
#import "mSFASqlite.h"
@interface DBMethodCls : NSObject{
    NSString *fetchSQL;
}
@property(nonatomic, strong) NSMutableArray *result_syncHistory;


-(void)getDataFromSyncHistory;
-(void)getDataFromSyncHistoryForSelectedTable:(NSString *)strTable;
-(void)updateSyncHistory :(NSString *)tableName;
@end
