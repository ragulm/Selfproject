//
//  MAFFormatterDescriptor.h
//  MAFExtensibility
//
//  Created by Vass, Gabor on 2012.08.23..
//
//

#import <Foundation/Foundation.h>
#import "MAFParameter.h"

typedef enum MAFEXT_FORMAT_TYPES{
    MAFEXT_FORMAT_TYPE_NUMBER        =   0,
    MAFEXT_FORMAT_TYPE_ADDRESS       =   1,
    MAFEXT_FORMAT_TYPE_CURRENCY      =   2,
    MAFEXT_FORMAT_TYPE_DATE          =   3,
    MAFEXT_FORMAT_TYPE_PHONE_NUMBER  =   4,
    MAFEXT_FORMAT_TYPE_EMAIL         =   5,
    MAFEXT_FORMAT_TYPE_CUSTOM        =   10
}MAFEXT_FORMAT_TYPES;

/**
 * Format parameter
 */
typedef MAFParameter MAFFormatParameter;

@interface MAFFormatDescriptor : NSObject

@property (nonatomic, assign, readonly)     MAFEXT_FORMAT_TYPES		type;		/**< Indicates the kind of data the formatter deals with (number, address, ...). */
@property (nonatomic, retain, readonly)     NSString*               pattern;	/**< Describes how the data should be formatted. */
@property (nonatomic, retain)               NSString*               customType;	/**< Textual ID of the custom formatter that is provided by the application. Used when data cannot be formatted with the available formatters. */
@property (nonatomic, retain, readonly)     NSMutableDictionary*    parameters;	/**< Parameters for the formatter. For example in case of currency the parameters to the formatter are the "amount" and the "currency code". */

-(instancetype) initWithType:(MAFEXT_FORMAT_TYPES)type andPattern:(NSString*)pattern;

/**
 * Adds a format parameter instance to the format descriptor with a textual id
 */
-(void) addParameter:(MAFFormatParameter*)parameter withId:(NSString*)parameterId;

@end
