//
//  UsageInfo.h
//  Usage
//
//
//

/**
 Data object which can be passed to methods providing additional information.
 */
@interface UsageInfo : NSObject

@property (nonatomic, copy) NSString* UIScreen;
@property (nonatomic, copy) NSString* UIView;
@property (nonatomic, copy) NSString* UIElement;
@property (nonatomic, copy) NSString* UIAction;
@property (nonatomic, copy) NSString* UIBehavior;
@property (nonatomic, copy) NSString* UICase;
@property (nonatomic, copy) NSString* UIType;
@property (nonatomic, copy) NSString* UICategory;
@property (nonatomic, copy) NSString* UIResult;
@property (nonatomic, copy) NSString* UIUnit;
@property (nonatomic, copy) NSString* UIMeasurement;
@property (nonatomic, copy) NSString* UIValue;

@end

