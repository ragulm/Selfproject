//
//  MAFGenericBOInterface.h
//  MAFExtensibility
//
//  Created by Nyisztor Karoly on 12/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#define STATEFUL_BO 1

#import <Foundation/Foundation.h>

/**
 * BO states
 */
typedef enum E_MAFEXT_BO_STATES
{
    MAFExtBOStateTransient,     ///< newly created object on the client side, not yet persisted in the backend
    MAFExtBOStatePersistent,    ///< the BO has a persistent representation in the DB
    MAFExtBOStateDirty          ///< a persistent BO which was modified on the client, and has not yet been persisted
} MAFExtBOStates;

typedef enum E_MAFEXT_VALUEKEYS
{
    MAFExtODataEntryLinksKey,               ///< key for ODataEntry links
    MAFExtODataEntryTypedValuesKey,         ///< key for ODataEntry fields holding EDM types and the corresponding values
    MAFExtODataEntryIconsKey,               ///< key for ODataEntry icons
    MAFExtODataEntryInlineRelatedEntriesKey,///< key for ODataEntry inline rel. entries
    MAFExtODataEntryMediaLinksKey,          ///< key for ODataEntry media links
    MAFExtODataEntryEtagKey                 ///< key for ODataEntry etag
} MAFExtValueKeys;

/**
 * Public protocol to be implemented by custom BO classes which want to register themselves with the Data Component
 */
@protocol MAFGenericBO <NSObject>
/**
 * Initializer
 */
-(instancetype) initWithType:(NSString*)type_in andUID:(NSString*)uid_in;

/**
 * Sets value belonging to a predefined key
 */
- (void) setTypedValue:(id)value_in forKey:(NSString*)key_in;

/**
 * Sets value and its value type belonging to a predefined key
 */
-(void) setTypedValue:(id)value_in valueType:(int)valueType forKey:(NSString *)key_in;

/**
 * Gets value belonging to a predefined key
 */
- (id) getTypedValue:(NSString*)key_in;

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
@optional
/**
 * Sets the value for a custom key
 */
- (void)setCustomValue:(NSString*)value_in forKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;

/**
 * Returns the value for a custom key
 */
- (NSString*) customValueForKey:(NSString*)key_in DEPRECATED_ATTRIBUTE;
@required
@property (nonatomic, retain, readonly) NSString* type; ///< BOType (matches collection name for OData)
@property (nonatomic, retain, readonly) NSString* uid;  ///< unique BO identifier (matches SDMODataEntry ID for OData)
@property (nonatomic, retain) NSMutableDictionary* typedValues; ///< holds <key=valuePath, value=MAFTypeValuePair<type, nativeobject>>

#if STATEFUL_BO
@required
#else
@optional
#endif

@property (nonatomic, assign) MAFExtBOStates state; ///< BO state
/**
 * Returns whether the BO is in a transient state
 * A transient BO is a newly created object on the client side, which has not yet been persisted in the backend
 */
-(BOOL) isTransient;

/**
 * Returns whether the BO is in persistent state
 * A persistent BO has a persistent representation in the DB. BOs read from the DB are persistent as long as they are not modified on the client side
 */
-(BOOL) isPersistent;

/**
 * Returns whether the BO is in dirty state
 * A BO is in a dirty state if originally it was persistent, but it's been modified on the client side
 */
-(BOOL) isDirty;

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