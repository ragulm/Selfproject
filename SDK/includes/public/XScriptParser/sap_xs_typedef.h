#ifndef SAP_XS_TYPEDEF_H
#define SAP_XS_TYPEDEF_H

#ifdef XS_DISABLE_NULLABILITY
#define xs_nonnull
#define xs__nonnull
#define xs___nonnull
#define xs_nullable
#define xs__nullable
#define xs___nullable
#else
#define xs_nonnull nonnull
#define xs__nonnull nonnull,
#define xs___nonnull _Nonnull
#define xs_nullable nullable
#define xs__nullable nullable,
#define xs___nullable _Nullable
#endif

#define xs_in_NSError NSError * xs___nullable
#define xs_out_NSError NSError * xs___nullable * xs___nullable

#import <stdint.h>
#include <pthread.h>

// Use #defines, not typedefs, to avoid XCode debugging issues!

#define xs_boolean BOOL
#define xs_char unichar
#define xs_byte signed char
#define xs_short int16_t
#define xs_int int32_t
#define xs_long int64_t
#define xs_float float
#define xs_double double
#define xs_integer XS_BigInteger*
#define xs_decimal XS_BigDecimal*

@class XS_BigInteger;
@class XS_BigDecimal;

#define xs_ubyte unsigned char
#define xs_ushort uint16_t
#define xs_uint uint32_t
#define xs_ulong uint64_t

#define XS_CHAR(c) ((xs_char)(c))
#define XS_BYTE(value) ((xs_byte)value)
#define XS_SHORT(value) ((xs_short)value)
#define XS_INT(value) ((xs_int)value)
#define XS_LONG(value) value##LL

#define XS_BYTE_MIN ((xs_byte)-128)
#define XS_BYTE_MAX ((sx_byte)127)
#define XS_SHORT_MIN ((xs_short)-32768)
#define XS_SHORT_MAX ((xs_short)32767)
#define XS_INT_MIN ((xs_int)0x80000000)
#define XS_INT_MAX ((xs_int)2147483647)
#define XS_LONG_MIN XS_LONG(0x8000000000000000)
#define XS_LONG_MAX XS_LONG(9223372036854775807)

#define XS_NULLABLE_TYPE(NullableStruct, NullableType, ValueType) \
    struct NullableStruct \
    { \
        xs_boolean isNull; \
        ValueType value; \
    }; \
    typedef struct NullableStruct NullableType

XS_NULLABLE_TYPE(XS_NULLABLE_BOOLEAN, xs_nullable_boolean, xs_boolean);
XS_NULLABLE_TYPE(XS_NULLABLE_CHAR, xs_nullable_char, xs_char);
XS_NULLABLE_TYPE(XS_NULLABLE_BYTE, xs_nullable_byte, xs_byte);
XS_NULLABLE_TYPE(XS_NULLABLE_SHORT, xs_nullable_short, xs_short);
XS_NULLABLE_TYPE(XS_NULLABLE_INT, xs_nullable_int, xs_int);
XS_NULLABLE_TYPE(XS_NULLABLE_LONG, xs_nullable_long, xs_long);
XS_NULLABLE_TYPE(XS_NULLABLE_FLOAT, xs_nullable_float, xs_float);
XS_NULLABLE_TYPE(XS_NULLABLE_DOUBLE, xs_nullable_double, xs_double);
#define xs_nullable_integer XS_BigInteger*
#define xs_nullable_decimal XS_BigDecimal*

#define XS_NULL_STRING nil
#define XS_NULL_BINARY nil
#define XS_NULL_BOOLEAN ((xs_nullable_boolean){YES,(xs_boolean)0})
#define XS_NULL_CHAR ((xs_nullable_char){YES,(xs_char)0})
#define XS_NULL_BYTE ((xs_nullable_byte){YES,(xs_byte)0})
#define XS_NULL_SHORT ((xs_nullable_short){YES,(xs_short)0})
#define XS_NULL_INT ((xs_nullable_int){YES,(xs_int)0})
#define XS_NULL_LONG ((xs_nullable_long){YES,(xs_long)0})
#define XS_NULL_FLOAT ((xs_nullable_float){YES,(xs_float)0})
#define XS_NULL_DOUBLE ((xs_nullable_double){YES,(xs_double)0})
#define XS_NULL_INTEGER nil
#define XS_NULL_DECIMAL nil

@interface XS_ObjectBase : NSObject
{
}
- (xs_nonnull NSString*) description;
- (NSUInteger) hash;
- (xs_int) hashCode;
- (xs_nonnull NSString*) toString;
@end

@interface XS_HashWrapper : NSObject<NSCopying>
{
    @private NSUInteger hash_;
    @private NSString* text_;
    @private NSObject* value_;
}
+ (xs_nonnull XS_HashWrapper*) new :(xs_nullable NSObject*)value;
- (xs_nonnull id) copyWithZone :(xs_nullable NSZone*)zone;
- (BOOL) isEqual :(xs_nullable id)value;
- (NSUInteger) hash;
- (xs_nullable NSObject*)value;
@property (xs__nullable readonly, strong) NSObject* value;
@end

#define XS_MALLOC_CHECK(var, type, count) \
    { var = (type*)malloc(count * sizeof(type)); if (var == 0) [XS_OutOfMemory logErrorAndAbort]; }

#endif
