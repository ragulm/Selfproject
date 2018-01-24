//
//  MAFDefaultBO.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 12/7/11.
//  Copyright (c) 2013 SAP AG. All rights reserved.
//

#import "MAFGenericBO.h"
#import "MAFTypeValuePair.h"

@class MAFTypeValuePairBase;

/**
 * This class serves as a default GenericBO implementation
 * @remark Unless you have special needs, use this class instead of implementing a custom Generic BO
 */
@interface MAFDefaultBO : NSObject <MAFGenericBO>

/**
 * Initializer
 */
-(instancetype) initWithType:(NSString*)type_in andUID:(NSString*)uid_in;

/**
 * Sets value belonging to a predefined key
 */
- (void) setTypedValue:(MAFTypeValuePairBase*)value_in forKey:(NSString*)key_in;

/**
 * Gets value belonging to a predefined key
 */
- (MAFTypeValuePairBase*) getTypedValue:(NSString*)key_in;

/**
 * Sets multiple values belonging to a predefined key
 * @remark MAFExtValueKeys are predefined to cover both OData and MBO
 */
- (void) setValues:(NSArray*)values_in forKey:(MAFExtValueKeys)key_in;
/**
 * Returns values based on the key parameter
 * @remark MAFExtValueKeys are predefined to cover both OData and MBO
 */
- (NSArray*) valuesForKey:(MAFExtValueKeys)key_in;

/**
 * Sets the value for a custom key
 */
- (void)setCustomValue:(NSString*)value_in forKey:(NSString*)key_in;

/**
 * Returns the value for a custom key
 */
- (NSString*) customValueForKey:(NSString*)key_in;


@property (nonatomic, retain, readonly) NSString* type; ///< BOType (matches collection name for OData)
@property (nonatomic, retain, readonly) NSString* uid;  ///< unique BO identifier (matches SDMODataEntry ID for OData)
@property (nonatomic, retain) NSMutableDictionary* typedValues; ///< holds <key=valuePath, value=MAFTypeValuePairBase<type, nativeobject>> 

#if STATEFUL_BO

@property (nonatomic, assign) MAFExtBOStates state; ///< BO state
/**
 * Returns whether the BO is in a transient state
 * A transient BO is a newly created object on the client side, which has not yet been persisted in the backend
 */
@property (nonatomic, getter=isTransient, readonly) BOOL transient;

/**
 * Returns whether the BO is in persistent state
 * A persistent BO has a persistent representation in the DB. BOs read from the DB are persistent as long as they are not modified on the client side
 */
@property (nonatomic, getter=isPersistent, readonly) BOOL persistent;

/**
 * Returns whether the BO is in dirty state
 * A BO is in a dirty state if originally it was persistent, but it's been modified on the client side
 */
@property (nonatomic, getter=isDirty, readonly) BOOL dirty;
#endif


#pragma mark - Undo Management

/**
 * Marks the start of an undo group (triggered explicitely based on configuration)
 * Undo groups hold actions which can be undone at once;
 */
-(void) pushUndoBuffer;

/*
 * Rolls back actions from last undo group
 */
-(void) popUndoBuffer;

/**
 * Wipes out the undo buffer; the BO is reset to its original state, all actions which have been performed are lost
 */
-(void) resetUndoBuffer;

@end

#pragma mark - MAFTypeValuePairBase declaration
/**
 * Pair construct for <type, value>
 * @see MAFGenericBO
 */
@interface MAFTypeValuePairBase : NSObject <MAFTypeValuePair>

@property (nonatomic, assign) int type;
@property (nonatomic, retain) id value;


-(instancetype) initWithType:(int)type_in andValue:(id)value_in;

@end
