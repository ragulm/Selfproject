//
//  MAFFeatureVectorPolicy.h
//  MAFLogonManagerNG
//
//  Created by Deak, Zsolt on 4/7/15.
//  Copyright (c) 2015 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MAFApplicationSettingsFeatureVectorPolicy : NSObject <NSCoding, NSCopying>

/*
 *Specific properties of the FeatureVectorPolicy
 */

/*
 * Name attribute of the FeatureVectorPolicy
 */
@property (nonatomic, readonly, copy) NSString *name;
/*
 * The description attribute of the FeatureVectorPolicy
 */
@property (nonatomic, readonly, copy) NSString *featureDescription;
/*
 * The name of the plugin
 */
@property (nonatomic, readonly, copy) NSString *pluginName;
/*
 * The ID of the FeatureVectorPolicy
 */
@property (nonatomic, readonly, copy) NSString *Id;
/*
 * The used JS module
 */
@property (nonatomic, readonly, copy) NSString *jsModule;
/*
 * The version of the FeatureVectorPolicy
 */
@property (nonatomic, readonly, copy) NSString *version;
/*
 * The displaying name of the FeatureVectorPolicy
 */
@property (nonatomic, readonly, copy) NSString *displayName;
/*
 * The whitelist
 */
@property (nonatomic, readonly, copy) NSString *whitelist;
/*
 * Any other properties that might come on the top of the ones listed above
 * The values of the dictionary are MAFApplicationSettingsReadOnlyProperties.
 */
@property (nonatomic, readonly) NSDictionary *additionalProperties;

@end
