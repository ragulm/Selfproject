//
//  mSFASqlite.h
//  mSFA
//
//  Created by Arteria on 28/02/14.
//  Copyright (c) 2014 Arteria. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"

@interface mSFASqlite : NSObject
{
    sqlite3 *_database;
}
+(mSFASqlite *)dbManager;
-(NSString *) sqlliteapppath;
-(NSString *) doccumentspath;
-(void)copysqllitetodocuments;
-(NSArray *) selectStatement:(NSString *)query;
-(BOOL)insertStatement:(NSString *)iquery;
-(BOOL)deleteStatement:(NSString *)dquery;
-(BOOL)updateStatement:(NSString *)uquery;
@end
