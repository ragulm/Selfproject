//
//  MAFCurrencyCatalog.h
//  MAFFormatters
//
//  Copyright (c) 2015 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MAFCurrencyCatalog : NSObject {
}

+(MAFCurrencyCatalog*) currencyCatalog;
-(void) addCurrency:(NSString*)ISO decimals:(NSNumber*)decimals;
-(int) decimalsByISO:(NSString*)ISO;

@end
