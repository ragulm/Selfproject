//
//  MAFCountrySelecting.h
//  MAFFormatters
//
//  Copyright (c) 2015 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MAFCountrySelecting <NSObject>

@required

- (void)countrySelected:(NSString*)countryCode;

@end


//@interface MAFCountrySelecting : NSObject {
//
//}
//@end
