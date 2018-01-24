//
//  MAFApplicationSettingsCapability.h
//  MAFLogonManagerNG
//
//  Copyright © 2015 SAP SE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MAFApplicationSettingsCapability : NSObject <NSCoding, NSCopying>

/*
 *Specific properties of Capability
 */


/*
 * Category attribute of the Capability
 */
@property (nonatomic, readonly, copy) NSString *category;

/*
 * ApplicationConnectionId attribute of the Capability
 */
@property (nonatomic, readonly, copy) NSString *applicationConnectionId;


/*
 * CapabilityName attribute of the Capability
 */
@property (nonatomic, readonly, copy) NSString *capabilityName;

/*
 * CapabilityValue attribute of the Capability
 */
@property (nonatomic, readonly, copy) NSString *capabilityValue;

/*
 * Any other properties that might come on the top of the ones listed above
 * The values of the dictionary are MAFApplicationSettingsReadOnlyProperties.
 */
@property (nonatomic, readonly) NSDictionary *additionalProperties;

@end
