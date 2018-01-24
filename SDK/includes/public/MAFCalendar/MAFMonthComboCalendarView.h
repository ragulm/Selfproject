//
//  MAFMonthComboCalendarView.h
//  CalendarControl
//
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFListCalendarView.h"
#import "MAFMonthCalendarView.h"

@protocol MAFMonthComboCalendarViewDelegate
-(void)calendarView:(MAFMonthCalendarView*)calendar didSelectDay:(NSDate*)date;
@end

@class MAFMonthCalendarView;

@interface MAFMonthComboCalendarView : MAFCalendarView <MAFCalendarViewDelegate,MAFMonthComboCalendarViewDelegate>
{
    @private
    
    MAFListCalendarView* tv;
    //UIView* slaveView;
}

@property (retain,nonatomic) UIView<MAFMonthComboCalendarViewDelegate>* slaveView;
@property (retain,nonatomic) MAFMonthCalendarView* monthView;

-(id)initWithFrame:(CGRect)frame;

@end
