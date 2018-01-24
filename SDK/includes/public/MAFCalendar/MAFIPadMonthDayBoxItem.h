//
//  MAFIPadMonthDayBoxItem.h
//  MAFCalendar
//
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFAppointment.h"

@class MAFIPadMonthDayBox;

@interface MAFIPadMonthDayBoxItem : UILabel
-(id)initWithFrame:(CGRect)frame andAppointment:(MAFAppointment*)appointment;

@property (retain,nonatomic) MAFAppointment* app;
@property (assign) BOOL isSelected;

@end
