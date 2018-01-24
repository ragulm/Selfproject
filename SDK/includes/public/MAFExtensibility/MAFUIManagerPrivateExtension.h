//
//  MAFUIManagerPrivateExtension.h
//  MAFExtensibility
//
//  Created by Egresits, David on 1/31/13.
//
//

#import <Foundation/Foundation.h>
#import "MAFUIManager.h"

@interface MAFUIManager(PrivateExtension)

- (UIViewController*) tileByIdentifierActiveMode:(NSString *)identifier_in withContext:(MAFContext *)context_in;

@end
