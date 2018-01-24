//
//  OAuth2Support.h
//  HttpConvAuthFlows
//
//  Copyright © 2016 SAP AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAuth2ConfigProviderProtocol.h"
#import "OAuth2TokenStorageProtocol.h"
#import "OAuth2ResponseAnalizerProtocol.h"

@protocol OAuth2SupportProtocol <OAuth2ConfigProviderProtocol, OAuth2TokenStorageProtocol, OAuth2ResponseAnalizerProtocol>

@end
