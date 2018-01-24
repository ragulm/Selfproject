//
//  MAFAddressTableViewCellChanging.h
//  MAFFormatters
//
//  Copyright (c) 2015 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MAFAddressTableViewCell;

@protocol MAFAddressTableViewCellChanging <NSObject>

- (void) cellValueChangedForCell:(MAFAddressTableViewCell*)changedCell;

@end


//@interface MAFAddressTableViewCellChanging : NSObject {
//
//}
//@end
