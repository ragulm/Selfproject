//
//  MAFSkinningHelper.h
//  MAFUIComponent
//
//  Created by Farkas, Zoltan on 12/21/11.
//  Copyright (c) 2012 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MAFStyling.h"

#define MAFEXT_ENABLE_SKINNING

/**
 * Apply style on MAF UIElements
 * @param view styleable UIElement
 * @styleName name of the style
 */
void mafExtApplyStyleOnMAFUIElement(NSObject<MAFStyling>* view, NSString* styleName);

//Deprecated in 1.2
void mafExtResizeView(UIView* view, CGRect frame) DEPRECATED_ATTRIBUTE;