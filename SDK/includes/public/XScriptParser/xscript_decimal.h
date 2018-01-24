#ifndef XSCRIPT_DECIMAL_H
#define XSCRIPT_DECIMAL_H

@class XS_BigDecimal;

#ifndef imported_XS_BigDecimal_public
#define imported_XS_BigDecimal_public
@interface XS_BigDecimal : XS_ObjectBase
{
    @private xs_int my_length;
    @private xs_int* my_digits;
    @private xs_byte my_sign;
    @private xs_short my_scale;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_nonnull XS_BigDecimal*) abs;
- (xs_nonnull XS_BigDecimal*) add :(xs_nonnull XS_BigDecimal*)p_y;
- (xs_byte) byteValue;
- (xs_nonnull XS_BigDecimal*) ceiling;
- (xs_int) compareTo :(xs_nonnull XS_BigDecimal*)p_y;
- (void) dealloc;
- (xs_nonnull XS_BigDecimal*) divide :(xs_nonnull XS_BigDecimal*)p_y;
- (xs_double) doubleValue;
- (xs_boolean) equalTo :(xs_nonnull XS_BigDecimal*)y;
- (xs_float) floatValue;
- (xs_nonnull XS_BigDecimal*) floor;
+ (xs_nonnull XS_BigDecimal*) from :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_BigDecimal*) fromByte :(xs_byte)value;
+ (xs_nonnull XS_BigDecimal*) fromDouble :(xs_double)value;
+ (xs_nonnull XS_BigDecimal*) fromFloat :(xs_float)value;
+ (xs_nonnull XS_BigDecimal*) fromInt :(xs_int)value;
+ (xs_nonnull XS_BigDecimal*) fromLong :(xs_long)value;
+ (xs_nonnull XS_BigDecimal*) fromShort :(xs_short)value;
- (xs_boolean) greaterEqual :(xs_nonnull XS_BigDecimal*)y;
- (xs_boolean) greaterThan :(xs_nonnull XS_BigDecimal*)y;
- (xs_int) intValue;
- (xs_boolean) lessEqual :(xs_nonnull XS_BigDecimal*)y;
- (xs_boolean) lessThan :(xs_nonnull XS_BigDecimal*)y;
- (xs_long) longValue;
- (xs_nonnull XS_BigDecimal*) multiply :(xs_nonnull XS_BigDecimal*)p_y;
- (xs_nonnull XS_BigDecimal*) negate;
- (xs_boolean) notEqual :(xs_nonnull XS_BigDecimal*)y;
+ (xs_nonnull XS_BigDecimal*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_BigDecimal*) remainder :(xs_nonnull XS_BigDecimal*)y;
- (xs_nonnull XS_BigDecimal*) round;
- (xs_nonnull XS_BigDecimal*) round :(xs_int)param_scale;
- (xs_int) scale;
- (xs_short) shortValue;
- (xs_int) sign;
- (xs_nonnull XS_BigDecimal*) subtract :(xs_nonnull XS_BigDecimal*)p_y;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_BigDecimal*) truncate;
#define XS_BigDecimal_ROUND_NONE 0
#define XS_BigDecimal_ROUND_DOWN 1
#define XS_BigDecimal_ROUND_EVEN 2
#define XS_BigDecimal_ROUND_UP 3
@end
#endif

#ifdef import_XS_BigDecimal_private
#ifndef imported_XS_BigDecimal_private
#define imported_XS_BigDecimal_private
@interface XS_BigDecimal (private)
+ (xs_nonnull XS_BigDecimal*) new;
+ (xs_nonnull XS_BigDecimal*) DEC_10;
+ (xs_nonnull XS_BigDecimal*) DEC_100;
+ (xs_nonnull XS_BigDecimal*) DEC_1000;
+ (xs_nonnull XS_BigDecimal*) DEC_10000;
+ (xs_nonnull XS_BigDecimal*) DEC_100000;
+ (xs_nonnull XS_BigDecimal*) ONE;
+ (xs_nonnull XS_BigDecimal*) TWO;
+ (xs_nonnull XS_BigDecimal*) ZERO;
+ (void) badFormat :(xs_nonnull NSString*)text;
- (xs_int) compareAbs :(xs_nonnull XS_BigDecimal*)y;
- (xs_nonnull XS_BigDecimal*) copyDigits;
+ (xs_int) digitDiv :(xs_long)x :(xs_long)y;
+ (xs_long) digitMul :(xs_long)x :(xs_long)y;
+ (xs_int) digitRem :(xs_long)x :(xs_long)y;
- (xs_int) getDigit :(xs_int)i;
+ (xs_int) highDigit :(xs_long)x;
- (xs_int) highIndex;
- (void) initDigits :(xs_int)min;
- (void) initDigits :(xs_int)min :(xs_int)max;
+ (xs_int) lowDigit :(xs_long)x;
+ (xs_nonnull XS_BigDecimal*) makeMutable :(xs_int)max :(xs_int)low :(xs_int)param_sign :(xs_int)param_scale;
+ (xs_nonnull XS_BigDecimal*) makeNumber :(xs_int)low :(xs_int)param_sign :(xs_int)param_scale;
+ (xs_nonnull XS_BigDecimal*) mutableZero;
+ (xs_nonnull XS_BigDecimal*) mutableZero :(xs_int)max;
- (xs_boolean) oneDigit;
- (void) setDigit :(xs_int)i :(xs_int)v;
- (xs_nonnull XS_BigDecimal*) signScale :(xs_int)param_sign :(xs_int)param_scale;
- (xs_nonnull XS_BigDecimal*) withScale :(xs_int)param_scale :(xs_int)p_mode;
- (xs_nonnull XS_BigDecimal*) withSign :(xs_int)param_sign;
#define XS_BigDecimal_DIGIT_SIZE 6
#define XS_BigDecimal_SINGLE_ZERO 0
#define XS_BigDecimal_DOUBLE_ZERO XS_LONG(0)
#define XS_BigDecimal_SINGLE_BASE 1000000
#define XS_BigDecimal_DOUBLE_BASE XS_LONG(1000000000000)
@end
#endif
#endif

#endif
