#ifndef XSCRIPT_INTEGER_H
#define XSCRIPT_INTEGER_H

@class XS_BigInteger;

#ifndef imported_XS_BigInteger_public
#define imported_XS_BigInteger_public
@interface XS_BigInteger : XS_ObjectBase
{
    @private xs_int my_length;
    @private xs_int* my_digits;
    @private xs_byte my_sign;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_nonnull XS_BigInteger*) abs;
- (xs_nonnull XS_BigInteger*) add :(xs_nonnull XS_BigInteger*)p_y;
- (xs_byte) byteValue;
- (xs_int) compareTo :(xs_nonnull XS_BigInteger*)p_y;
- (void) dealloc;
- (xs_nonnull XS_BigInteger*) divide :(xs_nonnull XS_BigInteger*)p_y;
- (xs_double) doubleValue;
- (xs_boolean) equalTo :(xs_nonnull XS_BigInteger*)y;
- (xs_float) floatValue;
+ (xs_nonnull XS_BigInteger*) from :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigInteger*) fromByte :(xs_byte)value;
+ (xs_nonnull XS_BigInteger*) fromDouble :(xs_double)value;
+ (xs_nonnull XS_BigInteger*) fromFloat :(xs_float)value;
+ (xs_nonnull XS_BigInteger*) fromInt :(xs_int)value;
+ (xs_nonnull XS_BigInteger*) fromLong :(xs_long)value;
+ (xs_nonnull XS_BigInteger*) fromShort :(xs_short)value;
- (xs_boolean) greaterEqual :(xs_nonnull XS_BigInteger*)y;
- (xs_boolean) greaterThan :(xs_nonnull XS_BigInteger*)y;
- (xs_int) intValue;
- (xs_boolean) lessEqual :(xs_nonnull XS_BigInteger*)y;
- (xs_boolean) lessThan :(xs_nonnull XS_BigInteger*)y;
- (xs_long) longValue;
- (xs_nonnull XS_BigInteger*) multiply :(xs_nonnull XS_BigInteger*)p_y;
- (xs_nonnull XS_BigInteger*) negate;
- (xs_boolean) notEqual :(xs_nonnull XS_BigInteger*)y;
+ (xs_nonnull XS_BigInteger*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_BigInteger*) remainder :(xs_nonnull XS_BigInteger*)y;
- (xs_short) shortValue;
- (xs_int) sign;
- (xs_nonnull XS_BigInteger*) subtract :(xs_nonnull XS_BigInteger*)p_y;
- (xs_nonnull NSString*) toString;
@end
#endif

#ifdef import_XS_BigInteger_private
#ifndef imported_XS_BigInteger_private
#define imported_XS_BigInteger_private
@interface XS_BigInteger (private)
+ (xs_nonnull XS_BigInteger*) new;
+ (xs_nonnull XS_BigInteger*) ONE;
+ (xs_nonnull XS_BigInteger*) TWO;
+ (xs_nonnull XS_BigInteger*) ZERO;
+ (void) badFormat :(xs_nonnull NSString*)text;
- (xs_int) compareAbs :(xs_nonnull XS_BigInteger*)y;
- (xs_nonnull XS_BigInteger*) copyDigits;
+ (xs_int) digitDiv :(xs_long)x :(xs_long)y;
+ (xs_long) digitMul :(xs_long)x :(xs_long)y;
+ (xs_int) digitRem :(xs_long)x :(xs_long)y;
- (xs_int) getDigit :(xs_int)i;
+ (xs_int) highDigit :(xs_long)x;
- (xs_int) highIndex;
- (void) initDigits :(xs_int)min;
- (void) initDigits :(xs_int)min :(xs_int)max;
+ (xs_int) lowDigit :(xs_long)x;
+ (xs_nonnull XS_BigInteger*) makeMutable :(xs_int)max :(xs_int)low :(xs_int)param_sign;
+ (xs_nonnull XS_BigInteger*) makeNumber :(xs_int)low :(xs_int)param_sign;
+ (xs_nonnull XS_BigInteger*) mutableZero;
+ (xs_nonnull XS_BigInteger*) mutableZero :(xs_int)max;
- (xs_boolean) oneDigit;
- (void) setDigit :(xs_int)i :(xs_int)v;
- (xs_nonnull XS_BigInteger*) withSign :(xs_int)param_sign;
#define XS_BigInteger_DIGIT_SIZE 6
#define XS_BigInteger_SINGLE_ZERO 0
#define XS_BigInteger_DOUBLE_ZERO XS_LONG(0)
#define XS_BigInteger_SINGLE_BASE 1000000
#define XS_BigInteger_DOUBLE_BASE XS_LONG(1000000000000)
@end
#endif
#endif

#endif
