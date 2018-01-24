//
//  MAFExpression.h
//  MAFConfigurationComponent/Evaluator
//
//  Created by Farkas, Zoltan on 05/03/12.
//

#import <Foundation/Foundation.h>

@class MAFContext;

@interface MAFExpression : NSObject<NSCoding> {
	NSMutableArray*	m_ExpressionCodes;
}

/**
  * Creates an expression that can be evaluated from a string. In case of an error the method returns nil.
  */
-(instancetype) initWithExpressionString:(NSString*)expressionString;

/**
  * Creates an expression that can be evaluated from a string. 
  * In case of an error the method returns a diagnostic error description 
  * if the errorDescription parameter is not nil. 
  * If the expression object is created, the errorDescription is not modified.
  */
-(instancetype) initWithExpressionString:(NSString*)expressionString errorDescription:(NSString**)errorDescription;

/**
  * Evaluates the expression. Throws an exception if the formula cannot be evaluated.
  */
-(id) evaluate:(MAFContext*)context;

@end
