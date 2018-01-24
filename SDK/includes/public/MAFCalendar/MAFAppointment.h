//
//  MAFAppointment.h
//  CalendarPlay
//
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MAFAppointmentProtocol.h"

/**
 @class MAFAppointment
 
 @brief Default implementation of the MAFAppointmentProtocol.
 
 @author Jan Muehlbauer (external)
 
*/
@interface MAFAppointment : NSObject <MAFAppointmentProtocol>
{
    @private
	NSDate*   startDate;
	NSDate*   endDate;
	NSString* title;
	NSString* location;
	NSString* notes;
}

-(id)init;

@end
