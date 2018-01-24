//
//  MAFIpadMainMonthLandscapeDayView.h
//  MAFCalendar
//
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MAFAppointmentView.h"

@class MAFIpadMainMonthView;
/**
 @class MAFIPADMonthLandscapeDayView
 @brief View class displaying day header area on top of week view.
 
 @author Marc Roettig (external)
 */
@interface MAFIPadMonthLandscapeDayView : UIView<MAFAppointmentViewDelegate>

/// property holding reference to parent week view
@property (retain,nonatomic) UILabel* monthLabel;
@property (assign, nonatomic) MAFIpadMainMonthView* parent;

/**
 Triggers reload of calendar data.
 */
-(void)reloadCalendarData;

@end
