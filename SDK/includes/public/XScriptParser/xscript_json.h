#ifndef XSCRIPT_JSON_H
#define XSCRIPT_JSON_H

@class XS_Any_asNullable_xscript_json_JsonArray_in_xscript_json; /* internal */
@class XS_Any_asNullable_xscript_json_JsonElement_in_xscript_json; /* internal */
@class XS_Any_asNullable_xscript_json_JsonObject_in_xscript_json; /* internal */
@class XS_Any_as_xscript_core_UntypedMap_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_ComplexType_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_ComplexValueList_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_ComplexValue_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_DataValueList_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_EntityType_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_EntityValueList_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_EntityValue_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_EnumType_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyCollection_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyLineString_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyPoint_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyPolygon_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeographyValue_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryCollection_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryLineString_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryPoint_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryPolygon_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GeometryValue_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_GlobalDateTime_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_LocalDateTime_in_xscript_json; /* internal */
@class XS_Any_as_xscript_data_StreamLink_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonArray_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonBooleanToken_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonBoolean_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonElementFrame_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonNumberToken_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonNumber_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonObject_Entry_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonObject_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonStringToken_in_xscript_json; /* internal */
@class XS_Any_as_xscript_json_JsonString_in_xscript_json; /* internal */
@class XS_GeoJson;
@class XS_JsonElement;
@class XS_JsonElementFrame; /* internal */
@class XS_JsonElementStream;
@class XS_JsonObject_Entry;
@class XS_JsonOutputStream;
@class XS_JsonPretty;
@class XS_JsonReader;
@class XS_JsonToken;
@class XS_JsonTokenStream;
@class XS_JsonValue;
@class XS_JsonWriter;
@class XS_JsonArray;
@class XS_JsonBeginArray; /* internal */
@class XS_JsonBeginObject; /* internal */
@class XS_JsonBoolean;
@class XS_JsonBooleanToken;
@class XS_JsonColonChar; /* internal */
@class XS_JsonCommaChar; /* internal */
@class XS_JsonDeltaStream;
@class XS_JsonEndArray; /* internal */
@class XS_JsonEndObject; /* internal */
@class XS_JsonEndStream; /* internal */
@class XS_JsonNullValue; /* internal */
@class XS_JsonNumber;
@class XS_JsonNumberToken;
@class XS_JsonObject;
@class XS_JsonOutputStreamWithBuffer; /* internal */
@class XS_JsonString;
@class XS_JsonStringToken;
@class XS_JsonElementStack; /* internal */
@class XS_JsonObject_EntryList;
@class XS_JsonTickString; /* internal */
@class XS_JsonException;

#ifdef import_XS_Any_asNullable_xscript_json_JsonArray_in_xscript_json_internal
#ifndef imported_XS_Any_asNullable_xscript_json_JsonArray_in_xscript_json_internal
#define imported_XS_Any_asNullable_xscript_json_JsonArray_in_xscript_json_public
/* internal */
@interface XS_Any_asNullable_xscript_json_JsonArray_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nullable XS_JsonArray*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_json_JsonElement_in_xscript_json_internal
#ifndef imported_XS_Any_asNullable_xscript_json_JsonElement_in_xscript_json_internal
#define imported_XS_Any_asNullable_xscript_json_JsonElement_in_xscript_json_public
/* internal */
@interface XS_Any_asNullable_xscript_json_JsonElement_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nullable XS_JsonElement*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_json_JsonObject_in_xscript_json_internal
#ifndef imported_XS_Any_asNullable_xscript_json_JsonObject_in_xscript_json_internal
#define imported_XS_Any_asNullable_xscript_json_JsonObject_in_xscript_json_public
/* internal */
@interface XS_Any_asNullable_xscript_json_JsonObject_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nullable XS_JsonObject*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_core_UntypedMap_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_core_UntypedMap_in_xscript_json_internal
#define imported_XS_Any_as_xscript_core_UntypedMap_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_core_UntypedMap_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_UntypedMap*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexType_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexType_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_ComplexType_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexType_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexValueList_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexValueList_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_ComplexValueList_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexValueList_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexValue_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexValue_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_ComplexValue_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexValue_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataValueList_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_DataValueList_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_DataValueList_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_DataValueList_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityType_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_EntityType_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_EntityType_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_EntityType_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityValueList_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_EntityValueList_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_EntityValueList_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_EntityValueList_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityValue_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_EntityValue_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_EntityValue_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_EntityValue_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumType_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_EnumType_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_EnumType_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_EnumType_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyCollection_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyCollection_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyCollection_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyCollection_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyCollection*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyLineString_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyLineString_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyLineString_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyLineString_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyPoint_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyPoint_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyPoint_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyPoint_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyPolygon_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyValue_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyValue_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeographyValue_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyValue_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryCollection_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryCollection_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryCollection_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryCollection_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryCollection*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryLineString_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryLineString_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryLineString_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryLineString_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryPoint_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryPoint_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryPoint_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryPoint_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryPolygon_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryValue_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryValue_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GeometryValue_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryValue_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_GlobalDateTime_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_GlobalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_LocalDateTime_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_LocalDateTime_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_LocalDateTime_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_LocalDateTime_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_LocalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_StreamLink_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_data_StreamLink_in_xscript_json_internal
#define imported_XS_Any_as_xscript_data_StreamLink_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_data_StreamLink_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_StreamLink*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonArray_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonArray_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonArray_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonArray_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonArray*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonBooleanToken_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonBooleanToken_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonBooleanToken_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonBooleanToken_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonBooleanToken*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonBoolean_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonBoolean_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonBoolean_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonBoolean_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonBoolean*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonElementFrame_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonElementFrame_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonElementFrame_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonElementFrame_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonElementFrame*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonNumberToken_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonNumberToken_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonNumberToken_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonNumberToken_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonNumberToken*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonNumber_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonNumber_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonNumber_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonNumber_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonNumber*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonObject_Entry_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonObject_Entry_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonObject_Entry_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonObject_Entry_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonObject_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonObject_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonObject_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonObject_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonObject_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonObject*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonStringToken_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonStringToken_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonStringToken_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonStringToken_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonStringToken*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_json_JsonString_in_xscript_json_internal
#ifndef imported_XS_Any_as_xscript_json_JsonString_in_xscript_json_internal
#define imported_XS_Any_as_xscript_json_JsonString_in_xscript_json_public
/* internal */
@interface XS_Any_as_xscript_json_JsonString_in_xscript_json : XS_ObjectBase
{
}
+ (xs_nonnull XS_JsonString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifndef imported_XS_GeoJson_public
#define imported_XS_GeoJson_public
@interface XS_GeoJson : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) format :(xs_nullable XS_DataValue*)value;
+ (xs_nonnull XS_JsonObject*) formatObject :(xs_nonnull XS_DataValue*)value;
+ (xs_nullable XS_DataValue*) parse :(xs_nonnull NSString*)text :(xs_nonnull XS_DataType*)type;
+ (xs_nonnull XS_DataValue*) parseObject :(xs_nonnull XS_JsonObject*)geo :(xs_nonnull XS_DataType*)type;
@end
#endif

#ifdef import_XS_GeoJson_private
#ifndef imported_XS_GeoJson_private
#define imported_XS_GeoJson_private
@interface XS_GeoJson (private)
+ (xs_nonnull XS_JsonArray*) formatLineString :(xs_nonnull XS_CurveCoordinates*)value;
+ (xs_nonnull XS_JsonArray*) formatMultiLineString :(xs_nonnull XS_MultiCurveCoordinates*)value;
+ (xs_nonnull XS_JsonArray*) formatMultiPoint :(xs_nonnull XS_MultiPointCoordinates*)value;
+ (xs_nonnull XS_JsonArray*) formatMultiPolygon :(xs_nonnull XS_MultiPolygonCoordinates*)value;
+ (xs_nonnull XS_JsonArray*) formatPoint :(xs_nonnull XS_PointCoordinates*)value;
+ (xs_nonnull XS_JsonArray*) formatPolygon :(xs_nonnull XS_PolygonCoordinates*)value;
+ (void) formatSRID :(xs_nonnull XS_JsonObject*)geo :(xs_int)srid :(xs_int)defaultSRID;
+ (xs_nonnull XS_GeographyValue*) parseGeography :(xs_nonnull XS_JsonObject*)geo :(xs_int)tc :(xs_nonnull XS_GeographyValue*)param_gv;
+ (xs_nonnull XS_GeometryValue*) parseGeometry :(xs_nonnull XS_JsonObject*)geo :(xs_int)tc :(xs_nonnull XS_GeometryValue*)param_gv;
+ (xs_nonnull XS_CurveCoordinates*) parseLineString :(xs_nonnull XS_JsonArray*)array;
+ (xs_nonnull XS_MultiCurveCoordinates*) parseMultiLineString :(xs_nonnull XS_JsonArray*)array;
+ (xs_nonnull XS_MultiPointCoordinates*) parseMultiPoint :(xs_nonnull XS_JsonArray*)array;
+ (xs_nonnull XS_MultiPolygonCoordinates*) parseMultiPolygon :(xs_nonnull XS_JsonArray*)array;
+ (xs_nonnull XS_PointCoordinates*) parsePoint :(xs_nonnull XS_JsonArray*)array;
+ (xs_nonnull XS_PolygonCoordinates*) parsePolygon :(xs_nonnull XS_JsonArray*)array;
+ (xs_int) parseSRID :(xs_nonnull XS_JsonObject*)geo :(xs_int)defaultSRID;
@end
#endif
#endif

#ifndef imported_XS_JsonElement_public
#define imported_XS_JsonElement_public
@interface XS_JsonElement : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonElement*) new;
- (void) _init;
+ (xs_nonnull NSString*) format :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_JsonElement*) parse :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_JsonArray*) parseArray :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_JsonObject*) parseObject :(xs_nonnull NSString*)text;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
#define XS_JsonElement_TYPE_BOOLEAN 1
#define XS_JsonElement_TYPE_NUMBER 2
#define XS_JsonElement_TYPE_STRING 3
#define XS_JsonElement_TYPE_ARRAY 4
#define XS_JsonElement_TYPE_OBJECT 5
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifdef import_XS_JsonElementFrame_internal
#ifndef imported_XS_JsonElementFrame_internal
#define imported_XS_JsonElementFrame_public
/* internal */
@interface XS_JsonElementFrame : XS_ObjectBase
{
    @private XS_JsonArray* xs___nullable  theArray_;
    @private XS_JsonObject* xs___nullable  theObject_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonElementFrame*) new;
- (void) _init;
- (void) setTheArray :(xs_nullable XS_JsonArray*)value;
- (void) setTheObject :(xs_nullable XS_JsonObject*)value;
- (xs_nullable XS_JsonArray*) theArray;
- (xs_nullable XS_JsonObject*) theObject;
@property (xs__nullable nonatomic, readwrite, strong) XS_JsonArray* theArray;
@property (xs__nullable nonatomic, readwrite, strong) XS_JsonObject* theObject;
@end
#endif
#endif

#ifndef imported_XS_JsonElementStream_public
#define imported_XS_JsonElementStream_public
@interface XS_JsonElementStream : XS_ObjectBase
{
    @private XS_JsonTokenStream* xs___nonnull  tokenStream_;
    @private XS_JsonElementStack* xs___nonnull  stack;
}
- (xs_nonnull id) init;
- (void) _init;
- (xs_nullable XS_JsonArray*) beginArray;
- (xs_nullable XS_JsonObject*) beginObject;
- (void) endArray;
- (void) endObject;
- (xs_nonnull XS_JsonBooleanToken*) expectBoolean;
- (void) expectColon;
- (void) expectComma;
- (xs_nonnull XS_JsonNumberToken*) expectNumber;
- (xs_nonnull XS_JsonStringToken*) expectString;
+ (xs_nonnull XS_JsonElementStream*) fromStream :(xs_nonnull XS_CharStream*)stream;
+ (xs_nonnull XS_JsonElementStream*) fromString :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_JsonElementStream*) fromTokens :(xs_nonnull XS_JsonTokenStream*)tokens;
- (xs_boolean) isEndArray;
- (xs_boolean) isEndObject;
- (xs_boolean) lookingAt :(xs_int)type;
- (xs_nonnull XS_JsonArray*) readArray;
- (xs_nullable XS_JsonElement*) readElement;
- (xs_nonnull XS_JsonObject*) readObject;
- (xs_nonnull NSString*) readString;
@end
#endif

#ifdef import_XS_JsonElementStream_private
#ifndef imported_XS_JsonElementStream_private
#define imported_XS_JsonElementStream_private
@interface XS_JsonElementStream (private)
+ (xs_nonnull XS_JsonElementStream*) new;
- (xs_boolean) forever;
- (void) popStackFrame;
- (void) setTokenStream :(xs_nonnull XS_JsonTokenStream*)value;
- (xs_nonnull XS_JsonTokenStream*) tokenStream;
- (xs_nonnull XS_JsonElementFrame*) topStackFrame;
+ (xs_nonnull XS_JsonElementFrame*) _new1 :(xs_nullable XS_JsonArray*)p1;
+ (xs_nonnull XS_JsonElementFrame*) _new2 :(xs_nullable XS_JsonObject*)p1;
+ (xs_nonnull XS_JsonElementStream*) _new3 :(xs_nonnull XS_JsonTokenStream*)p1;
@property (xs__nonnull nonatomic, readwrite, strong) XS_JsonTokenStream* tokenStream;
@end
#endif
#endif

#ifndef imported_XS_JsonObject_Entry_public
#define imported_XS_JsonObject_Entry_public
@interface XS_JsonObject_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_JsonElement* xs___nullable  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonObject_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nullable XS_JsonElement*)value;
- (xs_nullable XS_JsonElement*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nullable nonatomic, readwrite, strong) XS_JsonElement* value;
@end
#endif

#ifndef imported_XS_JsonOutputStream_public
#define imported_XS_JsonOutputStream_public
@interface XS_JsonOutputStream : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonOutputStream*) new;
- (void) _init;
- (void) clear;
- (xs_int) length;
- (xs_nonnull NSString*) toString;
+ (xs_nonnull XS_JsonOutputStream*) withBuffer;
- (void) writeChar :(xs_char)c;
- (void) writeElement :(xs_nullable XS_JsonElement*)element;
- (void) writeString :(xs_nonnull NSString*)text;
- (void) writeVerbatim :(xs_nonnull NSString*)text;
@end
#endif

#ifdef import_XS_JsonOutputStream_private
#ifndef imported_XS_JsonOutputStream_private
#define imported_XS_JsonOutputStream_private
@interface XS_JsonOutputStream (private)
- (void) writeEscaped :(xs_nonnull NSString*)text;
- (void) writeHex4 :(xs_int)h;
@end
#endif
#endif

#ifndef imported_XS_JsonPretty_public
#define imported_XS_JsonPretty_public
@interface XS_JsonPretty : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) print :(xs_nullable XS_JsonElement*)value;
+ (xs_nonnull NSString*) print :(xs_nullable XS_JsonElement*)value :(xs_int)indent;
@end
#endif

#ifdef import_XS_JsonPretty_private
#ifndef imported_XS_JsonPretty_private
#define imported_XS_JsonPretty_private
@interface XS_JsonPretty (private)
+ (xs_boolean) allBasic :(xs_nullable XS_JsonElement*)value;
+ (xs_boolean) isEmpty :(xs_nullable XS_JsonElement*)value;
+ (xs_nonnull NSString*) write :(xs_nullable XS_JsonElement*)value;
+ (xs_nonnull NSString*) write :(xs_nullable XS_JsonElement*)value :(xs_int)indent;
@end
#endif
#endif

#ifndef imported_XS_JsonReader_public
#define imported_XS_JsonReader_public
@interface XS_JsonReader : XS_ObjectBase
{
}
+ (xs_nullable XS_JsonElement*) read :(xs_nonnull NSString*)text;
@end
#endif

#ifndef imported_XS_JsonToken_public
#define imported_XS_JsonToken_public
@interface XS_JsonToken : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonToken*) new;
- (void) _init;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
#define XS_JsonToken_NULL_VALUE 0
#define XS_JsonToken_BOOLEAN_VALUE 1
#define XS_JsonToken_NUMBER_VALUE 2
#define XS_JsonToken_STRING_VALUE 3
#define XS_JsonToken_COLON_CHAR 4
#define XS_JsonToken_COMMA_CHAR 5
#define XS_JsonToken_BEGIN_ARRAY 6
#define XS_JsonToken_END_ARRAY 7
#define XS_JsonToken_BEGIN_OBJECT 8
#define XS_JsonToken_END_OBJECT 9
#define XS_JsonToken_END_STREAM 10
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifdef import_XS_JsonToken_internal
#ifndef imported_XS_JsonToken_internal
#define imported_XS_JsonToken_internal
@interface XS_JsonToken (internal)
- (void) throwExpected :(xs_nonnull NSString*)what;
#define XS_JsonToken_TICK_VALUE 11
@end
#endif
#endif

#ifndef imported_XS_JsonTokenStream_public
#define imported_XS_JsonTokenStream_public
@interface XS_JsonTokenStream : XS_ObjectBase
{
    @private XS_CharStream* xs___nonnull  stream;
    @private XS_CharBuffer* xs___nonnull  buffer;
    @private XS_JsonToken* xs___nullable  next;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_boolean) endArray;
- (xs_boolean) endObject;
+ (xs_nonnull XS_JsonTokenStream*) fromStream :(xs_nonnull XS_CharStream*)param_stream;
+ (xs_nonnull XS_JsonTokenStream*) fromString :(xs_nonnull NSString*)text;
- (xs_boolean) nextIs :(xs_int)type;
- (xs_nonnull XS_JsonToken*) peek;
- (xs_nonnull XS_JsonToken*) read;
- (void) undoRead :(xs_nonnull XS_JsonToken*)token;
@end
#endif

#ifdef import_XS_JsonTokenStream_private
#ifndef imported_XS_JsonTokenStream_private
#define imported_XS_JsonTokenStream_private
@interface XS_JsonTokenStream (private)
+ (xs_nonnull XS_JsonTokenStream*) new;
+ (xs_nonnull XS_CharStream*) EMPTY_CHAR_STREAM;
- (void) badNumber :(xs_nonnull XS_CharBuffer*)n :(xs_char)c;
- (xs_nonnull NSString*) badToken4 :(xs_char)c1 :(xs_char)c2 :(xs_char)c3 :(xs_char)c4;
- (xs_nonnull NSString*) badToken5 :(xs_char)c1 :(xs_char)c2 :(xs_char)c3 :(xs_char)c4 :(xs_char)c5;
- (xs_int) parseHex1 :(xs_char)c;
- (xs_int) parseHex4 :(xs_char)c1 :(xs_char)c2 :(xs_char)c3 :(xs_char)c4;
- (xs_nonnull XS_JsonNumberToken*) readNumber :(xs_char)x;
- (xs_nonnull XS_JsonStringToken*) readString;
+ (xs_nonnull XS_JsonTokenStream*) _new1 :(xs_nonnull XS_CharStream*)p1;
#define XS_JsonTokenStream_END_STREAM XS_CHAR(0xFFFF)
@end
#endif
#endif

#ifndef imported_XS_JsonValue_public
#define imported_XS_JsonValue_public
@interface XS_JsonValue : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_nonnull XS_ErrorResponse*) errorResponse :(xs_nonnull XS_JsonElement*)document :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) formatCall :(xs_nonnull XS_DataMethodCall*)call :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) formatDocument :(xs_nonnull XS_DataValue*)value :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) formatLink :(xs_nonnull XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromArray :(xs_nonnull XS_JsonArray*)value;
+ (xs_nonnull XS_JsonElement*) fromBinary :(xs_nonnull NSData*)value;
+ (xs_nonnull XS_JsonElement*) fromBoolean :(xs_boolean)value;
+ (xs_nonnull XS_JsonElement*) fromByte :(xs_byte)value;
+ (xs_nonnull XS_JsonElement*) fromChar :(xs_char)value;
+ (xs_nullable XS_JsonElement*) fromComplex :(xs_nullable XS_ComplexValue*)complex :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromComplexList :(xs_nonnull XS_ComplexValueList*)list :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromDecimal :(xs_nonnull XS_BigDecimal*)value;
+ (xs_nonnull XS_JsonElement*) fromDouble :(xs_double)value;
+ (xs_nullable XS_JsonElement*) fromEntity :(xs_nullable XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromEntityList :(xs_nonnull XS_EntityValueList*)list :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromFloat :(xs_float)value;
+ (xs_nonnull XS_JsonElement*) fromInt :(xs_int)value;
+ (xs_nonnull XS_JsonElement*) fromInteger :(xs_nonnull XS_BigInteger*)value;
+ (xs_nonnull XS_JsonElement*) fromLong :(xs_long)value;
+ (xs_nullable XS_JsonElement*) fromNullableBinary :(xs_nullable NSData*)value;
+ (xs_nullable XS_JsonElement*) fromNullableBoolean :(xs_nullable_boolean)value;
+ (xs_nullable XS_JsonElement*) fromNullableByte :(xs_nullable_byte)value;
+ (xs_nullable XS_JsonElement*) fromNullableChar :(xs_nullable_char)value;
+ (xs_nullable XS_JsonElement*) fromNullableDecimal :(xs_nullable XS_BigDecimal*)value;
+ (xs_nullable XS_JsonElement*) fromNullableDouble :(xs_nullable_double)value;
+ (xs_nullable XS_JsonElement*) fromNullableFloat :(xs_nullable_float)value;
+ (xs_nullable XS_JsonElement*) fromNullableInt :(xs_nullable_int)value;
+ (xs_nullable XS_JsonElement*) fromNullableInteger :(xs_nullable XS_BigInteger*)value;
+ (xs_nullable XS_JsonElement*) fromNullableLong :(xs_nullable_long)value;
+ (xs_nullable XS_JsonElement*) fromNullableShort :(xs_nullable_short)value;
+ (xs_nullable XS_JsonElement*) fromNullableString :(xs_nullable NSString*)value;
+ (xs_nonnull XS_JsonElement*) fromObject :(xs_nonnull XS_JsonObject*)value;
+ (xs_nonnull XS_JsonElement*) fromShort :(xs_short)value;
+ (xs_nonnull XS_JsonElement*) fromString :(xs_nonnull NSString*)value;
+ (xs_nullable XS_JsonElement*) fromValue :(xs_nullable XS_DataValue*)value :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) fromValueList :(xs_nonnull XS_DataValueList*)list :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSData*) getBinary :(xs_nullable XS_JsonElement*)element;
+ (xs_boolean) getBoolean :(xs_nullable XS_JsonElement*)element;
+ (xs_byte) getByte :(xs_nullable XS_JsonElement*)element;
+ (xs_char) getChar :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_ComplexValue*) getComplex :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_ComplexType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_ComplexValueList*) getComplexList :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_BigDecimal*) getDecimal :(xs_nullable XS_JsonElement*)element;
+ (xs_double) getDouble :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_EntityValue*) getEntity :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_EntityType*)param_type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_EntityValueList*) getEntityList :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_float) getFloat :(xs_nullable XS_JsonElement*)element;
+ (xs_int) getInt :(xs_nullable XS_JsonElement*)element;
+ (xs_nonnull XS_BigInteger*) getInteger :(xs_nullable XS_JsonElement*)element;
+ (xs_long) getLong :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable NSData*) getNullableBinary :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_boolean) getNullableBoolean :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_byte) getNullableByte :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_char) getNullableChar :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_BigDecimal*) getNullableDecimal :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_double) getNullableDouble :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_float) getNullableFloat :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_int) getNullableInt :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_BigInteger*) getNullableInteger :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_long) getNullableLong :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable_short) getNullableShort :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable NSString*) getNullableString :(xs_nullable XS_JsonElement*)element;
+ (xs_short) getShort :(xs_nullable XS_JsonElement*)element;
+ (xs_nonnull NSString*) getString :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable XS_DataValue*) getValue :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_DataValueList*) getValueList :(xs_nullable XS_JsonElement*)element :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nullable XS_DataValue*) parseDocument :(xs_nullable XS_JsonElement*)document :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_EntityValue*) parseLink :(xs_nonnull XS_JsonElement*)document :(xs_nonnull XS_EntityType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_EntityValueList*) parseLinks :(xs_nonnull XS_JsonElement*)document :(xs_nonnull XS_EntityType*)type :(xs_nonnull XS_DataContext*)context;
@end
#endif

#ifdef import_XS_JsonValue_private
#ifndef imported_XS_JsonValue_private
#define imported_XS_JsonValue_private
@interface XS_JsonValue (private)
+ (xs_nonnull XS_GlobalDateTime*) GDT_1970;
+ (xs_nonnull XS_LocalDateTime*) LDT_1970;
+ (xs_nonnull XS_ComplexType*) actualComplexType :(xs_nonnull XS_JsonObject*)element :(xs_nonnull XS_ComplexType*)formalType :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_EntityType*) actualEntityType :(xs_nonnull XS_JsonObject*)element :(xs_nonnull XS_EntityType*)formalType :(xs_nonnull XS_DataContext*)context;
+ (xs_nullable NSString*) actualTypeName :(xs_nonnull XS_JsonObject*)element :(xs_nonnull XS_DataContext*)context;
+ (void) deepInsert :(xs_nonnull XS_JsonObject*)map :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)dv :(xs_nonnull XS_DataContext*)context;
+ (void) expandChildren :(xs_nonnull XS_JsonObject*)map :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)dv :(xs_nonnull XS_DataContext*)context;
+ (void) expandChildren :(xs_nonnull XS_JsonObject*)map :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)dv :(xs_nonnull XS_DataContext*)context :(xs_boolean)param_deepInsert;
+ (void) fromStream :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_StreamLink*)link :(xs_nonnull XS_JsonObject*)map :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) getNumberText :(xs_nullable XS_JsonElement*)element;
+ (xs_nullable NSObject*) hideQuery :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) odataName :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_LocalDateTime*) parseLocalDT :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_GlobalDateTime*) parseTicksGDT :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_LocalDateTime*) parseTicksLDT :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_DataType*) resolveOpenType :(xs_nullable NSString*)type :(xs_nullable XS_JsonElement*)value :(xs_nonnull XS_DataContext*)context;
+ (void) restoreQuery :(xs_nonnull XS_DataContext*)context :(xs_nullable NSObject*)query;
+ (void) setDynamicType :(xs_nonnull XS_JsonObject*)map :(xs_nonnull NSString*)name :(xs_nullable XS_DataValue*)value :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) unwrapDocument :(xs_nonnull XS_JsonElement*)document :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull XS_JsonElement*) wrapDocument :(xs_nonnull XS_JsonElement*)document :(xs_nonnull XS_DataContext*)context;
@end
#endif
#endif

#ifdef import_XS_JsonValue_internal
#ifndef imported_XS_JsonValue_internal
#define imported_XS_JsonValue_internal
@interface XS_JsonValue (internal)
+ (xs_nonnull NSString*) getValueField :(xs_int)version;
#define XS_JsonValue_AT_ODATA_BIND @"@odata.bind"
#define XS_JsonValue_AT_ODATA_CONTEXT @"@odata.context"
#define XS_JsonValue_AT_ODATA_COUNT @"@odata.count"
#define XS_JsonValue_AT_ODATA_DELTA_LINK @"@odata.deltaLink"
#define XS_JsonValue_AT_ODATA_EDIT_LINK @"@odata.editLink"
#define XS_JsonValue_AT_ODATA_ETAG @"@odata.etag"
#define XS_JsonValue_AT_ODATA_ID @"@odata.id"
#define XS_JsonValue_AT_ODATA_MEDIA_EDIT_LINK @"@odata.mediaEditLink"
#define XS_JsonValue_AT_ODATA_MEDIA_ENTITY_TAG @"@odata.mediaETag"
#define XS_JsonValue_AT_ODATA_MEDIA_READ_LINK @"@odata.mediaReadLink"
#define XS_JsonValue_AT_ODATA_MEDIA_CONTENT_TYPE @"@odata.mediaContentType"
#define XS_JsonValue_AT_ODATA_NAVIGATION_LINK @"@odata.navigationLink"
#define XS_JsonValue_AT_ODATA_NEXT_LINK @"@odata.nextLink"
#define XS_JsonValue_AT_ODATA_READ_LINK @"@odata.readLink"
#define XS_JsonValue_AT_ODATA_TYPE @"@odata.type"
#define XS_JsonValue_V3_CONTENT_TYPE @"content_type"
#define XS_JsonValue_V3_COUNT @"__count"
#define XS_JsonValue_V3_DEFERRED @"__deferred"
#define XS_JsonValue_V3_DELTA @"__delta"
#define XS_JsonValue_V3_EDIT_MEDIA @"edit_media"
#define XS_JsonValue_V3_ETAG @"etag"
#define XS_JsonValue_V3_ID @"id"
#define XS_JsonValue_V3_MEDIA_ETAG @"media_etag"
#define XS_JsonValue_V3_MEDIA_SRC @"media_src"
#define XS_JsonValue_V3_METADATA @"__metadata"
#define XS_JsonValue_V3_NEXT @"__next"
#define XS_JsonValue_V3_READ @"__read"
#define XS_JsonValue_V3_TYPE @"type"
#define XS_JsonValue_V3_URI @"uri"
@end
#endif
#endif

#ifndef imported_XS_JsonWriter_public
#define imported_XS_JsonWriter_public
@interface XS_JsonWriter : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) write :(xs_nullable XS_JsonElement*)element;
@end
#endif

#ifndef imported_XS_JsonArray_public
#define imported_XS_JsonArray_public
@interface XS_JsonArray : XS_JsonElement
{
    @private XS_UntypedList* xs___nonnull  my_list_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonArray*) new;
+ (xs_nonnull XS_JsonArray*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_JsonArray*) add :(xs_nullable XS_JsonElement*)item;
- (xs_nonnull XS_JsonArray*) addAll :(xs_nonnull XS_JsonArray*)list;
- (void) clear;
- (xs_nonnull XS_JsonArray*) copy;
+ (xs_nonnull XS_JsonArray*) empty;
- (xs_nullable XS_JsonElement*) first;
- (xs_nullable XS_JsonElement*) get :(xs_int)index;
- (xs_nonnull XS_JsonArray*) getArray :(xs_int)index;
- (xs_nonnull XS_JsonObject*) getObject :(xs_int)index;
- (xs_nonnull NSString*) getString :(xs_int)index;
- (void) insert :(xs_int)index :(xs_nullable XS_JsonElement*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_JsonArray*)list;
- (xs_boolean) isEmpty;
- (xs_nullable XS_JsonElement*) last;
- (xs_int) length;
- (xs_nullable XS_JsonElement*) pop;
- (xs_int) push :(xs_nullable XS_JsonElement*)item;
- (void) removeAt :(xs_int)index;
- (void) removeRange :(xs_int)start :(xs_int)end;
- (xs_nonnull XS_JsonArray*) reverse;
- (void) set :(xs_int)index :(xs_nullable XS_JsonElement*)item;
- (xs_nullable XS_JsonElement*) shift;
- (xs_nonnull XS_JsonArray*) slice :(xs_int)start;
- (xs_nonnull XS_JsonArray*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_int) unshift :(xs_nullable XS_JsonElement*)item;
- (xs_nonnull XS_UntypedList*) untypedList;
@property (nonatomic, readonly) xs_boolean isEmpty;
@property (nonatomic, readonly) xs_int length;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly, strong) XS_UntypedList* untypedList;
@end
#endif

#ifdef import_XS_JsonArray_private
#ifndef imported_XS_JsonArray_private
#define imported_XS_JsonArray_private
@interface XS_JsonArray (private)
- (xs_nonnull XS_UntypedList*) my_list;
- (void) setMy_list :(xs_nonnull XS_UntypedList*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedList* my_list;
@end
#endif
#endif

#ifdef import_XS_JsonBeginArray_internal
#ifndef imported_XS_JsonBeginArray_internal
#define imported_XS_JsonBeginArray_public
/* internal */
@interface XS_JsonBeginArray : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonBeginArray_private
#ifndef imported_XS_JsonBeginArray_private
#define imported_XS_JsonBeginArray_private
@interface XS_JsonBeginArray (private)
+ (xs_nonnull XS_JsonBeginArray*) new;
@end
#endif
#endif

#ifdef import_XS_JsonBeginObject_internal
#ifndef imported_XS_JsonBeginObject_internal
#define imported_XS_JsonBeginObject_public
/* internal */
@interface XS_JsonBeginObject : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonBeginObject_private
#ifndef imported_XS_JsonBeginObject_private
#define imported_XS_JsonBeginObject_private
@interface XS_JsonBeginObject (private)
+ (xs_nonnull XS_JsonBeginObject*) new;
@end
#endif
#endif

#ifndef imported_XS_JsonBoolean_public
#define imported_XS_JsonBoolean_public
@interface XS_JsonBoolean : XS_JsonElement
{
    @private xs_boolean value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonBoolean*) FALSE_;
+ (xs_nonnull XS_JsonBoolean*) TRUE_;
+ (xs_nonnull XS_JsonBoolean*) of :(xs_boolean)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_boolean) value;
@property (nonatomic, readonly) xs_int type;
@property (nonatomic, readonly) xs_boolean value;
@end
#endif

#ifdef import_XS_JsonBoolean_private
#ifndef imported_XS_JsonBoolean_private
#define imported_XS_JsonBoolean_private
@interface XS_JsonBoolean (private)
+ (xs_nonnull XS_JsonBoolean*) new;
+ (xs_nonnull XS_JsonBoolean*) _new1 :(xs_boolean)p1;
@end
#endif
#endif

#ifndef imported_XS_JsonBooleanToken_public
#define imported_XS_JsonBooleanToken_public
@interface XS_JsonBooleanToken : XS_JsonToken
{
    @private xs_boolean value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonBooleanToken*) of :(xs_boolean)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_boolean) value;
@property (nonatomic, readonly) xs_int type;
@property (nonatomic, readonly) xs_boolean value;
@end
#endif

#ifdef import_XS_JsonBooleanToken_private
#ifndef imported_XS_JsonBooleanToken_private
#define imported_XS_JsonBooleanToken_private
@interface XS_JsonBooleanToken (private)
+ (xs_nonnull XS_JsonBooleanToken*) new;
+ (xs_nonnull XS_JsonBooleanToken*) _new1 :(xs_boolean)p1;
@end
#endif
#endif

#ifdef import_XS_JsonBooleanToken_internal
#ifndef imported_XS_JsonBooleanToken_internal
#define imported_XS_JsonBooleanToken_internal
@interface XS_JsonBooleanToken (internal)
+ (xs_nonnull XS_JsonBooleanToken*) FALSE_;
+ (xs_nonnull XS_JsonBooleanToken*) TRUE_;
@end
#endif
#endif

#ifdef import_XS_JsonColonChar_internal
#ifndef imported_XS_JsonColonChar_internal
#define imported_XS_JsonColonChar_public
/* internal */
@interface XS_JsonColonChar : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonColonChar_private
#ifndef imported_XS_JsonColonChar_private
#define imported_XS_JsonColonChar_private
@interface XS_JsonColonChar (private)
+ (xs_nonnull XS_JsonColonChar*) new;
@end
#endif
#endif

#ifdef import_XS_JsonCommaChar_internal
#ifndef imported_XS_JsonCommaChar_internal
#define imported_XS_JsonCommaChar_public
/* internal */
@interface XS_JsonCommaChar : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonCommaChar_private
#ifndef imported_XS_JsonCommaChar_private
#define imported_XS_JsonCommaChar_private
@interface XS_JsonCommaChar (private)
+ (xs_nonnull XS_JsonCommaChar*) new;
@end
#endif
#endif

#ifndef imported_XS_JsonDeltaStream_public
#define imported_XS_JsonDeltaStream_public
@interface XS_JsonDeltaStream : XS_DeltaStream
{
    @private XS_DataContext* xs___nonnull  dataContext_;
    @private XS_CharStream* xs___nonnull  charStream_;
    @private XS_JsonElementStream* xs___nonnull  jsonStream_;
    @private xs_boolean firstItem;
}
- (xs_nonnull id) init;
- (void) _init;
- (void) abort;
- (void) close;
+ (xs_nonnull XS_JsonDeltaStream*) fromStream :(xs_nonnull XS_CharStream*)stream :(xs_nonnull XS_DataContext*)context;
- (xs_boolean) next;
@end
#endif

#ifdef import_XS_JsonDeltaStream_private
#ifndef imported_XS_JsonDeltaStream_private
#define imported_XS_JsonDeltaStream_private
@interface XS_JsonDeltaStream (private)
+ (xs_nonnull XS_JsonDeltaStream*) new;
- (xs_nonnull XS_CharStream*) charStream;
- (xs_nonnull XS_DataContext*) dataContext;
- (xs_nonnull XS_JsonElementStream*) jsonStream;
- (void) setCharStream :(xs_nonnull XS_CharStream*)value;
- (void) setDataContext :(xs_nonnull XS_DataContext*)value;
- (void) setJsonStream :(xs_nonnull XS_JsonElementStream*)value;
+ (xs_nonnull XS_JsonDeltaStream*) _new1 :(xs_nonnull XS_JsonElementStream*)p1 :(xs_boolean)p2 :(xs_nonnull XS_DataContext*)p3 :(xs_nonnull XS_CharStream*)p4;
+ (xs_nonnull XS_ChangedLink*) _new2 :(xs_boolean)p1;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CharStream* charStream;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataContext* dataContext;
@property (xs__nonnull nonatomic, readwrite, strong) XS_JsonElementStream* jsonStream;
@end
#endif
#endif

#ifdef import_XS_JsonDeltaStream_internal
#ifndef imported_XS_JsonDeltaStream_internal
#define imported_XS_JsonDeltaStream_internal
@interface XS_JsonDeltaStream (internal)
+ (xs_nullable NSObject*) parseItem :(xs_nonnull XS_JsonObject*)item :(xs_nonnull XS_DataContext*)context;
@end
#endif
#endif

#ifdef import_XS_JsonEndArray_internal
#ifndef imported_XS_JsonEndArray_internal
#define imported_XS_JsonEndArray_public
/* internal */
@interface XS_JsonEndArray : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonEndArray_private
#ifndef imported_XS_JsonEndArray_private
#define imported_XS_JsonEndArray_private
@interface XS_JsonEndArray (private)
+ (xs_nonnull XS_JsonEndArray*) new;
@end
#endif
#endif

#ifdef import_XS_JsonEndObject_internal
#ifndef imported_XS_JsonEndObject_internal
#define imported_XS_JsonEndObject_public
/* internal */
@interface XS_JsonEndObject : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonEndObject_private
#ifndef imported_XS_JsonEndObject_private
#define imported_XS_JsonEndObject_private
@interface XS_JsonEndObject (private)
+ (xs_nonnull XS_JsonEndObject*) new;
@end
#endif
#endif

#ifdef import_XS_JsonEndStream_internal
#ifndef imported_XS_JsonEndStream_internal
#define imported_XS_JsonEndStream_public
/* internal */
@interface XS_JsonEndStream : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonEndStream_private
#ifndef imported_XS_JsonEndStream_private
#define imported_XS_JsonEndStream_private
@interface XS_JsonEndStream (private)
+ (xs_nonnull XS_JsonEndStream*) new;
@end
#endif
#endif

#ifdef import_XS_JsonNullValue_internal
#ifndef imported_XS_JsonNullValue_internal
#define imported_XS_JsonNullValue_public
/* internal */
@interface XS_JsonNullValue : XS_JsonToken
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonToken*) TOKEN;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
@property (nonatomic, readonly) xs_int type;
@end
#endif
#endif

#ifdef import_XS_JsonNullValue_private
#ifndef imported_XS_JsonNullValue_private
#define imported_XS_JsonNullValue_private
@interface XS_JsonNullValue (private)
+ (xs_nonnull XS_JsonNullValue*) new;
@end
#endif
#endif

#ifndef imported_XS_JsonNumber_public
#define imported_XS_JsonNumber_public
@interface XS_JsonNumber : XS_JsonElement
{
    @private NSString* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonNumber*) of :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_nonnull NSString*) value;
+ (xs_nonnull XS_JsonNumber*) zero;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif

#ifdef import_XS_JsonNumber_private
#ifndef imported_XS_JsonNumber_private
#define imported_XS_JsonNumber_private
@interface XS_JsonNumber (private)
+ (xs_nonnull XS_JsonNumber*) new;
+ (xs_nonnull XS_JsonNumber*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_JsonNumberToken_public
#define imported_XS_JsonNumberToken_public
@interface XS_JsonNumberToken : XS_JsonToken
{
    @private NSString* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonNumberToken*) of :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_nonnull NSString*) value;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif

#ifdef import_XS_JsonNumberToken_private
#ifndef imported_XS_JsonNumberToken_private
#define imported_XS_JsonNumberToken_private
@interface XS_JsonNumberToken (private)
+ (xs_nonnull XS_JsonNumberToken*) new;
+ (xs_nonnull XS_JsonNumberToken*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifdef import_XS_JsonNumberToken_internal
#ifndef imported_XS_JsonNumberToken_internal
#define imported_XS_JsonNumberToken_internal
@interface XS_JsonNumberToken (internal)
+ (xs_nonnull XS_JsonNumberToken*) EIGHT;
+ (xs_nonnull XS_JsonNumberToken*) FIVE;
+ (xs_nonnull XS_JsonNumberToken*) FOUR;
+ (xs_nonnull XS_JsonNumberToken*) NINE;
+ (xs_nonnull XS_JsonNumberToken*) ONE;
+ (xs_nonnull XS_JsonNumberToken*) SEVEN;
+ (xs_nonnull XS_JsonNumberToken*) SIX;
+ (xs_nonnull XS_JsonNumberToken*) THREE;
+ (xs_nonnull XS_JsonNumberToken*) TWO;
+ (xs_nonnull XS_JsonNumberToken*) ZERO;
@end
#endif
#endif

#ifndef imported_XS_JsonObject_public
#define imported_XS_JsonObject_public
@interface XS_JsonObject : XS_JsonElement
{
    @private XS_UntypedMap* xs___nonnull  my_map_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonObject*) new;
+ (xs_nonnull XS_JsonObject*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) clear;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_JsonObject*) empty;
- (xs_nonnull XS_JsonObject_EntryList*) entries;
- (xs_nullable XS_JsonElement*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_JsonArray*) getArray :(xs_nonnull NSString*)name;
- (xs_nullable XS_JsonArray*) getNullableArray :(xs_nonnull NSString*)name;
- (xs_nullable XS_JsonObject*) getNullableObject :(xs_nonnull NSString*)name;
- (xs_nullable NSString*) getNullableString :(xs_nonnull NSString*)name;
- (xs_nonnull XS_JsonObject*) getObject :(xs_nonnull NSString*)name;
- (xs_nullable XS_JsonElement*) getRequired :(xs_nonnull NSString*)key;
- (xs_nonnull NSString*) getString :(xs_nonnull NSString*)name;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_JsonObject*) set :(xs_nonnull NSString*)key :(xs_nullable XS_JsonElement*)value;
- (void) setArray :(xs_nonnull NSString*)name :(xs_nonnull XS_JsonArray*)value;
- (void) setObject :(xs_nonnull NSString*)name :(xs_nonnull XS_JsonObject*)value;
- (void) setString :(xs_nonnull NSString*)name :(xs_nonnull NSString*)value;
- (xs_int) size;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_nonnull XS_UntypedMap*) untypedMap;
- (xs_nonnull XS_JsonArray*) values;
@property (nonatomic, readonly) xs_int size;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly, strong) XS_UntypedMap* untypedMap;
@end
#endif

#ifdef import_XS_JsonObject_private
#ifndef imported_XS_JsonObject_private
#define imported_XS_JsonObject_private
@interface XS_JsonObject (private)
- (xs_nonnull XS_UntypedMap*) my_map;
- (void) setMy_map :(xs_nonnull XS_UntypedMap*)value;
+ (xs_nonnull XS_JsonObject_Entry*) _new1 :(xs_nullable XS_JsonElement*)p1 :(xs_nonnull NSString*)p2;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedMap* my_map;
@end
#endif
#endif

#ifdef import_XS_JsonOutputStreamWithBuffer_internal
#ifndef imported_XS_JsonOutputStreamWithBuffer_internal
#define imported_XS_JsonOutputStreamWithBuffer_public
/* internal */
@interface XS_JsonOutputStreamWithBuffer : XS_JsonOutputStream
{
    @private XS_CharBuffer* xs___nonnull  buffer;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonOutputStreamWithBuffer*) new;
- (void) _init;
- (void) clear;
- (xs_int) length;
- (xs_nonnull NSString*) toString;
- (void) writeChar :(xs_char)c;
- (void) writeVerbatim :(xs_nonnull NSString*)text;
@end
#endif
#endif

#ifndef imported_XS_JsonString_public
#define imported_XS_JsonString_public
@interface XS_JsonString : XS_JsonElement
{
    @private NSString* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonString*) empty;
+ (xs_nonnull XS_JsonString*) of :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_nonnull NSString*) value;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif

#ifdef import_XS_JsonString_private
#ifndef imported_XS_JsonString_private
#define imported_XS_JsonString_private
@interface XS_JsonString (private)
+ (xs_nonnull XS_JsonString*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifdef import_XS_JsonString_internal
#ifndef imported_XS_JsonString_internal
#define imported_XS_JsonString_internal
@interface XS_JsonString (internal)
+ (xs_nonnull XS_JsonString*) new;
- (xs_boolean) isTick;
- (xs_nonnull NSString*) unquoted;
@property (nonatomic, readonly) xs_boolean isTick;
@end
#endif
#endif

#ifndef imported_XS_JsonStringToken_public
#define imported_XS_JsonStringToken_public
@interface XS_JsonStringToken : XS_JsonToken
{
    @private NSString* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonStringToken*) of :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
- (xs_nonnull NSString*) value;
@property (nonatomic, readonly) xs_int type;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif

#ifdef import_XS_JsonStringToken_private
#ifndef imported_XS_JsonStringToken_private
#define imported_XS_JsonStringToken_private
@interface XS_JsonStringToken (private)
+ (xs_nonnull XS_JsonStringToken*) new;
+ (xs_nonnull XS_JsonStringToken*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifdef import_XS_JsonStringToken_internal
#ifndef imported_XS_JsonStringToken_internal
#define imported_XS_JsonStringToken_internal
@interface XS_JsonStringToken (internal)
+ (xs_nonnull XS_JsonStringToken*) EMPTY;
@end
#endif
#endif

#ifdef import_XS_JsonElementStack_internal
#ifndef imported_XS_JsonElementStack_internal
#define imported_XS_JsonElementStack_public
/* internal */
@interface XS_JsonElementStack : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonElementStack*) new;
+ (xs_nonnull XS_JsonElementStack*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_JsonElementStack*) add :(xs_nonnull XS_JsonElementFrame*)item;
- (xs_nonnull XS_JsonElementStack*) addAll :(xs_nonnull XS_JsonElementStack*)list;
- (xs_nonnull XS_JsonElementStack*) copy;
+ (xs_nonnull XS_JsonElementStack*) empty;
- (xs_nonnull XS_JsonElementFrame*) first;
- (xs_nonnull XS_JsonElementFrame*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_JsonElementFrame*)item;
- (xs_int) indexOf :(xs_nonnull XS_JsonElementFrame*)item;
- (xs_int) indexOf :(xs_nonnull XS_JsonElementFrame*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_JsonElementFrame*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_JsonElementStack*)list;
- (xs_nonnull XS_JsonElementFrame*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_JsonElementFrame*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_JsonElementFrame*)item :(xs_int)start;
- (xs_nonnull XS_JsonElementFrame*) pop;
- (xs_int) push :(xs_nonnull XS_JsonElementFrame*)item;
- (xs_nonnull XS_JsonElementStack*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_JsonElementFrame*)item;
+ (xs_nonnull XS_JsonElementStack*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_JsonElementFrame*) shift;
- (xs_nonnull XS_JsonElementStack*) slice :(xs_int)start;
- (xs_nonnull XS_JsonElementStack*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_JsonElementStack*) sort;
- (xs_int) unshift :(xs_nonnull XS_JsonElementFrame*)item;
@end
#endif
#endif

#ifndef imported_XS_JsonObject_EntryList_public
#define imported_XS_JsonObject_EntryList_public
@interface XS_JsonObject_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_JsonObject_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_JsonObject_EntryList*) add :(xs_nonnull XS_JsonObject_Entry*)item;
- (xs_nonnull XS_JsonObject_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_JsonObject_Entry*)item;
@end
#endif

#ifdef import_XS_JsonTickString_internal
#ifndef imported_XS_JsonTickString_internal
#define imported_XS_JsonTickString_public
/* internal */
@interface XS_JsonTickString : XS_JsonString
{
    @private NSString* xs___nonnull  tick;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_JsonTickString*) ofTick :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSString*) value;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif
#endif

#ifdef import_XS_JsonTickString_private
#ifndef imported_XS_JsonTickString_private
#define imported_XS_JsonTickString_private
@interface XS_JsonTickString (private)
+ (xs_nonnull XS_JsonTickString*) new;
+ (xs_nonnull XS_JsonTickString*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifdef import_XS_JsonTickString_internal
#ifndef imported_XS_JsonTickString_internal
#define imported_XS_JsonTickString_internal
@interface XS_JsonTickString (internal)
- (xs_boolean) isTick;
- (xs_nonnull NSString*) unquoted;
@property (nonatomic, readonly) xs_boolean isTick;
@end
#endif
#endif

#ifndef imported_XS_JsonException_public
#define imported_XS_JsonException_public
@interface XS_JsonException : XS_DataFormatException
{
}
+ (xs_nonnull XS_JsonException*) new;
- (void) _init;
+ (xs_nonnull XS_JsonException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_JsonException_private
#ifndef imported_XS_JsonException_private
#define imported_XS_JsonException_private
@interface XS_JsonException (private)
+ (xs_nonnull XS_JsonException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
