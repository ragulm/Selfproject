//
//  MAFTokenizer.h
//  MAFConfigurationComponent/Evaluator
//
//  Created by Farkas, Zoltan on 05/03/12.
//

#include <Foundation/Foundation.h>

/**
 * Token priorities
 */
typedef enum TEN_TOKEN_PRIORITIES {
	TOKEN_PRIORITY_LOW			= 1,
	TOKEN_PRIORITY_MEDIUM		= 2,
	TOKEN_PRIORITY_HIGH			= 3,
	TOKEN_PRIORITY_VERY_HIGH	= 4
} TEN_TOKEN_PRIORITIES;

/**
 * Tokenizer rule structure
 */
@interface MAFTokenRule : NSObject { //this class should never be serialized!
	NSString*				m_BlockStart;
	NSString*				m_BlockEnd;
	TEN_TOKEN_PRIORITIES	m_Priority;
	BOOL					m_RemoveBlock;
	size_t					m_BlockStartLen;
	size_t					m_BlockEndLen;
}

@property (nonatomic, retain) NSString* blockStart;
@property (nonatomic, retain) NSString* blockEnd;
@property (nonatomic, assign) TEN_TOKEN_PRIORITIES priority;
@property (nonatomic, assign) BOOL removeBlock;
@property (nonatomic, assign) size_t blockStartLen;
@property (nonatomic, assign) size_t blockEndLen;

-(instancetype) initWithBlockStart:(NSString*)_BlockStart andBlockEnd:(NSString*)_BlockEnd 
		andTokenPriority:(const TEN_TOKEN_PRIORITIES)_Priority andRemoveBlock:(const BOOL)_RemoveBlock;
	

@end

/**
  * Simple tokenizer that tokenizes a line based on rules
  */
@interface MAFSimpleTokenizer : NSObject { //this class should never be serialized!
	NSString*				m_StringPtr;
	NSMutableArray*			m_Rules;
	
	//internals>>
	size_t					m_CharIndex;
	size_t					m_Length;
	size_t					m_LongestBlockLength;
	int						m_CurrentRulePriority;	
}

-(instancetype) init;
-(void) addRule:(const MAFTokenRule*)rule;
-(void) tokenizeLine:(NSString*)line;
-(BOOL) getNextToken:(NSMutableString**)result;

@end