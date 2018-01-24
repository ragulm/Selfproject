//
//  MAFPersistentUIUpdating.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 2014.02.25..
//
//

#import <Foundation/Foundation.h>

@protocol MAFPersistentUIUpdating <NSObject>

@optional

#pragma mark - View / Control text

/**
 *  Persists text changes in object's descriptor
 *
 *  @param object_in UIView
 *  @param text_in   text to be set
 */
-(void) updateTextInDescriptor:(id)object_in text:(NSString*)text_in;

#pragma mark - Styling

/**
 *  Persists style changes
 *
 *  @param object_in    <#object_in description#>
 *  @param styleName_in <#styleName_in description#>
 */
-(void) updateStyleInDescriptor:(id)object_in style:(NSString*)styleName_in;

/**
 *  Persists accessibility label changes in object's descriptor
 *  @remark The accessibility label identifies the user interface element
 *
 *  @param object_in UIView
 *  @param text_in   text to be set
 */
-(void) updateAccessibilityLabelInDescriptor:(id)object_in text:(NSString*)text_in;

/**
 *  Persists accessibility hint changes in object's descriptor
 *  @remark The accessibility hint describes the results of performing an action on a view or control
 *
 *  @param object_in UIView
 *  @param text_in   text to be set
 */
-(void) updateAccessibilityHintInDescriptor:(id)object_in text:(NSString*)text_in;

#pragma mark - View / Control visibility

/**
 *  Updates visibility value in descriptor; this way consecutive uiRefresh actions will not override the value set from JS
 *  check weather using delegates to convey updates is a feasible solution
 *  @param object_in tile or UI element
 *  @param text_in   <#text_in description#>
 */
-(void) updateVisibilityInDescriptor:(id)object_in visible:(BOOL)isVisible_in;

#pragma mark - UIImageView related

-(void) updateImageSrcInDescriptor:(id)object_in imageSrc:(NSString*)imageName_in;

#pragma mark - UISwitch related

-(void) updateSwitchStateInDescriptor:(id)object_in value:(BOOL)isOn;

#pragma mark - View Layout

/**
 *  Persists size changes in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param size_in   UI element frame size
 */
-(void) updateSizeInDescriptor:(id)object_in size:(CGSize)size_in;

/**
 *  Persists margin setting in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists margin top setting in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateTopMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists bottom margin setting in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateBottomMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists left margin setting in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateLeftMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists right margin setting in object's descriptor persistent
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateRightMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists vertical margin settings (affects left and right margins) in object's descriptor
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateVerticalMarginInDescriptor:(id)object_in value:(CGFloat)value_in;

/**
 *  Persists horizontal margin settings (affects top and bottom margins) in object's descriptor
 *
 *  @param object_in tile or UI element
 *  @param value_in  marging value, applied in all directions (left, roght, top, bottom)
 */
-(void) updateHorizontalMarginInDescriptor:(id)object_in value:(CGFloat)value_in;


@end
