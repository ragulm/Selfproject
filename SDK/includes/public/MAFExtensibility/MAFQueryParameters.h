//
//  MAFQueryParameters.h
//  MAFExtensibility
//
//  Created by Vass, Gabor on 2012.08.30..
//
//

#import <Foundation/Foundation.h>

extern NSString* QUERY_PARAM_FILTER;
extern NSString* QUERY_PARAM_ORDERBY;
extern NSString* QUERY_PARAM_TOP;
extern NSString* QUERY_PARAM_SKIP;
extern NSString* QUERY_PARAM_SELECT;
extern NSString* QUERY_PARAM_SEARCH;

@protocol MAFQueryParameters <NSObject>

@required
@property (nonatomic, retain) NSMutableDictionary* queryParams;  ///< Additinal query parameters, e.g. filter, search, top, skip

/**
 Add provided dictionary to query parameters.
 */
-(void) addQueryParams:(NSDictionary*) params_in;

/**
 Return query parameter value, nil, if not exist
 @param name_in Parameter key.
 */
-(id) queryParamByName:(NSString*) name_in;


@end
