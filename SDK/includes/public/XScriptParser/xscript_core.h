#ifndef XSCRIPT_CORE_H
#define XSCRIPT_CORE_H

@class XS_AnyAsObject;
@class XS_AnyIsObject;
@class XS_Assert;
@class XS_AtomicBoolean;
@class XS_AtomicInt;
@class XS_Base16Binary;
@class XS_Base64Binary;
@class XS_BinaryConstant;
@class XS_BinaryDefault;
@class XS_BinaryFunction;
@class XS_BinaryOperator;
@class XS_BlockingQueue;
@class XS_BooleanDefault;
@class XS_BooleanFunction;
@class XS_BooleanOperator;
@class XS_ByteBuffer;
@class XS_ByteConstant;
@class XS_ByteDefault;
@class XS_ByteFunction;
@class XS_ByteMath;
@class XS_ByteOperator;
@class XS_CharBuffer;
@class XS_CharDefault;
@class XS_CharFunction;
@class XS_CharOperator;
@class XS_CheckProperty;
@class XS_ClassName;
@class XS_Comparer;
@class XS_ConditionVariable;
@class XS_CountingSemaphore;
@class XS_CurrentProcess;
@class XS_CurrentThread;
@class XS_DebugConsole;
@class XS_DebugConsole_FlushThread; /* internal */
@class XS_DebugSocket; /* internal */
@class XS_DebugWriter; /* internal */
@class XS_DecimalConstant;
@class XS_DecimalDefault;
@class XS_DecimalFunction;
@class XS_DecimalMath;
@class XS_DecimalOperator;
@class XS_DoubleDefault;
@class XS_DoubleFunction;
@class XS_DoubleMath;
@class XS_DoubleOperator;
@class XS_Equality;
@class XS_ExceptionBase;
@class XS_FloatDefault;
@class XS_FloatFunction;
@class XS_FloatMath;
@class XS_FloatOperator;
@class XS_GUID;
@class XS_Ignore;
@class XS_IntConstant;
@class XS_IntCounter;
@class XS_IntDefault;
@class XS_IntFunction;
@class XS_IntMath;
@class XS_IntOperator;
@class XS_IntegerConstant;
@class XS_IntegerDefault;
@class XS_IntegerFunction;
@class XS_IntegerMath;
@class XS_IntegerOperator;
@class XS_Logger;
@class XS_LoggerFactory;
@class XS_LongConstant;
@class XS_LongCounter;
@class XS_LongDefault;
@class XS_LongFunction;
@class XS_LongMath;
@class XS_LongOperator;
@class XS_NullableBinary;
@class XS_NullableBoolean;
@class XS_NullableByte;
@class XS_NullableChar;
@class XS_NullableDecimal;
@class XS_NullableDouble;
@class XS_NullableFloat;
@class XS_NullableInt;
@class XS_NullableInteger;
@class XS_NullableLong;
@class XS_NullableObject;
@class XS_NullableShort;
@class XS_NullableString;
@class XS_NumberParser;
@class XS_ObjectAsAny;
@class XS_ObjectFactory;
@class XS_ObjectFunction;
@class XS_ObjectIsAny;
@class XS_ObjectOperator;
@class XS_OutOfMemory;
@class XS_PearsonHashing;
@class XS_ReentrantMutex;
@class XS_RunAction;
@class XS_RunFunction;
@class XS_SchemaFormat;
@class XS_ShortConstant;
@class XS_ShortDefault;
@class XS_ShortFunction;
@class XS_ShortMath;
@class XS_ShortOperator;
@class XS_StringComparer;
@class XS_StringConstant;
@class XS_StringDefault;
@class XS_StringEquality;
@class XS_StringFunction;
@class XS_StringOperator;
@class XS_SystemClock;
@class XS_SystemConsole;
@class XS_SystemError;
@class XS_SystemProcess;
@class XS_ThreadLocal;
@class XS_ThreadSleep;
@class XS_ThreadStart;
@class XS_UTF8;
@class XS_UntypedList;
@class XS_UntypedMap;
@class XS_UntypedSet;
@class XS_EmptyList;
@class XS_EmptyMap;
@class XS_EmptySet;
@class XS_FatalException;
@class XS_InstanceLogger;
@class XS_LogToConsole; /* internal */
@class XS_StackDumpException; /* internal */
@class XS_StringComparerIgnoreCase; /* internal */
@class XS_StringEqualityIgnoreCase; /* internal */
@class XS_UndefinedComparer; /* internal */
@class XS_UndefinedEquality; /* internal */
@class XS_AbstractFunctionException;
@class XS_AbstractPropertyException;
@class XS_AssertException;
@class XS_BinaryIndexException;
@class XS_CastException;
@class XS_ConversionException;
@class XS_EmptyListException;
@class XS_FormatException;
@class XS_ImmutableException;
@class XS_InfinityException;
@class XS_ListIndexException;
@class XS_MissingEntryException;
@class XS_NotImplementedException;
@class XS_NotUniqueException;
@class XS_NullValueException;
@class XS_OverflowException;
@class XS_UndefinedException;
@class XS_UnexpectedException;
@class XS_UsageException;

#ifndef imported_XS_AnyAsObject_public
#define imported_XS_AnyAsObject_public
@interface XS_AnyAsObject : XS_ObjectBase
{
}
+ (xs_nonnull NSObject*) cast :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_AnyIsObject_public
#define imported_XS_AnyIsObject_public
@interface XS_AnyIsObject : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_Assert_public
#define imported_XS_Assert_public
@interface XS_Assert : XS_ObjectBase
{
}
+ (void) error :(xs_nonnull NSString*)message;
+ (void) isFalse :(xs_boolean)condition :(xs_nonnull NSString*)message;
+ (void) isTrue :(xs_boolean)condition :(xs_nonnull NSString*)message;
@end
#endif

#ifndef imported_XS_AtomicBoolean_public
#define imported_XS_AtomicBoolean_public
@interface XS_AtomicBoolean : XS_ObjectBase
{
    @private xs_boolean value;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AtomicBoolean*) new;
- (void) _init;
- (xs_boolean) compareAndSet :(xs_boolean)expect :(xs_boolean)update;
- (xs_boolean) get;
- (xs_boolean) getAndSet :(xs_boolean)newValue;
- (void) set :(xs_boolean)newValue;
- (xs_nonnull NSString*) toString;
@end
#endif

#ifndef imported_XS_AtomicInt_public
#define imported_XS_AtomicInt_public
@interface XS_AtomicInt : XS_ObjectBase
{
    @private xs_int value;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AtomicInt*) new;
- (void) _init;
- (xs_boolean) compareAndSet :(xs_int)expect :(xs_int)update;
- (xs_int) get;
- (xs_int) getAndSet :(xs_int)newValue;
- (void) set :(xs_int)newValue;
- (xs_nonnull NSString*) toString;
@end
#endif

#ifndef imported_XS_Base16Binary_public
#define imported_XS_Base16Binary_public
@interface XS_Base16Binary : XS_ObjectBase
{
}
+ (xs_nonnull NSData*) convert :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) format :(xs_nonnull NSData*)data;
+ (xs_int) getCharAsInt :(xs_char)c;
+ (xs_char) getIntAsChar :(xs_int)i;
+ (xs_nonnull NSData*) parse :(xs_nonnull NSString*)text;
@end
#endif

#ifdef import_XS_Base16Binary_private
#ifndef imported_XS_Base16Binary_private
#define imported_XS_Base16Binary_private
@interface XS_Base16Binary (private)
+ (xs_nonnull XS_FormatException*) badFormat :(xs_nonnull NSString*)text;
@end
#endif
#endif

#ifndef imported_XS_Base64Binary_public
#define imported_XS_Base64Binary_public
@interface XS_Base64Binary : XS_ObjectBase
{
}
+ (xs_nonnull NSData*) convert :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) format :(xs_nonnull NSData*)data;
+ (xs_nonnull NSString*) formatPadSafe :(xs_nonnull NSData*)data :(xs_boolean)pad :(xs_boolean)safe;
+ (xs_int) getCharAsInt :(xs_char)c;
+ (xs_char) getIntAsChar :(xs_int)i :(xs_boolean)safe;
+ (xs_nonnull NSData*) parse :(xs_nonnull NSString*)text;
@end
#endif

#ifdef import_XS_Base64Binary_private
#ifndef imported_XS_Base64Binary_private
#define imported_XS_Base64Binary_private
@interface XS_Base64Binary (private)
+ (xs_nonnull XS_FormatException*) badFormat :(xs_nonnull NSString*)text;
@end
#endif
#endif

#ifndef imported_XS_BinaryConstant_public
#define imported_XS_BinaryConstant_public
@interface XS_BinaryConstant : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull NSData*) empty;
@end
#define XS_BinaryConstant_empty [XS_BinaryConstant empty]
#endif

#ifndef imported_XS_BinaryDefault_public
#define imported_XS_BinaryDefault_public
@interface XS_BinaryDefault : XS_ObjectBase
{
}
+ (xs_nonnull NSData*) emptyIfNull :(xs_nullable NSData*)value;
+ (xs_nonnull NSData*) ifEmpty :(xs_nullable NSData*)param_value :(xs_nonnull NSData*)defaultValue;
+ (xs_nonnull NSData*) ifNull :(xs_nullable NSData*)value :(xs_nonnull NSData*)defaultValue;
+ (xs_nullable NSData*) nullIfEmpty :(xs_nullable NSData*)value;
@end
#endif

#ifndef imported_XS_BinaryFunction_public
#define imported_XS_BinaryFunction_public
@interface XS_BinaryFunction : XS_ObjectBase
{
}
+ (xs_byte) byteAt :(xs_nonnull NSData*)value :(xs_int)index;
+ (xs_int) compareTo :(xs_nonnull NSData*)value :(xs_nonnull NSData*)other;
+ (xs_int) hashCode :(xs_nonnull NSData*)value;
+ (xs_int) indexOf :(xs_nonnull NSData*)value :(xs_nonnull NSData*)find;
+ (xs_int) indexOf :(xs_nonnull NSData*)value :(xs_nonnull NSData*)find :(xs_int)start;
+ (xs_nonnull NSData*) slice :(xs_nonnull NSData*)value :(xs_int)start;
+ (xs_nonnull NSData*) slice :(xs_nonnull NSData*)value :(xs_int)start :(xs_int)end;
+ (xs_nonnull NSString*) toString :(xs_nonnull NSData*)value;
@end
#endif

#ifndef imported_XS_BinaryOperator_public
#define imported_XS_BinaryOperator_public
@interface XS_BinaryOperator : XS_ObjectBase
{
}
+ (xs_int) compare :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) equal :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) greaterEqual :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) greaterThan :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) lessEqual :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) lessThan :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) notEqual :(xs_nonnull NSData*)left :(xs_nonnull NSData*)right;
@end
#endif

#ifndef imported_XS_BlockingQueue_public
#define imported_XS_BlockingQueue_public
@interface XS_BlockingQueue : XS_ObjectBase
{
    @private XS_UntypedList* xs___nonnull  queue_;
    @private xs_int getIndex;
    @private xs_int putIndex;
    @private xs_int maxCount;
    @private xs_int count;
    @private XS_ReentrantMutex* xs___nonnull  mutex_;
    @private XS_ConditionVariable* xs___nonnull  notEmpty_;
    @private XS_ConditionVariable* xs___nonnull  notFull_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_BlockingQueue*) new;
+ (xs_nonnull XS_BlockingQueue*) new :(xs_int)size;
- (void) _init :(xs_int)size;
- (xs_nullable NSObject*) dequeue;
- (void) enqueue :(xs_nullable NSObject*)item;
@end
#endif

#ifdef import_XS_BlockingQueue_private
#ifndef imported_XS_BlockingQueue_private
#define imported_XS_BlockingQueue_private
@interface XS_BlockingQueue (private)
- (xs_nonnull XS_ReentrantMutex*) mutex;
- (xs_nonnull XS_ConditionVariable*) notEmpty;
- (xs_nonnull XS_ConditionVariable*) notFull;
- (xs_nonnull XS_UntypedList*) queue;
- (void) setMutex :(xs_nonnull XS_ReentrantMutex*)value;
- (void) setNotEmpty :(xs_nonnull XS_ConditionVariable*)value;
- (void) setNotFull :(xs_nonnull XS_ConditionVariable*)value;
- (void) setQueue :(xs_nonnull XS_UntypedList*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ReentrantMutex* mutex;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ConditionVariable* notEmpty;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ConditionVariable* notFull;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedList* queue;
@end
#endif
#endif

#ifndef imported_XS_BooleanDefault_public
#define imported_XS_BooleanDefault_public
@interface XS_BooleanDefault : XS_ObjectBase
{
}
+ (xs_boolean) falseIfNull :(xs_nullable_boolean)value;
+ (xs_boolean) ifNull :(xs_nullable_boolean)value :(xs_boolean)defaultValue;
+ (xs_boolean) trueIfNull :(xs_nullable_boolean)value;
@end
#endif

#ifndef imported_XS_BooleanFunction_public
#define imported_XS_BooleanFunction_public
@interface XS_BooleanFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toString :(xs_boolean)value;
@end
#endif

#ifndef imported_XS_BooleanOperator_public
#define imported_XS_BooleanOperator_public
@interface XS_BooleanOperator : XS_ObjectBase
{
}
+ (xs_int) compare :(xs_boolean)left :(xs_boolean)right;
+ (xs_boolean) equal :(xs_boolean)left :(xs_boolean)right;
+ (xs_boolean) notEqual :(xs_boolean)left :(xs_boolean)right;
@end
#endif

#ifndef imported_XS_ByteBuffer_public
#define imported_XS_ByteBuffer_public
@interface XS_ByteBuffer : XS_ObjectBase
{
    @private xs_byte* my_buffer;
    @private xs_int my_capacity;
    @private xs_int my_offset;
}
- (xs_nonnull xs_byte*) ptr;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ByteBuffer*) new;
+ (xs_nonnull XS_ByteBuffer*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) add :(xs_byte)value;
- (void) append :(xs_nullable NSData*)value;
- (void) clear;
- (void) dealloc;
- (xs_byte) get :(xs_int)index;
- (xs_nonnull NSData*) getArray;
- (xs_short) getInt16BE :(xs_int)index;
- (xs_short) getInt16LE :(xs_int)index;
- (xs_int) getInt32BE :(xs_int)index;
- (xs_int) getInt32LE :(xs_int)index;
- (xs_nonnull NSData*) getRange :(xs_int)start :(xs_int)end;
- (xs_int) length;
- (void) reverse;
- (void) set :(xs_int)index :(xs_byte)value;
- (void) setInt16BE :(xs_int)index :(xs_short)value;
- (void) setInt16LE :(xs_int)index :(xs_short)value;
- (void) setInt32BE :(xs_int)index :(xs_int)value;
- (void) setInt32LE :(xs_int)index :(xs_int)value;
- (void) setLength :(xs_int)value;
- (void) setRange :(xs_int)index :(xs_nonnull NSData*)value;
- (xs_nonnull NSData*) toBinary;
@property (nonatomic, readonly) xs_int length;
@end
#endif

#ifndef imported_XS_ByteConstant_public
#define imported_XS_ByteConstant_public
@interface XS_ByteConstant : XS_ObjectBase
{
}
#define XS_ByteConstant_MIN_VALUE XS_BYTE(-128)
#define XS_ByteConstant_MAX_VALUE XS_BYTE(127)
@end
#endif

#ifndef imported_XS_ByteDefault_public
#define imported_XS_ByteDefault_public
@interface XS_ByteDefault : XS_ObjectBase
{
}
+ (xs_byte) ifNull :(xs_nullable_byte)value :(xs_byte)defaultValue;
+ (xs_byte) zeroIfNull :(xs_nullable_byte)value;
@end
#endif

#ifndef imported_XS_ByteFunction_public
#define imported_XS_ByteFunction_public
@interface XS_ByteFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toString :(xs_byte)value;
+ (xs_nonnull NSString*) toString :(xs_byte)value :(xs_int)radix;
+ (xs_int) toUnsigned :(xs_byte)value;
@end
#endif

#ifndef imported_XS_ByteMath_public
#define imported_XS_ByteMath_public
@interface XS_ByteMath : XS_ObjectBase
{
}
+ (xs_byte) abs :(xs_byte)x;
+ (xs_byte) max :(xs_byte)x :(xs_byte)y;
+ (xs_byte) min :(xs_byte)x :(xs_byte)y;
+ (xs_int) sign :(xs_byte)x;
@end
#endif

#ifndef imported_XS_ByteOperator_public
#define imported_XS_ByteOperator_public
@interface XS_ByteOperator : XS_ObjectBase
{
}
+ (xs_byte) add :(xs_byte)left :(xs_byte)right;
+ (xs_int) compare :(xs_byte)left :(xs_byte)right;
+ (xs_byte) divide :(xs_byte)left :(xs_byte)right;
+ (xs_boolean) equal :(xs_byte)left :(xs_byte)right;
+ (xs_boolean) greaterEqual :(xs_byte)left :(xs_byte)right;
+ (xs_boolean) greaterThan :(xs_byte)left :(xs_byte)right;
+ (xs_boolean) lessEqual :(xs_byte)left :(xs_byte)right;
+ (xs_boolean) lessThan :(xs_byte)left :(xs_byte)right;
+ (xs_byte) multiply :(xs_byte)left :(xs_byte)right;
+ (xs_byte) negate :(xs_byte)value;
+ (xs_boolean) notEqual :(xs_byte)left :(xs_byte)right;
+ (xs_byte) remainder :(xs_byte)left :(xs_byte)right;
+ (xs_byte) subtract :(xs_byte)left :(xs_byte)right;
@end
#endif

#ifdef import_XS_ByteOperator_internal
#ifndef imported_XS_ByteOperator_internal
#define imported_XS_ByteOperator_internal
@interface XS_ByteOperator (internal)
+ (xs_byte) check :(xs_int)value;
@end
#endif
#endif

#ifndef imported_XS_CharBuffer_public
#define imported_XS_CharBuffer_public
@interface XS_CharBuffer : XS_ObjectBase
{
    @private xs_char* my_buffer;
    @private xs_int my_capacity;
    @private xs_int my_offset;
}
- (xs_nonnull xs_char*) ptr;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CharBuffer*) new;
+ (xs_nonnull XS_CharBuffer*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) add :(xs_char)value;
- (void) append :(xs_nullable NSString*)value;
+ (xs_nonnull NSString*) append2 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2;
+ (xs_nonnull NSString*) append3 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3;
+ (xs_nonnull NSString*) append4 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4;
+ (xs_nonnull NSString*) append5 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4 :(xs_nullable NSString*)x5;
+ (xs_nonnull NSString*) append6 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4 :(xs_nullable NSString*)x5 :(xs_nullable NSString*)x6;
+ (xs_nonnull NSString*) append7 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4 :(xs_nullable NSString*)x5 :(xs_nullable NSString*)x6 :(xs_nullable NSString*)x7;
+ (xs_nonnull NSString*) append8 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4 :(xs_nullable NSString*)x5 :(xs_nullable NSString*)x6 :(xs_nullable NSString*)x7 :(xs_nullable NSString*)x8;
+ (xs_nonnull NSString*) append9 :(xs_nullable NSString*)x1 :(xs_nullable NSString*)x2 :(xs_nullable NSString*)x3 :(xs_nullable NSString*)x4 :(xs_nullable NSString*)x5 :(xs_nullable NSString*)x6 :(xs_nullable NSString*)x7 :(xs_nullable NSString*)x8 :(xs_nullable NSString*)x9;
- (void) clear;
- (void) dealloc;
- (xs_char) get :(xs_int)index;
- (xs_nonnull NSString*) getRange :(xs_int)start :(xs_int)end;
- (xs_int) length;
- (void) reverse;
- (void) set :(xs_int)index :(xs_char)value;
- (void) setLength :(xs_int)value;
- (void) setRange :(xs_int)index :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) toString;
@property (nonatomic, readonly) xs_int length;
@end
#endif

#ifndef imported_XS_CharDefault_public
#define imported_XS_CharDefault_public
@interface XS_CharDefault : XS_ObjectBase
{
}
+ (xs_boolean) ifNull :(xs_nullable_boolean)value :(xs_boolean)defaultValue;
@end
#endif

#ifndef imported_XS_CharFunction_public
#define imported_XS_CharFunction_public
@interface XS_CharFunction : XS_ObjectBase
{
}
+ (xs_boolean) isDigit :(xs_char)value;
+ (xs_boolean) isHexDigit :(xs_char)value;
+ (xs_boolean) isLowerCase :(xs_char)value;
+ (xs_boolean) isUpperCase :(xs_char)value;
+ (xs_boolean) isWhitespace :(xs_char)value;
+ (xs_char) toLowerCase :(xs_char)value;
+ (xs_nonnull NSString*) toString :(xs_char)value;
+ (xs_char) toUpperCase :(xs_char)value;
+ (xs_nonnull NSString*) unicodePlus :(xs_char)value;
@end
#endif

#ifndef imported_XS_CharOperator_public
#define imported_XS_CharOperator_public
@interface XS_CharOperator : XS_ObjectBase
{
}
+ (xs_int) compare :(xs_char)left :(xs_char)right;
+ (xs_boolean) equal :(xs_char)left :(xs_char)right;
+ (xs_boolean) greaterEqual :(xs_char)left :(xs_char)right;
+ (xs_boolean) greaterThan :(xs_char)left :(xs_char)right;
+ (xs_boolean) lessEqual :(xs_char)left :(xs_char)right;
+ (xs_boolean) lessThan :(xs_char)left :(xs_char)right;
+ (xs_boolean) notEqual :(xs_char)left :(xs_char)right;
@end
#endif

#ifndef imported_XS_CheckProperty_public
#define imported_XS_CheckProperty_public
@interface XS_CheckProperty : XS_ObjectBase
{
}
+ (xs_nonnull NSObject*) isDefined :(xs_nullable NSObject*)owner :(xs_nonnull NSString*)name :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_ClassName_public
#define imported_XS_ClassName_public
@interface XS_ClassName : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) of :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_Comparer_public
#define imported_XS_Comparer_public
@interface XS_Comparer : XS_ObjectBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_Comparer*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_Comparer*) undefined;
@end
#endif

#ifndef imported_XS_ConditionVariable_public
#define imported_XS_ConditionVariable_public
@interface XS_ConditionVariable : XS_ObjectBase
{
    @private pthread_cond_t condition;
    @private XS_ReentrantMutex* xs___nonnull  mutex_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ConditionVariable*) new :(xs_nonnull XS_ReentrantMutex*)param_mutex;
- (void) _init :(xs_nonnull XS_ReentrantMutex*)param_mutex;
- (void) await;
- (void) signal;
@end
#endif

#ifdef import_XS_ConditionVariable_private
#ifndef imported_XS_ConditionVariable_private
#define imported_XS_ConditionVariable_private
@interface XS_ConditionVariable (private)
- (xs_nonnull XS_ReentrantMutex*) mutex;
- (void) setMutex :(xs_nonnull XS_ReentrantMutex*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ReentrantMutex* mutex;
@end
#endif
#endif

#ifndef imported_XS_CountingSemaphore_public
#define imported_XS_CountingSemaphore_public
@interface XS_CountingSemaphore : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CountingSemaphore*) new :(xs_int)permits;
- (void) _init :(xs_int)permits;
- (void) acquire;
- (void) release_;
- (xs_boolean) tryAcquire :(xs_int)timeout;
@end
#endif

#ifndef imported_XS_CurrentProcess_public
#define imported_XS_CurrentProcess_public
@interface XS_CurrentProcess : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull NSString*) host;
+ (xs_nonnull NSString*) idAtHost;
+ (xs_long) id_;
@end
#endif

#ifdef import_XS_CurrentProcess_private
#ifndef imported_XS_CurrentProcess_private
#define imported_XS_CurrentProcess_private
@interface XS_CurrentProcess (private)
+ (xs_nonnull NSString*) initIdAtHost;
@end
#endif
#endif

#ifndef imported_XS_CurrentThread_public
#define imported_XS_CurrentThread_public
@interface XS_CurrentThread : XS_ObjectBase
{
}
+ (xs_long) id_;
+ (xs_nonnull NSString*) name;
@end
#endif

#ifndef imported_XS_DebugConsole_public
#define imported_XS_DebugConsole_public
@interface XS_DebugConsole : XS_ObjectBase
{
}
+ (void) initialize;
+ (void) append :(xs_nonnull NSString*)file;
+ (void) close;
+ (void) connect :(xs_nonnull NSString*)host :(xs_int)port;
+ (void) debug :(xs_nonnull NSString*)message;
+ (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (void) disconnect;
+ (void) dumpStack;
+ (void) error :(xs_nonnull NSString*)message;
+ (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (void) flush;
+ (xs_nonnull NSString*) getCaptured;
+ (void) info :(xs_nonnull NSString*)message;
+ (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (void) log :(xs_nonnull NSString*)message;
+ (void) log :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) log :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (void) mainException :(xs_nonnull NSException*)cause;
+ (void) open :(xs_nonnull NSString*)file;
+ (void) startCapture;
+ (void) stopCapture;
+ (void) trace :(xs_nonnull NSString*)message;
+ (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (void) traceEx :(xs_nonnull NSException*)cause;
+ (void) traceIn :(xs_nonnull NSString*)method;
+ (void) traceOut :(xs_nonnull NSString*)method;
+ (void) warn :(xs_nonnull NSString*)message;
+ (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
@end
#endif

#ifdef import_XS_DebugConsole_private
#ifndef imported_XS_DebugConsole_private
#define imported_XS_DebugConsole_private
@interface XS_DebugConsole (private)
+ (void) addCaptured :(xs_nonnull NSString*)line;
+ (void) formatAndLog :(xs_nonnull NSString*)level :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
+ (void) formatAndLog :(xs_nonnull NSString*)param_level :(xs_nonnull NSString*)param_message :(xs_nullable NSException*)cause :(xs_boolean)dump;
+ (xs_nonnull NSString*) getSpaces;
+ (xs_int) indent;
+ (xs_boolean) isDuplicated;
+ (xs_boolean) mainConsole;
+ (void) setIndent :(xs_int)value;
+ (xs_nonnull NSString*) threadInfo;
+ (xs_nonnull NSString*) timePrefix;
+ (void) write :(xs_nonnull NSString*)text;
+ (void) writeChar :(xs_char)c;
+ (void) writeLine :(xs_nonnull NSString*)text;
@end
#endif
#endif

#ifdef import_XS_DebugConsole_FlushThread_internal
#ifndef imported_XS_DebugConsole_FlushThread_internal
#define imported_XS_DebugConsole_FlushThread_public
/* internal */
@interface XS_DebugConsole_FlushThread : XS_ObjectBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DebugConsole_FlushThread*) new;
- (void) _init;
- (void) run;
- (void) start;
+ (void) startOnce;
@end
#endif
#endif

#ifdef import_XS_DebugSocket_internal
#ifndef imported_XS_DebugSocket_internal
#define imported_XS_DebugSocket_public
/* internal */
@interface XS_DebugSocket : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DebugSocket*) new;
- (void) _init;
- (void) close;
+ (xs_nonnull XS_DebugSocket*) open :(xs_nonnull NSString*)host :(xs_int)port;
- (void) send :(xs_nonnull NSData*)data;
@end
#endif
#endif

#ifdef import_XS_DebugWriter_internal
#ifndef imported_XS_DebugWriter_internal
#define imported_XS_DebugWriter_public
/* internal */
@interface XS_DebugWriter : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DebugWriter*) new;
- (void) _init;
+ (xs_nonnull XS_DebugWriter*) append :(xs_nonnull NSString*)file;
- (void) close;
- (void) flush;
+ (xs_nonnull XS_DebugWriter*) open :(xs_nonnull NSString*)file;
- (void) write :(xs_nonnull NSString*)line;
@end
#endif
#endif

#ifndef imported_XS_DecimalConstant_public
#define imported_XS_DecimalConstant_public
@interface XS_DecimalConstant : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigDecimal*) ZERO;
@end
#define XS_DecimalConstant_ZERO [XS_DecimalConstant ZERO]
#endif

#ifndef imported_XS_DecimalDefault_public
#define imported_XS_DecimalDefault_public
@interface XS_DecimalDefault : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigDecimal*) ifNull :(xs_nullable XS_BigDecimal*)value :(xs_nonnull XS_BigDecimal*)defaultValue;
+ (xs_nonnull XS_BigDecimal*) zeroIfNull :(xs_nullable XS_BigDecimal*)value;
@end
#endif

#ifdef import_XS_DecimalDefault_private
#ifndef imported_XS_DecimalDefault_private
#define imported_XS_DecimalDefault_private
@interface XS_DecimalDefault (private)
+ (xs_nonnull XS_BigDecimal*) DECIMAL_ZERO;
@end
#define XS_DecimalDefault_DECIMAL_ZERO [XS_DecimalDefault DECIMAL_ZERO]
#endif
#endif

#ifndef imported_XS_DecimalFunction_public
#define imported_XS_DecimalFunction_public
@interface XS_DecimalFunction : XS_ObjectBase
{
}
+ (xs_nonnull XS_BigDecimal*) fromByte :(xs_byte)value;
+ (xs_nonnull XS_BigDecimal*) fromDouble :(xs_double)value;
+ (xs_nonnull XS_BigDecimal*) fromFloat :(xs_float)value;
+ (xs_nonnull XS_BigDecimal*) fromInt :(xs_int)value;
+ (xs_nonnull XS_BigDecimal*) fromInteger :(xs_nonnull XS_BigInteger*)value;
+ (xs_nonnull XS_BigDecimal*) fromLong :(xs_long)value;
+ (xs_nonnull XS_BigDecimal*) fromShort :(xs_short)value;
+ (xs_byte) toByte :(xs_nonnull XS_BigDecimal*)value;
+ (xs_double) toDouble :(xs_nonnull XS_BigDecimal*)value;
+ (xs_float) toFloat :(xs_nonnull XS_BigDecimal*)value;
+ (xs_int) toInt :(xs_nonnull XS_BigDecimal*)value;
+ (xs_nonnull XS_BigInteger*) toInteger :(xs_nonnull XS_BigDecimal*)value;
+ (xs_long) toLong :(xs_nonnull XS_BigDecimal*)value;
+ (xs_short) toShort :(xs_nonnull XS_BigDecimal*)value;
+ (xs_nonnull NSString*) toString :(xs_nonnull XS_BigDecimal*)value;
@end
#endif

#ifndef imported_XS_DecimalMath_public
#define imported_XS_DecimalMath_public
@interface XS_DecimalMath : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigDecimal*) abs :(xs_nonnull XS_BigDecimal*)x;
+ (xs_nonnull XS_BigDecimal*) ceil :(xs_nonnull XS_BigDecimal*)x;
+ (xs_nonnull XS_BigDecimal*) floor :(xs_nonnull XS_BigDecimal*)x;
+ (xs_nonnull XS_BigDecimal*) max :(xs_nonnull XS_BigDecimal*)x :(xs_nonnull XS_BigDecimal*)y;
+ (xs_nonnull XS_BigDecimal*) min :(xs_nonnull XS_BigDecimal*)x :(xs_nonnull XS_BigDecimal*)y;
+ (xs_nonnull XS_BigDecimal*) round :(xs_nonnull XS_BigDecimal*)x;
+ (xs_nonnull XS_BigDecimal*) round :(xs_nonnull XS_BigDecimal*)x :(xs_int)scale;
+ (xs_int) sign :(xs_nonnull XS_BigDecimal*)x;
@end
#endif

#ifdef import_XS_DecimalMath_private
#ifndef imported_XS_DecimalMath_private
#define imported_XS_DecimalMath_private
@interface XS_DecimalMath (private)
+ (xs_nonnull XS_BigDecimal*) DECIMAL_ZERO;
@end
#define XS_DecimalMath_DECIMAL_ZERO [XS_DecimalMath DECIMAL_ZERO]
#endif
#endif

#ifndef imported_XS_DecimalOperator_public
#define imported_XS_DecimalOperator_public
@interface XS_DecimalOperator : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigDecimal*) add :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_int) compare :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) divide :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) equal :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) greaterThan :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) lessEqual :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) lessThan :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) multiply :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) negate :(xs_nonnull XS_BigDecimal*)value;
+ (xs_boolean) notEqual :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) remainder :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) subtract :(xs_nonnull XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
@end
#endif

#ifdef import_XS_DecimalOperator_private
#ifndef imported_XS_DecimalOperator_private
#define imported_XS_DecimalOperator_private
@interface XS_DecimalOperator (private)
+ (xs_nonnull XS_BigDecimal*) DECIMAL_ZERO;
@end
#define XS_DecimalOperator_DECIMAL_ZERO [XS_DecimalOperator DECIMAL_ZERO]
#endif
#endif

#ifndef imported_XS_DoubleDefault_public
#define imported_XS_DoubleDefault_public
@interface XS_DoubleDefault : XS_ObjectBase
{
}
+ (xs_double) ifNull :(xs_nullable_double)value :(xs_double)defaultValue;
+ (xs_double) zeroIfNull :(xs_nullable_double)value;
@end
#endif

#ifndef imported_XS_DoubleFunction_public
#define imported_XS_DoubleFunction_public
@interface XS_DoubleFunction : XS_ObjectBase
{
}
+ (xs_int) byteValue :(xs_double)value;
+ (xs_int) intValue :(xs_double)value;
+ (xs_long) longValue :(xs_double)value;
+ (xs_short) shortValue :(xs_double)value;
+ (xs_nonnull NSString*) toExponential :(xs_double)value;
+ (xs_nonnull NSString*) toFixed :(xs_double)value :(xs_int)scale;
+ (xs_nonnull NSString*) toString :(xs_double)value;
@end
#endif

#ifndef imported_XS_DoubleMath_public
#define imported_XS_DoubleMath_public
@interface XS_DoubleMath : XS_ObjectBase
{
}
+ (xs_double) abs :(xs_double)x;
+ (xs_double) acos :(xs_double)x;
+ (xs_double) asin :(xs_double)x;
+ (xs_double) atan :(xs_double)x;
+ (xs_double) atan2 :(xs_double)y :(xs_double)x;
+ (xs_double) ceil :(xs_double)x;
+ (xs_double) cos :(xs_double)x;
+ (xs_double) exp :(xs_double)x;
+ (xs_double) floor :(xs_double)x;
+ (xs_double) log :(xs_double)x;
+ (xs_double) max :(xs_double)x :(xs_double)y;
+ (xs_double) min :(xs_double)x :(xs_double)y;
+ (xs_double) pow :(xs_double)x :(xs_double)y;
+ (xs_double) random;
+ (xs_double) round :(xs_double)x;
+ (xs_int) sign :(xs_double)x;
+ (xs_double) sin :(xs_double)x;
+ (xs_double) sqrt :(xs_double)x;
+ (xs_double) tan :(xs_double)x;
#define XS_DoubleMath_E 2.7182818284590452
#define XS_DoubleMath_LN2 0.6931471805599453
#define XS_DoubleMath_LN10 2.3025850929940460
#define XS_DoubleMath_LOG2E 1.4426950408889634
#define XS_DoubleMath_LOG10E 0.4342944819032518
#define XS_DoubleMath_PI 3.1415926535897932
#define XS_DoubleMath_SQRT1_2 0.7071067811865476
#define XS_DoubleMath_SQRT2 1.4142135623730951
@end
#endif

#ifndef imported_XS_DoubleOperator_public
#define imported_XS_DoubleOperator_public
@interface XS_DoubleOperator : XS_ObjectBase
{
}
+ (xs_double) add :(xs_double)left :(xs_double)right;
+ (xs_int) compare :(xs_double)left :(xs_double)right;
+ (xs_double) divide :(xs_double)left :(xs_double)right;
+ (xs_boolean) equal :(xs_double)left :(xs_double)right;
+ (xs_boolean) greaterEqual :(xs_double)left :(xs_double)right;
+ (xs_boolean) greaterThan :(xs_double)left :(xs_double)right;
+ (xs_boolean) lessEqual :(xs_double)left :(xs_double)right;
+ (xs_boolean) lessThan :(xs_double)left :(xs_double)right;
+ (xs_double) multiply :(xs_double)left :(xs_double)right;
+ (xs_double) negate :(xs_double)value;
+ (xs_boolean) notEqual :(xs_double)left :(xs_double)right;
+ (xs_double) remainder :(xs_double)left :(xs_double)right;
+ (xs_double) subtract :(xs_double)left :(xs_double)right;
@end
#endif

#ifdef import_XS_DoubleOperator_internal
#ifndef imported_XS_DoubleOperator_internal
#define imported_XS_DoubleOperator_internal
@interface XS_DoubleOperator (internal)
+ (xs_double) check :(xs_double)value;
@end
#endif
#endif

#ifndef imported_XS_Equality_public
#define imported_XS_Equality_public
@interface XS_Equality : XS_ObjectBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_Equality*) new;
- (void) _init;
- (xs_boolean) equal :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_Equality*) undefined;
@end
#endif

#ifndef imported_XS_ExceptionBase_public
#define imported_XS_ExceptionBase_public
@interface XS_ExceptionBase : NSException
{
    @private NSException* xs___nullable  cause_;
    @private NSString* xs___nullable  message_;
}
+ (BOOL) setOrThrow :(xs_out_NSError)error :(xs_nonnull NSException*)exception;
+ (xs_nonnull XS_ExceptionBase*) new;
- (void) _init;
- (xs_nullable NSException*) cause;
+ (xs_nullable NSString*) getReason :(xs_nullable NSException*)param_cause :(xs_nullable NSString*)param_message;
- (xs_nullable NSString*) message;
- (void) setCause :(xs_nullable NSException*)value;
- (void) setMessage :(xs_nullable NSString*)value;
- (xs_nonnull NSString*) toString;
@property (xs__nullable nonatomic, readwrite, strong) NSException* cause;
@property (xs__nullable nonatomic, readwrite) NSString* message;
@end
#endif

#ifndef imported_XS_FloatDefault_public
#define imported_XS_FloatDefault_public
@interface XS_FloatDefault : XS_ObjectBase
{
}
+ (xs_float) ifNull :(xs_nullable_float)value :(xs_float)defaultValue;
+ (xs_float) zeroIfNull :(xs_nullable_float)value;
@end
#endif

#ifndef imported_XS_FloatFunction_public
#define imported_XS_FloatFunction_public
@interface XS_FloatFunction : XS_ObjectBase
{
}
+ (xs_int) byteValue :(xs_float)value;
+ (xs_int) intValue :(xs_float)value;
+ (xs_long) longValue :(xs_float)value;
+ (xs_short) shortValue :(xs_float)value;
+ (xs_nonnull NSString*) toExponential :(xs_float)value;
+ (xs_nonnull NSString*) toFixed :(xs_float)value :(xs_int)scale;
+ (xs_nonnull NSString*) toString :(xs_float)value;
@end
#endif

#ifndef imported_XS_FloatMath_public
#define imported_XS_FloatMath_public
@interface XS_FloatMath : XS_ObjectBase
{
}
+ (xs_float) abs :(xs_float)x;
+ (xs_float) acos :(xs_float)x;
+ (xs_float) asin :(xs_float)x;
+ (xs_float) atan :(xs_float)x;
+ (xs_float) atan2 :(xs_float)y :(xs_float)x;
+ (xs_float) ceil :(xs_float)x;
+ (xs_float) cos :(xs_float)x;
+ (xs_float) exp :(xs_float)x;
+ (xs_float) floor :(xs_float)x;
+ (xs_float) log :(xs_float)x;
+ (xs_float) max :(xs_float)x :(xs_float)y;
+ (xs_float) min :(xs_float)x :(xs_float)y;
+ (xs_float) pow :(xs_float)x :(xs_float)y;
+ (xs_float) random;
+ (xs_float) round :(xs_float)x;
+ (xs_int) sign :(xs_float)x;
+ (xs_float) sin :(xs_float)x;
+ (xs_float) sqrt :(xs_float)x;
+ (xs_float) tan :(xs_float)x;
#define XS_FloatMath_E 2.7182818284590452f
#define XS_FloatMath_LN2 0.6931471805599453f
#define XS_FloatMath_LN10 2.3025850929940460f
#define XS_FloatMath_LOG2E 1.4426950408889634f
#define XS_FloatMath_LOG10E 0.4342944819032518f
#define XS_FloatMath_PI 3.1415926535897932f
#define XS_FloatMath_SQRT1_2 0.7071067811865476f
#define XS_FloatMath_SQRT2 1.4142135623730951f
@end
#endif

#ifndef imported_XS_FloatOperator_public
#define imported_XS_FloatOperator_public
@interface XS_FloatOperator : XS_ObjectBase
{
}
+ (xs_float) add :(xs_float)left :(xs_float)right;
+ (xs_int) compare :(xs_float)left :(xs_float)right;
+ (xs_float) divide :(xs_float)left :(xs_float)right;
+ (xs_boolean) equal :(xs_float)left :(xs_float)right;
+ (xs_boolean) greaterEqual :(xs_float)left :(xs_float)right;
+ (xs_boolean) greaterThan :(xs_float)left :(xs_float)right;
+ (xs_boolean) lessEqual :(xs_float)left :(xs_float)right;
+ (xs_boolean) lessThan :(xs_float)left :(xs_float)right;
+ (xs_float) multiply :(xs_float)left :(xs_float)right;
+ (xs_float) negate :(xs_float)value;
+ (xs_boolean) notEqual :(xs_float)left :(xs_float)right;
+ (xs_float) remainder :(xs_float)left :(xs_float)right;
+ (xs_float) subtract :(xs_float)left :(xs_float)right;
@end
#endif

#ifdef import_XS_FloatOperator_internal
#ifndef imported_XS_FloatOperator_internal
#define imported_XS_FloatOperator_internal
@interface XS_FloatOperator (internal)
+ (xs_float) check :(xs_float)value;
@end
#endif
#endif

#ifndef imported_XS_GUID_public
#define imported_XS_GUID_public
@interface XS_GUID : XS_ObjectBase
{
    @private NSData* xs___nonnull  bytes;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_GUID*) fromBinary :(xs_nonnull NSData*)data;
+ (xs_nonnull XS_GUID*) fromString :(xs_nonnull NSString*)param_text;
+ (xs_nonnull XS_GUID*) newRandom;
- (xs_nonnull NSData*) toBinary;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSString*) toString32;
- (xs_nonnull NSString*) toString36;
@end
#endif

#ifdef import_XS_GUID_private
#ifndef imported_XS_GUID_private
#define imported_XS_GUID_private
@interface XS_GUID (private)
+ (xs_nonnull XS_GUID*) new;
+ (xs_nonnull NSData*) toVersion4 :(xs_nonnull NSData*)param_bytes;
+ (xs_nonnull XS_GUID*) _new1 :(xs_nonnull NSData*)p1;
@end
#endif
#endif

#ifndef imported_XS_Ignore_public
#define imported_XS_Ignore_public
@interface XS_Ignore : XS_ObjectBase
{
}
+ (void) valueOf_any :(xs_nullable NSObject*)value;
+ (void) valueOf_binary :(xs_nonnull NSData*)value;
+ (void) valueOf_boolean :(xs_boolean)value;
+ (void) valueOf_byte :(xs_byte)value;
+ (void) valueOf_char :(xs_char)value;
+ (void) valueOf_decimal :(xs_nonnull XS_BigDecimal*)value;
+ (void) valueOf_double :(xs_double)value;
+ (void) valueOf_float :(xs_float)value;
+ (void) valueOf_int :(xs_int)value;
+ (void) valueOf_integer :(xs_nonnull XS_BigInteger*)value;
+ (void) valueOf_long :(xs_long)value;
+ (void) valueOf_nullableBinary :(xs_nullable NSData*)value;
+ (void) valueOf_nullableBoolean :(xs_nullable_boolean)value;
+ (void) valueOf_nullableByte :(xs_nullable_byte)value;
+ (void) valueOf_nullableChar :(xs_nullable_char)value;
+ (void) valueOf_nullableDecimal :(xs_nullable XS_BigDecimal*)value;
+ (void) valueOf_nullableDouble :(xs_nullable_double)value;
+ (void) valueOf_nullableFloat :(xs_nullable_float)value;
+ (void) valueOf_nullableInt :(xs_nullable_int)value;
+ (void) valueOf_nullableInteger :(xs_nullable XS_BigInteger*)value;
+ (void) valueOf_nullableLong :(xs_nullable_long)value;
+ (void) valueOf_nullableShort :(xs_nullable_short)value;
+ (void) valueOf_nullableString :(xs_nullable NSString*)value;
+ (void) valueOf_short :(xs_short)value;
+ (void) valueOf_string :(xs_nonnull NSString*)value;
@end
#endif

#ifndef imported_XS_IntConstant_public
#define imported_XS_IntConstant_public
@interface XS_IntConstant : XS_ObjectBase
{
}
#define XS_IntConstant_MIN_VALUE XS_INT_MIN
#define XS_IntConstant_MAX_VALUE 2147483647
@end
#endif

#ifndef imported_XS_IntCounter_public
#define imported_XS_IntCounter_public
@interface XS_IntCounter : XS_ObjectBase
{
    @private xs_int count_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_IntCounter*) new;
- (void) _init;
- (void) add :(xs_int)n;
- (xs_int) count;
- (void) setCount :(xs_int)value;
@property (nonatomic, readwrite) xs_int count;
@end
#endif

#ifndef imported_XS_IntDefault_public
#define imported_XS_IntDefault_public
@interface XS_IntDefault : XS_ObjectBase
{
}
+ (xs_int) ifNull :(xs_nullable_int)value :(xs_int)defaultValue;
+ (xs_int) zeroIfNull :(xs_nullable_int)value;
@end
#endif

#ifndef imported_XS_IntFunction_public
#define imported_XS_IntFunction_public
@interface XS_IntFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toString :(xs_int)value;
+ (xs_nonnull NSString*) toString :(xs_int)value :(xs_int)radix;
@end
#endif

#ifdef import_XS_IntFunction_internal
#ifndef imported_XS_IntFunction_internal
#define imported_XS_IntFunction_internal
@interface XS_IntFunction (internal)
+ (void) checkRadix :(xs_int)radix;
+ (xs_char) toDigit :(xs_int)value;
@end
#endif
#endif

#ifndef imported_XS_IntMath_public
#define imported_XS_IntMath_public
@interface XS_IntMath : XS_ObjectBase
{
}
+ (xs_int) abs :(xs_int)x;
+ (xs_int) max :(xs_int)x :(xs_int)y;
+ (xs_int) min :(xs_int)x :(xs_int)y;
+ (xs_int) sign :(xs_int)x;
@end
#endif

#ifndef imported_XS_IntOperator_public
#define imported_XS_IntOperator_public
@interface XS_IntOperator : XS_ObjectBase
{
}
+ (xs_int) add :(xs_int)left :(xs_int)right;
+ (xs_int) compare :(xs_int)left :(xs_int)right;
+ (xs_int) divide :(xs_int)left :(xs_int)right;
+ (xs_boolean) equal :(xs_int)left :(xs_int)right;
+ (xs_boolean) greaterEqual :(xs_int)left :(xs_int)right;
+ (xs_boolean) greaterThan :(xs_int)left :(xs_int)right;
+ (xs_boolean) lessEqual :(xs_int)left :(xs_int)right;
+ (xs_boolean) lessThan :(xs_int)left :(xs_int)right;
+ (xs_int) multiply :(xs_int)left :(xs_int)right;
+ (xs_int) negate :(xs_int)value;
+ (xs_boolean) notEqual :(xs_int)left :(xs_int)right;
+ (xs_int) remainder :(xs_int)left :(xs_int)right;
+ (xs_int) subtract :(xs_int)left :(xs_int)right;
@end
#endif

#ifdef import_XS_IntOperator_internal
#ifndef imported_XS_IntOperator_internal
#define imported_XS_IntOperator_internal
@interface XS_IntOperator (internal)
+ (xs_int) check :(xs_long)value;
@end
#endif
#endif

#ifndef imported_XS_IntegerConstant_public
#define imported_XS_IntegerConstant_public
@interface XS_IntegerConstant : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigInteger*) ZERO;
@end
#define XS_IntegerConstant_ZERO [XS_IntegerConstant ZERO]
#endif

#ifndef imported_XS_IntegerDefault_public
#define imported_XS_IntegerDefault_public
@interface XS_IntegerDefault : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigInteger*) ifNull :(xs_nullable XS_BigInteger*)value :(xs_nonnull XS_BigInteger*)defaultValue;
+ (xs_nonnull XS_BigInteger*) zeroIfNull :(xs_nullable XS_BigInteger*)value;
@end
#endif

#ifdef import_XS_IntegerDefault_private
#ifndef imported_XS_IntegerDefault_private
#define imported_XS_IntegerDefault_private
@interface XS_IntegerDefault (private)
+ (xs_nonnull XS_BigInteger*) INTEGER_ZERO;
@end
#define XS_IntegerDefault_INTEGER_ZERO [XS_IntegerDefault INTEGER_ZERO]
#endif
#endif

#ifndef imported_XS_IntegerFunction_public
#define imported_XS_IntegerFunction_public
@interface XS_IntegerFunction : XS_ObjectBase
{
}
+ (xs_nonnull XS_BigInteger*) fromByte :(xs_byte)value;
+ (xs_nonnull XS_BigInteger*) fromDecimal :(xs_nonnull XS_BigDecimal*)value;
+ (xs_nonnull XS_BigInteger*) fromDouble :(xs_double)value;
+ (xs_nonnull XS_BigInteger*) fromFloat :(xs_float)value;
+ (xs_nonnull XS_BigInteger*) fromInt :(xs_int)value;
+ (xs_nonnull XS_BigInteger*) fromLong :(xs_long)value;
+ (xs_nonnull XS_BigInteger*) fromShort :(xs_short)value;
+ (xs_byte) toByte :(xs_nonnull XS_BigInteger*)value;
+ (xs_nonnull XS_BigDecimal*) toDecimal :(xs_nonnull XS_BigInteger*)value;
+ (xs_double) toDouble :(xs_nonnull XS_BigInteger*)value;
+ (xs_float) toFloat :(xs_nonnull XS_BigInteger*)value;
+ (xs_int) toInt :(xs_nonnull XS_BigInteger*)value;
+ (xs_long) toLong :(xs_nonnull XS_BigInteger*)value;
+ (xs_short) toShort :(xs_nonnull XS_BigInteger*)value;
+ (xs_nonnull NSString*) toString :(xs_nonnull XS_BigInteger*)value;
@end
#endif

#ifndef imported_XS_IntegerMath_public
#define imported_XS_IntegerMath_public
@interface XS_IntegerMath : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigInteger*) abs :(xs_nonnull XS_BigInteger*)x;
+ (xs_nonnull XS_BigInteger*) max :(xs_nonnull XS_BigInteger*)x :(xs_nonnull XS_BigInteger*)y;
+ (xs_nonnull XS_BigInteger*) min :(xs_nonnull XS_BigInteger*)x :(xs_nonnull XS_BigInteger*)y;
+ (xs_int) sign :(xs_nonnull XS_BigInteger*)x;
@end
#endif

#ifdef import_XS_IntegerMath_private
#ifndef imported_XS_IntegerMath_private
#define imported_XS_IntegerMath_private
@interface XS_IntegerMath (private)
+ (xs_nonnull XS_BigInteger*) INTEGER_ZERO;
@end
#define XS_IntegerMath_INTEGER_ZERO [XS_IntegerMath INTEGER_ZERO]
#endif
#endif

#ifndef imported_XS_IntegerOperator_public
#define imported_XS_IntegerOperator_public
@interface XS_IntegerOperator : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_BigInteger*) add :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_int) compare :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) divide :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) equal :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) greaterThan :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) lessEqual :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) lessThan :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) multiply :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) negate :(xs_nonnull XS_BigInteger*)value;
+ (xs_boolean) notEqual :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) remainder :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) subtract :(xs_nonnull XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
@end
#endif

#ifdef import_XS_IntegerOperator_private
#ifndef imported_XS_IntegerOperator_private
#define imported_XS_IntegerOperator_private
@interface XS_IntegerOperator (private)
+ (xs_nonnull XS_BigInteger*) INTEGER_ZERO;
@end
#define XS_IntegerOperator_INTEGER_ZERO [XS_IntegerOperator INTEGER_ZERO]
#endif
#endif

#ifndef imported_XS_Logger_public
#define imported_XS_Logger_public
@interface XS_Logger : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_Logger*) new;
- (void) _init;
- (void) debug :(xs_nonnull NSString*)message;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) error :(xs_nonnull NSString*)message;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) info :(xs_nonnull NSString*)message;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (xs_boolean) isDebugEnabled;
- (xs_boolean) isErrorEnabled;
- (xs_boolean) isInfoEnabled;
- (xs_boolean) isTraceEnabled;
- (xs_boolean) isWarnEnabled;
- (xs_nonnull NSString*) name;
- (void) trace :(xs_nonnull NSString*)message;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) warn :(xs_nonnull NSString*)message;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
@property (nonatomic, readonly) xs_boolean isDebugEnabled;
@property (nonatomic, readonly) xs_boolean isErrorEnabled;
@property (nonatomic, readonly) xs_boolean isInfoEnabled;
@property (nonatomic, readonly) xs_boolean isTraceEnabled;
@property (nonatomic, readonly) xs_boolean isWarnEnabled;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@end
#endif

#ifndef imported_XS_LoggerFactory_public
#define imported_XS_LoggerFactory_public
@interface XS_LoggerFactory : XS_ObjectBase
{
}
+ (xs_nonnull XS_Logger*) getLogger :(xs_nonnull NSString*)name;
@end
#endif

#ifndef imported_XS_LongConstant_public
#define imported_XS_LongConstant_public
@interface XS_LongConstant : XS_ObjectBase
{
}
#define XS_LongConstant_MIN_VALUE XS_LONG_MIN
#define XS_LongConstant_MAX_VALUE XS_LONG(9223372036854775807)
@end
#endif

#ifndef imported_XS_LongCounter_public
#define imported_XS_LongCounter_public
@interface XS_LongCounter : XS_ObjectBase
{
    @private xs_long count_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_LongCounter*) new;
- (void) _init;
- (void) add :(xs_long)n;
- (xs_long) count;
- (void) setCount :(xs_long)value;
@property (nonatomic, readwrite) xs_long count;
@end
#endif

#ifndef imported_XS_LongDefault_public
#define imported_XS_LongDefault_public
@interface XS_LongDefault : XS_ObjectBase
{
}
+ (xs_long) ifNull :(xs_nullable_long)value :(xs_long)defaultValue;
+ (xs_long) zeroIfNull :(xs_nullable_long)value;
@end
#endif

#ifndef imported_XS_LongFunction_public
#define imported_XS_LongFunction_public
@interface XS_LongFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toString :(xs_long)value;
+ (xs_nonnull NSString*) toString :(xs_long)value :(xs_int)param_radix;
@end
#endif

#ifndef imported_XS_LongMath_public
#define imported_XS_LongMath_public
@interface XS_LongMath : XS_ObjectBase
{
}
+ (xs_long) abs :(xs_long)x;
+ (xs_long) max :(xs_long)x :(xs_long)y;
+ (xs_long) min :(xs_long)x :(xs_long)y;
+ (xs_int) sign :(xs_long)x;
@end
#endif

#ifndef imported_XS_LongOperator_public
#define imported_XS_LongOperator_public
@interface XS_LongOperator : XS_ObjectBase
{
}
+ (xs_long) add :(xs_long)left :(xs_long)right;
+ (xs_int) compare :(xs_long)left :(xs_long)right;
+ (xs_long) divide :(xs_long)left :(xs_long)right;
+ (xs_boolean) equal :(xs_long)left :(xs_long)right;
+ (xs_boolean) greaterEqual :(xs_long)left :(xs_long)right;
+ (xs_boolean) greaterThan :(xs_long)left :(xs_long)right;
+ (xs_boolean) lessEqual :(xs_long)left :(xs_long)right;
+ (xs_boolean) lessThan :(xs_long)left :(xs_long)right;
+ (xs_long) multiply :(xs_long)left :(xs_long)right;
+ (xs_long) negate :(xs_long)value;
+ (xs_boolean) notEqual :(xs_long)left :(xs_long)right;
+ (xs_long) remainder :(xs_long)left :(xs_long)right;
+ (xs_long) subtract :(xs_long)left :(xs_long)right;
@end
#endif

#ifdef import_XS_LongOperator_internal
#ifndef imported_XS_LongOperator_internal
#define imported_XS_LongOperator_internal
@interface XS_LongOperator (internal)
+ (xs_long) check :(xs_nonnull XS_BigInteger*)value;
@end
#endif
#endif

#ifndef imported_XS_NullableBinary_public
#define imported_XS_NullableBinary_public
@interface XS_NullableBinary : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable NSData*)left :(xs_nullable NSData*)right;
+ (xs_nonnull NSData*) getValue :(xs_nullable NSData*)value;
+ (xs_boolean) hasValue :(xs_nullable NSData*)left :(xs_nonnull NSData*)right;
+ (xs_boolean) isNull :(xs_nullable NSData*)value;
+ (xs_int) lengthWithDefault :(xs_nullable NSData*)value :(xs_int)defaultLength;
+ (xs_boolean) notEqual :(xs_nullable NSData*)left :(xs_nullable NSData*)right;
+ (xs_boolean) notNull :(xs_nullable NSData*)value;
+ (xs_nullable NSData*) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable NSData*)value;
+ (xs_nullable NSData*) withValue :(xs_nonnull NSData*)value;
@end
#endif

#ifndef imported_XS_NullableBoolean_public
#define imported_XS_NullableBoolean_public
@interface XS_NullableBoolean : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_boolean)left :(xs_nullable_boolean)right;
+ (xs_boolean) getValue :(xs_nullable_boolean)value;
+ (xs_boolean) hasValue :(xs_nullable_boolean)left :(xs_boolean)right;
+ (xs_boolean) isNull :(xs_nullable_boolean)value;
+ (xs_boolean) notEqual :(xs_nullable_boolean)left :(xs_nullable_boolean)right;
+ (xs_boolean) notNull :(xs_nullable_boolean)value;
+ (xs_nullable_boolean) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_boolean)value;
+ (xs_nullable_boolean) withValue :(xs_boolean)value;
@end
#endif

#ifndef imported_XS_NullableByte_public
#define imported_XS_NullableByte_public
@interface XS_NullableByte : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_byte)left :(xs_nullable_byte)right;
+ (xs_byte) getValue :(xs_nullable_byte)value;
+ (xs_boolean) hasValue :(xs_nullable_byte)left :(xs_byte)right;
+ (xs_boolean) isNull :(xs_nullable_byte)value;
+ (xs_boolean) notEqual :(xs_nullable_byte)left :(xs_nullable_byte)right;
+ (xs_boolean) notNull :(xs_nullable_byte)value;
+ (xs_nullable_byte) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_byte)value;
+ (xs_nullable_byte) withValue :(xs_byte)value;
@end
#endif

#ifndef imported_XS_NullableChar_public
#define imported_XS_NullableChar_public
@interface XS_NullableChar : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_char)left :(xs_nullable_char)right;
+ (xs_char) getValue :(xs_nullable_char)value;
+ (xs_boolean) hasValue :(xs_nullable_char)left :(xs_char)right;
+ (xs_boolean) isNull :(xs_nullable_char)value;
+ (xs_boolean) notEqual :(xs_nullable_char)left :(xs_nullable_char)right;
+ (xs_boolean) notNull :(xs_nullable_char)value;
+ (xs_nullable_char) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_char)value;
+ (xs_nullable_char) withValue :(xs_char)value;
@end
#endif

#ifndef imported_XS_NullableDecimal_public
#define imported_XS_NullableDecimal_public
@interface XS_NullableDecimal : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable XS_BigDecimal*)left :(xs_nullable XS_BigDecimal*)right;
+ (xs_nonnull XS_BigDecimal*) getValue :(xs_nullable XS_BigDecimal*)value;
+ (xs_boolean) hasValue :(xs_nullable XS_BigDecimal*)left :(xs_nonnull XS_BigDecimal*)right;
+ (xs_boolean) isNull :(xs_nullable XS_BigDecimal*)value;
+ (xs_boolean) notEqual :(xs_nullable XS_BigDecimal*)left :(xs_nullable XS_BigDecimal*)right;
+ (xs_boolean) notNull :(xs_nullable XS_BigDecimal*)value;
+ (xs_nullable XS_BigDecimal*) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable XS_BigDecimal*)value;
+ (xs_nullable XS_BigDecimal*) withValue :(xs_nonnull XS_BigDecimal*)value;
@end
#endif

#ifndef imported_XS_NullableDouble_public
#define imported_XS_NullableDouble_public
@interface XS_NullableDouble : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_double)left :(xs_nullable_double)right;
+ (xs_double) getValue :(xs_nullable_double)value;
+ (xs_boolean) hasValue :(xs_nullable_double)left :(xs_double)right;
+ (xs_boolean) isNull :(xs_nullable_double)value;
+ (xs_boolean) notEqual :(xs_nullable_double)left :(xs_nullable_double)right;
+ (xs_boolean) notNull :(xs_nullable_double)value;
+ (xs_nullable_double) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_double)value;
+ (xs_nullable_double) withValue :(xs_double)value;
@end
#endif

#ifndef imported_XS_NullableFloat_public
#define imported_XS_NullableFloat_public
@interface XS_NullableFloat : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_float)left :(xs_nullable_float)right;
+ (xs_float) getValue :(xs_nullable_float)value;
+ (xs_boolean) hasValue :(xs_nullable_float)left :(xs_float)right;
+ (xs_boolean) isNull :(xs_nullable_float)value;
+ (xs_boolean) notEqual :(xs_nullable_float)left :(xs_nullable_float)right;
+ (xs_boolean) notNull :(xs_nullable_float)value;
+ (xs_nullable_float) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_float)value;
+ (xs_nullable_float) withValue :(xs_float)value;
@end
#endif

#ifndef imported_XS_NullableInt_public
#define imported_XS_NullableInt_public
@interface XS_NullableInt : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_int)left :(xs_nullable_int)right;
+ (xs_int) getValue :(xs_nullable_int)value;
+ (xs_boolean) hasValue :(xs_nullable_int)left :(xs_int)right;
+ (xs_boolean) isNull :(xs_nullable_int)value;
+ (xs_boolean) notEqual :(xs_nullable_int)left :(xs_nullable_int)right;
+ (xs_boolean) notNull :(xs_nullable_int)value;
+ (xs_nullable_int) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_int)value;
+ (xs_nullable_int) withValue :(xs_int)value;
@end
#endif

#ifndef imported_XS_NullableInteger_public
#define imported_XS_NullableInteger_public
@interface XS_NullableInteger : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable XS_BigInteger*)left :(xs_nullable XS_BigInteger*)right;
+ (xs_nonnull XS_BigInteger*) getValue :(xs_nullable XS_BigInteger*)value;
+ (xs_boolean) hasValue :(xs_nullable XS_BigInteger*)left :(xs_nonnull XS_BigInteger*)right;
+ (xs_boolean) isNull :(xs_nullable XS_BigInteger*)value;
+ (xs_boolean) notEqual :(xs_nullable XS_BigInteger*)left :(xs_nullable XS_BigInteger*)right;
+ (xs_boolean) notNull :(xs_nullable XS_BigInteger*)value;
+ (xs_nullable XS_BigInteger*) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable XS_BigInteger*)value;
+ (xs_nullable XS_BigInteger*) withValue :(xs_nonnull XS_BigInteger*)value;
@end
#endif

#ifndef imported_XS_NullableLong_public
#define imported_XS_NullableLong_public
@interface XS_NullableLong : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_long)left :(xs_nullable_long)right;
+ (xs_long) getValue :(xs_nullable_long)value;
+ (xs_boolean) hasValue :(xs_nullable_long)left :(xs_long)right;
+ (xs_boolean) isNull :(xs_nullable_long)value;
+ (xs_boolean) notEqual :(xs_nullable_long)left :(xs_nullable_long)right;
+ (xs_boolean) notNull :(xs_nullable_long)value;
+ (xs_nullable_long) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_long)value;
+ (xs_nullable_long) withValue :(xs_long)value;
@end
#endif

#ifndef imported_XS_NullableObject_public
#define imported_XS_NullableObject_public
@interface XS_NullableObject : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable NSObject*)left :(xs_nullable NSObject*)right;
+ (xs_nonnull NSObject*) getValue :(xs_nullable NSObject*)value;
+ (xs_boolean) hasValue :(xs_nullable NSObject*)left :(xs_nonnull NSObject*)right;
+ (xs_boolean) isNull :(xs_nullable NSObject*)value;
+ (xs_boolean) notEqual :(xs_nullable NSObject*)left :(xs_nullable NSObject*)right;
+ (xs_boolean) notNull :(xs_nullable NSObject*)value;
+ (xs_nullable NSObject*) nullValue;
+ (xs_nonnull NSString*) toJSON :(xs_nullable NSObject*)value;
+ (xs_nonnull NSString*) toString :(xs_nullable NSObject*)value;
+ (xs_nullable NSObject*) withValue :(xs_nonnull NSObject*)value;
@end
#endif

#ifndef imported_XS_NullableShort_public
#define imported_XS_NullableShort_public
@interface XS_NullableShort : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable_short)left :(xs_nullable_short)right;
+ (xs_short) getValue :(xs_nullable_short)value;
+ (xs_boolean) hasValue :(xs_nullable_short)left :(xs_short)right;
+ (xs_boolean) isNull :(xs_nullable_short)value;
+ (xs_boolean) notEqual :(xs_nullable_short)left :(xs_nullable_short)right;
+ (xs_boolean) notNull :(xs_nullable_short)value;
+ (xs_nullable_short) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable_short)value;
+ (xs_nullable_short) withValue :(xs_short)value;
@end
#endif

#ifndef imported_XS_NullableString_public
#define imported_XS_NullableString_public
@interface XS_NullableString : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nullable NSString*)left :(xs_nullable NSString*)right;
+ (xs_nonnull NSString*) getValue :(xs_nullable NSString*)value;
+ (xs_boolean) hasValue :(xs_nullable NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) isNull :(xs_nullable NSString*)value;
+ (xs_int) lengthWithDefault :(xs_nullable NSString*)value :(xs_int)defaultLength;
+ (xs_boolean) notEqual :(xs_nullable NSString*)left :(xs_nullable NSString*)right;
+ (xs_boolean) notNull :(xs_nullable NSString*)value;
+ (xs_nullable NSString*) nullValue;
+ (xs_nonnull NSString*) toString :(xs_nullable NSString*)value;
+ (xs_nullable NSString*) withValue :(xs_nonnull NSString*)value;
@end
#endif

#ifndef imported_XS_NumberParser_public
#define imported_XS_NumberParser_public
@interface XS_NumberParser : XS_ObjectBase
{
}
+ (xs_boolean) isByte :(xs_nonnull NSString*)value;
+ (xs_boolean) isHex :(xs_nonnull NSString*)value;
+ (xs_boolean) isInt :(xs_nonnull NSString*)value;
+ (xs_boolean) isInteger :(xs_nonnull NSString*)value;
+ (xs_boolean) isLong :(xs_nonnull NSString*)value;
+ (xs_boolean) isShort :(xs_nonnull NSString*)value;
+ (xs_byte) parseByte :(xs_nonnull NSString*)value;
+ (xs_int) parseHex :(xs_nonnull NSString*)value;
+ (xs_int) parseInt :(xs_nonnull NSString*)value;
+ (xs_int) parseInt :(xs_nonnull NSString*)value :(xs_int)radix;
+ (xs_long) parseLong :(xs_nonnull NSString*)value;
+ (xs_short) parseShort :(xs_nonnull NSString*)value;
#define XS_NumberParser_MIN_BYTE @"-128"
#define XS_NumberParser_MAX_BYTE @"127"
#define XS_NumberParser_MIN_SHORT @"-32768"
#define XS_NumberParser_MAX_SHORT @"32767"
#define XS_NumberParser_MIN_INT @"-2147483648"
#define XS_NumberParser_MAX_INT @"2147483647"
#define XS_NumberParser_MIN_LONG @"-9223372036854775808"
#define XS_NumberParser_MAX_LONG @"9223372036854775807"
@end
#endif

#ifdef import_XS_NumberParser_private
#ifndef imported_XS_NumberParser_private
#define imported_XS_NumberParser_private
@interface XS_NumberParser (private)
+ (xs_int) getDigit :(xs_char)c;
+ (xs_boolean) isIntegral :(xs_nonnull NSString*)value :(xs_nonnull NSString*)min :(xs_nonnull NSString*)max;
@end
#endif
#endif

#ifndef imported_XS_ObjectAsAny_public
#define imported_XS_ObjectAsAny_public
@interface XS_ObjectAsAny : XS_ObjectBase
{
}
+ (xs_nullable NSObject*) cast :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_ObjectFactory_public
#define imported_XS_ObjectFactory_public
@interface XS_ObjectFactory : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectFactory*) new;
- (void) _init;
- (xs_nonnull NSObject*) create;
@end
#endif

#ifndef imported_XS_ObjectFunction_public
#define imported_XS_ObjectFunction_public
@interface XS_ObjectFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toJSON :(xs_nonnull NSObject*)value;
+ (xs_nonnull NSString*) toString :(xs_nonnull NSObject*)value;
@end
#endif

#ifndef imported_XS_ObjectIsAny_public
#define imported_XS_ObjectIsAny_public
@interface XS_ObjectIsAny : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_ObjectOperator_public
#define imported_XS_ObjectOperator_public
@interface XS_ObjectOperator : XS_ObjectBase
{
}
+ (xs_boolean) equal :(xs_nonnull NSObject*)left :(xs_nonnull NSObject*)right;
+ (xs_boolean) notEqual :(xs_nonnull NSObject*)left :(xs_nonnull NSObject*)right;
@end
#endif

#ifndef imported_XS_OutOfMemory_public
#define imported_XS_OutOfMemory_public
@interface XS_OutOfMemory : XS_ObjectBase
{
}
+ (void) logErrorAndAbort;
@end
#endif

#ifndef imported_XS_PearsonHashing_public
#define imported_XS_PearsonHashing_public
@interface XS_PearsonHashing : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_int) hashBinary :(xs_nonnull NSData*)data;
+ (xs_int) hashString :(xs_nonnull NSString*)text;
@end
#endif

#ifdef import_XS_PearsonHashing_private
#ifndef imported_XS_PearsonHashing_private
#define imported_XS_PearsonHashing_private
@interface XS_PearsonHashing (private)
+ (xs_nonnull NSData*) TABLE;
@end
#define XS_PearsonHashing_TABLE [XS_PearsonHashing TABLE]
#endif
#endif

#ifndef imported_XS_ReentrantMutex_public
#define imported_XS_ReentrantMutex_public
@interface XS_ReentrantMutex : XS_ObjectBase
{
    /* internal */ @public pthread_mutex_t mutex;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ReentrantMutex*) new;
- (void) _init;
- (void) dealloc;
- (void) lock;
- (xs_boolean) tryLock;
- (void) unlock;
@end
#endif

#ifndef imported_XS_RunAction_public
#define imported_XS_RunAction_public
@interface XS_RunAction : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_RunAction*) new;
- (void) _init;
- (void) run;
@end
#endif

#ifndef imported_XS_RunFunction_public
#define imported_XS_RunFunction_public
@interface XS_RunFunction : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_RunFunction*) new;
- (void) _init;
- (xs_nullable NSObject*) run;
@end
#endif

#ifndef imported_XS_SchemaFormat_public
#define imported_XS_SchemaFormat_public
@interface XS_SchemaFormat : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) formatBoolean :(xs_boolean)value;
+ (xs_nonnull NSString*) formatByte :(xs_byte)value;
+ (xs_nonnull NSString*) formatDecimal :(xs_nonnull XS_BigDecimal*)value;
+ (xs_nonnull NSString*) formatDouble :(xs_double)value;
+ (xs_nonnull NSString*) formatFloat :(xs_float)value;
+ (xs_nonnull NSString*) formatInt :(xs_int)value;
+ (xs_nonnull NSString*) formatInteger :(xs_nonnull XS_BigInteger*)value;
+ (xs_nonnull NSString*) formatLong :(xs_long)value;
+ (xs_nonnull NSString*) formatShort :(xs_short)value;
+ (xs_nonnull NSString*) formatUnsignedByte :(xs_int)value;
+ (xs_nonnull NSString*) formatUnsignedShort :(xs_int)value;
+ (xs_boolean) parseBoolean :(xs_nonnull NSString*)text;
+ (xs_byte) parseByte :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigDecimal*) parseDecimal :(xs_nonnull NSString*)text;
+ (xs_double) parseDouble :(xs_nonnull NSString*)text;
+ (xs_float) parseFloat :(xs_nonnull NSString*)text;
+ (xs_int) parseInt :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigInteger*) parseInteger :(xs_nonnull NSString*)text;
+ (xs_long) parseLong :(xs_nonnull NSString*)text;
+ (xs_short) parseShort :(xs_nonnull NSString*)text;
+ (xs_int) parseUnsignedByte :(xs_nonnull NSString*)text;
+ (xs_int) parseUnsignedShort :(xs_nonnull NSString*)text;
+ (xs_boolean) toBoolean :(xs_nonnull NSString*)text;
+ (xs_byte) toByte :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigDecimal*) toDecimal :(xs_nonnull NSString*)text;
+ (xs_double) toDouble :(xs_nonnull NSString*)text;
+ (xs_float) toFloat :(xs_nonnull NSString*)text;
+ (xs_int) toInt :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigInteger*) toInteger :(xs_nonnull NSString*)text;
+ (xs_long) toLong :(xs_nonnull NSString*)text;
+ (xs_short) toShort :(xs_nonnull NSString*)text;
+ (xs_int) toUnsignedByte :(xs_nonnull NSString*)text;
+ (xs_int) toUnsignedShort :(xs_nonnull NSString*)text;
@end
#endif

#ifndef imported_XS_ShortConstant_public
#define imported_XS_ShortConstant_public
@interface XS_ShortConstant : XS_ObjectBase
{
}
#define XS_ShortConstant_MIN_VALUE XS_SHORT(-32768)
#define XS_ShortConstant_MAX_VALUE XS_SHORT(32767)
@end
#endif

#ifndef imported_XS_ShortDefault_public
#define imported_XS_ShortDefault_public
@interface XS_ShortDefault : XS_ObjectBase
{
}
+ (xs_short) ifNull :(xs_nullable_short)value :(xs_short)defaultValue;
+ (xs_short) zeroIfNull :(xs_nullable_short)value;
@end
#endif

#ifndef imported_XS_ShortFunction_public
#define imported_XS_ShortFunction_public
@interface XS_ShortFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) toString :(xs_short)value;
+ (xs_nonnull NSString*) toString :(xs_short)value :(xs_int)radix;
+ (xs_int) toUnsigned :(xs_short)value;
@end
#endif

#ifndef imported_XS_ShortMath_public
#define imported_XS_ShortMath_public
@interface XS_ShortMath : XS_ObjectBase
{
}
+ (xs_short) abs :(xs_short)x;
+ (xs_short) max :(xs_short)x :(xs_short)y;
+ (xs_short) min :(xs_short)x :(xs_short)y;
+ (xs_int) sign :(xs_short)x;
@end
#endif

#ifndef imported_XS_ShortOperator_public
#define imported_XS_ShortOperator_public
@interface XS_ShortOperator : XS_ObjectBase
{
}
+ (xs_short) add :(xs_short)left :(xs_short)right;
+ (xs_int) compare :(xs_short)left :(xs_short)right;
+ (xs_short) divide :(xs_short)left :(xs_short)right;
+ (xs_boolean) equal :(xs_short)left :(xs_short)right;
+ (xs_boolean) greaterEqual :(xs_short)left :(xs_short)right;
+ (xs_boolean) greaterThan :(xs_short)left :(xs_short)right;
+ (xs_boolean) lessEqual :(xs_short)left :(xs_short)right;
+ (xs_boolean) lessThan :(xs_short)left :(xs_short)right;
+ (xs_short) multiply :(xs_short)left :(xs_short)right;
+ (xs_short) negate :(xs_short)value;
+ (xs_boolean) notEqual :(xs_short)left :(xs_short)right;
+ (xs_short) remainder :(xs_short)left :(xs_short)right;
+ (xs_short) subtract :(xs_short)left :(xs_short)right;
@end
#endif

#ifdef import_XS_ShortOperator_internal
#ifndef imported_XS_ShortOperator_internal
#define imported_XS_ShortOperator_internal
@interface XS_ShortOperator (internal)
+ (xs_short) check :(xs_int)value;
@end
#endif
#endif

#ifndef imported_XS_StringComparer_public
#define imported_XS_StringComparer_public
@interface XS_StringComparer : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_Comparer*) ignoreCase;
@end
#endif

#ifndef imported_XS_StringConstant_public
#define imported_XS_StringConstant_public
@interface XS_StringConstant : XS_ObjectBase
{
}
#define XS_StringConstant_empty @""
@end
#endif

#ifndef imported_XS_StringDefault_public
#define imported_XS_StringDefault_public
@interface XS_StringDefault : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) emptyIfNull :(xs_nullable NSString*)value;
+ (xs_nonnull NSString*) ifEmpty :(xs_nullable NSString*)param_value :(xs_nonnull NSString*)defaultValue;
+ (xs_nonnull NSString*) ifNull :(xs_nullable NSString*)value :(xs_nonnull NSString*)defaultValue;
+ (xs_nullable NSString*) nullIfEmpty :(xs_nullable NSString*)value;
@end
#endif

#ifndef imported_XS_StringEquality_public
#define imported_XS_StringEquality_public
@interface XS_StringEquality : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_Equality*) ignoreCase;
@end
#endif

#ifndef imported_XS_StringFunction_public
#define imported_XS_StringFunction_public
@interface XS_StringFunction : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) afterFirst :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) afterLast :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) beforeFirst :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) beforeLast :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text;
+ (xs_int) compareTo :(xs_nonnull NSString*)value :(xs_nonnull NSString*)other;
+ (xs_boolean) endsWith :(xs_nonnull NSString*)value :(xs_nonnull NSString*)suffix;
+ (xs_boolean) endsWith :(xs_nonnull NSString*)value :(xs_nonnull NSString*)suffix :(xs_int)end;
+ (xs_boolean) equalsIgnoreCase :(xs_nonnull NSString*)value :(xs_nonnull NSString*)other;
+ (xs_int) hashCode :(xs_nonnull NSString*)value;
+ (xs_boolean) includes :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text;
+ (xs_boolean) includes :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text :(xs_int)start;
+ (xs_int) indexOf :(xs_nonnull NSString*)value :(xs_nonnull NSString*)find;
+ (xs_int) indexOf :(xs_nonnull NSString*)value :(xs_nonnull NSString*)find :(xs_int)start;
+ (xs_int) indexOfAny :(xs_nonnull NSString*)value :(xs_nonnull NSString*)chars;
+ (xs_int) indexOfAny :(xs_nonnull NSString*)value :(xs_nonnull NSString*)chars :(xs_int)start;
+ (xs_boolean) isEmpty :(xs_nonnull NSString*)value;
+ (xs_int) lastIndexOf :(xs_nonnull NSString*)value :(xs_nonnull NSString*)find;
+ (xs_int) lastIndexOf :(xs_nonnull NSString*)value :(xs_nonnull NSString*)find :(xs_int)start;
+ (xs_int) lastIndexOfAny :(xs_nonnull NSString*)value :(xs_nonnull NSString*)chars;
+ (xs_int) lastIndexOfAny :(xs_nonnull NSString*)value :(xs_nonnull NSString*)chars :(xs_int)start;
+ (xs_nonnull NSString*) lowerFirst :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) padLeft :(xs_nonnull NSString*)value :(xs_int)maxLength;
+ (xs_nonnull NSString*) padLeft :(xs_nonnull NSString*)value :(xs_int)maxLength :(xs_nonnull NSString*)fillStr;
+ (xs_nonnull NSString*) padRight :(xs_nonnull NSString*)value :(xs_int)maxLength;
+ (xs_nonnull NSString*) padRight :(xs_nonnull NSString*)value :(xs_int)maxLength :(xs_nonnull NSString*)fillStr;
+ (xs_nonnull NSString*) percentDecode :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) percentEncode :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) percentNormal :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) removePrefix :(xs_nonnull NSString*)value :(xs_nonnull NSString*)prefix;
+ (xs_nonnull NSString*) removeSuffix :(xs_nonnull NSString*)value :(xs_nonnull NSString*)suffix;
+ (xs_nonnull NSString*) repeat :(xs_nonnull NSString*)value :(xs_int)count;
+ (xs_nonnull NSString*) replace :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text :(xs_nonnull NSString*)newText;
+ (xs_nonnull NSString*) replaceAll :(xs_nonnull NSString*)value :(xs_nonnull NSString*)text :(xs_nonnull NSString*)newText;
+ (xs_nonnull NSString*) slice :(xs_nonnull NSString*)value :(xs_int)start;
+ (xs_nonnull NSString*) slice :(xs_nonnull NSString*)value :(xs_int)start :(xs_int)end;
+ (xs_boolean) startsWith :(xs_nonnull NSString*)value :(xs_nonnull NSString*)prefix;
+ (xs_boolean) startsWith :(xs_nonnull NSString*)value :(xs_nonnull NSString*)prefix :(xs_int)start;
+ (xs_nonnull NSString*) substr :(xs_nonnull NSString*)value :(xs_int)start;
+ (xs_nonnull NSString*) substr :(xs_nonnull NSString*)value :(xs_int)start :(xs_int)length;
+ (xs_nonnull NSString*) substring :(xs_nonnull NSString*)value :(xs_int)start;
+ (xs_nonnull NSString*) substring :(xs_nonnull NSString*)value :(xs_int)start :(xs_int)end;
+ (xs_nonnull NSData*) toBinary :(xs_nonnull NSString*)value;
+ (xs_char) toChar :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) toJSON :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) toLowerCase :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) toString :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) toUpperCase :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) trim :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) trimLeft :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) trimRight :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) upperFirst :(xs_nonnull NSString*)value;
+ (xs_nonnull NSString*) withPrefix :(xs_nonnull NSString*)value :(xs_nonnull NSString*)prefix;
+ (xs_nonnull NSString*) withSuffix :(xs_nonnull NSString*)value :(xs_nonnull NSString*)suffix;
+ (xs_nonnull NSString*) xmlEscape :(xs_nonnull NSString*)value;
@end
#endif

#ifdef import_XS_StringFunction_private
#ifndef imported_XS_StringFunction_private
#define imported_XS_StringFunction_private
@interface XS_StringFunction (private)
+ (xs_nonnull NSString*) getRange :(xs_nonnull NSString*)value :(xs_int)start :(xs_int)end;
+ (xs_boolean) uriUnreserved :(xs_char)c;
@end
#endif
#endif

#ifndef imported_XS_StringOperator_public
#define imported_XS_StringOperator_public
@interface XS_StringOperator : XS_ObjectBase
{
}
+ (xs_int) compare :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_int) compareIgnoreCase :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) equal :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) equalIgnoreCase :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) greaterEqual :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) greaterThan :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) lessEqual :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) lessThan :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
+ (xs_boolean) notEqual :(xs_nonnull NSString*)left :(xs_nonnull NSString*)right;
@end
#endif

#ifndef imported_XS_SystemClock_public
#define imported_XS_SystemClock_public
@interface XS_SystemClock : XS_ObjectBase
{
}
+ (xs_long) microTime;
+ (xs_long) milliTime;
+ (xs_long) nanoTime;
@end
#endif

#ifndef imported_XS_SystemConsole_public
#define imported_XS_SystemConsole_public
@interface XS_SystemConsole : XS_ObjectBase
{
}
+ (void) write :(xs_nonnull NSString*)text;
+ (void) writeLine :(xs_nonnull NSString*)text;
@end
#endif

#ifndef imported_XS_SystemError_public
#define imported_XS_SystemError_public
@interface XS_SystemError : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) errorCode :(xs_int)code;
+ (xs_nonnull NSString*) gaiMessage :(xs_int)code;
+ (xs_nonnull NSString*) getMessage :(xs_int)code;
+ (xs_int) s_errno;
+ (xs_nonnull NSString*) tcpMessage :(xs_int)code;
@end
#endif

#ifndef imported_XS_SystemProcess_public
#define imported_XS_SystemProcess_public
@interface XS_SystemProcess : XS_ObjectBase
{
}
+ (void) exit :(xs_int)status;
#define XS_SystemProcess_EXIT_SUCCESS 0
#define XS_SystemProcess_EXIT_FAILURE 1
@end
#endif

#ifndef imported_XS_ThreadLocal_public
#define imported_XS_ThreadLocal_public
@interface XS_ThreadLocal : XS_ObjectBase
{
    @private NSString* xs___nonnull  my_key;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ThreadLocal*) new;
- (void) _init;
- (xs_nullable NSObject*) get;
- (void) set :(xs_nullable NSObject*)value;
@end
#endif

#ifdef import_XS_ThreadLocal_private
#ifndef imported_XS_ThreadLocal_private
#define imported_XS_ThreadLocal_private
@interface XS_ThreadLocal (private)
+ (xs_nonnull NSString*) nextKey;
@end
#endif
#endif

#ifndef imported_XS_ThreadSleep_public
#define imported_XS_ThreadSleep_public
@interface XS_ThreadSleep : XS_ObjectBase
{
}
+ (void) forMicroseconds :(xs_long)time;
+ (void) forMilliseconds :(xs_long)time;
+ (void) forNanoseconds :(xs_long)time;
+ (void) forSeconds :(xs_long)time;
+ (void) forever;
@end
#endif

#ifndef imported_XS_ThreadStart_public
#define imported_XS_ThreadStart_public
@interface XS_ThreadStart : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ThreadStart*) new;
- (void) _init;
@end
#endif

#ifdef import_XS_ThreadStart_private
#ifndef imported_XS_ThreadStart_private
#define imported_XS_ThreadStart_private
@interface XS_ThreadStart (private)
#define XS_ThreadStart_UNHANDLED_EXCEPTION @"Unhandled Thread Exception"
@end
#endif
#endif

#ifndef imported_XS_UTF8_public
#define imported_XS_UTF8_public
@interface XS_UTF8 : XS_ObjectBase
{
}
+ (xs_nonnull NSData*) toBinary :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) toString :(xs_nonnull NSData*)data;
@end
#endif

#ifndef imported_XS_UntypedList_public
#define imported_XS_UntypedList_public
@interface XS_UntypedList : XS_ObjectBase
{
    @private NSMutableArray* my_list;
    @private XS_Comparer* xs___nonnull  my_comparer_;
    @private XS_Equality* xs___nonnull  my_equality_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_UntypedList*) new :(xs_int)capacity;
- (void) _init :(xs_int)param_capacity;
- (void) add :(xs_nullable NSObject*)item;
- (void) addAll :(xs_nonnull XS_UntypedList*)list;
- (void) addRange :(xs_nonnull XS_UntypedList*)list :(xs_int)param_start :(xs_int)param_end;
- (void) clear;
- (xs_int) endRange :(xs_int)end;
- (xs_nullable NSObject*) first;
- (xs_nullable NSObject*) get :(xs_int)index;
- (xs_int) indexOf :(xs_nullable NSObject*)item;
- (xs_int) indexOf :(xs_nullable NSObject*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nullable NSObject*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_UntypedList*)list;
- (xs_nullable NSObject*) last;
- (xs_int) lastIndexOf :(xs_nullable NSObject*)item;
- (xs_int) lastIndexOf :(xs_nullable NSObject*)item :(xs_int)start;
- (xs_int) length;
- (xs_nullable NSObject*) pop;
- (xs_int) push :(xs_nullable NSObject*)item;
- (void) removeAt :(xs_int)index;
- (void) removeFirst;
- (void) removeLast;
- (void) removeRange :(xs_int)param_start :(xs_int)param_end;
- (void) reserve :(xs_int)capacity;
- (void) reverse;
- (void) set :(xs_int)index :(xs_nullable NSObject*)item;
- (xs_nullable NSObject*) shift;
- (xs_nullable NSObject*) single;
- (xs_nonnull XS_UntypedList*) slice :(xs_int)param_start :(xs_int)param_end;
- (void) sort;
- (void) sortWith :(xs_nonnull XS_Comparer*)comparer;
- (xs_int) startRange :(xs_int)start;
- (xs_nonnull NSString*) toString;
- (xs_int) unshift :(xs_nullable NSObject*)item;
- (void) use :(xs_nonnull XS_Comparer*)comparer :(xs_nonnull XS_Equality*)equality;
@property (nonatomic, readonly) xs_int length;
@end
#endif

#ifdef import_XS_UntypedList_private
#ifndef imported_XS_UntypedList_private
#define imported_XS_UntypedList_private
@interface XS_UntypedList (private)
- (void) merge :(xs_nonnull XS_UntypedList*)temp :(xs_int)left :(xs_int)right :(xs_int)end :(xs_nonnull XS_Comparer*)comparer;
- (void) mergeSort :(xs_nonnull XS_UntypedList*)temp :(xs_int)left :(xs_int)right :(xs_nonnull XS_Comparer*)comparer;
- (xs_nonnull XS_Comparer*) my_comparer;
- (xs_nonnull XS_Equality*) my_equality;
- (void) setMy_comparer :(xs_nonnull XS_Comparer*)value;
- (void) setMy_equality :(xs_nonnull XS_Equality*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Comparer* my_comparer;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Equality* my_equality;
@end
#endif
#endif

#ifndef imported_XS_UntypedMap_public
#define imported_XS_UntypedMap_public
@interface XS_UntypedMap : XS_ObjectBase
{
    @private NSMutableDictionary* my_map;
}
- (xs_nonnull XS_HashWrapper*) hashWrapper:(xs_nullable NSObject*)key;
- (xs_nonnull id) init;
+ (xs_nonnull XS_UntypedMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) clear;
- (void) copyKeysTo :(xs_nonnull XS_UntypedList*)list;
- (void) copyValuesTo :(xs_nonnull XS_UntypedList*)list;
- (xs_boolean) delete_ :(xs_nullable NSObject*)key;
- (xs_nonnull XS_UntypedList*) entries;
- (xs_nullable NSObject*) get :(xs_nullable NSObject*)key;
- (xs_nonnull NSObject*) getRequired :(xs_nullable NSObject*)key;
- (xs_boolean) has :(xs_nullable NSObject*)key;
- (xs_nonnull XS_UntypedList*) keys;
- (void) set :(xs_nullable NSObject*)key :(xs_nullable NSObject*)value;
- (xs_int) size;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_UntypedList*) values;
@property (nonatomic, readonly) xs_int size;
@end
#endif

#ifndef imported_XS_UntypedSet_public
#define imported_XS_UntypedSet_public
@interface XS_UntypedSet : XS_ObjectBase
{
    @private NSMutableDictionary* my_set;
    @private xs_boolean has_null;
}
- (xs_nonnull XS_HashWrapper*) hashWrapper:(xs_nullable NSObject*)value;
- (xs_nonnull id) init;
+ (xs_nonnull XS_UntypedSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) add :(xs_nullable NSObject*)value;
- (void) clear;
- (void) copyValuesTo :(xs_nonnull XS_UntypedList*)list;
- (xs_boolean) delete_ :(xs_nullable NSObject*)value;
- (xs_boolean) has :(xs_nullable NSObject*)value;
- (xs_int) size;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_UntypedList*) values;
@property (nonatomic, readonly) xs_int size;
@end
#endif

#ifndef imported_XS_EmptyList_public
#define imported_XS_EmptyList_public
@interface XS_EmptyList : XS_UntypedList
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EmptyList*) new;
- (void) _init;
- (void) add :(xs_nullable NSObject*)item;
- (void) addAll :(xs_nonnull XS_UntypedList*)list;
- (void) addRange :(xs_nonnull XS_UntypedList*)list :(xs_int)start :(xs_int)end;
- (void) clear;
- (void) insert :(xs_int)index :(xs_nullable NSObject*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_UntypedList*)list;
- (xs_nullable NSObject*) pop;
- (xs_int) push :(xs_nullable NSObject*)item;
- (void) removeAt :(xs_int)index;
- (void) removeRange :(xs_int)start :(xs_int)end;
- (void) reverse;
- (void) set :(xs_int)index :(xs_nullable NSObject*)item;
- (xs_nullable NSObject*) shift;
- (void) sort;
- (void) sortWith :(xs_nonnull XS_Comparer*)comparer;
- (xs_int) unshift :(xs_nullable NSObject*)item;
@end
#endif

#ifndef imported_XS_EmptyMap_public
#define imported_XS_EmptyMap_public
@interface XS_EmptyMap : XS_UntypedMap
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EmptyMap*) new;
- (void) _init;
- (void) clear;
- (xs_boolean) delete_ :(xs_nullable NSObject*)key;
- (void) set :(xs_nullable NSObject*)key :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_EmptySet_public
#define imported_XS_EmptySet_public
@interface XS_EmptySet : XS_UntypedSet
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EmptySet*) new;
- (void) _init;
- (void) add :(xs_nullable NSObject*)value;
- (void) clear;
- (xs_boolean) delete_ :(xs_nullable NSObject*)value;
@end
#endif

#ifndef imported_XS_FatalException_public
#define imported_XS_FatalException_public
@interface XS_FatalException : XS_ExceptionBase
{
}
+ (xs_nonnull XS_FatalException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_InstanceLogger_public
#define imported_XS_InstanceLogger_public
@interface XS_InstanceLogger : XS_Logger
{
    @private NSString* xs___nonnull  instance;
    @private XS_Logger* xs___nonnull  logger_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_InstanceLogger*) new :(xs_nonnull NSString*)param_instance :(xs_nonnull XS_Logger*)param_logger;
- (void) _init :(xs_nonnull NSString*)param_instance :(xs_nonnull XS_Logger*)param_logger;
- (void) debug :(xs_nonnull NSString*)message;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) error :(xs_nonnull NSString*)message;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) info :(xs_nonnull NSString*)message;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (xs_boolean) isDebugEnabled;
- (xs_boolean) isErrorEnabled;
- (xs_boolean) isInfoEnabled;
- (xs_boolean) isTraceEnabled;
- (xs_boolean) isWarnEnabled;
- (xs_nonnull NSString*) name;
- (void) trace :(xs_nonnull NSString*)message;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) warn :(xs_nonnull NSString*)message;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
@property (nonatomic, readonly) xs_boolean isDebugEnabled;
@property (nonatomic, readonly) xs_boolean isErrorEnabled;
@property (nonatomic, readonly) xs_boolean isInfoEnabled;
@property (nonatomic, readonly) xs_boolean isTraceEnabled;
@property (nonatomic, readonly) xs_boolean isWarnEnabled;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@end
#endif

#ifdef import_XS_InstanceLogger_private
#ifndef imported_XS_InstanceLogger_private
#define imported_XS_InstanceLogger_private
@interface XS_InstanceLogger (private)
- (xs_nonnull NSString*) addInstanceBefore :(xs_nonnull NSString*)message;
- (xs_nonnull XS_Logger*) logger;
- (void) setLogger :(xs_nonnull XS_Logger*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Logger* logger;
@end
#endif
#endif

#ifdef import_XS_LogToConsole_internal
#ifndef imported_XS_LogToConsole_internal
#define imported_XS_LogToConsole_public
/* internal */
@interface XS_LogToConsole : XS_Logger
{
    @private NSString* xs___nonnull  fullName;
    @private NSString* xs___nonnull  shortName;
}
- (xs_nonnull id) init;
- (void) _init :(xs_nonnull NSString*)param_name;
- (void) debug :(xs_nonnull NSString*)message;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) debug :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) error :(xs_nonnull NSString*)message;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) error :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) info :(xs_nonnull NSString*)message;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) info :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (xs_boolean) isDebugEnabled;
- (xs_boolean) isErrorEnabled;
- (xs_boolean) isInfoEnabled;
- (xs_boolean) isTraceEnabled;
- (xs_boolean) isWarnEnabled;
- (xs_nonnull NSString*) name;
- (void) trace :(xs_nonnull NSString*)message;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) trace :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
- (void) warn :(xs_nonnull NSString*)message;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause :(xs_boolean)dump;
@property (nonatomic, readonly) xs_boolean isDebugEnabled;
@property (nonatomic, readonly) xs_boolean isErrorEnabled;
@property (nonatomic, readonly) xs_boolean isInfoEnabled;
@property (nonatomic, readonly) xs_boolean isTraceEnabled;
@property (nonatomic, readonly) xs_boolean isWarnEnabled;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@end
#endif
#endif

#ifdef import_XS_LogToConsole_private
#ifndef imported_XS_LogToConsole_private
#define imported_XS_LogToConsole_private
@interface XS_LogToConsole (private)
- (xs_nonnull NSString*) addNameBefore :(xs_nonnull NSString*)message;
@end
#endif
#endif

#ifdef import_XS_LogToConsole_internal
#ifndef imported_XS_LogToConsole_internal
#define imported_XS_LogToConsole_internal
@interface XS_LogToConsole (internal)
+ (xs_nonnull XS_LogToConsole*) new :(xs_nonnull NSString*)param_name;
@end
#endif
#endif

#ifdef import_XS_StackDumpException_internal
#ifndef imported_XS_StackDumpException_internal
#define imported_XS_StackDumpException_public
/* internal */
@interface XS_StackDumpException : XS_ExceptionBase
{
}
+ (xs_nonnull XS_StackDumpException*) new;
- (void) _init;
@end
#endif
#endif

#ifdef import_XS_StringComparerIgnoreCase_internal
#ifndef imported_XS_StringComparerIgnoreCase_internal
#define imported_XS_StringComparerIgnoreCase_public
/* internal */
@interface XS_StringComparerIgnoreCase : XS_Comparer
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringComparerIgnoreCase*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
@end
#endif
#endif

#ifdef import_XS_StringEqualityIgnoreCase_internal
#ifndef imported_XS_StringEqualityIgnoreCase_internal
#define imported_XS_StringEqualityIgnoreCase_public
/* internal */
@interface XS_StringEqualityIgnoreCase : XS_Equality
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringEqualityIgnoreCase*) new;
- (void) _init;
- (xs_boolean) equal :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
@end
#endif
#endif

#ifdef import_XS_UndefinedComparer_internal
#ifndef imported_XS_UndefinedComparer_internal
#define imported_XS_UndefinedComparer_public
/* internal */
@interface XS_UndefinedComparer : XS_Comparer
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_UndefinedComparer*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
@end
#endif
#endif

#ifdef import_XS_UndefinedEquality_internal
#ifndef imported_XS_UndefinedEquality_internal
#define imported_XS_UndefinedEquality_public
/* internal */
@interface XS_UndefinedEquality : XS_Equality
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_UndefinedEquality*) new;
- (void) _init;
- (xs_boolean) equal :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
@end
#endif
#endif

#ifndef imported_XS_AbstractFunctionException_public
#define imported_XS_AbstractFunctionException_public
@interface XS_AbstractFunctionException : XS_FatalException
{
}
+ (xs_nonnull XS_AbstractFunctionException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_AbstractPropertyException_public
#define imported_XS_AbstractPropertyException_public
@interface XS_AbstractPropertyException : XS_FatalException
{
}
+ (xs_nonnull XS_AbstractPropertyException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_AssertException_public
#define imported_XS_AssertException_public
@interface XS_AssertException : XS_FatalException
{
}
+ (xs_nonnull XS_AssertException*) new;
- (void) _init;
+ (xs_nonnull XS_AssertException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_AssertException_private
#ifndef imported_XS_AssertException_private
#define imported_XS_AssertException_private
@interface XS_AssertException (private)
+ (xs_nonnull XS_AssertException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_BinaryIndexException_public
#define imported_XS_BinaryIndexException_public
@interface XS_BinaryIndexException : XS_FatalException
{
}
+ (xs_nonnull XS_BinaryIndexException*) new;
- (void) _init;
+ (xs_nonnull XS_BinaryIndexException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_BinaryIndexException_private
#ifndef imported_XS_BinaryIndexException_private
#define imported_XS_BinaryIndexException_private
@interface XS_BinaryIndexException (private)
+ (xs_nonnull XS_BinaryIndexException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_CastException_public
#define imported_XS_CastException_public
@interface XS_CastException : XS_FatalException
{
}
+ (xs_nonnull XS_CastException*) new;
- (void) _init;
+ (xs_nonnull XS_CastException*) cannotCast :(xs_nullable NSObject*)value :(xs_nonnull NSString*)type;
+ (xs_nonnull XS_CastException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_CastException_private
#ifndef imported_XS_CastException_private
#define imported_XS_CastException_private
@interface XS_CastException (private)
+ (xs_nonnull XS_CastException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_ConversionException_public
#define imported_XS_ConversionException_public
@interface XS_ConversionException : XS_FatalException
{
}
+ (xs_nonnull XS_ConversionException*) new;
- (void) _init;
+ (xs_nonnull XS_ConversionException*) withCause :(xs_nonnull NSException*)param_cause;
@end
#endif

#ifdef import_XS_ConversionException_private
#ifndef imported_XS_ConversionException_private
#define imported_XS_ConversionException_private
@interface XS_ConversionException (private)
+ (xs_nonnull XS_ConversionException*) _new1 :(xs_nullable NSException*)p1;
@end
#endif
#endif

#ifndef imported_XS_EmptyListException_public
#define imported_XS_EmptyListException_public
@interface XS_EmptyListException : XS_FatalException
{
}
+ (xs_nonnull XS_EmptyListException*) new;
- (void) _init;
+ (xs_nonnull XS_EmptyListException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_EmptyListException_private
#ifndef imported_XS_EmptyListException_private
#define imported_XS_EmptyListException_private
@interface XS_EmptyListException (private)
+ (xs_nonnull XS_EmptyListException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_FormatException_public
#define imported_XS_FormatException_public
@interface XS_FormatException : XS_FatalException
{
}
+ (xs_nonnull XS_FormatException*) new;
- (void) _init;
+ (xs_nonnull XS_FormatException*) badFormat :(xs_nonnull NSString*)type;
+ (xs_nonnull XS_FormatException*) badFormat :(xs_nonnull NSString*)type :(xs_nullable NSString*)value;
+ (xs_nonnull XS_FormatException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_FormatException_private
#ifndef imported_XS_FormatException_private
#define imported_XS_FormatException_private
@interface XS_FormatException (private)
+ (xs_nonnull XS_FormatException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_ImmutableException_public
#define imported_XS_ImmutableException_public
@interface XS_ImmutableException : XS_FatalException
{
}
+ (xs_nonnull XS_ImmutableException*) new;
- (void) _init;
+ (xs_nonnull XS_ImmutableException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_ImmutableException_private
#ifndef imported_XS_ImmutableException_private
#define imported_XS_ImmutableException_private
@interface XS_ImmutableException (private)
+ (xs_nonnull XS_ImmutableException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_InfinityException_public
#define imported_XS_InfinityException_public
@interface XS_InfinityException : XS_FatalException
{
}
+ (xs_nonnull XS_InfinityException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_ListIndexException_public
#define imported_XS_ListIndexException_public
@interface XS_ListIndexException : XS_FatalException
{
}
+ (xs_nonnull XS_ListIndexException*) new;
- (void) _init;
+ (xs_nonnull XS_ListIndexException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_ListIndexException_private
#ifndef imported_XS_ListIndexException_private
#define imported_XS_ListIndexException_private
@interface XS_ListIndexException (private)
+ (xs_nonnull XS_ListIndexException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_MissingEntryException_public
#define imported_XS_MissingEntryException_public
@interface XS_MissingEntryException : XS_FatalException
{
}
+ (xs_nonnull XS_MissingEntryException*) new;
- (void) _init;
+ (xs_nonnull XS_MissingEntryException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_MissingEntryException_private
#ifndef imported_XS_MissingEntryException_private
#define imported_XS_MissingEntryException_private
@interface XS_MissingEntryException (private)
+ (xs_nonnull XS_MissingEntryException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_NotImplementedException_public
#define imported_XS_NotImplementedException_public
@interface XS_NotImplementedException : XS_FatalException
{
}
+ (xs_nonnull XS_NotImplementedException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_NotUniqueException_public
#define imported_XS_NotUniqueException_public
@interface XS_NotUniqueException : XS_FatalException
{
}
+ (xs_nonnull XS_NotUniqueException*) new;
- (void) _init;
+ (xs_nonnull XS_NotUniqueException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_NotUniqueException_private
#ifndef imported_XS_NotUniqueException_private
#define imported_XS_NotUniqueException_private
@interface XS_NotUniqueException (private)
+ (xs_nonnull XS_NotUniqueException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_NullValueException_public
#define imported_XS_NullValueException_public
@interface XS_NullValueException : XS_FatalException
{
}
+ (xs_nonnull XS_NullValueException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_OverflowException_public
#define imported_XS_OverflowException_public
@interface XS_OverflowException : XS_FatalException
{
}
+ (xs_nonnull XS_OverflowException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_UndefinedException_public
#define imported_XS_UndefinedException_public
@interface XS_UndefinedException : XS_FatalException
{
}
+ (xs_nonnull XS_UndefinedException*) new;
- (void) _init;
+ (xs_nonnull XS_UndefinedException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_UndefinedException_private
#ifndef imported_XS_UndefinedException_private
#define imported_XS_UndefinedException_private
@interface XS_UndefinedException (private)
+ (xs_nonnull XS_UndefinedException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_UnexpectedException_public
#define imported_XS_UnexpectedException_public
@interface XS_UnexpectedException : XS_FatalException
{
}
+ (xs_nonnull XS_UnexpectedException*) new;
- (void) _init;
+ (xs_nonnull XS_UnexpectedException*) withCause :(xs_nonnull NSException*)param_cause;
+ (xs_nonnull XS_UnexpectedException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_UnexpectedException_private
#ifndef imported_XS_UnexpectedException_private
#define imported_XS_UnexpectedException_private
@interface XS_UnexpectedException (private)
+ (xs_nonnull XS_UnexpectedException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_UnexpectedException*) _new2 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_UsageException_public
#define imported_XS_UsageException_public
@interface XS_UsageException : XS_FatalException
{
}
+ (xs_nonnull XS_UsageException*) new;
- (void) _init;
+ (xs_nonnull XS_UsageException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_UsageException_private
#ifndef imported_XS_UsageException_private
#define imported_XS_UsageException_private
@interface XS_UsageException (private)
+ (xs_nonnull XS_UsageException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
