//
//  mSFASqlite.m
//  mSFA
//
//  Created by Arteria on 28/02/14.
//  Copyright (c) 2014 Arteria. All rights reserved.
//

#import "mSFASqlite.h"
#define DB_Name @"mSecSales.sqlite"
@implementation mSFASqlite
static mSFASqlite *dbManager;
#pragma mark - Singelton Method Access on all the classses.
+(mSFASqlite *)dbManager
{
    @try{
        if (dbManager == nil) {
            dbManager = [[mSFASqlite alloc] init];
        }
        return dbManager;
    }
    @catch (NSException *exception) {
        NSLog(@"mSFASqlite-dbManager %@:%@", [exception name], [exception reason]);
    }
    
}
#pragma mark - application path for sqlite
-(NSString *) sqlliteapppath
{
    @try{
        NSString *apppath = [[NSBundle mainBundle] bundlePath];
        apppath = [ apppath stringByAppendingPathComponent:DB_Name];
        
        return apppath;
    }
    @catch (NSException *exception) {
        NSLog(@"mSFASqlite-sqlliteapppath %@:%@", [exception name], [exception reason]);
    }
    
}
#pragma mark - document path for sqlite
-(NSString *) doccumentspath
{
    @try{
        NSArray *ary = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *docpath = [ary objectAtIndex:0];
        docpath = [ docpath stringByAppendingPathComponent:DB_Name];
        return docpath;
    }
    @catch (NSException *exception) {
        NSLog(@"mSFASqlite-doccumentspath %@:%@", [exception name], [exception reason]);
    }
    
}
#pragma mark - check whether sqlite is present if not present create sqlite
-(void)copysqllitetodocuments
{
    @try{
        NSString *apppath = [self sqlliteapppath];
        NSString *docpath = [self doccumentspath];
        
        NSFileManager *fl = [NSFileManager defaultManager];
        if(![fl fileExistsAtPath:docpath])
        {
            BOOL s = [fl copyItemAtPath : apppath toPath : docpath error:nil];
            if(s){
                NSLog(@"File copied Succesfully");
            }
            else {
                NSLog(@"failed to copy");
            }
        }
    }
    @catch (NSException *exception) {
        NSLog(@"mSFASqlite-copysqllitetodocuments %@:%@", [exception name], [exception reason]);
    }
}
#pragma mark - init Method
-(id)init {
	
	if (self = [super init])
	{
        @try{
            [self sqlliteapppath];
            [self doccumentspath];
            [self copysqllitetodocuments];
            NSString *databasePath = [self doccumentspath];
            if (sqlite3_open([databasePath UTF8String], &_database) != SQLITE_OK)
            {
                
                NSLog(@"mSFASqlite -init: Failed to open SQLite3 database with message: %s", sqlite3_errmsg(_database));
                
                return nil;
            }
            
        }
        @catch (NSException *exception)
        {
            NSLog(@"mSFASqlite-init %@:%@", [exception name], [exception reason]);
        }
        
    }
	
	return self;
}
#pragma mark - select statement
-(NSArray *) selectStatement:(NSString *)query
{
    @try{
        NSString *statementAsString = [[NSString alloc] initWithFormat:@"%@",query];
        const char *statement = [statementAsString UTF8String];
        NSMutableArray *rows;
        sqlite3_stmt *compiledStatement;
        if (sqlite3_prepare(_database, statement, -1, &compiledStatement, NULL) == SQLITE_OK)
        {
            rows = [[NSMutableArray alloc] init];
            NSMutableArray *keys;
            NSMutableArray *objects;
            NSDictionary *row;
            BOOL isNull;
            while (sqlite3_step(compiledStatement) == SQLITE_ROW)
            {
                keys = [[NSMutableArray alloc] init];
                objects = [[NSMutableArray alloc] init];
                int columnCount = sqlite3_column_count(compiledStatement);
                
                for (int i = 0; i < columnCount; i++)
                {
                    isNull = NO;
                    if (sqlite3_column_type(compiledStatement, i) == SQLITE_TEXT)
                    {
                        NSString *column = [[NSString alloc] initWithUTF8String:(char *)sqlite3_column_name(compiledStatement, i)];
                        
                        if ([column isEqualToString:@"created"] || [column isEqualToString:@"timestamp"] || [column isEqualToString:@"modified"]) {
                            
                            NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
                            [formatter setDateFormat:@"dd/mm/yyyy HH:mm:ss"];
                            
                            NSString *dateAsString = [[NSString alloc] initWithUTF8String:(char *)sqlite3_column_text(compiledStatement, i)];
                            NSDate *date = [formatter dateFromString:dateAsString];
                            
                            [objects addObject:date];
                            
                        }
                        else//1st
                        {
                            NSString *string = [[NSString alloc] initWithUTF8String:(char *)sqlite3_column_text(compiledStatement, i)];
                            [objects addObject:string];
                            
                        }
                    }
                    else if (sqlite3_column_type(compiledStatement, i) == SQLITE_INTEGER)
                    {
                        NSNumber *number = [[NSNumber alloc] initWithInt:sqlite3_column_int(compiledStatement, i)];
                        [objects addObject:number];
                        
                    }
                    else if (sqlite3_column_type(compiledStatement, i) == SQLITE_FLOAT)
                    {
                        
                        NSNumber *number = [[NSNumber alloc] initWithDouble:sqlite3_column_double(compiledStatement, i)];
                        [objects addObject:number];
                        
                    }
                    else if (sqlite3_column_type(compiledStatement, i) == SQLITE_NULL)
                    {
                     isNull = YES;
                        
                    }
                    else
                    {
                        NSLog(@"SQliteManager executeQuery: ||  column of undefined type");
                        sqlite3_finalize(compiledStatement);
                        
                        return nil;
                    }
                    
                    if (!isNull)
                    {
                        NSString *column = [[NSString alloc] initWithUTF8String:(char *)sqlite3_column_name(compiledStatement, i)];
                        [keys addObject:column];
                    }
                }
                row = [[NSDictionary alloc] initWithObjects:objects forKeys:keys];
                [rows addObject:row];
            }
            sqlite3_finalize(compiledStatement);
            
        }
        else
        {
            
            NSLog(@"SQliteManager selectStatement: || Failed to compile SQLite3 statement with message: %s", sqlite3_errmsg(_database));
            
            return nil;
        }
        NSArray *result;
        if ([rows count] == 0)
        {
            result = nil;
        }
        else if ([[rows objectAtIndex:0] count] == 0)
        {
            result = nil;
        }
        else
        {
            NSRange range = NSMakeRange(0, [rows count]);
            result = [[NSArray alloc] initWithArray:[rows subarrayWithRange:range]];
        }
        return result;
    }
    @catch (NSException *exception) {
        NSLog(@"SQLiteManager-selectStatement %@:%@", [exception name], [exception reason]);
    }
    
	
}
#pragma mark - insert statement
-(BOOL)insertStatement:(NSString *)iquery
{
       //insert statement
    @try{
        const char *statement = [iquery UTF8String];
        sqlite3_stmt *compiledStatement;
        BOOL succ;
        if (sqlite3_prepare(_database, statement, -1, &compiledStatement, NULL) == SQLITE_OK)
        {
            if (sqlite3_step(compiledStatement) != SQLITE_DONE)
            {
                
                NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
                succ=FALSE;
            }
            else
            {
                succ=TRUE;
            }
            
        }
        else
        {
            
            NSLog(@"SQLiteManager -insertQuery:intoTable: || Could not compile statement with message: %s", sqlite3_errmsg(_database));
            NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
        }
        sqlite3_finalize(compiledStatement);
        if(succ)
            return TRUE;
        
        return FALSE;
    }
    @catch (NSException *exception) {
        NSLog(@"SQLiteManager-insertStatement %@:%@", [exception name], [exception reason]);
    }
    
    
}
#pragma mark - delete Statement
-(BOOL)deleteStatement:(NSString *)dquery
{
    @try{
        const char *statement = [dquery UTF8String];
        sqlite3_stmt *compiledStatement;
        BOOL succ;
        if (sqlite3_prepare(_database, statement, -1, &compiledStatement, NULL) == SQLITE_OK)
        {
            if (sqlite3_step(compiledStatement) != SQLITE_DONE)
            {
                
                NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
                succ=FALSE;
            }
            else
            {
                succ=TRUE;
            }
        }
        else{
            NSLog(@"SQLiteManager -deleteQuery:Table: || Could not compile statement with message: %s", sqlite3_errmsg(_database));
            NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
        }
        sqlite3_finalize(compiledStatement);
    }
    @catch (NSException *exception) {
        NSLog(@"SQLiteManager-deleteStatement %@:%@", [exception name], [exception reason]);
    }
    
    
}
#pragma mark - update Statement
-(BOOL)updateStatement:(NSString *)uquery
{
    @try{
        const char *statement = [uquery UTF8String];
        sqlite3_stmt *compiledStatement;
        BOOL succ;
        if (sqlite3_prepare(_database, statement, -1, &compiledStatement, NULL) == SQLITE_OK)
        {
            if (sqlite3_step(compiledStatement) != SQLITE_DONE)
            {
                
                NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
                succ=FALSE;
            }else
            {
                succ=TRUE;
            }
            
        }
        else
        {
            
            NSLog(@"SQLiteManager -updateQuery:intoTable: || Could not compile statement with message: %s", sqlite3_errmsg(_database));
            NSLog(@"Statement: %@", [NSString stringWithUTF8String:statement]);
        }
        sqlite3_finalize(compiledStatement);
        if(succ)
            return TRUE;
        return FALSE;
        
    }
    @catch (NSException *exception) {
        NSLog(@"SQLiteManager-updateStatement %@:%@", [exception name], [exception reason]);
    }
    
}
@end
