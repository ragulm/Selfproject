//
//  DBMethodCls.m
//  SMP3DEMOAPP
//
//  Created by Arteria on 20/02/15.
//  Copyright (c) 2015 Arteria. All rights reserved.
//

#import "DBMethodCls.h"
#import "mSFASqlite.h"
@implementation DBMethodCls


@synthesize result_syncHistory;
#pragma mark - Registration

/***********  Getting Registration Details ***************/
-(void)getDataFromSyncHistory{
    fetchSQL=[NSString stringWithFormat:@"select * from SyncHistory where Time IS NOT NULL ORDER BY TableName"];
    NSArray *detail= [[mSFASqlite dbManager] selectStatement:fetchSQL];
    result_syncHistory=[(NSArray*)detail mutableCopy];
    
}
-(void)getDataFromSyncHistoryForSelectedTable:(NSString *)strTable{
    fetchSQL=[NSString stringWithFormat:@"select * from SyncHistory where Time IS NOT NULL and TableName = '%@'",strTable];
    NSArray *detail= [[mSFASqlite dbManager] selectStatement:fetchSQL];
    result_syncHistory=[(NSArray*)detail mutableCopy];
    
}

-(void)deleteFromSyncHistory{
    fetchSQL=[NSString stringWithFormat:@"delete * from SyncHistory"];
    NSArray *detail= [[mSFASqlite dbManager] selectStatement:fetchSQL];
    result_syncHistory=[(NSArray*)detail mutableCopy];
    
}


#pragma mark - Feedbacks
-(void)updateSyncHistory :(NSString *)tableName
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"dd/MM/yyyy HH:mm:ss"];
    NSString *time = [dateFormatter stringFromDate:[NSDate date]];
    
    NSString *insrt_query=[NSString stringWithFormat:@"update SyncHistory set Time = '%@' where TableName = '%@'",time, tableName];
    BOOL success=[[mSFASqlite dbManager] updateStatement:insrt_query];
    if (success) {
        [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"UPDATE_SUCCESS"];
        [[NSUserDefaults standardUserDefaults]synchronize];
    }
    
}

#pragma mark - insert table name
-(void)insertTableName :(NSString *)tableName
{
    
    NSString *insrt_query=[NSString stringWithFormat:@"insert into SyncHistory (TableName) value ('%@')",tableName];
    BOOL success=[[mSFASqlite dbManager] insertStatement:insrt_query];
    if (success) {
        [[NSUserDefaults standardUserDefaults]setBool:YES forKey:@"INSERT_SUCCESS"];
        [[NSUserDefaults standardUserDefaults]synchronize];
    }
    
}


@end
