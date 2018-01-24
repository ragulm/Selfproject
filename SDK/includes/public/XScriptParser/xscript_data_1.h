#ifndef XSCRIPT_DATA_1_H
#define XSCRIPT_DATA_1_H

@class XS_Annotation;
@class XS_AnnotationMap_Entry;
@class XS_AnnotationTerm;
@class XS_AnnotationTermMap_Entry;
@class XS_AnyMap_Entry;
@class XS_Any_asNullable_xscript_data_ComplexValue_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_DataValue_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_DayTimeDuration_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_EntityValue_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_EnumValue_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_GlobalDateTime_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_GuidValue_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_LocalDateTime_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_LocalDate_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_LocalTime_in_xscript_data; /* internal */
@class XS_Any_asNullable_xscript_data_YearMonthDuration_in_xscript_data; /* internal */
@class XS_Any_as_xscript_core_UntypedMap_in_xscript_data; /* internal */
@class XS_Any_as_xscript_core_UntypedSet_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_AnnotationMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_AnnotationTermMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_AnnotationTerm_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_Annotation_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_AnyMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_BinaryValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_BooleanValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ByteValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ChangedLink_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_CharValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ComplexTypeMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ComplexType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ComplexValueList_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ComplexValueMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ComplexValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_CurveCoordinates_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_CustomPath_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataMethodMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataMethod_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataMetricMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataMetric_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataSchemaMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataSchema_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataTypeMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataValueList_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataValueMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DataValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DayTimeDuration_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DecimalValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_DoubleValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityContainerMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityContainer_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntitySetMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntitySet_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityTypeMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityValueList_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityValueMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EntityValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EnumTypeMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EnumType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EnumValueMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_EnumValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ErrorResponse_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_FloatValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyCollection_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyLineString_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyPoint_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyPolygon_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeographyValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryCollection_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryLineString_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryPoint_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryPolygon_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GeometryValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GlobalDateTime_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_GuidValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_IntValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_IntegerValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_LocalDateTime_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_LocalDate_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_LocalTime_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_LongValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_MultiPointCoordinates_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ObjectMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_Parameter_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PathAnnotationsMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PathAnnotations_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PointCoordinates_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PolygonCoordinates_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PropertyInfoMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_PropertyInfo_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_ShortValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_SimpleTypeMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_SimpleType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_StreamLink_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_StringMap_Entry_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_StringValue_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_StructureType_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_UnsignedByte_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_UnsignedShort_in_xscript_data; /* internal */
@class XS_Any_as_xscript_data_YearMonthDuration_in_xscript_data; /* internal */
@class XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_data; /* internal */
@class XS_Any_isNullable_xscript_data_DataValue_in_xscript_data; /* internal */
@class XS_Any_isNullable_xscript_data_EntityValue_in_xscript_data; /* internal */
@class XS_ApplyDefault_undefined_EntitySet_in_xscript_data; /* internal */
@class XS_ArrayFunction; /* internal */
@class XS_ArrayProperty; /* internal */
@class XS_BasicTypes; /* internal */
@class XS_ChangedLink;
@class XS_ComplexTypeMap_Entry;
@class XS_ComplexValueMap_Entry;
@class XS_CustomPath;
@class XS_DataFormat;
@class XS_DataMethod;
@class XS_DataMethodCall;
@class XS_DataMethodMap_Entry;
@class XS_DataMethodMetrics;
@class XS_DataMetric;
@class XS_DataMetricMap_Entry;
@class XS_DataSchema;
@class XS_DataSchemaMap_Entry;
@class XS_DataType;
@class XS_DataTypeMap_Entry;
@class XS_DataValue;
@class XS_DataValueMap_Entry;
@class XS_DataVersion;
@class XS_DateNumber; /* internal */
@class XS_DateTimeFormat; /* internal */
@class XS_DateTimeParser; /* internal */
@class XS_DayOfWeek;
@class XS_DeltaStream;
@class XS_EntityContainer;
@class XS_EntityContainerMap_Entry;
@class XS_EntitySet;
@class XS_EntitySetMap_Entry;
@class XS_EntitySetMetrics;
@class XS_EntityStream;
@class XS_EntityTypeMap_Entry;
@class XS_EntityValueMap_Entry;
@class XS_EnumTypeMap_Entry;
@class XS_EnumValueMap_Entry;
@class XS_ErrorResponse;
@class XS_LoginCredentials;
@class XS_MapBase;
@class XS_Map_invert_StringMap_StringMap_in_xscript_data; /* internal */
@class XS_MonthOfYear;
@class XS_NumberValue;
@class XS_ObjectMap_Entry;
@class XS_Parameter;
@class XS_PathAnnotations;
@class XS_PathAnnotationsMap_Entry;
@class XS_PropertyInfoMap_Entry;
@class XS_RequestOptions;
@class XS_SetBase;
@class XS_Share_withNullable_ComplexValueList_in_xscript_data; /* internal */
@class XS_Share_withNullable_DataValueList_in_xscript_data; /* internal */
@class XS_Share_withNullable_EntityValueList_in_xscript_data; /* internal */
@class XS_SimpleTypeMap_Entry;
@class XS_StringMap_Entry;
@class XS_SystemFlags; /* internal */
@class XS_SystemKey; /* internal */
@class XS_TimeNumber; /* internal */
@class XS_TypeFacets;
@class XS_AnnotationList_SortByName; /* internal */
@class XS_AnnotationMap;
@class XS_AnnotationTermMap;
@class XS_AnyMap;
@class XS_AnySet;
@class XS_BinaryValue;
@class XS_BooleanValue;
@class XS_ByteValue;
@class XS_CharValue;
@class XS_ComplexTypeList_SortByName; /* internal */
@class XS_ComplexTypeMap;
@class XS_ComplexValueMap;
@class XS_ComplexValueSet;
@class XS_DataComparer;
@class XS_DataEquality;
@class XS_DataException;
@class XS_DataMethodList_SortByName; /* internal */
@class XS_DataMethodMap;
@class XS_DataMetricMap;
@class XS_DataPath;
@class XS_DataSchemaMap;
@class XS_DataTypeList_SortByName; /* internal */
@class XS_DataTypeMap;
@class XS_DataValueMap;
@class XS_DataValueSet;
@class XS_DayTimeDuration;
@class XS_DecimalValue;
@class XS_DoubleValue;
@class XS_EntityContainerMap;
@class XS_EntitySetList_SortByName; /* internal */
@class XS_EntitySetMap;
@class XS_EntityTypeList_SortByName; /* internal */
@class XS_EntityTypeMap;
@class XS_EntityValueMap;
@class XS_EntityValueSet;
@class XS_EnumType;
@class XS_EnumTypeList_SortByName; /* internal */
@class XS_EnumTypeMap;
@class XS_EnumValue;
@class XS_EnumValueMap;
@class XS_FloatValue;
@class XS_GeographyValue;
@class XS_GeometryValue;
@class XS_GlobalDateTime;
@class XS_GuidValue;
@class XS_IntValue;
@class XS_IntegerValue;
@class XS_ListBase;
@class XS_LocalDate;
@class XS_LocalDateTime;
@class XS_LocalTime;
@class XS_LongValue;
@class XS_ObjectMap;
@class XS_ObjectSet;
@class XS_PathAnnotationsMap;
@class XS_PropertyInfo;
@class XS_PropertyInfoMap;
@class XS_ShortValue;
@class XS_SimpleType;
@class XS_SimpleTypeList_SortByName; /* internal */
@class XS_SimpleTypeMap;
@class XS_StreamBase;
@class XS_StreamLink;
@class XS_StringMap;
@class XS_StringSet;
@class XS_StringValue;
@class XS_StructureBase;
@class XS_StructureType;
@class XS_UnknownValue; /* internal */
@class XS_UnsignedByte;
@class XS_UnsignedShort;
@class XS_YearMonthDuration;
@class XS_AnnotationList;
@class XS_AnnotationMap_EntryList;
@class XS_AnnotationTermList;
@class XS_AnnotationTermMap_EntryList;
@class XS_AnyList;
@class XS_AnyMap_EntryList;
@class XS_BinaryList;
@class XS_BooleanList;
@class XS_ByteList;
@class XS_ByteStream;
@class XS_ChangedLinkList;
@class XS_CharList;
@class XS_CharStream;
@class XS_ComplexListBase;
@class XS_ComplexType;
@class XS_ComplexTypeList;
@class XS_ComplexTypeMap_EntryList;
@class XS_ComplexValue;
@class XS_ComplexValueListWithNulls;
@class XS_ComplexValueMap_EntryList;
@class XS_CurveCoordinates;
@class XS_CustomPathList;
@class XS_DataFormatException;
@class XS_DataMethodList;
@class XS_DataMethodMap_EntryList;
@class XS_DataMetricList;
@class XS_DataMetricMap_EntryList;
@class XS_DataNetworkException;
@class XS_DataQueryException;
@class XS_DataSchemaException;
@class XS_DataSchemaList;
@class XS_DataSchemaMap_EntryList;
@class XS_DataServiceException;
@class XS_DataStorageException;
@class XS_DataStreamException;
@class XS_DataTypeList;
@class XS_DataTypeMap_EntryList;
@class XS_DataValueList;
@class XS_DataValueListWithNulls;
@class XS_DataValueMap_EntryList;
@class XS_DayTimeDurationList;
@class XS_DecimalList;
@class XS_DoubleList;
@class XS_EntityContainerList;
@class XS_EntityContainerMap_EntryList;
@class XS_EntityListBase;
@class XS_EntitySetList;
@class XS_EntitySetMap_EntryList;
@class XS_EntityType;
@class XS_EntityTypeList;
@class XS_EntityTypeMap_EntryList;
@class XS_EntityValue;
@class XS_EntityValueMap_EntryList;
@class XS_EnumTypeList;
@class XS_EnumTypeMap_EntryList;
@class XS_EnumValueList;
@class XS_EnumValueMap_EntryList;
@class XS_ErrorResponseList;
@class XS_FloatList;
@class XS_GeographyCollection;
@class XS_GeographyLineString;
@class XS_GeographyMultiLineString;
@class XS_GeographyMultiPoint;
@class XS_GeographyMultiPolygon;
@class XS_GeographyPoint;
@class XS_GeographyPolygon;
@class XS_GeographyValueList;
@class XS_GeometryCollection;
@class XS_GeometryLineString;
@class XS_GeometryMultiLineString;
@class XS_GeometryMultiPoint;
@class XS_GeometryMultiPolygon;
@class XS_GeometryPoint;
@class XS_GeometryPolygon;
@class XS_GeometryValueList;
@class XS_GlobalDateTimeList;
@class XS_GuidValueList;
@class XS_IntList;
@class XS_IntegerList;
@class XS_LocalDateList;
@class XS_LocalDateTimeList;
@class XS_LocalTimeList;
@class XS_LongList;
@class XS_MultiCurveCoordinates;
@class XS_MultiPointCoordinates;
@class XS_MultiPolygonCoordinates;
@class XS_ObjectList;
@class XS_ObjectMap_EntryList;
@class XS_ParameterList;
@class XS_PathAnnotationsList;
@class XS_PathAnnotationsMap_EntryList;
@class XS_PointCoordinates;
@class XS_PolygonCoordinates;
@class XS_PropertyInfoList;
@class XS_PropertyInfoMap_EntryList;
@class XS_ShortList;
@class XS_SimpleTypeList;
@class XS_SimpleTypeMap_EntryList;
@class XS_StringList;
@class XS_StringMap_EntryList;
@class XS_UnsignedByteList;
@class XS_UnsignedShortList;
@class XS_YearMonthDurationList;
@class XS_ByteStreamFromBinary; /* internal */
@class XS_ByteStreamToBuffer;
@class XS_CharStreamFromBytes; /* internal */
@class XS_CharStreamFromString; /* internal */
@class XS_CharStreamToBuffer;
@class XS_ComplexValueList;
@class XS_EmptyByteStream; /* internal */
@class XS_EmptyCharStream; /* internal */
@class XS_EntityValueList;
@class XS_EntityValueListWithNulls;

#ifndef imported_XS_Annotation_public
#define imported_XS_Annotation_public
@interface XS_Annotation : XS_ObjectBase
{
    @private XS_AnnotationTerm* xs___nonnull  term_;
    @private XS_DataValue* xs___nullable  value_;
    @private NSString* xs___nullable  qualifier_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_Annotation*) new;
- (void) _init;
- (xs_nullable NSString*) qualifier;
- (void) setQualifier :(xs_nullable NSString*)value;
- (void) setTerm :(xs_nonnull XS_AnnotationTerm*)value;
- (void) setValue :(xs_nullable XS_DataValue*)value;
- (xs_nonnull XS_AnnotationTerm*) term;
- (xs_nonnull NSString*) toString;
- (xs_nullable XS_DataValue*) value;
@property (xs__nullable nonatomic, readwrite) NSString* qualifier;
@property (xs__nonnull nonatomic, readwrite, strong) XS_AnnotationTerm* term;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataValue* value;
@end
#endif

#ifndef imported_XS_AnnotationMap_Entry_public
#define imported_XS_AnnotationMap_Entry_public
@interface XS_AnnotationMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_Annotation* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_Annotation*)value;
- (xs_nonnull XS_Annotation*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Annotation* value;
@end
#endif

#ifndef imported_XS_AnnotationTerm_public
#define imported_XS_AnnotationTerm_public
@interface XS_AnnotationTerm : XS_ObjectBase
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private XS_DataType* xs___nonnull  type_;
    @private XS_AnnotationTerm* xs___nullable  baseTerm_;
    @private XS_DataValue* xs___nullable  defaultValue_;
    @private XS_StringList* xs___nonnull  appliesTo_;
    @private XS_TypeFacets* xs___nullable  facets_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private xs_boolean isInferred_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationTerm*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull XS_StringList*) appliesTo;
- (xs_nullable XS_AnnotationTerm*) baseTerm;
- (xs_nullable XS_DataValue*) defaultValue;
- (xs_nullable XS_TypeFacets*) facets;
- (xs_boolean) isInferred;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nonnull NSString*) qualifiedName;
- (void) setAppliesTo :(xs_nonnull XS_StringList*)value;
- (void) setBaseTerm :(xs_nullable XS_AnnotationTerm*)value;
- (void) setDefaultValue :(xs_nullable XS_DataValue*)value;
- (void) setFacets :(xs_nullable XS_TypeFacets*)value;
- (void) setIsInferred :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setType :(xs_nonnull XS_DataType*)value;
- (xs_nonnull XS_DataType*) type;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite, strong) XS_StringList* appliesTo;
@property (xs__nullable nonatomic, readwrite, strong) XS_AnnotationTerm* baseTerm;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataValue* defaultValue;
@property (xs__nullable nonatomic, readwrite, strong) XS_TypeFacets* facets;
@property (nonatomic, readwrite) xs_boolean isInferred;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataType* type;
@end
#endif

#ifndef imported_XS_AnnotationTermMap_Entry_public
#define imported_XS_AnnotationTermMap_Entry_public
@interface XS_AnnotationTermMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_AnnotationTerm* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationTermMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_AnnotationTerm*)value;
- (xs_nonnull XS_AnnotationTerm*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_AnnotationTerm* value;
@end
#endif

#ifndef imported_XS_AnyMap_Entry_public
#define imported_XS_AnyMap_Entry_public
@interface XS_AnyMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private NSObject* xs___nullable  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnyMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nullable NSObject*)value;
- (xs_nullable NSObject*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nullable nonatomic, readwrite, strong) NSObject* value;
@end
#endif

#ifdef import_XS_Any_asNullable_xscript_data_ComplexValue_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_ComplexValue_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_ComplexValue_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_ComplexValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_ComplexValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_DataValue_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_DataValue_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_DataValue_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_DataValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_DataValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_DayTimeDuration_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_DayTimeDuration_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_DayTimeDuration_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_DayTimeDuration_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_DayTimeDuration*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_EntityValue_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_EntityValue_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_EntityValue_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_EntityValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_EntityValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_EnumValue_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_EnumValue_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_EnumValue_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_EnumValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_EnumValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_GlobalDateTime_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_GlobalDateTime_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_GlobalDateTime_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_GlobalDateTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_GlobalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_GuidValue_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_GuidValue_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_GuidValue_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_GuidValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_GuidValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_LocalDateTime_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_LocalDateTime_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_LocalDateTime_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_LocalDateTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_LocalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_LocalDate_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_LocalDate_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_LocalDate_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_LocalDate_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_LocalDate*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_LocalTime_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_LocalTime_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_LocalTime_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_LocalTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_LocalTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_asNullable_xscript_data_YearMonthDuration_in_xscript_data_internal
#ifndef imported_XS_Any_asNullable_xscript_data_YearMonthDuration_in_xscript_data_internal
#define imported_XS_Any_asNullable_xscript_data_YearMonthDuration_in_xscript_data_public
/* internal */
@interface XS_Any_asNullable_xscript_data_YearMonthDuration_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nullable XS_YearMonthDuration*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_core_UntypedMap_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_core_UntypedMap_in_xscript_data_internal
#define imported_XS_Any_as_xscript_core_UntypedMap_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_core_UntypedMap_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_UntypedMap*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_core_UntypedSet_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_core_UntypedSet_in_xscript_data_internal
#define imported_XS_Any_as_xscript_core_UntypedSet_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_core_UntypedSet_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_UntypedSet*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_AnnotationMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_AnnotationMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_AnnotationMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_AnnotationMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_AnnotationMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_AnnotationTermMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_AnnotationTermMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_AnnotationTermMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_AnnotationTermMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_AnnotationTermMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_AnnotationTerm_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_AnnotationTerm_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_AnnotationTerm_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_AnnotationTerm_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_AnnotationTerm*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_Annotation_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_Annotation_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_Annotation_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_Annotation_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_Annotation*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_AnyMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_AnyMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_AnyMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_AnyMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_AnyMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_BinaryValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_BinaryValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_BinaryValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_BinaryValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_BinaryValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_BooleanValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_BooleanValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_BooleanValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_BooleanValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_BooleanValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ByteValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ByteValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ByteValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ByteValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ByteValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ChangedLink_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ChangedLink_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ChangedLink_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ChangedLink_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ChangedLink*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_CharValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_CharValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_CharValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_CharValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_CharValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexTypeMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexTypeMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ComplexTypeMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexTypeMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexTypeMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ComplexType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexValueList_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexValueList_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ComplexValueList_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexValueMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexValueMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ComplexValueMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexValueMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValueMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ComplexValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_CurveCoordinates_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_CurveCoordinates_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_CurveCoordinates_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_CurveCoordinates_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_CurveCoordinates*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_CustomPath_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_CustomPath_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_CustomPath_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_CustomPath_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_CustomPath*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataMethodMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataMethodMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataMethodMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataMethodMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataMethodMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataMethod_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataMethod_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataMethod_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataMethod_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataMethod*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataMetricMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataMetricMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataMetricMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataMetricMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataMetricMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataMetric_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataMetric_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataMetric_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataMetric_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataMetric*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataSchemaMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataSchemaMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataSchemaMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataSchemaMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataSchemaMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataSchema_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataSchema_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataSchema_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataSchema_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataSchema*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataTypeMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataTypeMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataTypeMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataTypeMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataTypeMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataValueList_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataValueList_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataValueList_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataValueMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataValueMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataValueMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataValueMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataValueMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DataValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DataValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DataValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DayTimeDuration_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DayTimeDuration_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DayTimeDuration_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DayTimeDuration_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DayTimeDuration*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DecimalValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DecimalValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DecimalValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DecimalValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DecimalValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DoubleValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_DoubleValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_DoubleValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_DoubleValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DoubleValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityContainerMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityContainerMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityContainerMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityContainerMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityContainerMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityContainer_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityContainer_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityContainer_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityContainer_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityContainer*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntitySetMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntitySetMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntitySetMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntitySetMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntitySetMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntitySet_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntitySet_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntitySet_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntitySet_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntitySet*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityTypeMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityTypeMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityTypeMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityTypeMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityTypeMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityValueList_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityValueList_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityValueList_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValueList*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityValueMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityValueMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityValueMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityValueMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValueMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EntityValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EntityValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EntityValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumTypeMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EnumTypeMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EnumTypeMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EnumTypeMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumTypeMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EnumType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EnumType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EnumType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumValueMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EnumValueMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EnumValueMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EnumValueMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumValueMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_EnumValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_EnumValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_EnumValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ErrorResponse_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ErrorResponse_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ErrorResponse_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ErrorResponse_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ErrorResponse*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_FloatValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_FloatValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_FloatValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_FloatValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_FloatValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyCollection_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyCollection_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyCollection_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyCollection_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyCollection*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyLineString_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyLineString_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyLineString_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyLineString_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiLineString_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiPoint_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyMultiPolygon_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyMultiPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyPoint_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyPoint_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyPoint_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyPoint_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyPolygon_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyPolygon_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeographyValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeographyValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeographyValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeographyValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeographyValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryCollection_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryCollection_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryCollection_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryCollection_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryCollection*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryLineString_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryLineString_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryLineString_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryLineString_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiLineString_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiLineString*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiPoint_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryMultiPolygon_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryMultiPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryPoint_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryPoint_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryPoint_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryPoint_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryPoint*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryPolygon_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryPolygon_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryPolygon*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GeometryValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GeometryValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GeometryValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GeometryValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GeometryValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GlobalDateTime_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GlobalDateTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GlobalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_GuidValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_GuidValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_GuidValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_GuidValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_GuidValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_IntValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_IntValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_IntValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_IntValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_IntValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_IntegerValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_IntegerValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_IntegerValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_IntegerValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_IntegerValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_LocalDateTime_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_LocalDateTime_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_LocalDateTime_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_LocalDateTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_LocalDateTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_LocalDate_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_LocalDate_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_LocalDate_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_LocalDate_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_LocalDate*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_LocalTime_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_LocalTime_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_LocalTime_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_LocalTime_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_LocalTime*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_LongValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_LongValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_LongValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_LongValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_LongValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_MultiPointCoordinates_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_MultiPointCoordinates_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_MultiPointCoordinates_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_MultiPointCoordinates_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_MultiPointCoordinates*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ObjectMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ObjectMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ObjectMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ObjectMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ObjectMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_Parameter_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_Parameter_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_Parameter_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_Parameter_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_Parameter*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PathAnnotationsMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PathAnnotationsMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PathAnnotationsMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PathAnnotationsMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PathAnnotationsMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PathAnnotations_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PathAnnotations_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PathAnnotations_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PathAnnotations_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PathAnnotations*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PointCoordinates_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PointCoordinates_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PointCoordinates_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PointCoordinates_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PointCoordinates*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PolygonCoordinates_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PolygonCoordinates_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PolygonCoordinates_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PolygonCoordinates_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PolygonCoordinates*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PropertyInfoMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PropertyInfoMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PropertyInfoMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PropertyInfoMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PropertyInfoMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_PropertyInfo_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_PropertyInfo_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_PropertyInfo_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_PropertyInfo_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_PropertyInfo*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ShortValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_ShortValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_ShortValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_ShortValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ShortValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_SimpleTypeMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_SimpleTypeMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_SimpleTypeMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_SimpleTypeMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_SimpleTypeMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_SimpleType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_SimpleType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_SimpleType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_SimpleType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_SimpleType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_StreamLink_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_StreamLink_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_StreamLink_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_StreamLink_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_StreamLink*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_StringMap_Entry_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_StringMap_Entry_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_StringMap_Entry_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_StringMap_Entry_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_StringMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_StringValue_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_StringValue_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_StringValue_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_StringValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_StringValue*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_StructureType_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_StructureType_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_StructureType_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_StructureType_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_StructureType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_UnsignedByte_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_UnsignedByte_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_UnsignedByte_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_UnsignedByte_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_UnsignedByte*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_UnsignedShort_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_UnsignedShort_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_UnsignedShort_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_UnsignedShort_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_UnsignedShort*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_YearMonthDuration_in_xscript_data_internal
#ifndef imported_XS_Any_as_xscript_data_YearMonthDuration_in_xscript_data_internal
#define imported_XS_Any_as_xscript_data_YearMonthDuration_in_xscript_data_public
/* internal */
@interface XS_Any_as_xscript_data_YearMonthDuration_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_YearMonthDuration*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_data_internal
#ifndef imported_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_data_internal
#define imported_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_data_public
/* internal */
@interface XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_isNullable_xscript_data_DataValue_in_xscript_data_internal
#ifndef imported_XS_Any_isNullable_xscript_data_DataValue_in_xscript_data_internal
#define imported_XS_Any_isNullable_xscript_data_DataValue_in_xscript_data_public
/* internal */
@interface XS_Any_isNullable_xscript_data_DataValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_data_internal
#ifndef imported_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_data_internal
#define imported_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_data_public
/* internal */
@interface XS_Any_isNullable_xscript_data_EntityValue_in_xscript_data : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_ApplyDefault_undefined_EntitySet_in_xscript_data_internal
#ifndef imported_XS_ApplyDefault_undefined_EntitySet_in_xscript_data_internal
#define imported_XS_ApplyDefault_undefined_EntitySet_in_xscript_data_public
/* internal */
@interface XS_ApplyDefault_undefined_EntitySet_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntitySet*) ifNull :(xs_nullable XS_EntitySet*)value;
@end
#endif
#endif

#ifdef import_XS_ArrayFunction_internal
#ifndef imported_XS_ArrayFunction_internal
#define imported_XS_ArrayFunction_public
/* internal */
@interface XS_ArrayFunction : XS_ObjectBase
{
}
@end
#endif
#endif

#ifdef import_XS_ArrayProperty_internal
#ifndef imported_XS_ArrayProperty_internal
#define imported_XS_ArrayProperty_public
/* internal */
@interface XS_ArrayProperty : XS_ObjectBase
{
}
@end
#endif
#endif

#ifdef import_XS_BasicTypes_internal
#ifndef imported_XS_BasicTypes_internal
#define imported_XS_BasicTypes_public
/* internal */
@interface XS_BasicTypes : XS_ObjectBase
{
    @private XS_DataTypeList* xs___nonnull  my_list_;
    @private XS_DataTypeMap* xs___nonnull  my_map_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_nullable XS_DataType*) byCode :(xs_int)code;
- (xs_nullable XS_DataType*) byName :(xs_nonnull NSString*)name;
+ (xs_nonnull XS_BasicTypes*) myInit;
+ (xs_nonnull XS_BasicTypes*) singleton;
@end
#endif
#endif

#ifdef import_XS_BasicTypes_private
#ifndef imported_XS_BasicTypes_private
#define imported_XS_BasicTypes_private
@interface XS_BasicTypes (private)
+ (xs_nonnull XS_BasicTypes*) new;
- (xs_nonnull XS_DataTypeList*) my_list;
- (xs_nonnull XS_DataTypeMap*) my_map;
- (void) setMy_list :(xs_nonnull XS_DataTypeList*)value;
- (void) setMy_map :(xs_nonnull XS_DataTypeMap*)value;
+ (xs_nonnull XS_BasicTypes*) _new1 :(xs_nonnull XS_DataTypeList*)p1 :(xs_nonnull XS_DataTypeMap*)p2;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataTypeList* my_list;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataTypeMap* my_map;
@end
#endif
#endif

#ifndef imported_XS_ChangedLink_public
#define imported_XS_ChangedLink_public
@interface XS_ChangedLink : XS_ObjectBase
{
    @private XS_EntityValue* xs___nonnull  source_;
    @private XS_PropertyInfo* xs___nonnull  sourceProperty_;
    @private XS_EntityValue* xs___nullable  target_;
    @private xs_boolean isCreated_;
    @private xs_boolean isUpdated_;
    @private xs_boolean isDeleted_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ChangedLink*) new;
- (void) _init;
- (xs_boolean) isCreated;
- (xs_boolean) isDeleted;
- (xs_boolean) isUpdated;
- (xs_nullable XS_EntityValue*) requiredTarget;
- (void) setIsCreated :(xs_boolean)value;
- (void) setIsDeleted :(xs_boolean)value;
- (void) setIsUpdated :(xs_boolean)value;
- (void) setSource :(xs_nonnull XS_EntityValue*)value;
- (void) setSourceProperty :(xs_nonnull XS_PropertyInfo*)value;
- (void) setTarget :(xs_nullable XS_EntityValue*)value;
- (xs_nonnull XS_EntityValue*) source;
- (xs_nonnull XS_PropertyInfo*) sourceProperty;
- (xs_nullable XS_EntityValue*) target;
- (xs_nonnull NSString*) toString;
@property (nonatomic, readwrite) xs_boolean isCreated;
@property (nonatomic, readwrite) xs_boolean isDeleted;
@property (nonatomic, readwrite) xs_boolean isUpdated;
@property (xs__nullable nonatomic, readonly, strong) XS_EntityValue* requiredTarget;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityValue* source;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfo* sourceProperty;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntityValue* target;
@end
#endif

#ifndef imported_XS_ComplexTypeMap_Entry_public
#define imported_XS_ComplexTypeMap_Entry_public
@interface XS_ComplexTypeMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_ComplexType* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexTypeMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_ComplexType*)value;
- (xs_nonnull XS_ComplexType*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ComplexType* value;
@end
#endif

#ifndef imported_XS_ComplexValueMap_Entry_public
#define imported_XS_ComplexValueMap_Entry_public
@interface XS_ComplexValueMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_ComplexValue* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_ComplexValue*)value;
- (xs_nonnull XS_ComplexValue*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ComplexValue* value;
@end
#endif

#ifndef imported_XS_CustomPath_public
#define imported_XS_CustomPath_public
@interface XS_CustomPath : XS_ObjectBase
{
    @private XS_PropertyInfo* xs___nonnull  __weak myProperty_;
    @private NSString* xs___nonnull  atomElement_;
    @private NSString* xs___nullable  atomChild_;
    @private xs_boolean keepInContent_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CustomPath*) new;
- (void) _init;
- (xs_nullable NSString*) atomChild;
- (xs_nonnull NSString*) atomElement;
+ (xs_nullable XS_CustomPath*) fromTarget :(xs_nonnull NSString*)path;
- (xs_boolean) keepInContent;
- (xs_nonnull XS_PropertyInfo*) myProperty;
- (void) setAtomChild :(xs_nullable NSString*)value;
- (void) setAtomElement :(xs_nonnull NSString*)value;
- (void) setKeepInContent :(xs_boolean)value;
- (void) setMyProperty :(xs_nonnull XS_PropertyInfo*)value;
@property (xs__nullable nonatomic, readwrite) NSString* atomChild;
@property (xs__nonnull nonatomic, readwrite) NSString* atomElement;
@property (nonatomic, readwrite) xs_boolean keepInContent;
@property (nonatomic, readwrite, weak) XS_PropertyInfo* myProperty;
@end
#endif

#ifdef import_XS_CustomPath_private
#ifndef imported_XS_CustomPath_private
#define imported_XS_CustomPath_private
@interface XS_CustomPath (private)
+ (xs_nonnull XS_CustomPath*) _new1 :(xs_nonnull NSString*)p1 :(xs_nullable NSString*)p2;
+ (xs_nonnull XS_CustomPath*) _new2 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_DataFormat_public
#define imported_XS_DataFormat_public
@interface XS_DataFormat : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) getName :(xs_int)format;
+ (xs_nonnull NSString*) mediaType :(xs_int)format;
#define XS_DataFormat_ATOM 1
#define XS_DataFormat_JSON 2
#define XS_DataFormat_HTML 3
#define XS_DataFormat_TEXT 4
#define XS_DataFormat_XML 5
@end
#endif

#ifdef import_XS_DataFormat_internal
#ifndef imported_XS_DataFormat_internal
#define imported_XS_DataFormat_internal
@interface XS_DataFormat (internal)
+ (xs_nonnull XS_UndefinedException*) bad :(xs_int)format;
+ (xs_int) parseAccept :(xs_nullable NSString*)acceptHeader;
+ (xs_int) parseAccept :(xs_nullable NSString*)acceptHeader :(xs_int)defaultFormat;
+ (xs_nonnull XS_UnexpectedException*) unexpected :(xs_int)format;
@end
#endif
#endif

#ifndef imported_XS_DataMethod_public
#define imported_XS_DataMethod_public
@interface XS_DataMethod : XS_ObjectBase
{
    @private NSString* xs___nonnull  importedName_;
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private NSString* xs___nonnull  boundName_;
    @private XS_EntitySet* xs___nullable  entitySet_;
    @private NSString* xs___nullable  httpMethod_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_DataType* xs___nonnull  returnType_;
    @private XS_TypeFacets* xs___nullable  typeFacets_;
    @private XS_ParameterList* xs___nonnull  parameters_;
    @private xs_boolean isImported_;
    @private xs_boolean isFunction_;
    @private xs_boolean isAction_;
    @private xs_boolean isBound_;
    @private xs_boolean isComposable_;
    @private XS_DataMethodMetrics* xs___nonnull  metrics_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethod*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull NSString*) boundName;
- (xs_nullable XS_EntitySet*) entitySet;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_nullable NSString*) httpMethod;
- (xs_nonnull NSString*) importedName;
- (xs_boolean) isAction;
- (xs_boolean) isBound;
- (xs_boolean) isComposable;
- (xs_boolean) isFunction;
- (xs_boolean) isImported;
- (xs_boolean) isNullable;
- (xs_nonnull NSString*) localName;
- (xs_int) maxLength;
- (xs_nonnull XS_DataMethodMetrics*) metrics;
- (xs_nonnull NSString*) name;
- (xs_nonnull XS_ParameterList*) parameters;
- (xs_int) precision;
- (xs_nonnull NSString*) qualifiedName;
- (xs_nonnull XS_DataType*) returnType;
- (xs_int) scale;
- (void) setBoundName :(xs_nonnull NSString*)value;
- (void) setEntitySet :(xs_nullable XS_EntitySet*)value;
- (void) setHttpMethod :(xs_nullable NSString*)value;
- (void) setImportedName :(xs_nonnull NSString*)value;
- (void) setIsAction :(xs_boolean)value;
- (void) setIsBound :(xs_boolean)value;
- (void) setIsComposable :(xs_boolean)value;
- (void) setIsFunction :(xs_boolean)value;
- (void) setIsImported :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setParameters :(xs_nonnull XS_ParameterList*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setReturnType :(xs_nonnull XS_DataType*)value;
- (void) setTypeFacets :(xs_nullable XS_TypeFacets*)value;
- (xs_int) srid;
- (xs_nonnull NSString*) toString;
- (xs_nullable XS_TypeFacets*) typeFacets;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite) NSString* boundName;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntitySet* entitySet;
@property (xs__nullable nonatomic, readwrite) NSString* httpMethod;
@property (xs__nonnull nonatomic, readwrite) NSString* importedName;
@property (nonatomic, readwrite) xs_boolean isAction;
@property (nonatomic, readwrite) xs_boolean isBound;
@property (nonatomic, readwrite) xs_boolean isComposable;
@property (nonatomic, readwrite) xs_boolean isFunction;
@property (nonatomic, readwrite) xs_boolean isImported;
@property (nonatomic, readonly) xs_boolean isNullable;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (nonatomic, readonly) xs_int maxLength;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataMethodMetrics* metrics;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ParameterList* parameters;
@property (nonatomic, readonly) xs_int precision;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataType* returnType;
@property (nonatomic, readonly) xs_int scale;
@property (nonatomic, readonly) xs_int srid;
@property (xs__nullable nonatomic, readwrite, strong) XS_TypeFacets* typeFacets;
@end
#endif

#ifndef imported_XS_DataMethodCall_public
#define imported_XS_DataMethodCall_public
@interface XS_DataMethodCall : XS_ObjectBase
{
    @private XS_DataMethod* xs___nonnull  method_;
    @private XS_ParameterList* xs___nonnull  parameters_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodCall*) new;
- (void) _init;
+ (xs_nonnull XS_DataMethodCall*) apply :(xs_nonnull XS_DataMethod*)param_method :(xs_nonnull XS_ParameterList*)param_parameters;
- (xs_nonnull XS_DataMethod*) method;
- (xs_nonnull XS_ParameterList*) parameters;
- (void) setMethod :(xs_nonnull XS_DataMethod*)value;
- (void) setParameters :(xs_nonnull XS_ParameterList*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMethod* method;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ParameterList* parameters;
@end
#endif

#ifdef import_XS_DataMethodCall_private
#ifndef imported_XS_DataMethodCall_private
#define imported_XS_DataMethodCall_private
@interface XS_DataMethodCall (private)
+ (xs_nonnull XS_DataMethodCall*) _new1 :(xs_nonnull XS_DataMethod*)p1 :(xs_nonnull XS_ParameterList*)p2;
@end
#endif
#endif

#ifndef imported_XS_DataMethodMap_Entry_public
#define imported_XS_DataMethodMap_Entry_public
@interface XS_DataMethodMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_DataMethod* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_DataMethod*)value;
- (xs_nonnull XS_DataMethod*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMethod* value;
@end
#endif

#ifndef imported_XS_DataMethodMetrics_public
#define imported_XS_DataMethodMetrics_public
@interface XS_DataMethodMetrics : XS_ObjectBase
{
    @private XS_DataMetric* xs___nonnull  onlineExecuteQueryTime_;
    @private XS_DataMetric* xs___nonnull  onlineQueryResultBytes_;
    @private XS_DataMetric* xs___nonnull  onlineQueryResultBytes_gzip_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodMetrics*) new;
- (void) _init;
- (xs_nonnull XS_DataMetric*) onlineExecuteQueryTime;
- (xs_nonnull XS_DataMetric*) onlineQueryResultBytes;
- (xs_nonnull XS_DataMetric*) onlineQueryResultBytes_gzip;
- (void) setOnlineExecuteQueryTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineQueryResultBytes :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineQueryResultBytes_gzip :(xs_nonnull XS_DataMetric*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineExecuteQueryTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineQueryResultBytes;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineQueryResultBytes_gzip;
@end
#endif

#ifndef imported_XS_DataMetric_public
#define imported_XS_DataMetric_public
@interface XS_DataMetric : XS_ObjectBase
{
    @private NSString* xs___nonnull  my_component_;
    @private NSString* xs___nonnull  my_metric_;
    @private NSString* xs___nonnull  my_unit_;
    @private xs_int my_calls_;
    @private xs_long my_total_;
    @private xs_long my_minimum_;
    @private xs_long my_maximum_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMetric*) new;
- (void) _init;
- (void) add :(xs_long)count;
- (xs_int) calls;
- (xs_nonnull NSString*) component;
+ (xs_nonnull XS_DataMetric*) createDatabaseTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createEntityTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createIndexTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createLinkTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createMediaTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createRegistrationTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) createTableTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) deleteDatabaseTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) deleteEntityTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) deleteLinkTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) deleteRegistrationTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) downloadMediaTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) downloadPhaseTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) downloadStreamTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) executeQueryTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) fetchMetadataSize :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) fetchMetadataSize_gzip :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) fetchMetadataTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) followedNextLink :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) getInstance :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric :(xs_nonnull NSString*)param_unit;
+ (xs_nonnull XS_DataMetric*) loadMetadataTime :(xs_nonnull NSString*)param_component;
+ (void) logAll;
- (xs_long) maximum;
- (xs_nonnull NSString*) metric;
- (xs_long) minimum;
+ (xs_nonnull XS_DataMetric*) offlineQueryTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) offlineResultBytes :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) offlineResultBytes_gzip :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) offlineResultRows :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) onlineQueryTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) onlineResultBytes :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) onlineResultBytes_gzip :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) onlineResultRows :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) parseMetadataTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) queryResultBytes :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) queryResultBytes_gzip :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) queryResultRows :(xs_nonnull NSString*)param_component;
- (void) reset;
+ (void) resetAll;
- (xs_long) total;
- (xs_nonnull NSString*) unit;
+ (xs_nonnull XS_DataMetric*) updateEntityTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) updateLinkTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) updateRegistrationTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) uploadMediaTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) uploadStreamTime :(xs_nonnull NSString*)param_component;
+ (xs_nonnull XS_DataMetric*) uploadTime :(xs_nonnull NSString*)param_component;
- (void) write :(xs_nonnull XS_CharBuffer*)buffer;
+ (void) writeAll :(xs_nonnull XS_CharBuffer*)buffer;
@property (nonatomic, readonly) xs_int calls;
@property (xs__nonnull nonatomic, readonly) NSString* component;
@property (nonatomic, readonly) xs_long maximum;
@property (xs__nonnull nonatomic, readonly) NSString* metric;
@property (nonatomic, readonly) xs_long minimum;
@property (nonatomic, readonly) xs_long total;
@property (xs__nonnull nonatomic, readonly) NSString* unit;
@end
#endif

#ifdef import_XS_DataMetric_private
#ifndef imported_XS_DataMetric_private
#define imported_XS_DataMetric_private
@interface XS_DataMetric (private)
+ (xs_nonnull XS_DataMetric*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull NSString*)p3;
@end
#endif
#endif

#ifdef import_XS_DataMetric_internal
#ifndef imported_XS_DataMetric_internal
#define imported_XS_DataMetric_internal
@interface XS_DataMetric (internal)
+ (xs_nonnull XS_DataMetric*) byteInstance :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric;
+ (xs_nonnull XS_DataMetric*) getMetric :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric :(xs_nonnull NSString*)param_unit;
+ (xs_nonnull XS_DataMetric*) linkInstance :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric;
- (xs_int) my_calls;
- (xs_nonnull NSString*) my_component;
- (xs_long) my_maximum;
- (xs_nonnull NSString*) my_metric;
- (xs_long) my_minimum;
- (xs_long) my_total;
- (xs_nonnull NSString*) my_unit;
+ (xs_nonnull XS_DataMetric*) rowInstance :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric;
- (void) setMy_calls :(xs_int)value;
- (void) setMy_component :(xs_nonnull NSString*)value;
- (void) setMy_maximum :(xs_long)value;
- (void) setMy_metric :(xs_nonnull NSString*)value;
- (void) setMy_minimum :(xs_long)value;
- (void) setMy_total :(xs_long)value;
- (void) setMy_unit :(xs_nonnull NSString*)value;
+ (void) setStatsMap :(xs_nonnull XS_DataMetricMap*)value;
+ (xs_nonnull XS_DataMetricMap*) statsMap;
+ (xs_nonnull XS_DataMetric*) timeInstance :(xs_nonnull NSString*)param_component :(xs_nonnull NSString*)param_metric;
@property (nonatomic, readwrite) xs_int my_calls;
@property (xs__nonnull nonatomic, readwrite) NSString* my_component;
@property (nonatomic, readwrite) xs_long my_maximum;
@property (xs__nonnull nonatomic, readwrite) NSString* my_metric;
@property (nonatomic, readwrite) xs_long my_minimum;
@property (nonatomic, readwrite) xs_long my_total;
@property (xs__nonnull nonatomic, readwrite) NSString* my_unit;
@end
#endif
#endif

#ifndef imported_XS_DataMetricMap_Entry_public
#define imported_XS_DataMetricMap_Entry_public
@interface XS_DataMetricMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_DataMetric* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMetricMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_DataMetric*)value;
- (xs_nonnull XS_DataMetric*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* value;
@end
#endif

#ifndef imported_XS_DataSchema_public
#define imported_XS_DataSchema_public
@interface XS_DataSchema : XS_ObjectBase
{
    @private NSString* xs___nonnull  name_;
    @private NSString* xs___nullable  alias_;
    @private XS_DataMethodMap* xs___nonnull  dataMethods_;
    @private XS_SimpleTypeMap* xs___nonnull  simpleTypes_;
    @private XS_EnumTypeMap* xs___nonnull  enumTypes_;
    @private XS_ComplexTypeMap* xs___nonnull  complexTypes_;
    @private XS_EntityTypeMap* xs___nonnull  entityTypes_;
    @private XS_EntitySetMap* xs___nonnull  entitySets_;
    @private XS_EntityContainerMap* xs___nonnull  entityContainers_;
    @private XS_AnnotationTermMap* xs___nonnull  annotationTerms_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataSchema*) new;
- (void) _init;
- (xs_nullable NSString*) alias;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull XS_AnnotationTermMap*) annotationTerms;
- (xs_nonnull XS_ComplexTypeMap*) complexTypes;
- (xs_nonnull XS_DataMethodMap*) dataMethods;
- (xs_nonnull XS_EntityContainerMap*) entityContainers;
- (xs_nonnull XS_EntitySetMap*) entitySets;
- (xs_nonnull XS_EntityTypeMap*) entityTypes;
- (xs_nonnull XS_EnumTypeMap*) enumTypes;
- (xs_nonnull NSString*) name;
- (void) setAlias :(xs_nullable NSString*)value;
- (void) setName :(xs_nonnull NSString*)value;
- (xs_nonnull XS_SimpleTypeMap*) simpleTypes;
@property (xs__nullable nonatomic, readwrite) NSString* alias;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationTermMap* annotationTerms;
@property (xs__nonnull nonatomic, readonly, strong) XS_ComplexTypeMap* complexTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataMethodMap* dataMethods;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityContainerMap* entityContainers;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMap* entitySets;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityTypeMap* entityTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_EnumTypeMap* enumTypes;
@property (xs__nonnull nonatomic, readwrite) NSString* name;
@property (xs__nonnull nonatomic, readonly, strong) XS_SimpleTypeMap* simpleTypes;
@end
#endif

#ifndef imported_XS_DataSchemaMap_Entry_public
#define imported_XS_DataSchemaMap_Entry_public
@interface XS_DataSchemaMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_DataSchema* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataSchemaMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_DataSchema*)value;
- (xs_nonnull XS_DataSchema*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataSchema* value;
@end
#endif

#ifndef imported_XS_DataType_public
#define imported_XS_DataType_public
@interface XS_DataType : XS_ObjectBase
{
    @private xs_int my_code_;
    @private NSString* xs___nonnull  my_name_;
    @private XS_DataType* xs___nullable  my_item_;
    @private XS_DataType* xs___nullable  my_base_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataType*) new;
- (void) _init;
- (xs_nonnull XS_DataType*) baseType;
- (xs_int) code;
+ (xs_nonnull XS_DataType*) forCode :(xs_int)param_code;
+ (xs_nonnull XS_DataType*) forName :(xs_nonnull NSString*)param_name;
- (xs_boolean) isBasic;
- (xs_boolean) isBasicList;
- (xs_boolean) isCalendar;
- (xs_boolean) isComplex;
- (xs_boolean) isComplexList;
- (xs_boolean) isDerived;
- (xs_boolean) isEntity;
- (xs_boolean) isEntityList;
- (xs_boolean) isEnum;
- (xs_boolean) isGeography;
- (xs_boolean) isGeometry;
- (xs_boolean) isGuid;
- (xs_boolean) isList;
- (xs_boolean) isNumber;
- (xs_boolean) isPath;
- (xs_boolean) isStream;
- (xs_boolean) isUnsigned;
- (xs_nonnull XS_DataType*) itemType;
+ (xs_nonnull XS_DataType*) listOf :(xs_nonnull XS_DataType*)item;
- (xs_nonnull NSString*) name;
- (xs_nonnull NSString*) toString;
+ (xs_nonnull XS_DataType*) unknown;
#define XS_DataType_UNKNOWN 0
#define XS_DataType_STRING 1
#define XS_DataType_BINARY 2
#define XS_DataType_BOOLEAN 3
#define XS_DataType_CHAR 4
#define XS_DataType_BYTE 5
#define XS_DataType_SHORT 6
#define XS_DataType_INT 7
#define XS_DataType_LONG 8
#define XS_DataType_INTEGER 9
#define XS_DataType_DECIMAL 10
#define XS_DataType_FLOAT 11
#define XS_DataType_DOUBLE 12
#define XS_DataType_UNSIGNED_BYTE 13
#define XS_DataType_UNSIGNED_SHORT 14
#define XS_DataType_UNSIGNED_INT 15
#define XS_DataType_UNSIGNED_LONG 16
#define XS_DataType_ENUM_VALUE 17
#define XS_DataType_GUID_VALUE 18
#define XS_DataType_BYTE_STREAM 19
#define XS_DataType_CHAR_STREAM 20
#define XS_DataType_STREAM_LINK 21
#define XS_DataType_LOCAL_DATE 22
#define XS_DataType_LOCAL_TIME 23
#define XS_DataType_LOCAL_DATE_TIME 24
#define XS_DataType_GLOBAL_DATE_TIME 25
#define XS_DataType_DAY_TIME_DURATION 26
#define XS_DataType_YEAR_MONTH_DURATION 27
#define XS_DataType_GEOGRAPHY_VALUE 31
#define XS_DataType_GEOGRAPHY_POINT 32
#define XS_DataType_GEOGRAPHY_MULTI_POINT 33
#define XS_DataType_GEOGRAPHY_LINE_STRING 34
#define XS_DataType_GEOGRAPHY_MULTI_LINE_STRING 35
#define XS_DataType_GEOGRAPHY_POLYGON 36
#define XS_DataType_GEOGRAPHY_MULTI_POLYGON 37
#define XS_DataType_GEOGRAPHY_COLLECTION 38
#define XS_DataType_GEOMETRY_VALUE 41
#define XS_DataType_GEOMETRY_POINT 42
#define XS_DataType_GEOMETRY_MULTI_POINT 43
#define XS_DataType_GEOMETRY_LINE_STRING 44
#define XS_DataType_GEOMETRY_MULTI_LINE_STRING 45
#define XS_DataType_GEOMETRY_POLYGON 46
#define XS_DataType_GEOMETRY_MULTI_POLYGON 47
#define XS_DataType_GEOMETRY_COLLECTION 48
#define XS_DataType_EDM_PRIMITIVE 49
#define XS_DataType_OBJECT 50
#define XS_DataType_COMPLEX_VALUE 51
#define XS_DataType_ENTITY_VALUE 52
#define XS_DataType_LIST 60
#define XS_DataType_STRING_LIST 61
#define XS_DataType_BINARY_LIST 62
#define XS_DataType_BOOLEAN_LIST 63
#define XS_DataType_CHAR_LIST 64
#define XS_DataType_BYTE_LIST 65
#define XS_DataType_SHORT_LIST 66
#define XS_DataType_INT_LIST 67
#define XS_DataType_LONG_LIST 68
#define XS_DataType_INTEGER_LIST 69
#define XS_DataType_DECIMAL_LIST 70
#define XS_DataType_FLOAT_LIST 71
#define XS_DataType_DOUBLE_LIST 72
#define XS_DataType_OBJECT_LIST 73
#define XS_DataType_COMPLEX_VALUE_LIST 74
#define XS_DataType_ENTITY_VALUE_LIST 75
#define XS_DataType_DATA_VALUE_LIST 76
#define XS_DataType_PATH 80
#define XS_DataType_PATH_EXPRESSION 81
#define XS_DataType_ANNOTATION_PATH 82
#define XS_DataType_STRUCTURAL_PATH 83
#define XS_DataType_NAVIGATION_PATH 84
#define XS_DataType_TARGET_PATH 85
#define XS_DataType_DYNAMIC_PATH 86
#define XS_DataType_QUERY_FILTER 91
#define XS_DataType_QUERY_FUNCTION_CALL 92
#define XS_DataType_QUERY_OPERATOR_CALL 93
#define XS_DataType_QUERY_SELECT_ITEM 94
#define XS_DataType_QUERY_EXPAND_ITEM 95
#define XS_DataType_QUERY_SORT_ITEM 96
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* baseType;
@property (nonatomic, readonly) xs_int code;
@property (nonatomic, readonly) xs_boolean isBasic;
@property (nonatomic, readonly) xs_boolean isBasicList;
@property (nonatomic, readonly) xs_boolean isCalendar;
@property (nonatomic, readonly) xs_boolean isComplex;
@property (nonatomic, readonly) xs_boolean isComplexList;
@property (nonatomic, readonly) xs_boolean isDerived;
@property (nonatomic, readonly) xs_boolean isEntity;
@property (nonatomic, readonly) xs_boolean isEntityList;
@property (nonatomic, readonly) xs_boolean isEnum;
@property (nonatomic, readonly) xs_boolean isGeography;
@property (nonatomic, readonly) xs_boolean isGeometry;
@property (nonatomic, readonly) xs_boolean isGuid;
@property (nonatomic, readonly) xs_boolean isList;
@property (nonatomic, readonly) xs_boolean isNumber;
@property (nonatomic, readonly) xs_boolean isPath;
@property (nonatomic, readonly) xs_boolean isStream;
@property (nonatomic, readonly) xs_boolean isUnsigned;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* itemType;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@end
#endif

#ifdef import_XS_DataType_private
#ifndef imported_XS_DataType_private
#define imported_XS_DataType_private
@interface XS_DataType (private)
+ (xs_nonnull XS_DataType*) _new1 :(xs_nonnull NSString*)p1 :(xs_int)p2;
+ (xs_nonnull XS_DataType*) _new2 :(xs_nonnull NSString*)p1 :(xs_int)p2 :(xs_nullable XS_DataType*)p3;
@end
#endif
#endif

#ifdef import_XS_DataType_internal
#ifndef imported_XS_DataType_internal
#define imported_XS_DataType_internal
@interface XS_DataType (internal)
+ (xs_nonnull XS_DataType*) getBasic :(xs_int)param_code :(xs_nonnull NSString*)param_name;
+ (xs_nonnull XS_DataType*) getList :(xs_int)param_code :(xs_nonnull XS_DataType*)item;
- (xs_nullable XS_DataType*) my_base;
- (xs_int) my_code;
- (xs_nullable XS_DataType*) my_item;
- (xs_nonnull NSString*) my_name;
- (void) setMy_base :(xs_nullable XS_DataType*)value;
- (void) setMy_code :(xs_int)value;
- (void) setMy_item :(xs_nullable XS_DataType*)value;
- (void) setMy_name :(xs_nonnull NSString*)value;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataType* my_base;
@property (nonatomic, readwrite) xs_int my_code;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataType* my_item;
@property (xs__nonnull nonatomic, readwrite) NSString* my_name;
@end
#endif
#endif

#ifndef imported_XS_DataTypeMap_Entry_public
#define imported_XS_DataTypeMap_Entry_public
@interface XS_DataTypeMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_DataType* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataTypeMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_DataType*)value;
- (xs_nonnull XS_DataType*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataType* value;
@end
#endif

#ifndef imported_XS_DataValue_public
#define imported_XS_DataValue_public
@interface XS_DataValue : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValue*) new;
- (void) _init;
+ (xs_nullable XS_DataValue*) cloneMutable :(xs_nullable XS_DataValue*)value;
- (xs_nonnull XS_DataType*) dataType;
- (xs_boolean) equals :(xs_nullable NSObject*)value;
- (xs_int) hashCode;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifdef import_XS_DataValue_internal
#ifndef imported_XS_DataValue_internal
#define imported_XS_DataValue_internal
@interface XS_DataValue (internal)
+ (xs_nullable XS_DataValue*) fromAny :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifndef imported_XS_DataValueMap_Entry_public
#define imported_XS_DataValueMap_Entry_public
@interface XS_DataValueMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_DataValue* xs___nullable  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nullable XS_DataValue*)value;
- (xs_nullable XS_DataValue*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataValue* value;
@end
#endif

#ifndef imported_XS_DataVersion_public
#define imported_XS_DataVersion_public
@interface XS_DataVersion : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) format :(xs_int)version;
+ (xs_int) parse :(xs_nonnull NSString*)version;
#define XS_DataVersion_ODATA_V2 200
#define XS_DataVersion_ODATA_V3 300
#define XS_DataVersion_ODATA_V4 400
@end
#endif

#ifdef import_XS_DateNumber_internal
#ifndef imported_XS_DateNumber_internal
#define imported_XS_DateNumber_public
/* internal */
@interface XS_DateNumber : XS_ObjectBase
{
}
+ (xs_int) daysInMonth :(xs_int)year :(xs_int)month;
+ (xs_long) fromFields :(xs_int)year :(xs_int)month :(xs_int)day;
+ (xs_nonnull XS_LocalDate*) toLocalDate :(xs_long)g;
@end
#endif
#endif

#ifdef import_XS_DateTimeFormat_internal
#ifndef imported_XS_DateTimeFormat_internal
#define imported_XS_DateTimeFormat_public
/* internal */
@interface XS_DateTimeFormat : XS_ObjectBase
{
}
+ (void) append2 :(xs_nonnull XS_CharBuffer*)b :(xs_int)x;
+ (void) append3 :(xs_nonnull XS_CharBuffer*)b :(xs_int)x;
+ (void) append4 :(xs_nonnull XS_CharBuffer*)b :(xs_int)y;
+ (void) dateAppend :(xs_nonnull XS_CharBuffer*)b :(xs_int)y :(xs_int)m :(xs_int)d;
+ (xs_char) digit :(xs_int)n;
+ (void) nanoAppend :(xs_nonnull XS_CharBuffer*)b :(xs_int)n;
+ (xs_int) nanoLength :(xs_int)n;
+ (void) timeAppend :(xs_nonnull XS_CharBuffer*)b :(xs_int)h :(xs_int)m :(xs_int)s :(xs_int)n;
+ (void) zoneAppend :(xs_nonnull XS_CharBuffer*)b :(xs_int)z;
+ (xs_int) zoneLength :(xs_int)z;
@end
#endif
#endif

#ifdef import_XS_DateTimeParser_internal
#ifndef imported_XS_DateTimeParser_internal
#define imported_XS_DateTimeParser_public
/* internal */
@interface XS_DateTimeParser : XS_ObjectBase
{
    @private NSString* xs___nonnull  kind_;
    @private NSString* xs___nonnull  text_;
    @private xs_int index_;
}
- (xs_nonnull id) init;
- (void) _init;
- (void) assertDone;
- (void) assertNext :(xs_char)c;
- (void) badValue;
+ (xs_nonnull XS_DateTimeParser*) getInstance :(xs_nonnull NSString*)param_kind :(xs_nonnull NSString*)param_text;
- (xs_boolean) hasMore;
- (xs_int) index;
- (xs_nonnull NSString*) kind;
- (xs_boolean) lookingAt :(xs_char)c;
- (xs_int) nextNumber :(xs_int)minCount :(xs_int)maxCount :(xs_int)minValue :(xs_int)maxValue;
- (xs_int) nextNumberN;
- (xs_int) nextNumberP;
- (xs_int) nextNumberX :(xs_int)minCount :(xs_int)maxCount :(xs_int)minValue :(xs_int)maxValue :(xs_boolean)getNanos;
- (void) setIndex :(xs_int)value;
- (void) setKind :(xs_nonnull NSString*)value;
- (void) setText :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) text;
@property (nonatomic, readwrite) xs_int index;
@property (xs__nonnull nonatomic, readwrite) NSString* kind;
@property (xs__nonnull nonatomic, readwrite) NSString* text;
@end
#endif
#endif

#ifdef import_XS_DateTimeParser_private
#ifndef imported_XS_DateTimeParser_private
#define imported_XS_DateTimeParser_private
@interface XS_DateTimeParser (private)
+ (xs_nonnull XS_DateTimeParser*) new;
+ (xs_nonnull XS_DateTimeParser*) _new1 :(xs_nonnull NSString*)p1 :(xs_int)p2 :(xs_nonnull NSString*)p3;
@end
#endif
#endif

#ifndef imported_XS_DayOfWeek_public
#define imported_XS_DayOfWeek_public
@interface XS_DayOfWeek : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) getName :(xs_int)day;
#define XS_DayOfWeek_MONDAY 1
#define XS_DayOfWeek_TUESDAY 2
#define XS_DayOfWeek_WEDNESDAY 3
#define XS_DayOfWeek_THURSDAY 4
#define XS_DayOfWeek_FRIDAY 5
#define XS_DayOfWeek_SATURDAY 6
#define XS_DayOfWeek_SUNDAY 7
@end
#endif

#ifndef imported_XS_DeltaStream_public
#define imported_XS_DeltaStream_public
@interface XS_DeltaStream : XS_ObjectBase
{
    @private XS_RunAction* xs___nullable  closeAction_;
    @private xs_boolean isClosed_;
    @private NSObject* xs___nullable  deltaItem_;
    @private NSString* xs___nullable  deltaLink_;
    @private NSString* xs___nullable  nextLink_;
    @private NSString* xs___nullable  readLink_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DeltaStream*) new;
- (void) _init;
- (void) abort;
- (void) close;
- (xs_nullable NSObject*) deltaItem;
- (xs_nullable NSString*) deltaLink;
- (xs_nullable NSObject*) getCurrent;
- (xs_nonnull XS_EntityValue*) getEntity;
- (xs_nonnull XS_ChangedLink*) getLink;
- (xs_boolean) hasCurrent;
- (xs_boolean) hasEntity;
- (xs_boolean) hasLink;
- (xs_boolean) isClosed;
- (xs_boolean) next;
- (xs_nullable NSString*) nextLink;
- (xs_nullable NSString*) readLink;
- (void) setDeltaItem :(xs_nullable NSObject*)value;
- (void) setDeltaLink :(xs_nullable NSString*)value;
- (void) setIsClosed :(xs_boolean)value;
- (void) setNextLink :(xs_nullable NSString*)value;
- (void) setReadLink :(xs_nullable NSString*)value;
@property (xs__nullable nonatomic, readwrite, strong) NSObject* deltaItem;
@property (xs__nullable nonatomic, readwrite) NSString* deltaLink;
@property (nonatomic, readwrite) xs_boolean isClosed;
@property (xs__nullable nonatomic, readwrite) NSString* nextLink;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@end
#endif

#ifdef import_XS_DeltaStream_internal
#ifndef imported_XS_DeltaStream_internal
#define imported_XS_DeltaStream_internal
@interface XS_DeltaStream (internal)
- (xs_nullable XS_RunAction*) closeAction;
- (void) setCloseAction :(xs_nullable XS_RunAction*)value;
@property (xs__nullable nonatomic, readwrite, strong) XS_RunAction* closeAction;
@end
#endif
#endif

#ifndef imported_XS_EntityContainer_public
#define imported_XS_EntityContainer_public
@interface XS_EntityContainer : XS_ObjectBase
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private XS_DataSchema* xs___nonnull  __weak parentSchema_;
    @private XS_EntityContainer* xs___nonnull  baseContainer_;
    @private xs_boolean isDefault_;
    @private XS_DataMethodMap* xs___nonnull  dataMethods_;
    @private XS_EntitySetMap* xs___nonnull  entitySets_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityContainer*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull XS_EntityContainer*) baseContainer;
- (xs_nonnull XS_DataMethodMap*) dataMethods;
- (xs_nonnull XS_EntitySetMap*) entitySets;
- (xs_boolean) isDefault;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nonnull XS_DataSchema*) parentSchema;
- (xs_nonnull NSString*) qualifiedName;
- (void) setBaseContainer :(xs_nonnull XS_EntityContainer*)value;
- (void) setIsDefault :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setParentSchema :(xs_nonnull XS_DataSchema*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityContainer* baseContainer;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataMethodMap* dataMethods;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMap* entitySets;
@property (nonatomic, readwrite) xs_boolean isDefault;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (nonatomic, readwrite, weak) XS_DataSchema* parentSchema;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@end
#endif

#ifndef imported_XS_EntityContainerMap_Entry_public
#define imported_XS_EntityContainerMap_Entry_public
@interface XS_EntityContainerMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EntityContainer* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityContainerMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EntityContainer*)value;
- (xs_nonnull XS_EntityContainer*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityContainer* value;
@end
#endif

#ifndef imported_XS_EntitySet_public
#define imported_XS_EntitySet_public
@interface XS_EntitySet : XS_ObjectBase
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private xs_int systemFlags_;
    @private XS_EntityType* xs___nonnull  entityType_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_EntitySetMap* xs___nonnull  pathBindings_;
    @private xs_boolean isSingleton_;
    @private XS_EntitySetMetrics* xs___nonnull  metrics_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySet*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull XS_EntityType*) entityType;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nullable XS_EntitySet*) getBinding :(xs_nonnull NSString*)param_name;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_EntitySet*) getRequiredBinding :(xs_nonnull NSString*)param_name;
- (xs_boolean) isSingleton;
- (xs_nonnull NSString*) localName;
- (xs_nonnull XS_EntitySetMetrics*) metrics;
- (xs_nonnull NSString*) name;
- (xs_nonnull XS_EntitySetMap*) pathBindings;
- (xs_nonnull NSString*) qualifiedName;
- (void) setEntityType :(xs_nonnull XS_EntityType*)value;
- (void) setIsSingleton :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setSystemFlags :(xs_int)value;
- (xs_int) systemFlags;
- (xs_nonnull NSString*) toString;
+ (xs_nonnull XS_EntitySet*) undefined;
+ (xs_nonnull XS_EntitySet*) undefinedIfNull :(xs_nullable XS_EntitySet*)entitySet;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityType* entityType;
@property (nonatomic, readwrite) xs_boolean isSingleton;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMetrics* metrics;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMap* pathBindings;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (nonatomic, readwrite) xs_int systemFlags;
@end
#endif

#ifdef import_XS_EntitySet_private
#ifndef imported_XS_EntitySet_private
#define imported_XS_EntitySet_private
@interface XS_EntitySet (private)
+ (xs_nonnull XS_EntitySet*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull XS_EntityType*)p2 :(xs_nonnull NSString*)p3;
@end
#endif
#endif

#ifndef imported_XS_EntitySetMap_Entry_public
#define imported_XS_EntitySetMap_Entry_public
@interface XS_EntitySetMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EntitySet* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EntitySet*)value;
- (xs_nonnull XS_EntitySet*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntitySet* value;
@end
#endif

#ifndef imported_XS_EntitySetMetrics_public
#define imported_XS_EntitySetMetrics_public
@interface XS_EntitySetMetrics : XS_ObjectBase
{
    @private XS_DataMetric* xs___nonnull  downloadPhaseTime_;
    @private XS_DataMetric* xs___nonnull  downloadCreateEntityTime_;
    @private XS_DataMetric* xs___nonnull  downloadUpdateEntityTime_;
    @private XS_DataMetric* xs___nonnull  downloadDeleteEntityTime_;
    @private XS_DataMetric* xs___nonnull  downloadOfflineQueryTime_;
    @private XS_DataMetric* xs___nonnull  downloadOfflineResultRows_;
    @private XS_DataMetric* xs___nonnull  downloadOnlineQueryTime_;
    @private XS_DataMetric* xs___nonnull  downloadOnlineResultBytes_;
    @private XS_DataMetric* xs___nonnull  downloadOnlineResultBytes_gzip_;
    @private XS_DataMetric* xs___nonnull  downloadFollowedNextCount_;
    @private XS_DataMetric* xs___nonnull  offlineExecuteQueryTime_;
    @private XS_DataMetric* xs___nonnull  offlineQueryResultRows_;
    @private XS_DataMetric* xs___nonnull  offlineCreateEntityTime_;
    @private XS_DataMetric* xs___nonnull  offlineUpdateEntityTime_;
    @private XS_DataMetric* xs___nonnull  offlineDeleteEntityTime_;
    @private XS_DataMetric* xs___nonnull  onlineQueryResultRows_;
    @private XS_DataMetric* xs___nonnull  onlineExecuteQueryTime_;
    @private XS_DataMetric* xs___nonnull  onlineCreateEntityTime_;
    @private XS_DataMetric* xs___nonnull  onlineUpdateEntityTime_;
    @private XS_DataMetric* xs___nonnull  onlineDeleteEntityTime_;
    @private XS_DataMetric* xs___nonnull  onlineCreateLinkTime_;
    @private XS_DataMetric* xs___nonnull  onlineUpdateLinkTime_;
    @private XS_DataMetric* xs___nonnull  onlineDeleteLinkTime_;
    @private XS_DataMetric* xs___nonnull  onlineQueryResultBytes_;
    @private XS_DataMetric* xs___nonnull  onlineQueryResultBytes_gzip_;
    @private XS_DataMetric* xs___nonnull  onlineHttpResponseTime_;
    @private XS_DataMetric* xs___nonnull  onlineFollowedNextCount_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetMetrics*) new;
- (void) _init;
- (xs_nonnull XS_DataMetric*) downloadCreateEntityTime;
- (xs_nonnull XS_DataMetric*) downloadDeleteEntityTime;
- (xs_nonnull XS_DataMetric*) downloadFollowedNextCount;
- (xs_nonnull XS_DataMetric*) downloadOfflineQueryTime;
- (xs_nonnull XS_DataMetric*) downloadOfflineResultRows;
- (xs_nonnull XS_DataMetric*) downloadOnlineQueryTime;
- (xs_nonnull XS_DataMetric*) downloadOnlineResultBytes;
- (xs_nonnull XS_DataMetric*) downloadOnlineResultBytes_gzip;
- (xs_nonnull XS_DataMetric*) downloadPhaseTime;
- (xs_nonnull XS_DataMetric*) downloadUpdateEntityTime;
- (xs_nonnull XS_DataMetric*) offlineCreateEntityTime;
- (xs_nonnull XS_DataMetric*) offlineDeleteEntityTime;
- (xs_nonnull XS_DataMetric*) offlineExecuteQueryTime;
- (xs_nonnull XS_DataMetric*) offlineQueryResultRows;
- (xs_nonnull XS_DataMetric*) offlineUpdateEntityTime;
- (xs_nonnull XS_DataMetric*) onlineCreateEntityTime;
- (xs_nonnull XS_DataMetric*) onlineCreateLinkTime;
- (xs_nonnull XS_DataMetric*) onlineDeleteEntityTime;
- (xs_nonnull XS_DataMetric*) onlineDeleteLinkTime;
- (xs_nonnull XS_DataMetric*) onlineExecuteQueryTime;
- (xs_nonnull XS_DataMetric*) onlineFollowedNextCount;
- (xs_nonnull XS_DataMetric*) onlineHttpResponseTime;
- (xs_nonnull XS_DataMetric*) onlineQueryResultBytes;
- (xs_nonnull XS_DataMetric*) onlineQueryResultBytes_gzip;
- (xs_nonnull XS_DataMetric*) onlineQueryResultRows;
- (xs_nonnull XS_DataMetric*) onlineUpdateEntityTime;
- (xs_nonnull XS_DataMetric*) onlineUpdateLinkTime;
- (void) setDownloadCreateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadDeleteEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadFollowedNextCount :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadOfflineQueryTime :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadOfflineResultRows :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadOnlineQueryTime :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadOnlineResultBytes :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadOnlineResultBytes_gzip :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadPhaseTime :(xs_nonnull XS_DataMetric*)value;
- (void) setDownloadUpdateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOfflineCreateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOfflineDeleteEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOfflineExecuteQueryTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOfflineQueryResultRows :(xs_nonnull XS_DataMetric*)value;
- (void) setOfflineUpdateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineCreateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineCreateLinkTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineDeleteEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineDeleteLinkTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineExecuteQueryTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineFollowedNextCount :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineHttpResponseTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineQueryResultBytes :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineQueryResultBytes_gzip :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineQueryResultRows :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineUpdateEntityTime :(xs_nonnull XS_DataMetric*)value;
- (void) setOnlineUpdateLinkTime :(xs_nonnull XS_DataMetric*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadCreateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadDeleteEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadFollowedNextCount;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadOfflineQueryTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadOfflineResultRows;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadOnlineQueryTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadOnlineResultBytes;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadOnlineResultBytes_gzip;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadPhaseTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* downloadUpdateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* offlineCreateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* offlineDeleteEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* offlineExecuteQueryTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* offlineQueryResultRows;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* offlineUpdateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineCreateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineCreateLinkTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineDeleteEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineDeleteLinkTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineExecuteQueryTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineFollowedNextCount;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineHttpResponseTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineQueryResultBytes;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineQueryResultBytes_gzip;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineQueryResultRows;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineUpdateEntityTime;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataMetric* onlineUpdateLinkTime;
@end
#endif

#ifndef imported_XS_EntityStream_public
#define imported_XS_EntityStream_public
@interface XS_EntityStream : XS_ObjectBase
{
    @private XS_DeltaStream* xs___nonnull  deltaStream_;
    @private XS_EntityValue* xs___nullable  nextEntity;
}
- (xs_nonnull id) init;
- (void) _init :(xs_nonnull XS_DeltaStream*)param_deltaStream;
- (void) abort;
- (void) close;
- (xs_nullable NSString*) deltaLink;
- (xs_boolean) hasNext;
- (xs_boolean) isClosed;
- (xs_nonnull XS_EntityValue*) next;
- (xs_nullable NSString*) nextLink;
- (xs_nullable NSString*) readLink;
@property (xs__nullable nonatomic, readonly) NSString* deltaLink;
@property (nonatomic, readonly) xs_boolean isClosed;
@property (xs__nullable nonatomic, readonly) NSString* nextLink;
@property (xs__nullable nonatomic, readonly) NSString* readLink;
@end
#endif

#ifdef import_XS_EntityStream_private
#ifndef imported_XS_EntityStream_private
#define imported_XS_EntityStream_private
@interface XS_EntityStream (private)
- (xs_nonnull XS_DeltaStream*) deltaStream;
- (void) setDeltaStream :(xs_nonnull XS_DeltaStream*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DeltaStream* deltaStream;
@end
#endif
#endif

#ifdef import_XS_EntityStream_internal
#ifndef imported_XS_EntityStream_internal
#define imported_XS_EntityStream_internal
@interface XS_EntityStream (internal)
+ (xs_nonnull XS_EntityStream*) new :(xs_nonnull XS_DeltaStream*)param_deltaStream;
@end
#endif
#endif

#ifndef imported_XS_EntityTypeMap_Entry_public
#define imported_XS_EntityTypeMap_Entry_public
@interface XS_EntityTypeMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EntityType* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityTypeMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EntityType*)value;
- (xs_nonnull XS_EntityType*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityType* value;
@end
#endif

#ifndef imported_XS_EntityValueMap_Entry_public
#define imported_XS_EntityValueMap_Entry_public
@interface XS_EntityValueMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EntityValue* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EntityValue*)value;
- (xs_nonnull XS_EntityValue*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityValue* value;
@end
#endif

#ifndef imported_XS_EnumTypeMap_Entry_public
#define imported_XS_EnumTypeMap_Entry_public
@interface XS_EnumTypeMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EnumType* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumTypeMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EnumType*)value;
- (xs_nonnull XS_EnumType*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EnumType* value;
@end
#endif

#ifndef imported_XS_EnumValueMap_Entry_public
#define imported_XS_EnumValueMap_Entry_public
@interface XS_EnumValueMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_EnumValue* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumValueMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_EnumValue*)value;
- (xs_nonnull XS_EnumValue*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EnumValue* value;
@end
#endif

#ifndef imported_XS_ErrorResponse_public
#define imported_XS_ErrorResponse_public
@interface XS_ErrorResponse : XS_ObjectBase
{
    @private NSString* xs___nonnull  code_;
    @private NSString* xs___nonnull  message_;
    @private NSString* xs___nullable  language_;
    @private NSString* xs___nullable  target_;
    @private XS_ErrorResponseList* xs___nonnull  details_;
    @private NSString* xs___nullable  innerDetails_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ErrorResponse*) new;
- (void) _init;
- (xs_nonnull NSString*) code;
- (xs_nonnull XS_ErrorResponseList*) details;
- (xs_nullable NSString*) innerDetails;
- (xs_nullable NSString*) language;
- (xs_nonnull NSString*) message;
- (void) setCode :(xs_nonnull NSString*)value;
- (void) setDetails :(xs_nonnull XS_ErrorResponseList*)value;
- (void) setInnerDetails :(xs_nullable NSString*)value;
- (void) setLanguage :(xs_nullable NSString*)value;
- (void) setMessage :(xs_nonnull NSString*)value;
- (void) setTarget :(xs_nullable NSString*)value;
- (xs_nullable NSString*) target;
@property (xs__nonnull nonatomic, readwrite) NSString* code;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ErrorResponseList* details;
@property (xs__nullable nonatomic, readwrite) NSString* innerDetails;
@property (xs__nullable nonatomic, readwrite) NSString* language;
@property (xs__nonnull nonatomic, readwrite) NSString* message;
@property (xs__nullable nonatomic, readwrite) NSString* target;
@end
#endif

#ifndef imported_XS_LoginCredentials_public
#define imported_XS_LoginCredentials_public
@interface XS_LoginCredentials : XS_ObjectBase
{
    @private NSString* xs___nonnull  username_;
    @private NSString* xs___nonnull  password_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_LoginCredentials*) new;
- (void) _init;
+ (xs_nonnull XS_LoginCredentials*) getBasic :(xs_nonnull NSString*)param_username :(xs_nonnull NSString*)param_password;
- (xs_nonnull NSString*) password;
- (void) setPassword :(xs_nonnull NSString*)value;
- (void) setUsername :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) username;
@property (xs__nonnull nonatomic, readwrite) NSString* password;
@property (xs__nonnull nonatomic, readwrite) NSString* username;
@end
#endif

#ifdef import_XS_LoginCredentials_private
#ifndef imported_XS_LoginCredentials_private
#define imported_XS_LoginCredentials_private
@interface XS_LoginCredentials (private)
+ (xs_nonnull XS_LoginCredentials*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_MapBase_public
#define imported_XS_MapBase_public
@interface XS_MapBase : XS_ObjectBase
{
    @private XS_UntypedMap* xs___nonnull  my_map_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_MapBase*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) clear;
- (xs_int) size;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_UntypedMap*) untypedMap;
@property (nonatomic, readonly) xs_int size;
@property (xs__nonnull nonatomic, readonly, strong) XS_UntypedMap* untypedMap;
@end
#endif

#ifdef import_XS_MapBase_private
#ifndef imported_XS_MapBase_private
#define imported_XS_MapBase_private
@interface XS_MapBase (private)
- (xs_nonnull XS_UntypedMap*) my_map;
- (void) setMy_map :(xs_nonnull XS_UntypedMap*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedMap* my_map;
@end
#endif
#endif

#ifdef import_XS_Map_invert_StringMap_StringMap_in_xscript_data_internal
#ifndef imported_XS_Map_invert_StringMap_StringMap_in_xscript_data_internal
#define imported_XS_Map_invert_StringMap_StringMap_in_xscript_data_public
/* internal */
@interface XS_Map_invert_StringMap_StringMap_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_StringMap*) call :(xs_nonnull XS_StringMap*)value;
@end
#endif
#endif

#ifndef imported_XS_MonthOfYear_public
#define imported_XS_MonthOfYear_public
@interface XS_MonthOfYear : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) getName :(xs_int)month;
#define XS_MonthOfYear_JANUARY 1
#define XS_MonthOfYear_FEBRUARY 2
#define XS_MonthOfYear_MARCH 3
#define XS_MonthOfYear_APRIL 4
#define XS_MonthOfYear_MAY 5
#define XS_MonthOfYear_JUNE 6
#define XS_MonthOfYear_JULY 7
#define XS_MonthOfYear_AUGUST 8
#define XS_MonthOfYear_SEPTEMBER 9
#define XS_MonthOfYear_OCTOBER 10
#define XS_MonthOfYear_NOVEMBER 11
#define XS_MonthOfYear_DECEMBER 12
@end
#endif

#ifndef imported_XS_NumberValue_public
#define imported_XS_NumberValue_public
@interface XS_NumberValue : XS_ObjectBase
{
}
+ (xs_byte) getByte :(xs_nullable XS_DataValue*)param_value;
+ (xs_nonnull XS_BigDecimal*) getDecimal :(xs_nullable XS_DataValue*)param_value;
+ (xs_double) getDouble :(xs_nullable XS_DataValue*)param_value;
+ (xs_float) getFloat :(xs_nullable XS_DataValue*)param_value;
+ (xs_int) getInt :(xs_nullable XS_DataValue*)param_value;
+ (xs_nonnull XS_BigInteger*) getInteger :(xs_nullable XS_DataValue*)param_value;
+ (xs_long) getLong :(xs_nullable XS_DataValue*)param_value;
+ (xs_short) getShort :(xs_nullable XS_DataValue*)param_value;
@end
#endif

#ifdef import_XS_NumberValue_internal
#ifndef imported_XS_NumberValue_internal
#define imported_XS_NumberValue_internal
@interface XS_NumberValue (internal)
+ (xs_nonnull XS_DataValue*) negate :(xs_nullable XS_DataValue*)param_value;
@end
#endif
#endif

#ifndef imported_XS_ObjectMap_Entry_public
#define imported_XS_ObjectMap_Entry_public
@interface XS_ObjectMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private NSObject* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull NSObject*)value;
- (xs_nonnull NSObject*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) NSObject* value;
@end
#endif

#ifndef imported_XS_Parameter_public
#define imported_XS_Parameter_public
@interface XS_Parameter : XS_ObjectBase
{
    @private XS_AnnotationList* xs___nullable  my_annotationList;
    @private XS_AnnotationMap* xs___nullable  my_annotationMap;
    @private NSString* xs___nonnull  name_;
    @private XS_DataType* xs___nonnull  type_;
    @private xs_int mode_;
    @private XS_DataValue* xs___nullable  value_;
    @private XS_TypeFacets* xs___nullable  typeFacets_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_Parameter*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nullable XS_DataValue*) defaultValue;
- (xs_boolean) fixedLength;
- (xs_boolean) isNullable;
- (xs_boolean) isUnicode;
- (xs_int) maxLength;
- (xs_int) mode;
- (xs_nonnull NSString*) name;
- (xs_int) precision;
- (xs_int) scale;
- (void) setIsNullable :(xs_boolean)value;
- (void) setIsUnicode :(xs_boolean)value;
- (void) setMode :(xs_int)value;
- (void) setName :(xs_nonnull NSString*)value;
- (void) setType :(xs_nonnull XS_DataType*)value;
- (void) setTypeFacets :(xs_nullable XS_TypeFacets*)value;
- (void) setValue :(xs_nullable XS_DataValue*)value;
- (xs_int) srid;
- (xs_nonnull XS_DataType*) type;
- (xs_nullable XS_TypeFacets*) typeFacets;
- (xs_nullable XS_DataValue*) value;
#define XS_Parameter_MODE_IN 1
#define XS_Parameter_MODE_OUT 2
#define XS_Parameter_MODE_IN_OUT 3
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nullable nonatomic, readonly, strong) XS_DataValue* defaultValue;
@property (nonatomic, readonly) xs_boolean fixedLength;
@property (nonatomic, readonly) xs_boolean isNullable;
@property (nonatomic, readonly) xs_boolean isUnicode;
@property (nonatomic, readonly) xs_int maxLength;
@property (nonatomic, readwrite) xs_int mode;
@property (xs__nonnull nonatomic, readwrite) NSString* name;
@property (nonatomic, readonly) xs_int precision;
@property (nonatomic, readonly) xs_int scale;
@property (nonatomic, readonly) xs_int srid;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataType* type;
@property (xs__nullable nonatomic, readwrite, strong) XS_TypeFacets* typeFacets;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataValue* value;
@end
#endif

#ifndef imported_XS_PathAnnotations_public
#define imported_XS_PathAnnotations_public
@interface XS_PathAnnotations : XS_ObjectBase
{
    @private XS_DataPath* xs___nonnull  path_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PathAnnotations*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_DataPath*) path;
- (void) setPath :(xs_nonnull XS_DataPath*)value;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataPath* path;
@end
#endif

#ifndef imported_XS_PathAnnotationsMap_Entry_public
#define imported_XS_PathAnnotationsMap_Entry_public
@interface XS_PathAnnotationsMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_PathAnnotations* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PathAnnotationsMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_PathAnnotations*)value;
- (xs_nonnull XS_PathAnnotations*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PathAnnotations* value;
@end
#endif

#ifndef imported_XS_PropertyInfoMap_Entry_public
#define imported_XS_PropertyInfoMap_Entry_public
@interface XS_PropertyInfoMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_PropertyInfo* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PropertyInfoMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_PropertyInfo*)value;
- (xs_nonnull XS_PropertyInfo*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfo* value;
@end
#endif

#ifndef imported_XS_RequestOptions_public
#define imported_XS_RequestOptions_public
@interface XS_RequestOptions : XS_ObjectBase
{
    @private xs_boolean throwError_;
    @private xs_boolean isOnline_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_RequestOptions*) new;
- (void) _init;
- (void) setThrowError :(xs_boolean)value;
- (xs_boolean) throwError;
@property (nonatomic, readwrite) xs_boolean throwError;
@end
#endif

#ifdef import_XS_RequestOptions_internal
#ifndef imported_XS_RequestOptions_internal
#define imported_XS_RequestOptions_internal
@interface XS_RequestOptions (internal)
- (xs_boolean) isOnline;
- (void) setIsOnline :(xs_boolean)value;
@property (nonatomic, readwrite) xs_boolean isOnline;
@end
#endif
#endif

#ifndef imported_XS_SetBase_public
#define imported_XS_SetBase_public
@interface XS_SetBase : XS_ObjectBase
{
    @private XS_UntypedSet* xs___nonnull  my_set_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_SetBase*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) clear;
- (xs_int) size;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_UntypedSet*) untypedSet;
@property (nonatomic, readonly) xs_int size;
@property (xs__nonnull nonatomic, readonly, strong) XS_UntypedSet* untypedSet;
@end
#endif

#ifdef import_XS_SetBase_private
#ifndef imported_XS_SetBase_private
#define imported_XS_SetBase_private
@interface XS_SetBase (private)
- (xs_nonnull XS_UntypedSet*) my_set;
- (void) setMy_set :(xs_nonnull XS_UntypedSet*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedSet* my_set;
@end
#endif
#endif

#ifdef import_XS_Share_withNullable_ComplexValueList_in_xscript_data_internal
#ifndef imported_XS_Share_withNullable_ComplexValueList_in_xscript_data_internal
#define imported_XS_Share_withNullable_ComplexValueList_in_xscript_data_public
/* internal */
@interface XS_Share_withNullable_ComplexValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexValueList*) call :(xs_nonnull XS_ListBase*)value;
@end
#endif
#endif

#ifdef import_XS_Share_withNullable_DataValueList_in_xscript_data_internal
#ifndef imported_XS_Share_withNullable_DataValueList_in_xscript_data_internal
#define imported_XS_Share_withNullable_DataValueList_in_xscript_data_public
/* internal */
@interface XS_Share_withNullable_DataValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataValueList*) call :(xs_nonnull XS_ListBase*)value;
@end
#endif
#endif

#ifdef import_XS_Share_withNullable_EntityValueList_in_xscript_data_internal
#ifndef imported_XS_Share_withNullable_EntityValueList_in_xscript_data_internal
#define imported_XS_Share_withNullable_EntityValueList_in_xscript_data_public
/* internal */
@interface XS_Share_withNullable_EntityValueList_in_xscript_data : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityValueList*) call :(xs_nonnull XS_ListBase*)value;
@end
#endif
#endif

#ifndef imported_XS_SimpleTypeMap_Entry_public
#define imported_XS_SimpleTypeMap_Entry_public
@interface XS_SimpleTypeMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_SimpleType* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleTypeMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_SimpleType*)value;
- (xs_nonnull XS_SimpleType*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_SimpleType* value;
@end
#endif

#ifndef imported_XS_StringMap_Entry_public
#define imported_XS_StringMap_Entry_public
@interface XS_StringMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private NSString* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite) NSString* value;
@end
#endif

#ifdef import_XS_SystemFlags_internal
#ifndef imported_XS_SystemFlags_internal
#define imported_XS_SystemFlags_public
/* internal */
@interface XS_SystemFlags : XS_ObjectBase
{
}
#define XS_SystemFlags_CACHE_SELECT 1
#define XS_SystemFlags_CACHED_SELECT 2
#define XS_SystemFlags_IS_LOCAL 1
#define XS_SystemFlags_IS_SYSTEM 2
#define XS_SystemFlags_IS_NEW 1
#define XS_SystemFlags_IS_CREATED 2
#define XS_SystemFlags_IS_UPDATED 4
#define XS_SystemFlags_IS_DELETED 8
#define XS_SystemFlags_IS_PENDING 16
#define XS_SystemFlags_IS_DEFERRED 32
#define XS_SystemFlags_IS_PATCH 64
#define XS_SystemFlags_IS_PATCHED 128
#define XS_SystemFlags_FLAG_UPSERT 256
#define XS_SystemFlags_IN_UPLOAD 512
#define XS_SystemFlags_IN_DOWNLOAD 1024
#define XS_SystemFlags_IN_SYNC_TRAN 2048
@end
#endif
#endif

#ifdef import_XS_SystemKey_internal
#ifndef imported_XS_SystemKey_internal
#define imported_XS_SystemKey_public
/* internal */
@interface XS_SystemKey : XS_ObjectBase
{
}
+ (void) initialize;
+ (xs_long) build :(xs_int)sk1 :(xs_short)sk2;
+ (xs_int) part1 :(xs_long)sk;
+ (xs_nonnull XS_PropertyInfo*) part1Property;
+ (xs_short) part2 :(xs_long)sk;
+ (xs_nonnull XS_PropertyInfo*) part2Property;
@end
#endif
#endif

#ifdef import_XS_SystemKey_private
#ifndef imported_XS_SystemKey_private
#define imported_XS_SystemKey_private
@interface XS_SystemKey (private)
+ (xs_nonnull XS_PropertyInfo*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull XS_DataType*)p2 :(xs_nullable NSString*)p3;
@end
#endif
#endif

#ifdef import_XS_TimeNumber_internal
#ifndef imported_XS_TimeNumber_internal
#define imported_XS_TimeNumber_public
/* internal */
@interface XS_TimeNumber : XS_ObjectBase
{
}
+ (xs_long) fromFields :(xs_int)h :(xs_int)m :(xs_int)s :(xs_long)n :(xs_int)z;
+ (xs_int) getMillis :(xs_int)h :(xs_int)m :(xs_int)s :(xs_int)n :(xs_int)z;
+ (xs_int) getSeconds :(xs_int)h :(xs_int)m :(xs_int)s :(xs_int)z;
+ (xs_nonnull XS_LocalTime*) toLocalTime :(xs_long)nanos;
#define XS_TimeNumber_NANOS_PER_DAY XS_LONG(86400000000000)
#define XS_TimeNumber_NANOS_PER_HOUR XS_LONG(3600000000000)
#define XS_TimeNumber_NANOS_PER_MINUTE XS_LONG(60000000000)
#define XS_TimeNumber_NANOS_PER_SECOND XS_LONG(1000000000)
#define XS_TimeNumber_MICROS_PER_DAY XS_LONG(86400000000)
#define XS_TimeNumber_MILLIS_PER_DAY XS_LONG(86400000)
#define XS_TimeNumber_SECONDS_PER_DAY XS_LONG(86400)
#define XS_TimeNumber_MINUTES_PER_DAY XS_LONG(1440)
#define XS_TimeNumber_HOURS_PER_DAY 24
#define XS_TimeNumber_DOUBLE_NANOS_PER_DAY 86400000000000.0
#define XS_TimeNumber_DOUBLE_SECONDS_PER_DAY 86400.0
@end
#endif
#endif

#ifndef imported_XS_TypeFacets_public
#define imported_XS_TypeFacets_public
@interface XS_TypeFacets : XS_ObjectBase
{
    @private xs_nullable_boolean isNullable_;
    @private xs_nullable_boolean isUnicode_;
    @private xs_nullable_boolean readOnly_;
    @private xs_nullable_boolean fixedLength_;
    @private xs_nullable_int maxLength_;
    @private xs_nullable_int precision_;
    @private xs_nullable_int scale_;
    @private xs_nullable_int srid_;
    @private XS_DataValue* xs___nullable  defaultValue_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_TypeFacets*) new;
- (void) _init;
- (xs_nullable XS_DataValue*) defaultValue;
- (xs_nullable_boolean) fixedLength;
- (xs_nullable_boolean) isNullable;
- (xs_nullable_boolean) isUnicode;
- (xs_nullable_int) maxLength;
- (xs_nullable_int) precision;
- (xs_nullable_boolean) readOnly;
- (xs_nullable_int) scale;
- (void) setDefaultValue :(xs_nullable XS_DataValue*)value;
- (void) setFixedLength :(xs_nullable_boolean)value;
- (void) setIsNullable :(xs_nullable_boolean)value;
- (void) setIsUnicode :(xs_nullable_boolean)value;
- (void) setMaxLength :(xs_nullable_int)value;
- (void) setPrecision :(xs_nullable_int)value;
- (void) setReadOnly :(xs_nullable_boolean)value;
- (void) setScale :(xs_nullable_int)value;
- (void) setSrid :(xs_nullable_int)value;
- (xs_nullable_int) srid;
#define XS_TypeFacets_ANY_LENGTH 0
#define XS_TypeFacets_ANY_PRECISION 0
#define XS_TypeFacets_MAXIMUM_LENGTH 2147483647
#define XS_TypeFacets_FLOATING_SCALE XS_INT_MIN
#define XS_TypeFacets_INTEGRAL_SCALE 0
#define XS_TypeFacets_VARIABLE_SCALE 2147483647
#define XS_TypeFacets_VARIABLE_SRID 2147483647
@property (xs__nullable nonatomic, readwrite, strong) XS_DataValue* defaultValue;
@property (nonatomic, readwrite) xs_nullable_boolean fixedLength;
@property (nonatomic, readwrite) xs_nullable_boolean isNullable;
@property (nonatomic, readwrite) xs_nullable_boolean isUnicode;
@property (nonatomic, readwrite) xs_nullable_int maxLength;
@property (nonatomic, readwrite) xs_nullable_int precision;
@property (nonatomic, readwrite) xs_nullable_boolean readOnly;
@property (nonatomic, readwrite) xs_nullable_int scale;
@property (nonatomic, readwrite) xs_nullable_int srid;
@end
#endif

#ifdef import_XS_AnnotationList_SortByName_internal
#ifndef imported_XS_AnnotationList_SortByName_internal
#define imported_XS_AnnotationList_SortByName_public
/* internal */
@interface XS_AnnotationList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_AnnotationList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_AnnotationMap_public
#define imported_XS_AnnotationMap_public
@interface XS_AnnotationMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationMap*) new;
+ (xs_nonnull XS_AnnotationMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_AnnotationMap*) empty;
- (xs_nonnull XS_AnnotationMap_EntryList*) entries;
- (xs_nullable XS_Annotation*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_Annotation*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_AnnotationMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_Annotation*)value;
- (xs_nonnull XS_AnnotationList*) values;
@end
#endif

#ifdef import_XS_AnnotationMap_private
#ifndef imported_XS_AnnotationMap_private
#define imported_XS_AnnotationMap_private
@interface XS_AnnotationMap (private)
+ (xs_nonnull XS_AnnotationMap_Entry*) _new1 :(xs_nonnull XS_Annotation*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifdef import_XS_AnnotationMap_internal
#ifndef imported_XS_AnnotationMap_internal
#define imported_XS_AnnotationMap_internal
@interface XS_AnnotationMap (internal)
- (xs_nonnull XS_Annotation*) getRequiredForCaller :(xs_nonnull NSString*)name :(xs_nonnull NSObject*)caller;
@end
#endif
#endif

#ifndef imported_XS_AnnotationTermMap_public
#define imported_XS_AnnotationTermMap_public
@interface XS_AnnotationTermMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationTermMap*) new;
+ (xs_nonnull XS_AnnotationTermMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_AnnotationTermMap*) empty;
- (xs_nonnull XS_AnnotationTermMap_EntryList*) entries;
- (xs_nullable XS_AnnotationTerm*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_AnnotationTerm*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_AnnotationTermMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_AnnotationTerm*)value;
- (xs_nonnull XS_AnnotationTermList*) values;
@end
#endif

#ifdef import_XS_AnnotationTermMap_private
#ifndef imported_XS_AnnotationTermMap_private
#define imported_XS_AnnotationTermMap_private
@interface XS_AnnotationTermMap (private)
+ (xs_nonnull XS_AnnotationTermMap_Entry*) _new1 :(xs_nonnull XS_AnnotationTerm*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_AnyMap_public
#define imported_XS_AnyMap_public
@interface XS_AnyMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnyMap*) new;
+ (xs_nonnull XS_AnyMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_AnyMap*) empty;
- (xs_nonnull XS_AnyMap_EntryList*) entries;
- (xs_nullable NSObject*) get :(xs_nonnull NSString*)key;
- (xs_nullable NSObject*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_AnyMap*) set :(xs_nonnull NSString*)key :(xs_nullable NSObject*)value;
- (xs_nonnull XS_AnyList*) values;
@end
#endif

#ifdef import_XS_AnyMap_private
#ifndef imported_XS_AnyMap_private
#define imported_XS_AnyMap_private
@interface XS_AnyMap (private)
+ (xs_nonnull XS_AnyMap_Entry*) _new1 :(xs_nullable NSObject*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_AnySet_public
#define imported_XS_AnySet_public
@interface XS_AnySet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnySet*) new;
+ (xs_nonnull XS_AnySet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnySet*) add :(xs_nullable NSObject*)value;
- (xs_boolean) delete_ :(xs_nullable NSObject*)value;
+ (xs_nonnull XS_AnySet*) empty;
- (xs_boolean) has :(xs_nullable NSObject*)value;
- (xs_nonnull XS_AnyList*) values;
@end
#endif

#ifndef imported_XS_BinaryValue_public
#define imported_XS_BinaryValue_public
@interface XS_BinaryValue : XS_DataValue
{
    @private NSData* xs___nonnull  value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_BinaryValue*)x :(xs_nonnull XS_BinaryValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_BinaryValue*)x :(xs_nullable XS_BinaryValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_nonnull NSData*) getBinary :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_BinaryValue*) of :(xs_nonnull NSData*)param_value;
+ (xs_nullable XS_BinaryValue*) ofNullable :(xs_nullable NSData*)param_value;
- (xs_nonnull NSString*) toJSON;
+ (xs_nullable NSData*) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSData*) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly) NSData* value;
@end
#endif

#ifdef import_XS_BinaryValue_private
#ifndef imported_XS_BinaryValue_private
#define imported_XS_BinaryValue_private
@interface XS_BinaryValue (private)
+ (xs_nonnull XS_BinaryValue*) new;
+ (xs_nonnull XS_BinaryValue*) _new1 :(xs_nonnull NSData*)p1;
@end
#endif
#endif

#ifndef imported_XS_BooleanValue_public
#define imported_XS_BooleanValue_public
@interface XS_BooleanValue : XS_DataValue
{
    @private xs_boolean value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_BooleanValue*)x :(xs_nonnull XS_BooleanValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_BooleanValue*)x :(xs_nullable XS_BooleanValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_boolean) getBoolean :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_BooleanValue*) of :(xs_boolean)param_value;
+ (xs_nullable XS_BooleanValue*) ofNullable :(xs_nullable_boolean)param_value;
+ (xs_nullable_boolean) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_boolean) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_boolean value;
@end
#endif

#ifdef import_XS_BooleanValue_private
#ifndef imported_XS_BooleanValue_private
#define imported_XS_BooleanValue_private
@interface XS_BooleanValue (private)
+ (xs_nonnull XS_BooleanValue*) new;
+ (xs_nonnull XS_BooleanValue*) _new1 :(xs_boolean)p1;
@end
#endif
#endif

#ifndef imported_XS_ByteValue_public
#define imported_XS_ByteValue_public
@interface XS_ByteValue : XS_DataValue
{
    @private xs_byte value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_ByteValue*)x :(xs_nonnull XS_ByteValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_ByteValue*)x :(xs_nullable XS_ByteValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_byte) getByte :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_ByteValue*) of :(xs_byte)param_value;
+ (xs_nullable XS_ByteValue*) ofNullable :(xs_nullable_byte)param_value;
+ (xs_nullable_byte) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_byte) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_byte value;
@end
#endif

#ifdef import_XS_ByteValue_private
#ifndef imported_XS_ByteValue_private
#define imported_XS_ByteValue_private
@interface XS_ByteValue (private)
+ (xs_nonnull XS_ByteValue*) new;
+ (xs_nonnull XS_ByteValue*) _new1 :(xs_byte)p1;
@end
#endif
#endif

#ifndef imported_XS_CharValue_public
#define imported_XS_CharValue_public
@interface XS_CharValue : XS_DataValue
{
    @private xs_char value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nullable XS_CharValue*)x :(xs_nullable XS_CharValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_CharValue*)x :(xs_nullable XS_CharValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_char) getChar :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_CharValue*) of :(xs_char)param_value;
+ (xs_nullable XS_CharValue*) ofNullable :(xs_nullable_char)param_value;
+ (xs_nullable_char) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_char) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_char value;
@end
#endif

#ifdef import_XS_CharValue_private
#ifndef imported_XS_CharValue_private
#define imported_XS_CharValue_private
@interface XS_CharValue (private)
+ (xs_nonnull XS_CharValue*) new;
+ (xs_nonnull XS_CharValue*) _new1 :(xs_char)p1;
@end
#endif
#endif

#ifdef import_XS_ComplexTypeList_SortByName_internal
#ifndef imported_XS_ComplexTypeList_SortByName_internal
#define imported_XS_ComplexTypeList_SortByName_public
/* internal */
@interface XS_ComplexTypeList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexTypeList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_ComplexTypeList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_ComplexTypeMap_public
#define imported_XS_ComplexTypeMap_public
@interface XS_ComplexTypeMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexTypeMap*) new;
+ (xs_nonnull XS_ComplexTypeMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_ComplexTypeMap*) empty;
- (xs_nonnull XS_ComplexTypeMap_EntryList*) entries;
- (xs_nullable XS_ComplexType*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_ComplexType*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_ComplexTypeMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_ComplexType*)value;
- (xs_nonnull XS_ComplexTypeList*) values;
@end
#endif

#ifdef import_XS_ComplexTypeMap_private
#ifndef imported_XS_ComplexTypeMap_private
#define imported_XS_ComplexTypeMap_private
@interface XS_ComplexTypeMap (private)
+ (xs_nonnull XS_ComplexTypeMap_Entry*) _new1 :(xs_nonnull XS_ComplexType*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_ComplexValueMap_public
#define imported_XS_ComplexValueMap_public
@interface XS_ComplexValueMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueMap*) new;
+ (xs_nonnull XS_ComplexValueMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_ComplexValueMap*) empty;
- (xs_nonnull XS_ComplexValueMap_EntryList*) entries;
- (xs_nullable XS_ComplexValue*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_ComplexValue*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_ComplexValueMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_ComplexValue*)value;
- (xs_nonnull XS_ComplexValueList*) values;
@end
#endif

#ifdef import_XS_ComplexValueMap_private
#ifndef imported_XS_ComplexValueMap_private
#define imported_XS_ComplexValueMap_private
@interface XS_ComplexValueMap (private)
+ (xs_nonnull XS_ComplexValueMap_Entry*) _new1 :(xs_nonnull XS_ComplexValue*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_ComplexValueSet_public
#define imported_XS_ComplexValueSet_public
@interface XS_ComplexValueSet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueSet*) new;
+ (xs_nonnull XS_ComplexValueSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexValueSet*) add :(xs_nonnull XS_ComplexValue*)value;
- (xs_boolean) delete_ :(xs_nonnull XS_ComplexValue*)value;
+ (xs_nonnull XS_ComplexValueSet*) empty;
- (xs_boolean) has :(xs_nonnull XS_ComplexValue*)value;
- (xs_nonnull XS_ComplexValueList*) values;
@end
#endif

#ifndef imported_XS_DataComparer_public
#define imported_XS_DataComparer_public
@interface XS_DataComparer : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)x :(xs_nullable NSObject*)y;
+ (xs_nonnull XS_Comparer*) singleton;
@end
#endif

#ifdef import_XS_DataComparer_private
#ifndef imported_XS_DataComparer_private
#define imported_XS_DataComparer_private
@interface XS_DataComparer (private)
+ (xs_nonnull XS_DataComparer*) new;
@end
#endif
#endif

#ifndef imported_XS_DataEquality_public
#define imported_XS_DataEquality_public
@interface XS_DataEquality : XS_Equality
{
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_boolean) equal :(xs_nullable NSObject*)x :(xs_nullable NSObject*)y;
+ (xs_nonnull XS_Equality*) singleton;
@end
#endif

#ifdef import_XS_DataEquality_private
#ifndef imported_XS_DataEquality_private
#define imported_XS_DataEquality_private
@interface XS_DataEquality (private)
+ (xs_nonnull XS_DataEquality*) new;
@end
#endif
#endif

#ifndef imported_XS_DataException_public
#define imported_XS_DataException_public
@interface XS_DataException : XS_ExceptionBase
{
}
+ (xs_nonnull XS_DataException*) new;
- (void) _init;
@end
#endif

#ifdef import_XS_DataMethodList_SortByName_internal
#ifndef imported_XS_DataMethodList_SortByName_internal
#define imported_XS_DataMethodList_SortByName_public
/* internal */
@interface XS_DataMethodList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_DataMethodList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_DataMethodMap_public
#define imported_XS_DataMethodMap_public
@interface XS_DataMethodMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodMap*) new;
+ (xs_nonnull XS_DataMethodMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_DataMethodMap*) empty;
- (xs_nonnull XS_DataMethodMap_EntryList*) entries;
- (xs_nullable XS_DataMethod*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_DataMethod*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_DataMethodMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_DataMethod*)value;
- (xs_nonnull XS_DataMethodList*) values;
@end
#endif

#ifdef import_XS_DataMethodMap_private
#ifndef imported_XS_DataMethodMap_private
#define imported_XS_DataMethodMap_private
@interface XS_DataMethodMap (private)
+ (xs_nonnull XS_DataMethodMap_Entry*) _new1 :(xs_nonnull XS_DataMethod*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_DataMetricMap_public
#define imported_XS_DataMetricMap_public
@interface XS_DataMetricMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMetricMap*) new;
+ (xs_nonnull XS_DataMetricMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_DataMetricMap*) empty;
- (xs_nonnull XS_DataMetricMap_EntryList*) entries;
- (xs_nullable XS_DataMetric*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_DataMetric*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_DataMetricMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_DataMetric*)value;
- (xs_nonnull XS_DataMetricList*) values;
@end
#endif

#ifdef import_XS_DataMetricMap_private
#ifndef imported_XS_DataMetricMap_private
#define imported_XS_DataMetricMap_private
@interface XS_DataMetricMap (private)
+ (xs_nonnull XS_DataMetricMap_Entry*) _new1 :(xs_nonnull XS_DataMetric*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_DataPath_public
#define imported_XS_DataPath_public
@interface XS_DataPath : XS_DataValue
{
    @private XS_DataPath* xs___nullable  parentPath_;
    @private XS_PropertyInfo* xs___nullable  definedProperty_;
    @private NSString* xs___nullable  dynamicProperty_;
    @private xs_int my_type;
    @private XS_StringList* xs___nullable  my_segments;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nullable XS_PropertyInfo*) definedProperty;
- (xs_nullable NSString*) dynamicProperty;
- (xs_nullable XS_DataValue*) evaluate :(xs_nullable XS_StructureBase*)context;
- (xs_nonnull XS_DataPath*) get :(xs_nonnull XS_PropertyInfo*)child;
- (xs_nonnull XS_DataPath*) getDynamic :(xs_nonnull NSString*)child;
+ (xs_nonnull XS_DataPath*) of :(xs_nonnull XS_PropertyInfo*)start;
+ (xs_nonnull XS_DataPath*) ofDynamic :(xs_nonnull NSString*)start;
- (xs_nullable XS_DataPath*) parentPath;
- (xs_nonnull XS_StringList*) pathSegments;
- (xs_nullable XS_PropertyInfo*) rootProperty;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSString*) urlString;
+ (xs_nonnull XS_DataPath*) withSegments :(xs_int)type :(xs_nonnull XS_StringList*)segments;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readonly, strong) XS_PropertyInfo* definedProperty;
@property (xs__nullable nonatomic, readonly) NSString* dynamicProperty;
@property (xs__nullable nonatomic, readonly, strong) XS_DataPath* parentPath;
@property (xs__nonnull nonatomic, readonly, strong) XS_StringList* pathSegments;
@property (xs__nullable nonatomic, readonly, strong) XS_PropertyInfo* rootProperty;
@end
#endif

#ifdef import_XS_DataPath_private
#ifndef imported_XS_DataPath_private
#define imported_XS_DataPath_private
@interface XS_DataPath (private)
+ (xs_nonnull XS_DataPath*) new;
+ (xs_nonnull XS_DataType*) TYPE;
- (void) check :(xs_nonnull XS_PropertyInfo*)child;
- (xs_int) pathType;
+ (xs_nonnull XS_DataPath*) _new1 :(xs_nullable XS_PropertyInfo*)p1 :(xs_nullable XS_DataPath*)p2;
+ (xs_nonnull XS_DataPath*) _new2 :(xs_nullable XS_DataPath*)p1 :(xs_nullable NSString*)p2;
+ (xs_nonnull XS_DataPath*) _new3 :(xs_nullable XS_PropertyInfo*)p1;
+ (xs_nonnull XS_DataPath*) _new4 :(xs_nullable NSString*)p1;
+ (xs_nonnull XS_DataPath*) _new5 :(xs_nullable XS_StringList*)p1 :(xs_int)p2;
@property (nonatomic, readonly) xs_int pathType;
@end
#endif
#endif

#ifndef imported_XS_DataSchemaMap_public
#define imported_XS_DataSchemaMap_public
@interface XS_DataSchemaMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataSchemaMap*) new;
+ (xs_nonnull XS_DataSchemaMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_DataSchemaMap*) empty;
- (xs_nonnull XS_DataSchemaMap_EntryList*) entries;
- (xs_nullable XS_DataSchema*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_DataSchema*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_DataSchemaMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_DataSchema*)value;
- (xs_nonnull XS_DataSchemaList*) values;
@end
#endif

#ifdef import_XS_DataSchemaMap_private
#ifndef imported_XS_DataSchemaMap_private
#define imported_XS_DataSchemaMap_private
@interface XS_DataSchemaMap (private)
+ (xs_nonnull XS_DataSchemaMap_Entry*) _new1 :(xs_nonnull XS_DataSchema*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifdef import_XS_DataTypeList_SortByName_internal
#ifndef imported_XS_DataTypeList_SortByName_internal
#define imported_XS_DataTypeList_SortByName_public
/* internal */
@interface XS_DataTypeList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataTypeList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_DataTypeList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_DataTypeMap_public
#define imported_XS_DataTypeMap_public
@interface XS_DataTypeMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataTypeMap*) new;
+ (xs_nonnull XS_DataTypeMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_DataTypeMap*) empty;
- (xs_nonnull XS_DataTypeMap_EntryList*) entries;
- (xs_nullable XS_DataType*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_DataType*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_DataTypeMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_DataType*)value;
- (xs_nonnull XS_DataTypeList*) values;
@end
#endif

#ifdef import_XS_DataTypeMap_private
#ifndef imported_XS_DataTypeMap_private
#define imported_XS_DataTypeMap_private
@interface XS_DataTypeMap (private)
+ (xs_nonnull XS_DataTypeMap_Entry*) _new1 :(xs_nonnull XS_DataType*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_DataValueMap_public
#define imported_XS_DataValueMap_public
@interface XS_DataValueMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueMap*) new;
+ (xs_nonnull XS_DataValueMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_DataValueMap*) empty;
- (xs_nonnull XS_DataValueMap_EntryList*) entries;
- (xs_nullable XS_DataValue*) get :(xs_nonnull NSString*)key;
- (xs_nullable XS_DataValue*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_DataValueMap*) set :(xs_nonnull NSString*)key :(xs_nullable XS_DataValue*)value;
- (xs_nonnull XS_DataValueList*) values;
@end
#endif

#ifdef import_XS_DataValueMap_private
#ifndef imported_XS_DataValueMap_private
#define imported_XS_DataValueMap_private
@interface XS_DataValueMap (private)
+ (xs_nonnull XS_DataValueMap_Entry*) _new1 :(xs_nullable XS_DataValue*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_DataValueSet_public
#define imported_XS_DataValueSet_public
@interface XS_DataValueSet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueSet*) new;
+ (xs_nonnull XS_DataValueSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataValueSet*) add :(xs_nullable XS_DataValue*)value;
- (xs_boolean) delete_ :(xs_nullable XS_DataValue*)value;
+ (xs_nonnull XS_DataValueSet*) empty;
- (xs_boolean) has :(xs_nullable XS_DataValue*)value;
- (xs_nonnull XS_DataValueList*) values;
@end
#endif

#ifndef imported_XS_DayTimeDuration_public
#define imported_XS_DayTimeDuration_public
@interface XS_DayTimeDuration : XS_DataValue
{
    @private xs_byte my_sign;
    @private xs_int my_days;
    @private xs_int my_hours;
    @private xs_int my_minutes;
    @private xs_int my_seconds;
    @private xs_int my_nanos;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_DayTimeDuration*)left :(xs_nonnull XS_DayTimeDuration*)right;
- (xs_int) compareTo :(xs_nonnull XS_DayTimeDuration*)other;
- (xs_nonnull XS_DataType*) dataType;
- (xs_int) days;
+ (xs_boolean) equal :(xs_nullable XS_DayTimeDuration*)left :(xs_nullable XS_DayTimeDuration*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_DayTimeDuration*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_DayTimeDuration*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_DayTimeDuration*)left :(xs_nonnull XS_DayTimeDuration*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_DayTimeDuration*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_DayTimeDuration*)left :(xs_nonnull XS_DayTimeDuration*)right;
- (xs_int) hashCode;
- (xs_int) hours;
- (xs_boolean) lessEqual :(xs_nonnull XS_DayTimeDuration*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_DayTimeDuration*)left :(xs_nonnull XS_DayTimeDuration*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_DayTimeDuration*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_DayTimeDuration*)left :(xs_nonnull XS_DayTimeDuration*)right;
- (xs_int) minutes;
- (xs_int) nanos;
- (xs_nonnull XS_DayTimeDuration*) normalize;
- (xs_boolean) notEqual :(xs_nonnull XS_DayTimeDuration*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_DayTimeDuration*)left :(xs_nullable XS_DayTimeDuration*)right;
+ (xs_nonnull XS_DayTimeDuration*) of :(xs_int)param_sign :(xs_int)param_days :(xs_int)param_hours :(xs_int)param_minutes :(xs_int)param_seconds :(xs_int)param_nanos;
+ (xs_nonnull XS_DayTimeDuration*) parse :(xs_nonnull NSString*)text;
- (xs_int) seconds;
- (xs_int) sign;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int days;
@property (nonatomic, readonly) xs_int hours;
@property (nonatomic, readonly) xs_int minutes;
@property (nonatomic, readonly) xs_int nanos;
@property (nonatomic, readonly) xs_int seconds;
@property (nonatomic, readonly) xs_int sign;
@end
#endif

#ifdef import_XS_DayTimeDuration_private
#ifndef imported_XS_DayTimeDuration_private
#define imported_XS_DayTimeDuration_private
@interface XS_DayTimeDuration (private)
+ (xs_nonnull XS_DayTimeDuration*) new;
+ (xs_nonnull XS_DayTimeDuration*) _new1 :(xs_int)p1 :(xs_int)p2 :(xs_int)p3 :(xs_int)p4 :(xs_byte)p5 :(xs_int)p6;
@end
#endif
#endif

#ifndef imported_XS_DecimalValue_public
#define imported_XS_DecimalValue_public
@interface XS_DecimalValue : XS_DataValue
{
    @private XS_BigDecimal* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_DecimalValue*)x :(xs_nonnull XS_DecimalValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_DecimalValue*)x :(xs_nullable XS_DecimalValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_nonnull XS_BigDecimal*) getDecimal :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_DecimalValue*) of :(xs_nonnull XS_BigDecimal*)param_value;
+ (xs_nullable XS_DecimalValue*) ofNullable :(xs_nullable XS_BigDecimal*)param_value;
+ (xs_nullable XS_BigDecimal*) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_BigDecimal*) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_BigDecimal* value;
@end
#endif

#ifdef import_XS_DecimalValue_private
#ifndef imported_XS_DecimalValue_private
#define imported_XS_DecimalValue_private
@interface XS_DecimalValue (private)
+ (xs_nonnull XS_DecimalValue*) new;
+ (xs_nonnull XS_DecimalValue*) _new1 :(xs_nonnull XS_BigDecimal*)p1;
+ (xs_nonnull XS_BigDecimal*) DECIMAL_ZERO;
@end
#define XS_DecimalValue_DECIMAL_ZERO [XS_DecimalValue DECIMAL_ZERO]
#endif
#endif

#ifndef imported_XS_DoubleValue_public
#define imported_XS_DoubleValue_public
@interface XS_DoubleValue : XS_DataValue
{
    @private xs_double value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_DoubleValue*)x :(xs_nonnull XS_DoubleValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_DoubleValue*)x :(xs_nullable XS_DoubleValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_double) getDouble :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_DoubleValue*) of :(xs_double)param_value;
+ (xs_nullable XS_DoubleValue*) ofNullable :(xs_nullable_double)param_value;
+ (xs_nullable_double) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_double) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_double value;
@end
#endif

#ifdef import_XS_DoubleValue_private
#ifndef imported_XS_DoubleValue_private
#define imported_XS_DoubleValue_private
@interface XS_DoubleValue (private)
+ (xs_nonnull XS_DoubleValue*) new;
+ (xs_nonnull XS_DoubleValue*) _new1 :(xs_double)p1;
@end
#endif
#endif

#ifndef imported_XS_EntityContainerMap_public
#define imported_XS_EntityContainerMap_public
@interface XS_EntityContainerMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityContainerMap*) new;
+ (xs_nonnull XS_EntityContainerMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EntityContainerMap*) empty;
- (xs_nonnull XS_EntityContainerMap_EntryList*) entries;
- (xs_nullable XS_EntityContainer*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EntityContainer*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EntityContainerMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EntityContainer*)value;
- (xs_nonnull XS_EntityContainerList*) values;
@end
#endif

#ifdef import_XS_EntityContainerMap_private
#ifndef imported_XS_EntityContainerMap_private
#define imported_XS_EntityContainerMap_private
@interface XS_EntityContainerMap (private)
+ (xs_nonnull XS_EntityContainerMap_Entry*) _new1 :(xs_nonnull XS_EntityContainer*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifdef import_XS_EntitySetList_SortByName_internal
#ifndef imported_XS_EntitySetList_SortByName_internal
#define imported_XS_EntitySetList_SortByName_public
/* internal */
@interface XS_EntitySetList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_EntitySetList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_EntitySetMap_public
#define imported_XS_EntitySetMap_public
@interface XS_EntitySetMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetMap*) new;
+ (xs_nonnull XS_EntitySetMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EntitySetMap*) empty;
- (xs_nonnull XS_EntitySetMap_EntryList*) entries;
- (xs_nullable XS_EntitySet*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EntitySet*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EntitySetMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EntitySet*)value;
- (xs_nonnull XS_EntitySetList*) values;
@end
#endif

#ifdef import_XS_EntitySetMap_private
#ifndef imported_XS_EntitySetMap_private
#define imported_XS_EntitySetMap_private
@interface XS_EntitySetMap (private)
+ (xs_nonnull XS_EntitySetMap_Entry*) _new1 :(xs_nonnull XS_EntitySet*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifdef import_XS_EntityTypeList_SortByName_internal
#ifndef imported_XS_EntityTypeList_SortByName_internal
#define imported_XS_EntityTypeList_SortByName_public
/* internal */
@interface XS_EntityTypeList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityTypeList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_EntityTypeList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_EntityTypeMap_public
#define imported_XS_EntityTypeMap_public
@interface XS_EntityTypeMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityTypeMap*) new;
+ (xs_nonnull XS_EntityTypeMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EntityTypeMap*) empty;
- (xs_nonnull XS_EntityTypeMap_EntryList*) entries;
- (xs_nullable XS_EntityType*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EntityType*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EntityTypeMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EntityType*)value;
- (xs_nonnull XS_EntityTypeList*) values;
@end
#endif

#ifdef import_XS_EntityTypeMap_private
#ifndef imported_XS_EntityTypeMap_private
#define imported_XS_EntityTypeMap_private
@interface XS_EntityTypeMap (private)
+ (xs_nonnull XS_EntityTypeMap_Entry*) _new1 :(xs_nonnull XS_EntityType*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_EntityValueMap_public
#define imported_XS_EntityValueMap_public
@interface XS_EntityValueMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueMap*) new;
+ (xs_nonnull XS_EntityValueMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EntityValueMap*) empty;
- (xs_nonnull XS_EntityValueMap_EntryList*) entries;
- (xs_nullable XS_EntityValue*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EntityValue*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EntityValueMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EntityValue*)value;
- (xs_nonnull XS_EntityValueList*) values;
@end
#endif

#ifdef import_XS_EntityValueMap_private
#ifndef imported_XS_EntityValueMap_private
#define imported_XS_EntityValueMap_private
@interface XS_EntityValueMap (private)
+ (xs_nonnull XS_EntityValueMap_Entry*) _new1 :(xs_nonnull XS_EntityValue*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_EntityValueSet_public
#define imported_XS_EntityValueSet_public
@interface XS_EntityValueSet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueSet*) new;
+ (xs_nonnull XS_EntityValueSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityValueSet*) add :(xs_nonnull XS_EntityValue*)value;
- (xs_boolean) delete_ :(xs_nonnull XS_EntityValue*)value;
+ (xs_nonnull XS_EntityValueSet*) empty;
- (xs_boolean) has :(xs_nonnull XS_EntityValue*)value;
- (xs_nonnull XS_EntityValueList*) values;
@end
#endif

#ifndef imported_XS_EnumType_public
#define imported_XS_EnumType_public
@interface XS_EnumType : XS_DataType
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_TypeFacets* xs___nonnull  typeFacets_;
    @private xs_boolean isInferred_;
    @private xs_boolean isFlags_;
    @private XS_EnumValueList* xs___nonnull  memberList_;
    @private XS_EnumValueMap* xs___nonnull  memberMap_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumType*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_int) code;
- (xs_nonnull XS_DataType*) derivedFrom;
- (xs_nonnull XS_EnumValue*) getMember :(xs_nonnull NSString*)param_name;
- (xs_boolean) isDerived;
- (xs_boolean) isFlags;
- (xs_boolean) isInferred;
- (xs_nonnull NSString*) localName;
- (xs_nonnull XS_EnumValueList*) memberList;
- (xs_nonnull XS_EnumValueMap*) memberMap;
- (xs_nonnull NSString*) name;
- (xs_nonnull NSString*) qualifiedName;
- (void) setDerivedFrom :(xs_nonnull XS_DataType*)value;
- (void) setIsFlags :(xs_boolean)value;
- (void) setIsInferred :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setMemberList :(xs_nonnull XS_EnumValueList*)value;
- (void) setMemberMap :(xs_nonnull XS_EnumValueMap*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setTypeFacets :(xs_nonnull XS_TypeFacets*)value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_TypeFacets*) typeFacets;
+ (xs_nonnull XS_EnumType*) undefined;
- (xs_nonnull XS_EnumValue*) withByte :(xs_byte)value;
- (xs_nonnull XS_EnumValue*) withInt :(xs_int)value;
- (xs_nonnull XS_EnumValue*) withLong :(xs_long)value;
- (xs_nullable XS_EnumValue*) withNullableByte :(xs_nullable_byte)value;
- (xs_nullable XS_EnumValue*) withNullableInt :(xs_nullable_int)value;
- (xs_nullable XS_EnumValue*) withNullableLong :(xs_nullable_long)value;
- (xs_nullable XS_EnumValue*) withNullableShort :(xs_nullable_short)value;
- (xs_nonnull XS_EnumValue*) withShort :(xs_short)value;
- (xs_nullable XS_EnumValue*) withUnsignedByte :(xs_nullable XS_UnsignedByte*)value;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (nonatomic, readonly) xs_int code;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* derivedFrom;
@property (nonatomic, readonly) xs_boolean isDerived;
@property (nonatomic, readwrite) xs_boolean isFlags;
@property (nonatomic, readwrite) xs_boolean isInferred;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EnumValueList* memberList;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EnumValueMap* memberMap;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_TypeFacets* typeFacets;
@end
#endif

#ifdef import_XS_EnumType_private
#ifndef imported_XS_EnumType_private
#define imported_XS_EnumType_private
@interface XS_EnumType (private)
+ (xs_nonnull XS_EnumType*) _new1 :(xs_nonnull XS_EnumValueMap*)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull XS_EnumValueList*)p3 :(xs_nonnull XS_DataType*)p4 :(xs_boolean)p5 :(xs_nonnull NSString*)p6;
- (xs_nonnull XS_EnumValue*) withNumber :(xs_long)value;
@end
#endif
#endif

#ifdef import_XS_EnumTypeList_SortByName_internal
#ifndef imported_XS_EnumTypeList_SortByName_internal
#define imported_XS_EnumTypeList_SortByName_public
/* internal */
@interface XS_EnumTypeList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumTypeList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_EnumTypeList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_EnumTypeMap_public
#define imported_XS_EnumTypeMap_public
@interface XS_EnumTypeMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumTypeMap*) new;
+ (xs_nonnull XS_EnumTypeMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EnumTypeMap*) empty;
- (xs_nonnull XS_EnumTypeMap_EntryList*) entries;
- (xs_nullable XS_EnumType*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EnumType*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EnumTypeMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EnumType*)value;
- (xs_nonnull XS_EnumTypeList*) values;
@end
#endif

#ifdef import_XS_EnumTypeMap_private
#ifndef imported_XS_EnumTypeMap_private
#define imported_XS_EnumTypeMap_private
@interface XS_EnumTypeMap (private)
+ (xs_nonnull XS_EnumTypeMap_Entry*) _new1 :(xs_nonnull XS_EnumType*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_EnumValue_public
#define imported_XS_EnumValue_public
@interface XS_EnumValue : XS_DataValue
{
    @private XS_EnumType* xs___nonnull  my_type_;
    @private xs_long my_number;
    @private NSString* xs___nonnull  my_string;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumValue*) new :(xs_long)num :(xs_nonnull NSString*)str :(xs_nonnull XS_EnumType*)type;
- (void) _init :(xs_long)num :(xs_nonnull NSString*)str :(xs_nonnull XS_EnumType*)type;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_byte) byteValue;
+ (xs_int) compare :(xs_nonnull XS_EnumValue*)x :(xs_nonnull XS_EnumValue*)y;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_EnumType*) enumType;
+ (xs_boolean) equal :(xs_nullable XS_EnumValue*)x :(xs_nullable XS_EnumValue*)y;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_int) intValue;
- (xs_long) longValue;
- (xs_nonnull NSString*) name;
- (void) setAnnotationList :(xs_nonnull XS_AnnotationList*)value;
- (void) setAnnotationMap :(xs_nonnull XS_AnnotationMap*)value;
- (xs_short) shortValue;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_DataValue*) value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readwrite, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_EnumType* enumType;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataValue* value;
@end
#endif

#ifdef import_XS_EnumValue_private
#ifndef imported_XS_EnumValue_private
#define imported_XS_EnumValue_private
@interface XS_EnumValue (private)
- (xs_nonnull XS_EnumType*) my_type;
- (void) setMy_type :(xs_nonnull XS_EnumType*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EnumType* my_type;
@end
#endif
#endif

#ifndef imported_XS_EnumValueMap_public
#define imported_XS_EnumValueMap_public
@interface XS_EnumValueMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumValueMap*) new;
+ (xs_nonnull XS_EnumValueMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_EnumValueMap*) empty;
- (xs_nonnull XS_EnumValueMap_EntryList*) entries;
- (xs_nullable XS_EnumValue*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_EnumValue*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_EnumValueMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_EnumValue*)value;
- (xs_nonnull XS_EnumValueList*) values;
@end
#endif

#ifdef import_XS_EnumValueMap_private
#ifndef imported_XS_EnumValueMap_private
#define imported_XS_EnumValueMap_private
@interface XS_EnumValueMap (private)
+ (xs_nonnull XS_EnumValueMap_Entry*) _new1 :(xs_nonnull XS_EnumValue*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_FloatValue_public
#define imported_XS_FloatValue_public
@interface XS_FloatValue : XS_DataValue
{
    @private xs_float value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_FloatValue*)x :(xs_nonnull XS_FloatValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_FloatValue*)x :(xs_nullable XS_FloatValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_float) getFloat :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_FloatValue*) of :(xs_float)param_value;
+ (xs_nullable XS_FloatValue*) ofNullable :(xs_nullable_float)param_value;
+ (xs_nullable_float) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_float) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_float value;
@end
#endif

#ifdef import_XS_FloatValue_private
#ifndef imported_XS_FloatValue_private
#define imported_XS_FloatValue_private
@interface XS_FloatValue (private)
+ (xs_nonnull XS_FloatValue*) new;
+ (xs_nonnull XS_FloatValue*) _new1 :(xs_float)p1;
@end
#endif
#endif

#ifndef imported_XS_GeographyValue_public
#define imported_XS_GeographyValue_public
@interface XS_GeographyValue : XS_DataValue
{
    @private xs_int srsCode_;
    @private NSString* xs___nullable  srsName_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyValue*) new;
- (void) _init;
+ (xs_nonnull XS_GeographyValue*) parseAny :(xs_nonnull NSString*)text :(xs_nonnull XS_DataType*)type;
- (void) setSrsCode :(xs_int)value;
- (void) setSrsName :(xs_nullable NSString*)value;
- (xs_int) srsCode;
- (xs_nullable NSString*) srsName;
- (xs_nonnull NSString*) toString;
#define XS_GeographyValue_DEFAULT_SRID 4326
@property (nonatomic, readwrite) xs_int srsCode;
@property (xs__nullable nonatomic, readwrite) NSString* srsName;
@end
#endif

#ifndef imported_XS_GeometryValue_public
#define imported_XS_GeometryValue_public
@interface XS_GeometryValue : XS_DataValue
{
    @private xs_int srsCode_;
    @private NSString* xs___nullable  srsName_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryValue*) new;
- (void) _init;
+ (xs_nonnull XS_GeometryValue*) parseAny :(xs_nonnull NSString*)text :(xs_nonnull XS_DataType*)type;
- (void) setSrsCode :(xs_int)value;
- (void) setSrsName :(xs_nullable NSString*)value;
- (xs_int) srsCode;
- (xs_nullable NSString*) srsName;
- (xs_nonnull NSString*) toString;
#define XS_GeometryValue_DEFAULT_SRID 0
@property (nonatomic, readwrite) xs_int srsCode;
@property (xs__nullable nonatomic, readwrite) NSString* srsName;
@end
#endif

#ifndef imported_XS_GlobalDateTime_public
#define imported_XS_GlobalDateTime_public
@interface XS_GlobalDateTime : XS_DataValue
{
    @private xs_int my_nano;
    @private xs_int my_year;
    @private xs_byte my_month;
    @private xs_byte my_day;
    @private xs_byte my_hour;
    @private xs_byte my_minute;
    @private xs_byte my_second;
    @private xs_short my_offset;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_GlobalDateTime*)left :(xs_nonnull XS_GlobalDateTime*)right;
- (xs_int) compareTo :(xs_nonnull XS_GlobalDateTime*)other;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_LocalDate*) date;
- (xs_int) day;
- (xs_int) dayOfWeek;
- (xs_int) dayOfYear;
+ (xs_boolean) equal :(xs_nullable XS_GlobalDateTime*)left :(xs_nullable XS_GlobalDateTime*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_GlobalDateTime*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_GlobalDateTime*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_GlobalDateTime*)left :(xs_nonnull XS_GlobalDateTime*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_GlobalDateTime*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_GlobalDateTime*)left :(xs_nonnull XS_GlobalDateTime*)right;
- (xs_int) hashCode;
- (xs_int) hour;
- (xs_boolean) lessEqual :(xs_nonnull XS_GlobalDateTime*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_GlobalDateTime*)left :(xs_nonnull XS_GlobalDateTime*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_GlobalDateTime*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_GlobalDateTime*)left :(xs_nonnull XS_GlobalDateTime*)right;
+ (xs_long) millisBetween :(xs_nonnull XS_GlobalDateTime*)a :(xs_nonnull XS_GlobalDateTime*)b;
- (xs_double) minus :(xs_nonnull XS_GlobalDateTime*)other;
- (xs_int) minute;
- (xs_int) month;
- (xs_int) nano;
- (xs_nonnull XS_GlobalDateTime*) normalize;
- (xs_boolean) notEqual :(xs_nonnull XS_GlobalDateTime*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_GlobalDateTime*)left :(xs_nullable XS_GlobalDateTime*)right;
+ (xs_nonnull XS_GlobalDateTime*) now;
+ (xs_nonnull XS_GlobalDateTime*) of :(xs_int)param_year :(xs_int)param_month :(xs_int)param_day :(xs_int)param_hour :(xs_int)param_minute :(xs_int)param_second;
+ (xs_nonnull XS_GlobalDateTime*) of :(xs_int)param_year :(xs_int)param_month :(xs_int)param_day :(xs_int)param_hour :(xs_int)param_minute :(xs_int)param_second :(xs_int)param_nano;
- (xs_int) offset;
+ (xs_nonnull XS_GlobalDateTime*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_GlobalDateTime*) plusDays :(xs_int)days;
- (xs_nonnull XS_GlobalDateTime*) plusHours :(xs_long)param_hours;
- (xs_nonnull XS_GlobalDateTime*) plusMicros :(xs_long)param_micros;
- (xs_nonnull XS_GlobalDateTime*) plusMillis :(xs_long)param_millis;
- (xs_nonnull XS_GlobalDateTime*) plusMinutes :(xs_long)param_minutes;
- (xs_nonnull XS_GlobalDateTime*) plusMonths :(xs_int)months;
- (xs_nonnull XS_GlobalDateTime*) plusNanos :(xs_long)nanos;
- (xs_nonnull XS_GlobalDateTime*) plusSeconds :(xs_long)param_seconds;
- (xs_nonnull XS_GlobalDateTime*) plusWeeks :(xs_int)weeks;
- (xs_nonnull XS_GlobalDateTime*) plusYears :(xs_int)years;
- (xs_int) second;
- (xs_nonnull XS_LocalTime*) time;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull XS_LocalDateTime*) toLocal;
- (xs_nonnull NSString*) toString;
- (xs_int) year;
- (xs_nonnull XS_GlobalDateTime*) zone :(xs_int)param_offset;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_LocalDate* date;
@property (nonatomic, readonly) xs_int day;
@property (nonatomic, readonly) xs_int dayOfWeek;
@property (nonatomic, readonly) xs_int dayOfYear;
@property (nonatomic, readonly) xs_int hour;
@property (nonatomic, readonly) xs_int minute;
@property (nonatomic, readonly) xs_int month;
@property (nonatomic, readonly) xs_int nano;
@property (nonatomic, readonly) xs_int offset;
@property (nonatomic, readonly) xs_int second;
@property (xs__nonnull nonatomic, readonly, strong) XS_LocalTime* time;
@property (nonatomic, readonly) xs_int year;
@end
#endif

#ifdef import_XS_GlobalDateTime_private
#ifndef imported_XS_GlobalDateTime_private
#define imported_XS_GlobalDateTime_private
@interface XS_GlobalDateTime (private)
+ (xs_nonnull XS_GlobalDateTime*) new;
+ (xs_nonnull XS_GlobalDateTime*) _new1 :(xs_int)p1 :(xs_byte)p2 :(xs_short)p3 :(xs_byte)p4 :(xs_byte)p5 :(xs_byte)p6 :(xs_byte)p7 :(xs_int)p8;
@end
#endif
#endif

#ifndef imported_XS_GuidValue_public
#define imported_XS_GuidValue_public
@interface XS_GuidValue : XS_DataValue
{
    @private XS_GUID* xs___nonnull  value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_GuidValue*)x :(xs_nonnull XS_GuidValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_GuidValue*)x :(xs_nullable XS_GuidValue*)y;
+ (xs_nonnull XS_GuidValue*) of :(xs_nonnull XS_GUID*)param_value;
+ (xs_nullable XS_GuidValue*) ofNullable :(xs_nullable XS_GUID*)param_value;
+ (xs_nonnull XS_GuidValue*) parse :(xs_nonnull NSString*)param_value;
+ (xs_nonnull XS_GuidValue*) random;
- (xs_nonnull NSData*) toBinary;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSString*) toString32;
- (xs_nonnull NSString*) toString36;
- (xs_nonnull XS_GUID*) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_GUID* value;
@end
#endif

#ifdef import_XS_GuidValue_private
#ifndef imported_XS_GuidValue_private
#define imported_XS_GuidValue_private
@interface XS_GuidValue (private)
+ (xs_nonnull XS_GuidValue*) new;
+ (xs_nonnull XS_GuidValue*) _new1 :(xs_nonnull XS_GUID*)p1;
@end
#endif
#endif

#ifndef imported_XS_IntValue_public
#define imported_XS_IntValue_public
@interface XS_IntValue : XS_DataValue
{
    @private xs_int value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_IntValue*)x :(xs_nonnull XS_IntValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_IntValue*)x :(xs_nullable XS_IntValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_int) getInt :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_IntValue*) of :(xs_int)param_value;
+ (xs_nullable XS_IntValue*) ofNullable :(xs_nullable_int)param_value;
+ (xs_nullable_int) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int value;
@end
#endif

#ifdef import_XS_IntValue_private
#ifndef imported_XS_IntValue_private
#define imported_XS_IntValue_private
@interface XS_IntValue (private)
+ (xs_nonnull XS_IntValue*) new;
+ (xs_nonnull XS_IntValue*) _new1 :(xs_int)p1;
@end
#endif
#endif

#ifndef imported_XS_IntegerValue_public
#define imported_XS_IntegerValue_public
@interface XS_IntegerValue : XS_DataValue
{
    @private XS_BigInteger* xs___nonnull  value_;
}
+ (void) initialize;
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_IntegerValue*)x :(xs_nonnull XS_IntegerValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_IntegerValue*)x :(xs_nullable XS_IntegerValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_nonnull XS_BigInteger*) getInteger :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_IntegerValue*) of :(xs_nonnull XS_BigInteger*)param_value;
+ (xs_nullable XS_IntegerValue*) ofNullable :(xs_nullable XS_BigInteger*)param_value;
+ (xs_nullable XS_BigInteger*) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_BigInteger*) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_BigInteger* value;
@end
#endif

#ifdef import_XS_IntegerValue_private
#ifndef imported_XS_IntegerValue_private
#define imported_XS_IntegerValue_private
@interface XS_IntegerValue (private)
+ (xs_nonnull XS_IntegerValue*) new;
+ (xs_nonnull XS_IntegerValue*) _new1 :(xs_nonnull XS_BigInteger*)p1;
+ (xs_nonnull XS_BigInteger*) INTEGER_ZERO;
@end
#define XS_IntegerValue_INTEGER_ZERO [XS_IntegerValue INTEGER_ZERO]
#endif
#endif

#ifndef imported_XS_ListBase_public
#define imported_XS_ListBase_public
@interface XS_ListBase : XS_DataValue
{
    @private XS_UntypedList* xs___nonnull  my_list_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ListBase*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (void) clear;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_Equality*) equality;
- (xs_boolean) isEmpty;
- (xs_int) length;
- (void) removeAt :(xs_int)index;
- (void) removeFirst;
- (void) removeLast;
- (void) removeRange :(xs_int)start :(xs_int)end;
- (void) shareWith :(xs_nonnull XS_ListBase*)other :(xs_boolean)replace;
- (void) sortWith :(xs_nonnull XS_Comparer*)param_comparer;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_UntypedList*) untypedList;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_Equality* equality;
@property (nonatomic, readonly) xs_boolean isEmpty;
@property (nonatomic, readonly) xs_int length;
@property (xs__nonnull nonatomic, readonly, strong) XS_UntypedList* untypedList;
@end
#endif

#ifdef import_XS_ListBase_private
#ifndef imported_XS_ListBase_private
#define imported_XS_ListBase_private
@interface XS_ListBase (private)
- (xs_nonnull XS_UntypedList*) my_list;
- (void) setMy_list :(xs_nonnull XS_UntypedList*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_UntypedList* my_list;
@end
#endif
#endif

#ifndef imported_XS_LocalDate_public
#define imported_XS_LocalDate_public
@interface XS_LocalDate : XS_DataValue
{
    @private xs_int my_year;
    @private xs_byte my_month;
    @private xs_byte my_day;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_LocalDate*)left :(xs_nonnull XS_LocalDate*)right;
- (xs_int) compareTo :(xs_nonnull XS_LocalDate*)other;
- (xs_nonnull XS_DataType*) dataType;
- (xs_int) day;
- (xs_int) dayOfWeek;
- (xs_int) dayOfYear;
+ (xs_boolean) equal :(xs_nullable XS_LocalDate*)left :(xs_nullable XS_LocalDate*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_LocalDate*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_LocalDate*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_LocalDate*)left :(xs_nonnull XS_LocalDate*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_LocalDate*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_LocalDate*)left :(xs_nonnull XS_LocalDate*)right;
- (xs_int) hashCode;
- (xs_boolean) lessEqual :(xs_nonnull XS_LocalDate*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_LocalDate*)left :(xs_nonnull XS_LocalDate*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_LocalDate*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_LocalDate*)left :(xs_nonnull XS_LocalDate*)right;
- (xs_double) minus :(xs_nonnull XS_LocalDate*)other;
- (xs_int) month;
- (xs_boolean) notEqual :(xs_nonnull XS_LocalDate*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_LocalDate*)left :(xs_nullable XS_LocalDate*)right;
+ (xs_nonnull XS_LocalDate*) now;
+ (xs_nonnull XS_LocalDate*) of :(xs_int)param_year :(xs_int)param_month :(xs_int)param_day;
+ (xs_nonnull XS_LocalDate*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_LocalDate*) plusDays :(xs_int)days;
- (xs_nonnull XS_LocalDate*) plusMonths :(xs_int)months;
- (xs_nonnull XS_LocalDate*) plusWeeks :(xs_int)weeks;
- (xs_nonnull XS_LocalDate*) plusYears :(xs_int)years;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
- (xs_int) year;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int day;
@property (nonatomic, readonly) xs_int dayOfWeek;
@property (nonatomic, readonly) xs_int dayOfYear;
@property (nonatomic, readonly) xs_int month;
@property (nonatomic, readonly) xs_int year;
@end
#endif

#ifdef import_XS_LocalDate_private
#ifndef imported_XS_LocalDate_private
#define imported_XS_LocalDate_private
@interface XS_LocalDate (private)
+ (xs_nonnull XS_LocalDate*) new;
+ (xs_nonnull XS_LocalDate*) _new1 :(xs_int)p1 :(xs_byte)p2 :(xs_byte)p3;
@end
#endif
#endif

#ifndef imported_XS_LocalDateTime_public
#define imported_XS_LocalDateTime_public
@interface XS_LocalDateTime : XS_DataValue
{
    @private xs_int my_nano;
    @private xs_int my_year;
    @private xs_byte my_month;
    @private xs_byte my_day;
    @private xs_byte my_hour;
    @private xs_byte my_minute;
    @private xs_byte my_second;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_LocalDateTime*)left :(xs_nonnull XS_LocalDateTime*)right;
- (xs_int) compareTo :(xs_nonnull XS_LocalDateTime*)other;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_LocalDate*) date;
- (xs_int) day;
- (xs_int) dayOfWeek;
- (xs_int) dayOfYear;
+ (xs_boolean) equal :(xs_nullable XS_LocalDateTime*)left :(xs_nullable XS_LocalDateTime*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_LocalDateTime*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_LocalDateTime*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_LocalDateTime*)left :(xs_nonnull XS_LocalDateTime*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_LocalDateTime*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_LocalDateTime*)left :(xs_nonnull XS_LocalDateTime*)right;
- (xs_int) hashCode;
- (xs_int) hour;
- (xs_boolean) lessEqual :(xs_nonnull XS_LocalDateTime*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_LocalDateTime*)left :(xs_nonnull XS_LocalDateTime*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_LocalDateTime*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_LocalDateTime*)left :(xs_nonnull XS_LocalDateTime*)right;
+ (xs_long) millisBetween :(xs_nonnull XS_LocalDateTime*)a :(xs_nonnull XS_LocalDateTime*)b;
- (xs_double) minus :(xs_nonnull XS_LocalDateTime*)other;
- (xs_int) minute;
- (xs_int) month;
- (xs_int) nano;
- (xs_boolean) notEqual :(xs_nonnull XS_LocalDateTime*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_LocalDateTime*)left :(xs_nullable XS_LocalDateTime*)right;
+ (xs_nonnull XS_LocalDateTime*) now;
+ (xs_nonnull XS_LocalDateTime*) of :(xs_int)param_year :(xs_int)param_month :(xs_int)param_day :(xs_int)param_hour :(xs_int)param_minute :(xs_int)param_second;
+ (xs_nonnull XS_LocalDateTime*) of :(xs_int)param_year :(xs_int)param_month :(xs_int)param_day :(xs_int)param_hour :(xs_int)param_minute :(xs_int)param_second :(xs_int)param_nano;
+ (xs_nonnull XS_LocalDateTime*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_LocalDateTime*) plusDays :(xs_int)days;
- (xs_nonnull XS_LocalDateTime*) plusHours :(xs_long)param_hours;
- (xs_nonnull XS_LocalDateTime*) plusMicros :(xs_long)param_micros;
- (xs_nonnull XS_LocalDateTime*) plusMillis :(xs_long)param_millis;
- (xs_nonnull XS_LocalDateTime*) plusMinutes :(xs_long)param_minutes;
- (xs_nonnull XS_LocalDateTime*) plusMonths :(xs_int)months;
- (xs_nonnull XS_LocalDateTime*) plusNanos :(xs_long)nanos;
- (xs_nonnull XS_LocalDateTime*) plusSeconds :(xs_long)param_seconds;
- (xs_nonnull XS_LocalDateTime*) plusWeeks :(xs_int)weeks;
- (xs_nonnull XS_LocalDateTime*) plusYears :(xs_int)years;
- (xs_int) second;
- (xs_nonnull XS_LocalTime*) time;
- (xs_nonnull XS_GlobalDateTime*) toGlobal;
- (xs_nonnull XS_GlobalDateTime*) toGlobal :(xs_int)offset;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
- (xs_int) year;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly, strong) XS_LocalDate* date;
@property (nonatomic, readonly) xs_int day;
@property (nonatomic, readonly) xs_int dayOfWeek;
@property (nonatomic, readonly) xs_int dayOfYear;
@property (nonatomic, readonly) xs_int hour;
@property (nonatomic, readonly) xs_int minute;
@property (nonatomic, readonly) xs_int month;
@property (nonatomic, readonly) xs_int nano;
@property (nonatomic, readonly) xs_int second;
@property (xs__nonnull nonatomic, readonly, strong) XS_LocalTime* time;
@property (nonatomic, readonly) xs_int year;
@end
#endif

#ifdef import_XS_LocalDateTime_private
#ifndef imported_XS_LocalDateTime_private
#define imported_XS_LocalDateTime_private
@interface XS_LocalDateTime (private)
+ (xs_nonnull XS_LocalDateTime*) new;
+ (xs_nonnull XS_LocalDateTime*) _new1 :(xs_int)p1 :(xs_byte)p2 :(xs_byte)p3 :(xs_byte)p4 :(xs_byte)p5 :(xs_byte)p6 :(xs_int)p7;
@end
#endif
#endif

#ifndef imported_XS_LocalTime_public
#define imported_XS_LocalTime_public
@interface XS_LocalTime : XS_DataValue
{
    @private xs_byte my_hour;
    @private xs_byte my_minute;
    @private xs_byte my_second;
    @private xs_int my_nano;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_LocalTime*)left :(xs_nonnull XS_LocalTime*)right;
- (xs_int) compareTo :(xs_nonnull XS_LocalTime*)other;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_LocalTime*)left :(xs_nullable XS_LocalTime*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_LocalTime*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_LocalTime*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_LocalTime*)left :(xs_nonnull XS_LocalTime*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_LocalTime*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_LocalTime*)left :(xs_nonnull XS_LocalTime*)right;
- (xs_int) hashCode;
- (xs_int) hour;
- (xs_boolean) lessEqual :(xs_nonnull XS_LocalTime*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_LocalTime*)left :(xs_nonnull XS_LocalTime*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_LocalTime*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_LocalTime*)left :(xs_nonnull XS_LocalTime*)right;
- (xs_double) minus :(xs_nonnull XS_LocalTime*)other;
- (xs_int) minute;
- (xs_int) nano;
- (xs_boolean) notEqual :(xs_nonnull XS_LocalTime*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_LocalTime*)left :(xs_nullable XS_LocalTime*)right;
+ (xs_nonnull XS_LocalTime*) now;
+ (xs_nonnull XS_LocalTime*) of :(xs_int)param_hour :(xs_int)param_minute :(xs_int)param_second :(xs_int)param_nano;
+ (xs_nonnull XS_LocalTime*) parse :(xs_nonnull NSString*)text;
- (xs_nonnull XS_LocalTime*) plusHours :(xs_long)hours;
- (xs_nonnull XS_LocalTime*) plusMicros :(xs_long)micros;
- (xs_nonnull XS_LocalTime*) plusMillis :(xs_long)millis;
- (xs_nonnull XS_LocalTime*) plusMinutes :(xs_long)minutes;
- (xs_nonnull XS_LocalTime*) plusNanos :(xs_long)nanos;
- (xs_nonnull XS_LocalTime*) plusSeconds :(xs_long)seconds;
- (xs_int) second;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int hour;
@property (nonatomic, readonly) xs_int minute;
@property (nonatomic, readonly) xs_int nano;
@property (nonatomic, readonly) xs_int second;
@end
#endif

#ifdef import_XS_LocalTime_private
#ifndef imported_XS_LocalTime_private
#define imported_XS_LocalTime_private
@interface XS_LocalTime (private)
+ (xs_nonnull XS_LocalTime*) new;
+ (xs_nonnull XS_LocalTime*) _new1 :(xs_byte)p1 :(xs_byte)p2 :(xs_byte)p3 :(xs_int)p4;
@end
#endif
#endif

#ifndef imported_XS_LongValue_public
#define imported_XS_LongValue_public
@interface XS_LongValue : XS_DataValue
{
    @private xs_long value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_LongValue*)x :(xs_nonnull XS_LongValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_LongValue*)x :(xs_nullable XS_LongValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_long) getLong :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_LongValue*) of :(xs_long)param_value;
+ (xs_nullable XS_LongValue*) ofNullable :(xs_nullable_long)param_value;
+ (xs_nullable_long) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_long) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_long value;
@end
#endif

#ifdef import_XS_LongValue_private
#ifndef imported_XS_LongValue_private
#define imported_XS_LongValue_private
@interface XS_LongValue (private)
+ (xs_nonnull XS_LongValue*) new;
+ (xs_nonnull XS_LongValue*) _new1 :(xs_long)p1;
@end
#endif
#endif

#ifndef imported_XS_ObjectMap_public
#define imported_XS_ObjectMap_public
@interface XS_ObjectMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectMap*) new;
+ (xs_nonnull XS_ObjectMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_ObjectMap*) empty;
- (xs_nonnull XS_ObjectMap_EntryList*) entries;
- (xs_nullable NSObject*) get :(xs_nonnull NSString*)key;
- (xs_nonnull NSObject*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_ObjectMap*) set :(xs_nonnull NSString*)key :(xs_nonnull NSObject*)value;
- (xs_nonnull XS_ObjectList*) values;
@end
#endif

#ifdef import_XS_ObjectMap_private
#ifndef imported_XS_ObjectMap_private
#define imported_XS_ObjectMap_private
@interface XS_ObjectMap (private)
+ (xs_nonnull XS_ObjectMap_Entry*) _new1 :(xs_nonnull NSObject*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_ObjectSet_public
#define imported_XS_ObjectSet_public
@interface XS_ObjectSet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectSet*) new;
+ (xs_nonnull XS_ObjectSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ObjectSet*) add :(xs_nonnull NSObject*)value;
- (xs_boolean) delete_ :(xs_nonnull NSObject*)value;
+ (xs_nonnull XS_ObjectSet*) empty;
- (xs_boolean) has :(xs_nonnull NSObject*)value;
- (xs_nonnull XS_ObjectList*) values;
@end
#endif

#ifndef imported_XS_PathAnnotationsMap_public
#define imported_XS_PathAnnotationsMap_public
@interface XS_PathAnnotationsMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PathAnnotationsMap*) new;
+ (xs_nonnull XS_PathAnnotationsMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_PathAnnotationsMap*) empty;
- (xs_nonnull XS_PathAnnotationsMap_EntryList*) entries;
- (xs_nullable XS_PathAnnotations*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_PathAnnotations*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_PathAnnotationsMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_PathAnnotations*)value;
- (xs_nonnull XS_PathAnnotationsList*) values;
@end
#endif

#ifdef import_XS_PathAnnotationsMap_private
#ifndef imported_XS_PathAnnotationsMap_private
#define imported_XS_PathAnnotationsMap_private
@interface XS_PathAnnotationsMap (private)
+ (xs_nonnull XS_PathAnnotationsMap_Entry*) _new1 :(xs_nonnull XS_PathAnnotations*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_PropertyInfo_public
#define imported_XS_PropertyInfo_public
@interface XS_PropertyInfo : XS_DataValue
{
    @private xs_int id_;
    @private NSString* xs___nonnull  name_;
    @private XS_DataType* xs___nonnull  type_;
    @private NSString* xs___nonnull  owningType_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_CustomPath* xs___nullable  customPath_;
    @private XS_TypeFacets* xs___nullable  typeFacets_;
    @private NSString* xs___nullable  column_;
    @private xs_boolean isKey_;
    @private xs_boolean isOptimistic_;
    @private xs_boolean containsTarget_;
    @private xs_int onDeleteAction_;
    @private NSString* xs___nullable  partnerPath_;
    @private XS_StringMap* xs___nullable  referentialConstraints_;
    @private XS_EntitySet* xs___nullable  offlineLinks_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PropertyInfo*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nullable NSString*) column;
- (xs_nonnull XS_ComplexType*) complexType;
- (xs_boolean) containsTarget;
- (xs_nullable XS_CustomPath*) customPath;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nullable XS_DataValue*) defaultValue;
- (xs_nonnull XS_EntityType*) entityType;
- (xs_nonnull XS_EnumType*) enumType;
- (xs_boolean) fixedLength;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_int) id_;
- (xs_boolean) isKey;
- (xs_boolean) isNavigation;
- (xs_boolean) isNullable;
- (xs_boolean) isOptimistic;
- (xs_boolean) isPersistent;
- (xs_boolean) isStream;
- (xs_boolean) isStructural;
- (xs_boolean) isUnicode;
- (xs_nonnull XS_ComplexType*) itemComplexType;
- (xs_nonnull XS_EntityType*) itemEntityType;
- (xs_int) maxLength;
- (xs_nonnull NSString*) name;
- (xs_int) onDeleteAction;
- (xs_nonnull NSString*) owningType;
- (xs_nullable NSString*) partnerPath;
- (xs_int) precision;
- (xs_boolean) readOnly;
- (xs_nullable XS_StringMap*) referentialConstraints;
- (xs_int) scale;
- (void) setColumn :(xs_nullable NSString*)value;
- (void) setContainsTarget :(xs_boolean)value;
- (void) setCustomPath :(xs_nullable XS_CustomPath*)value;
- (void) setFixedLength :(xs_boolean)value;
- (void) setId_ :(xs_int)value;
- (void) setIsKey :(xs_boolean)value;
- (void) setIsNullable :(xs_boolean)value;
- (void) setIsOptimistic :(xs_boolean)value;
- (void) setIsUnicode :(xs_boolean)value;
- (void) setName :(xs_nonnull NSString*)value;
- (void) setOnDeleteAction :(xs_int)value;
- (void) setOwningType :(xs_nonnull NSString*)value;
- (void) setPartnerPath :(xs_nullable NSString*)value;
- (void) setReadOnly :(xs_boolean)value;
- (void) setReferentialConstraints :(xs_nullable XS_StringMap*)value;
- (void) setType :(xs_nonnull XS_DataType*)value;
- (void) setTypeFacets :(xs_nullable XS_TypeFacets*)value;
- (xs_int) srid;
- (xs_nonnull XS_StructureType*) structureType;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_DataType*) type;
- (xs_nullable XS_TypeFacets*) typeFacets;
- (xs_nonnull NSString*) urlString;
#define XS_PropertyInfo_ON_DELETE_CASCADE 1
#define XS_PropertyInfo_ON_DELETE_NONE 2
#define XS_PropertyInfo_ON_DELETE_SET_DEFAULT 3
#define XS_PropertyInfo_ON_DELETE_SET_NULL 4
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nullable nonatomic, readwrite) NSString* column;
@property (xs__nonnull nonatomic, readonly, strong) XS_ComplexType* complexType;
@property (nonatomic, readwrite) xs_boolean containsTarget;
@property (xs__nullable nonatomic, readwrite, strong) XS_CustomPath* customPath;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readonly, strong) XS_DataValue* defaultValue;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityType* entityType;
@property (xs__nonnull nonatomic, readonly, strong) XS_EnumType* enumType;
@property (nonatomic, readonly) xs_boolean fixedLength;
@property (nonatomic, readwrite) xs_int id_;
@property (nonatomic, readwrite) xs_boolean isKey;
@property (nonatomic, readonly) xs_boolean isNavigation;
@property (nonatomic, readonly) xs_boolean isNullable;
@property (nonatomic, readwrite) xs_boolean isOptimistic;
@property (nonatomic, readonly) xs_boolean isPersistent;
@property (nonatomic, readonly) xs_boolean isStream;
@property (nonatomic, readonly) xs_boolean isStructural;
@property (nonatomic, readonly) xs_boolean isUnicode;
@property (xs__nonnull nonatomic, readonly, strong) XS_ComplexType* itemComplexType;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityType* itemEntityType;
@property (nonatomic, readonly) xs_int maxLength;
@property (xs__nonnull nonatomic, readwrite) NSString* name;
@property (nonatomic, readwrite) xs_int onDeleteAction;
@property (xs__nonnull nonatomic, readwrite) NSString* owningType;
@property (xs__nullable nonatomic, readwrite) NSString* partnerPath;
@property (nonatomic, readonly) xs_int precision;
@property (nonatomic, readonly) xs_boolean readOnly;
@property (xs__nullable nonatomic, readwrite, strong) XS_StringMap* referentialConstraints;
@property (nonatomic, readonly) xs_int scale;
@property (nonatomic, readonly) xs_int srid;
@property (xs__nonnull nonatomic, readonly, strong) XS_StructureType* structureType;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataType* type;
@property (xs__nullable nonatomic, readwrite, strong) XS_TypeFacets* typeFacets;
@end
#endif

#ifdef import_XS_PropertyInfo_internal
#ifndef imported_XS_PropertyInfo_internal
#define imported_XS_PropertyInfo_internal
@interface XS_PropertyInfo (internal)
- (xs_nullable XS_EntitySet*) offlineLinks;
- (void) setOfflineLinks :(xs_nullable XS_EntitySet*)value;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntitySet* offlineLinks;
@end
#endif
#endif

#ifndef imported_XS_PropertyInfoMap_public
#define imported_XS_PropertyInfoMap_public
@interface XS_PropertyInfoMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PropertyInfoMap*) new;
+ (xs_nonnull XS_PropertyInfoMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_PropertyInfoMap*) empty;
- (xs_nonnull XS_PropertyInfoMap_EntryList*) entries;
- (xs_nullable XS_PropertyInfo*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_PropertyInfo*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_PropertyInfoMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_PropertyInfo*)value;
- (xs_nonnull XS_PropertyInfoList*) values;
@end
#endif

#ifdef import_XS_PropertyInfoMap_private
#ifndef imported_XS_PropertyInfoMap_private
#define imported_XS_PropertyInfoMap_private
@interface XS_PropertyInfoMap (private)
+ (xs_nonnull XS_PropertyInfoMap_Entry*) _new1 :(xs_nonnull XS_PropertyInfo*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_ShortValue_public
#define imported_XS_ShortValue_public
@interface XS_ShortValue : XS_DataValue
{
    @private xs_short value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_ShortValue*)x :(xs_nonnull XS_ShortValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_ShortValue*)x :(xs_nullable XS_ShortValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_short) getShort :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_ShortValue*) of :(xs_short)param_value;
+ (xs_nullable XS_ShortValue*) ofNullable :(xs_nullable_short)param_value;
+ (xs_nullable_short) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_short) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_short value;
@end
#endif

#ifdef import_XS_ShortValue_private
#ifndef imported_XS_ShortValue_private
#define imported_XS_ShortValue_private
@interface XS_ShortValue (private)
+ (xs_nonnull XS_ShortValue*) new;
+ (xs_nonnull XS_ShortValue*) _new1 :(xs_short)p1;
@end
#endif
#endif

#ifndef imported_XS_SimpleType_public
#define imported_XS_SimpleType_public
@interface XS_SimpleType : XS_DataType
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_TypeFacets* xs___nonnull  typeFacets_;
    @private xs_boolean isInferred_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleType*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_int) code;
- (xs_nonnull XS_DataType*) derivedFrom;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_boolean) isDerived;
- (xs_boolean) isInferred;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nonnull NSString*) qualifiedName;
- (void) setDerivedFrom :(xs_nonnull XS_DataType*)value;
- (void) setIsInferred :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setTypeFacets :(xs_nonnull XS_TypeFacets*)value;
+ (xs_nonnull XS_EnumType*) simplr;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_TypeFacets*) typeFacets;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (nonatomic, readonly) xs_int code;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* derivedFrom;
@property (nonatomic, readonly) xs_boolean isDerived;
@property (nonatomic, readwrite) xs_boolean isInferred;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_TypeFacets* typeFacets;
@end
#endif

#ifdef import_XS_SimpleType_private
#ifndef imported_XS_SimpleType_private
#define imported_XS_SimpleType_private
@interface XS_SimpleType (private)
+ (xs_nonnull XS_EnumType*) _new1 :(xs_nonnull XS_EnumValueMap*)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull XS_EnumValueList*)p3 :(xs_nonnull XS_DataType*)p4 :(xs_boolean)p5 :(xs_nonnull NSString*)p6;
@end
#endif
#endif

#ifdef import_XS_SimpleTypeList_SortByName_internal
#ifndef imported_XS_SimpleTypeList_SortByName_internal
#define imported_XS_SimpleTypeList_SortByName_public
/* internal */
@interface XS_SimpleTypeList_SortByName : XS_Comparer
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleTypeList_SortByName*) new;
- (void) _init;
- (xs_int) compare :(xs_nullable NSObject*)a :(xs_nullable NSObject*)b;
+ (xs_nonnull XS_SimpleTypeList_SortByName*) singleton;
@end
#endif
#endif

#ifndef imported_XS_SimpleTypeMap_public
#define imported_XS_SimpleTypeMap_public
@interface XS_SimpleTypeMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleTypeMap*) new;
+ (xs_nonnull XS_SimpleTypeMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_SimpleTypeMap*) empty;
- (xs_nonnull XS_SimpleTypeMap_EntryList*) entries;
- (xs_nullable XS_SimpleType*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_SimpleType*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_SimpleTypeMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_SimpleType*)value;
- (xs_nonnull XS_SimpleTypeList*) values;
@end
#endif

#ifdef import_XS_SimpleTypeMap_private
#ifndef imported_XS_SimpleTypeMap_private
#define imported_XS_SimpleTypeMap_private
@interface XS_SimpleTypeMap (private)
+ (xs_nonnull XS_SimpleTypeMap_Entry*) _new1 :(xs_nonnull XS_SimpleType*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_StreamBase_public
#define imported_XS_StreamBase_public
@interface XS_StreamBase : XS_DataValue
{
    @private NSString* xs___nullable  my_tag;
    @private NSString* xs___nullable  my_type;
    @private xs_boolean notFound_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StreamBase*) new;
- (void) _init;
- (void) close;
- (xs_nullable NSString*) entityTag;
- (void) flush;
- (xs_nullable NSString*) mediaType;
- (xs_boolean) notFound;
- (void) setEntityTag :(xs_nullable NSString*)value;
- (void) setMediaType :(xs_nullable NSString*)value;
- (void) setNotFound :(xs_boolean)value;
@property (xs__nullable nonatomic, readonly) NSString* entityTag;
@property (xs__nullable nonatomic, readonly) NSString* mediaType;
@property (nonatomic, readwrite) xs_boolean notFound;
@end
#endif

#ifndef imported_XS_StreamLink_public
#define imported_XS_StreamLink_public
@interface XS_StreamLink : XS_DataValue
{
    @private NSData* xs___nullable  myData;
    @private NSString* xs___nullable  myText;
    @private XS_StructureType* xs___nonnull  owningType_;
    @private XS_EntitySet* xs___nullable  entitySet_;
    @private XS_PropertyInfo* xs___nullable  streamProperty_;
    @private NSString* xs___nullable  mediaType_;
    @private NSString* xs___nullable  entityTag_;
    @private NSString* xs___nullable  editLink_;
    @private NSString* xs___nullable  readLink_;
    @private NSString* xs___nullable  valuePath_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StreamLink*) new;
- (void) _init;
- (xs_nonnull XS_StreamLink*) copyLink;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nullable NSString*) editLink;
- (xs_nullable XS_EntitySet*) entitySet;
- (xs_nullable NSString*) entityTag;
+ (xs_boolean) equal :(xs_nullable XS_StreamLink*)a :(xs_nullable XS_StreamLink*)b;
- (xs_nullable NSData*) inlineData;
- (xs_nullable NSString*) inlineText;
- (xs_nullable NSString*) mediaType;
- (xs_nonnull XS_StructureType*) owningType;
- (xs_nullable NSString*) readLink;
- (void) setEditLink :(xs_nullable NSString*)value;
- (void) setEntitySet :(xs_nullable XS_EntitySet*)value;
- (void) setEntityTag :(xs_nullable NSString*)value;
- (void) setInlineData :(xs_nullable NSData*)value;
- (void) setInlineText :(xs_nullable NSString*)value;
- (void) setMediaType :(xs_nullable NSString*)value;
- (void) setOwningType :(xs_nonnull XS_StructureType*)value;
- (void) setReadLink :(xs_nullable NSString*)value;
- (void) setStreamProperty :(xs_nullable XS_PropertyInfo*)value;
- (void) setValuePath :(xs_nullable NSString*)value;
- (xs_nullable XS_PropertyInfo*) streamProperty;
- (xs_nonnull NSString*) toString;
- (xs_nullable NSString*) valuePath;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readwrite) NSString* editLink;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntitySet* entitySet;
@property (xs__nullable nonatomic, readwrite) NSString* entityTag;
@property (xs__nullable nonatomic, readonly) NSData* inlineData;
@property (xs__nullable nonatomic, readonly) NSString* inlineText;
@property (xs__nullable nonatomic, readwrite) NSString* mediaType;
@property (xs__nonnull nonatomic, readwrite, strong) XS_StructureType* owningType;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@property (xs__nullable nonatomic, readwrite, strong) XS_PropertyInfo* streamProperty;
@property (xs__nullable nonatomic, readwrite) NSString* valuePath;
@end
#endif

#ifdef import_XS_StreamLink_private
#ifndef imported_XS_StreamLink_private
#define imported_XS_StreamLink_private
@interface XS_StreamLink (private)
+ (xs_nonnull XS_StreamLink*) _new1 :(xs_nullable NSString*)p1 :(xs_nonnull XS_StructureType*)p2 :(xs_nullable XS_PropertyInfo*)p3 :(xs_nullable NSString*)p4 :(xs_nullable XS_EntitySet*)p5 :(xs_nullable NSString*)p6 :(xs_nullable NSString*)p7 :(xs_nullable NSData*)p8 :(xs_nullable NSString*)p9;
@end
#endif
#endif

#ifdef import_XS_StreamLink_internal
#ifndef imported_XS_StreamLink_internal
#define imported_XS_StreamLink_internal
@interface XS_StreamLink (internal)
- (xs_nonnull NSString*) metricBaseName;
@end
#endif
#endif

#ifndef imported_XS_StringMap_public
#define imported_XS_StringMap_public
@interface XS_StringMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringMap*) new;
+ (xs_nonnull XS_StringMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_StringMap*) empty;
- (xs_nonnull XS_StringMap_EntryList*) entries;
- (xs_nullable NSString*) get :(xs_nonnull NSString*)key;
- (xs_nonnull NSString*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringMap*) inverse;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_StringMap*) set :(xs_nonnull NSString*)key :(xs_nonnull NSString*)value;
- (xs_nonnull XS_StringList*) values;
@end
#endif

#ifdef import_XS_StringMap_private
#ifndef imported_XS_StringMap_private
#define imported_XS_StringMap_private
@interface XS_StringMap (private)
+ (xs_nonnull XS_StringMap_Entry*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifndef imported_XS_StringSet_public
#define imported_XS_StringSet_public
@interface XS_StringSet : XS_SetBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringSet*) new;
+ (xs_nonnull XS_StringSet*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_StringSet*) add :(xs_nonnull NSString*)value;
- (xs_boolean) delete_ :(xs_nonnull NSString*)value;
+ (xs_nonnull XS_StringSet*) empty;
- (xs_boolean) has :(xs_nonnull NSString*)value;
- (xs_nonnull XS_StringList*) values;
@end
#endif

#ifndef imported_XS_StringValue_public
#define imported_XS_StringValue_public
@interface XS_StringValue : XS_DataValue
{
    @private NSString* xs___nonnull  value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_StringValue*)x :(xs_nonnull XS_StringValue*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_StringValue*)x :(xs_nullable XS_StringValue*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_nonnull NSString*) getString :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_StringValue*) of :(xs_nonnull NSString*)param_value;
+ (xs_nullable XS_StringValue*) ofNullable :(xs_nullable NSString*)param_value;
- (xs_nonnull NSString*) toJSON;
+ (xs_nullable NSString*) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_nonnull NSString*) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readonly) NSString* value;
@end
#endif

#ifdef import_XS_StringValue_private
#ifndef imported_XS_StringValue_private
#define imported_XS_StringValue_private
@interface XS_StringValue (private)
+ (xs_nonnull XS_StringValue*) new;
+ (xs_nonnull XS_StringValue*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_StructureBase_public
#define imported_XS_StructureBase_public
@interface XS_StructureBase : XS_DataValue
{
    @private XS_DataValueMap* xs___nullable  my_dynamic;
    @private XS_DataValueList* xs___nonnull  my_data_;
    @private XS_BooleanList* xs___nonnull  my_has_;
    @private NSString* xs___nullable  valuePath_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StructureBase*) new;
- (void) _init;
- (xs_nonnull XS_DataValueMap*) dynamicProperties;
- (xs_nonnull XS_DataValueList*) getBasicList :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull NSData*) getBinary :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_boolean) getBoolean :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_byte) getByte :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_char) getChar :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_ComplexValue*) getComplex :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_ComplexValueList*) getComplexList :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_DayTimeDuration*) getDayTimeDuration :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_BigDecimal*) getDecimal :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_double) getDouble :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_DataValue*) getDynamic :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EntityValue*) getEntity :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_EntityValueList*) getEntityList :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_EnumValue*) getEnum :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_float) getFloat :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_GlobalDateTime*) getGlobalDateTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_GuidValue*) getGuid :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_int) getInt :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_BigInteger*) getInteger :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_LocalDate*) getLocalDate :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_LocalDateTime*) getLocalDateTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_LocalTime*) getLocalTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_long) getLong :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable NSData*) getNullableBinary :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_boolean) getNullableBoolean :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_byte) getNullableByte :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_char) getNullableChar :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_ComplexValue*) getNullableComplex :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_DayTimeDuration*) getNullableDayTimeDuration :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_BigDecimal*) getNullableDecimal :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_double) getNullableDouble :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_EntityValue*) getNullableEntity :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_EnumValue*) getNullableEnum :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_float) getNullableFloat :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_GlobalDateTime*) getNullableGlobalDateTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_GuidValue*) getNullableGuid :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_int) getNullableInt :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_BigInteger*) getNullableInteger :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_LocalDate*) getNullableLocalDate :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_LocalDateTime*) getNullableLocalDateTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_LocalTime*) getNullableLocalTime :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_long) getNullableLong :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_short) getNullableShort :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable NSString*) getNullableString :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_int) getNullableUnsignedByte :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable_int) getNullableUnsignedShort :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_YearMonthDuration*) getNullableYearMonthDuration :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_DataValue*) getRequiredValue :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_short) getShort :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_StreamLink*) getStreamLink :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull NSString*) getString :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_int) getUnsignedByte :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_int) getUnsignedShort :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_DataValue*) getValue :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable XS_DataValue*) getValueIfAvailable :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nonnull XS_YearMonthDuration*) getYearMonthDuration :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_boolean) hasValue :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_boolean) isNewOrChanged :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_boolean) isNull :(xs_nonnull XS_PropertyInfo*)pi;
- (void) setBasicList :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_DataValueList*)value;
- (void) setBinary :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull NSData*)value;
- (void) setBoolean :(xs_nonnull XS_PropertyInfo*)pi :(xs_boolean)value;
- (void) setByte :(xs_nonnull XS_PropertyInfo*)pi :(xs_byte)value;
- (void) setChar :(xs_nonnull XS_PropertyInfo*)pi :(xs_char)value;
- (void) setComplex :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_ComplexValue*)value;
- (void) setComplexList :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_ComplexValueList*)value;
- (void) setDayTimeDuration :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_DayTimeDuration*)value;
- (void) setDecimal :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_BigDecimal*)value;
- (void) setDefaults;
- (void) setDouble :(xs_nonnull XS_PropertyInfo*)pi :(xs_double)value;
- (void) setDynamic :(xs_nonnull NSString*)name :(xs_nullable XS_DataValue*)value;
- (void) setDynamicProperties :(xs_nonnull XS_DataValueMap*)value;
- (void) setEntity :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_EntityValue*)value;
- (void) setEntityList :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_EntityValueList*)value;
- (void) setEnum :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_EnumValue*)value;
- (void) setFloat :(xs_nonnull XS_PropertyInfo*)pi :(xs_float)value;
- (void) setGlobalDateTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_GlobalDateTime*)value;
- (void) setGuid :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_GuidValue*)value;
- (void) setInt :(xs_nonnull XS_PropertyInfo*)pi :(xs_int)value;
- (void) setInteger :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_BigInteger*)value;
- (void) setLocalDate :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_LocalDate*)value;
- (void) setLocalDateTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_LocalDateTime*)value;
- (void) setLocalTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_LocalTime*)value;
- (void) setLong :(xs_nonnull XS_PropertyInfo*)pi :(xs_long)value;
- (void) setNull :(xs_nonnull XS_PropertyInfo*)pi;
- (void) setNullableBinary :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable NSData*)value;
- (void) setNullableBoolean :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_boolean)value;
- (void) setNullableByte :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_byte)value;
- (void) setNullableChar :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_char)value;
- (void) setNullableComplex :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_ComplexValue*)value;
- (void) setNullableDayTimeDuration :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DayTimeDuration*)value;
- (void) setNullableDecimal :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_BigDecimal*)value;
- (void) setNullableDouble :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_double)value;
- (void) setNullableEntity :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_EntityValue*)value;
- (void) setNullableEnum :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_EnumValue*)value;
- (void) setNullableFloat :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_float)value;
- (void) setNullableGlobalDateTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_GlobalDateTime*)value;
- (void) setNullableGuid :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_GuidValue*)value;
- (void) setNullableInt :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_int)value;
- (void) setNullableInteger :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_BigInteger*)value;
- (void) setNullableLocalDate :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_LocalDate*)value;
- (void) setNullableLocalDateTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_LocalDateTime*)value;
- (void) setNullableLocalTime :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_LocalTime*)value;
- (void) setNullableLong :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_long)value;
- (void) setNullableShort :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_short)value;
- (void) setNullableString :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable NSString*)value;
- (void) setNullableUnsignedByte :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_int)value;
- (void) setNullableUnsignedShort :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable_int)value;
- (void) setNullableYearMonthDuration :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_YearMonthDuration*)value;
- (void) setRequiredValue :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_DataValue*)value;
- (void) setShort :(xs_nonnull XS_PropertyInfo*)pi :(xs_short)value;
- (void) setString :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull NSString*)value;
- (void) setUnsignedByte :(xs_nonnull XS_PropertyInfo*)pi :(xs_int)value;
- (void) setUnsignedShort :(xs_nonnull XS_PropertyInfo*)pi :(xs_int)value;
- (void) setValue :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)value;
- (void) setValuePath :(xs_nullable NSString*)value;
- (void) setYearMonthDuration :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_YearMonthDuration*)value;
- (xs_nonnull XS_StructureType*) structureType;
- (void) unset :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_nullable NSString*) valuePath;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataValueMap* dynamicProperties;
@property (xs__nonnull nonatomic, readonly, strong) XS_StructureType* structureType;
@property (xs__nullable nonatomic, readwrite) NSString* valuePath;
@end
#endif

#ifdef import_XS_StructureBase_private
#ifndef imported_XS_StructureBase_private
#define imported_XS_StructureBase_private
@interface XS_StructureBase (private)
- (xs_int) checkID :(xs_nonnull XS_PropertyInfo*)pi;
- (void) checkNotNullable :(xs_nullable NSObject*)value :(xs_nonnull NSString*)caller;
- (void) checkPropertyGet :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)dv;
- (void) checkPropertySet :(xs_nonnull XS_PropertyInfo*)pi :(xs_nullable XS_DataValue*)dv;
- (xs_boolean) checkPropertyType :(xs_nonnull XS_PropertyInfo*)pi :(xs_nonnull XS_DataValue*)dv;
+ (xs_nonnull XS_StreamLink*) _new1 :(xs_nonnull XS_StructureType*)p1 :(xs_nullable XS_PropertyInfo*)p2;
@end
#endif
#endif

#ifdef import_XS_StructureBase_internal
#ifndef imported_XS_StructureBase_internal
#define imported_XS_StructureBase_internal
@interface XS_StructureBase (internal)
- (void) copyDynamicProperties :(xs_nonnull XS_StructureBase*)from;
- (void) dataInit;
- (xs_nonnull XS_DataValueList*) my_data;
- (xs_nonnull XS_BooleanList*) my_has;
- (void) prepareToSet;
- (void) setMy_data :(xs_nonnull XS_DataValueList*)value;
- (void) setMy_has :(xs_nonnull XS_BooleanList*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataValueList* my_data;
@property (xs__nonnull nonatomic, readwrite, strong) XS_BooleanList* my_has;
@end
#endif
#endif

#ifndef imported_XS_StructureType_public
#define imported_XS_StructureType_public
@interface XS_StructureType : XS_DataType
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private XS_ObjectFactory* xs___nullable  objectFactory_;
    @private xs_boolean isAbstract_;
    @private xs_boolean isOpenType_;
    @private XS_AnnotationList* xs___nonnull  annotationList_;
    @private XS_AnnotationMap* xs___nonnull  annotationMap_;
    @private XS_PropertyInfoList* xs___nonnull  propertyList_;
    @private XS_PropertyInfoMap* xs___nonnull  propertyMap_;
    @private XS_PropertyInfoList* xs___nonnull  streamProperties_;
    @private XS_PropertyInfoList* xs___nonnull  complexProperties_;
    @private XS_PropertyInfoList* xs___nonnull  structuralProperties_;
    @private XS_PropertyInfoList* xs___nonnull  navigationProperties_;
    @private xs_boolean isInferred_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StructureType*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationList*) annotationList;
- (xs_nonnull XS_AnnotationMap*) annotationMap;
- (xs_nonnull XS_PropertyInfoList*) complexProperties;
- (xs_nullable XS_Annotation*) getAnnotation :(xs_nonnull NSString*)term;
- (xs_nonnull XS_PropertyInfo*) getProperty :(xs_nonnull NSString*)param_name;
- (xs_nonnull XS_Annotation*) getRequiredAnnotation :(xs_nonnull NSString*)term;
- (xs_boolean) isAbstract;
- (xs_boolean) isInferred;
- (xs_boolean) isOpenType;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nonnull XS_PropertyInfoList*) navigationProperties;
- (xs_nullable XS_ObjectFactory*) objectFactory;
- (xs_nonnull XS_PropertyInfoList*) propertyList;
- (xs_nonnull XS_PropertyInfoMap*) propertyMap;
- (xs_nonnull NSString*) qualifiedName;
- (void) setComplexProperties :(xs_nonnull XS_PropertyInfoList*)value;
- (void) setIsAbstract :(xs_boolean)value;
- (void) setIsInferred :(xs_boolean)value;
- (void) setIsOpenType :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setNavigationProperties :(xs_nonnull XS_PropertyInfoList*)value;
- (void) setObjectFactory :(xs_nullable XS_ObjectFactory*)value;
- (void) setPropertyList :(xs_nonnull XS_PropertyInfoList*)value;
- (void) setPropertyMap :(xs_nonnull XS_PropertyInfoMap*)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setStreamProperties :(xs_nonnull XS_PropertyInfoList*)value;
- (void) setStructuralProperties :(xs_nonnull XS_PropertyInfoList*)value;
- (xs_nonnull XS_PropertyInfoList*) streamProperties;
- (xs_nonnull XS_PropertyInfoList*) structuralProperties;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationList* annotationList;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationMap* annotationMap;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* complexProperties;
@property (nonatomic, readwrite) xs_boolean isAbstract;
@property (nonatomic, readwrite) xs_boolean isInferred;
@property (nonatomic, readwrite) xs_boolean isOpenType;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readonly) NSString* name;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* navigationProperties;
@property (xs__nullable nonatomic, readwrite, strong) XS_ObjectFactory* objectFactory;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* propertyList;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoMap* propertyMap;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* streamProperties;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* structuralProperties;
@end
#endif

#ifdef import_XS_UnknownValue_internal
#ifndef imported_XS_UnknownValue_internal
#define imported_XS_UnknownValue_public
/* internal */
@interface XS_UnknownValue : XS_DataValue
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_UnknownValue*) new;
- (void) _init;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif
#endif

#ifndef imported_XS_UnsignedByte_public
#define imported_XS_UnsignedByte_public
@interface XS_UnsignedByte : XS_DataValue
{
    @private xs_int value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_UnsignedByte*)x :(xs_nonnull XS_UnsignedByte*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_UnsignedByte*)x :(xs_nullable XS_UnsignedByte*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_int) getInt :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_UnsignedByte*) of :(xs_int)param_value;
+ (xs_nullable XS_UnsignedByte*) ofNullable :(xs_nullable_int)param_value;
+ (xs_int) toInt :(xs_byte)param_value;
+ (xs_nullable_int) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int value;
@end
#endif

#ifdef import_XS_UnsignedByte_private
#ifndef imported_XS_UnsignedByte_private
#define imported_XS_UnsignedByte_private
@interface XS_UnsignedByte (private)
+ (xs_nonnull XS_UnsignedByte*) new;
+ (xs_nonnull XS_UnsignedByte*) _new1 :(xs_int)p1;
@end
#endif
#endif

#ifndef imported_XS_UnsignedShort_public
#define imported_XS_UnsignedShort_public
@interface XS_UnsignedShort : XS_DataValue
{
    @private xs_int value_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_UnsignedShort*)x :(xs_nonnull XS_UnsignedShort*)y;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_UnsignedShort*)x :(xs_nullable XS_UnsignedShort*)y;
- (xs_boolean) equals :(xs_nullable NSObject*)param_value;
+ (xs_int) getInt :(xs_nullable NSObject*)param_value;
- (xs_int) hashCode;
+ (xs_nonnull XS_UnsignedShort*) of :(xs_int)param_value;
+ (xs_nullable XS_UnsignedShort*) ofNullable :(xs_nullable_int)param_value;
+ (xs_int) toInt :(xs_short)param_value;
+ (xs_nullable_int) toNullable :(xs_nullable NSObject*)param_value;
- (xs_nonnull NSString*) toString;
- (xs_int) value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int value;
@end
#endif

#ifdef import_XS_UnsignedShort_private
#ifndef imported_XS_UnsignedShort_private
#define imported_XS_UnsignedShort_private
@interface XS_UnsignedShort (private)
+ (xs_nonnull XS_UnsignedShort*) new;
+ (xs_nonnull XS_UnsignedShort*) _new1 :(xs_int)p1;
@end
#endif
#endif

#ifndef imported_XS_YearMonthDuration_public
#define imported_XS_YearMonthDuration_public
@interface XS_YearMonthDuration : XS_DataValue
{
    @private xs_byte my_sign;
    @private xs_int my_years;
    @private xs_int my_months;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_int) compare :(xs_nonnull XS_YearMonthDuration*)left :(xs_nonnull XS_YearMonthDuration*)right;
- (xs_int) compareTo :(xs_nonnull XS_YearMonthDuration*)other;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_YearMonthDuration*)left :(xs_nullable XS_YearMonthDuration*)right;
- (xs_boolean) equals :(xs_nullable NSObject*)other;
+ (xs_nonnull XS_YearMonthDuration*) from :(xs_nonnull NSString*)text;
- (xs_boolean) greaterEqual :(xs_nonnull XS_YearMonthDuration*)other;
+ (xs_boolean) greaterEqual :(xs_nonnull XS_YearMonthDuration*)left :(xs_nonnull XS_YearMonthDuration*)right;
- (xs_boolean) greaterThan :(xs_nonnull XS_YearMonthDuration*)other;
+ (xs_boolean) greaterThan :(xs_nonnull XS_YearMonthDuration*)left :(xs_nonnull XS_YearMonthDuration*)right;
- (xs_int) hashCode;
- (xs_boolean) lessEqual :(xs_nonnull XS_YearMonthDuration*)other;
+ (xs_boolean) lessEqual :(xs_nonnull XS_YearMonthDuration*)left :(xs_nonnull XS_YearMonthDuration*)right;
- (xs_boolean) lessThan :(xs_nonnull XS_YearMonthDuration*)other;
+ (xs_boolean) lessThan :(xs_nonnull XS_YearMonthDuration*)left :(xs_nonnull XS_YearMonthDuration*)right;
- (xs_int) months;
- (xs_nonnull XS_YearMonthDuration*) normalize;
- (xs_boolean) notEqual :(xs_nonnull XS_YearMonthDuration*)other;
+ (xs_boolean) notEqual :(xs_nullable XS_YearMonthDuration*)left :(xs_nullable XS_YearMonthDuration*)right;
+ (xs_nonnull XS_YearMonthDuration*) of :(xs_int)param_sign :(xs_int)param_years :(xs_int)param_months;
+ (xs_nonnull XS_YearMonthDuration*) parse :(xs_nonnull NSString*)text;
- (xs_int) sign;
- (xs_nonnull NSString*) toJSON;
- (xs_nonnull NSString*) toString;
- (xs_int) years;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (nonatomic, readonly) xs_int months;
@property (nonatomic, readonly) xs_int sign;
@property (nonatomic, readonly) xs_int years;
@end
#endif

#ifdef import_XS_YearMonthDuration_private
#ifndef imported_XS_YearMonthDuration_private
#define imported_XS_YearMonthDuration_private
@interface XS_YearMonthDuration (private)
+ (xs_nonnull XS_YearMonthDuration*) new;
+ (xs_nonnull XS_YearMonthDuration*) _new1 :(xs_int)p1 :(xs_int)p2 :(xs_byte)p3;
@end
#endif
#endif

#ifndef imported_XS_AnnotationList_public
#define imported_XS_AnnotationList_public
@interface XS_AnnotationList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationList*) new;
+ (xs_nonnull XS_AnnotationList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnnotationList*) add :(xs_nonnull XS_Annotation*)item;
- (xs_nonnull XS_AnnotationList*) addAll :(xs_nonnull XS_AnnotationList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_AnnotationList*) copy;
+ (xs_nonnull XS_AnnotationList*) empty;
- (xs_nonnull XS_Annotation*) first;
- (xs_nonnull XS_Annotation*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_Annotation*)item;
- (xs_int) indexOf :(xs_nonnull XS_Annotation*)item;
- (xs_int) indexOf :(xs_nonnull XS_Annotation*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_Annotation*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_AnnotationList*)list;
- (xs_nonnull XS_Annotation*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_Annotation*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_Annotation*)item :(xs_int)start;
- (xs_nonnull XS_Annotation*) pop;
- (xs_int) push :(xs_nonnull XS_Annotation*)item;
- (xs_nonnull XS_AnnotationList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_Annotation*)item;
+ (xs_nonnull XS_AnnotationList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_Annotation*) shift;
- (xs_nonnull XS_AnnotationList*) slice :(xs_int)start;
- (xs_nonnull XS_AnnotationList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_AnnotationList*) sort;
- (xs_int) unshift :(xs_nonnull XS_Annotation*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_AnnotationMap_EntryList_public
#define imported_XS_AnnotationMap_EntryList_public
@interface XS_AnnotationMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnnotationMap_EntryList*) add :(xs_nonnull XS_AnnotationMap_Entry*)item;
- (xs_nonnull XS_AnnotationMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_AnnotationMap_Entry*)item;
@end
#endif

#ifndef imported_XS_AnnotationTermList_public
#define imported_XS_AnnotationTermList_public
@interface XS_AnnotationTermList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationTermList*) new;
+ (xs_nonnull XS_AnnotationTermList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnnotationTermList*) add :(xs_nonnull XS_AnnotationTerm*)item;
- (xs_nonnull XS_AnnotationTermList*) addAll :(xs_nonnull XS_AnnotationTermList*)list;
- (xs_nonnull XS_AnnotationTermList*) copy;
+ (xs_nonnull XS_AnnotationTermList*) empty;
- (xs_nonnull XS_AnnotationTerm*) first;
- (xs_nonnull XS_AnnotationTerm*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_AnnotationTerm*)item;
- (xs_int) indexOf :(xs_nonnull XS_AnnotationTerm*)item;
- (xs_int) indexOf :(xs_nonnull XS_AnnotationTerm*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_AnnotationTerm*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_AnnotationTermList*)list;
- (xs_nonnull XS_AnnotationTerm*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_AnnotationTerm*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_AnnotationTerm*)item :(xs_int)start;
- (xs_nonnull XS_AnnotationTerm*) pop;
- (xs_int) push :(xs_nonnull XS_AnnotationTerm*)item;
- (xs_nonnull XS_AnnotationTermList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_AnnotationTerm*)item;
+ (xs_nonnull XS_AnnotationTermList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_AnnotationTerm*) shift;
- (xs_nonnull XS_AnnotationTermList*) slice :(xs_int)start;
- (xs_nonnull XS_AnnotationTermList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_AnnotationTermList*) sort;
- (xs_int) unshift :(xs_nonnull XS_AnnotationTerm*)item;
@end
#endif

#ifndef imported_XS_AnnotationTermMap_EntryList_public
#define imported_XS_AnnotationTermMap_EntryList_public
@interface XS_AnnotationTermMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationTermMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnnotationTermMap_EntryList*) add :(xs_nonnull XS_AnnotationTermMap_Entry*)item;
- (xs_nonnull XS_AnnotationTermMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_AnnotationTermMap_Entry*)item;
@end
#endif

#ifndef imported_XS_AnyList_public
#define imported_XS_AnyList_public
@interface XS_AnyList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnyList*) new;
+ (xs_nonnull XS_AnyList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnyList*) add :(xs_nullable NSObject*)item;
- (xs_nonnull XS_AnyList*) addAll :(xs_nonnull XS_AnyList*)list;
- (xs_nonnull XS_AnyList*) copy;
+ (xs_nonnull XS_AnyList*) empty;
- (xs_nullable NSObject*) first;
- (xs_nullable NSObject*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nullable NSObject*)item;
- (xs_int) indexOf :(xs_nullable NSObject*)item;
- (xs_int) indexOf :(xs_nullable NSObject*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nullable NSObject*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_AnyList*)list;
- (xs_nullable NSObject*) last;
- (xs_int) lastIndexOf :(xs_nullable NSObject*)item;
- (xs_int) lastIndexOf :(xs_nullable NSObject*)item :(xs_int)start;
- (xs_nullable NSObject*) pop;
- (xs_int) push :(xs_nullable NSObject*)item;
- (xs_nonnull XS_AnyList*) reverse;
- (void) set :(xs_int)index :(xs_nullable NSObject*)item;
+ (xs_nonnull XS_AnyList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nullable NSObject*) shift;
- (xs_nonnull XS_AnyList*) slice :(xs_int)start;
- (xs_nonnull XS_AnyList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_AnyList*) sort;
- (xs_int) unshift :(xs_nullable NSObject*)item;
@end
#endif

#ifndef imported_XS_AnyMap_EntryList_public
#define imported_XS_AnyMap_EntryList_public
@interface XS_AnyMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnyMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnyMap_EntryList*) add :(xs_nonnull XS_AnyMap_Entry*)item;
- (xs_nonnull XS_AnyMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_AnyMap_Entry*)item;
@end
#endif

#ifndef imported_XS_BinaryList_public
#define imported_XS_BinaryList_public
@interface XS_BinaryList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_BinaryList*) new;
+ (xs_nonnull XS_BinaryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_BinaryList*) add :(xs_nonnull NSData*)item;
- (xs_nonnull XS_BinaryList*) addAll :(xs_nonnull XS_BinaryList*)list;
- (xs_nonnull XS_BinaryList*) copy;
+ (xs_nonnull XS_BinaryList*) empty;
- (xs_nonnull NSData*) first;
- (xs_nonnull NSData*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull NSData*)item;
- (xs_int) indexOf :(xs_nonnull NSData*)item;
- (xs_int) indexOf :(xs_nonnull NSData*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull NSData*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_BinaryList*)list;
- (xs_nonnull NSData*) last;
- (xs_int) lastIndexOf :(xs_nonnull NSData*)item;
- (xs_int) lastIndexOf :(xs_nonnull NSData*)item :(xs_int)start;
- (xs_nonnull NSData*) pop;
- (xs_int) push :(xs_nonnull NSData*)item;
- (xs_nonnull XS_BinaryList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull NSData*)item;
+ (xs_nonnull XS_BinaryList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull NSData*) shift;
- (xs_nonnull XS_BinaryList*) slice :(xs_int)start;
- (xs_nonnull XS_BinaryList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_BinaryList*) sort;
+ (xs_nonnull XS_BinaryList*) split :(xs_nonnull NSData*)value :(xs_nonnull NSData*)separator;
+ (xs_nonnull XS_BinaryList*) split :(xs_nonnull NSData*)value :(xs_nonnull NSData*)separator :(xs_int)limit;
- (xs_int) unshift :(xs_nonnull NSData*)item;
@end
#endif

#ifndef imported_XS_BooleanList_public
#define imported_XS_BooleanList_public
@interface XS_BooleanList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_BooleanList*) new;
+ (xs_nonnull XS_BooleanList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_BooleanList*) add :(xs_boolean)item;
- (xs_nonnull XS_BooleanList*) addAll :(xs_nonnull XS_BooleanList*)list;
- (xs_nonnull XS_BooleanList*) copy;
+ (xs_nonnull XS_BooleanList*) empty;
- (xs_boolean) first;
- (xs_boolean) get :(xs_int)index;
- (xs_boolean) includes :(xs_boolean)item;
- (xs_int) indexOf :(xs_boolean)item;
- (xs_int) indexOf :(xs_boolean)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_boolean)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_BooleanList*)list;
- (xs_boolean) last;
- (xs_int) lastIndexOf :(xs_boolean)item;
- (xs_int) lastIndexOf :(xs_boolean)item :(xs_int)start;
- (xs_boolean) pop;
- (xs_int) push :(xs_boolean)item;
- (xs_nonnull XS_BooleanList*) reverse;
- (void) set :(xs_int)index :(xs_boolean)item;
+ (xs_nonnull XS_BooleanList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_boolean) shift;
- (xs_nonnull XS_BooleanList*) slice :(xs_int)start;
- (xs_nonnull XS_BooleanList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_BooleanList*) sort;
- (xs_int) unshift :(xs_boolean)item;
@end
#endif

#ifndef imported_XS_ByteList_public
#define imported_XS_ByteList_public
@interface XS_ByteList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ByteList*) new;
+ (xs_nonnull XS_ByteList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ByteList*) add :(xs_byte)item;
- (xs_nonnull XS_ByteList*) addAll :(xs_nonnull XS_ByteList*)list;
- (xs_nonnull XS_ByteList*) copy;
+ (xs_nonnull XS_ByteList*) empty;
- (xs_byte) first;
- (xs_byte) get :(xs_int)index;
- (xs_boolean) includes :(xs_byte)item;
- (xs_int) indexOf :(xs_byte)item;
- (xs_int) indexOf :(xs_byte)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_byte)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ByteList*)list;
- (xs_byte) last;
- (xs_int) lastIndexOf :(xs_byte)item;
- (xs_int) lastIndexOf :(xs_byte)item :(xs_int)start;
- (xs_byte) pop;
- (xs_int) push :(xs_byte)item;
- (xs_nonnull XS_ByteList*) reverse;
- (void) set :(xs_int)index :(xs_byte)item;
+ (xs_nonnull XS_ByteList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_byte) shift;
- (xs_nonnull XS_ByteList*) slice :(xs_int)start;
- (xs_nonnull XS_ByteList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ByteList*) sort;
- (xs_int) unshift :(xs_byte)item;
@end
#endif

#ifndef imported_XS_ByteStream_public
#define imported_XS_ByteStream_public
@interface XS_ByteStream : XS_StreamBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ByteStream*) new;
- (void) _init;
- (void) copyToFile :(xs_nonnull NSString*)file;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_ByteStream*) empty;
+ (xs_nonnull XS_ByteStream*) fromBinary :(xs_nonnull NSData*)data;
+ (xs_nonnull XS_ByteStream*) fromBinary :(xs_nonnull NSData*)data :(xs_int)offset;
+ (xs_nonnull XS_ByteStream*) fromBinary :(xs_nonnull NSData*)data :(xs_int)offset :(xs_int)param_length;
+ (xs_nonnull XS_ByteStream*) fromFile :(xs_nonnull NSString*)file;
- (xs_int) read :(xs_nonnull XS_ByteBuffer*)buffer :(xs_int)length;
- (xs_nonnull NSData*) readAndClose;
- (xs_nullable NSData*) readBinary;
- (xs_nullable NSData*) readBinary :(xs_int)length;
- (xs_int) readByte;
+ (xs_nonnull XS_ByteStream*) toFile :(xs_nonnull NSString*)file;
- (xs_nonnull NSString*) toString;
- (void) undoRead :(xs_byte)data;
- (void) write :(xs_nonnull XS_ByteBuffer*)data;
- (void) write :(xs_nonnull XS_ByteBuffer*)data :(xs_int)offset;
- (void) write :(xs_nonnull XS_ByteBuffer*)data :(xs_int)offset :(xs_int)param_length;
- (void) writeBinary :(xs_nonnull NSData*)data;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset :(xs_int)param_length;
- (void) writeByte :(xs_byte)data;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_ChangedLinkList_public
#define imported_XS_ChangedLinkList_public
@interface XS_ChangedLinkList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ChangedLinkList*) new;
+ (xs_nonnull XS_ChangedLinkList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ChangedLinkList*) add :(xs_nonnull XS_ChangedLink*)item;
- (xs_nonnull XS_ChangedLinkList*) addAll :(xs_nonnull XS_ChangedLinkList*)list;
- (xs_nonnull XS_ChangedLinkList*) copy;
+ (xs_nonnull XS_ChangedLinkList*) empty;
- (xs_nonnull XS_ChangedLink*) first;
- (xs_nonnull XS_ChangedLink*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_ChangedLink*)item;
- (xs_int) indexOf :(xs_nonnull XS_ChangedLink*)item;
- (xs_int) indexOf :(xs_nonnull XS_ChangedLink*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_ChangedLink*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ChangedLinkList*)list;
- (xs_nonnull XS_ChangedLink*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_ChangedLink*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_ChangedLink*)item :(xs_int)start;
- (xs_nonnull XS_ChangedLink*) pop;
- (xs_int) push :(xs_nonnull XS_ChangedLink*)item;
- (xs_nonnull XS_ChangedLinkList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_ChangedLink*)item;
+ (xs_nonnull XS_ChangedLinkList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_ChangedLink*) shift;
- (xs_nonnull XS_ChangedLinkList*) slice :(xs_int)start;
- (xs_nonnull XS_ChangedLinkList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ChangedLinkList*) sort;
- (xs_int) unshift :(xs_nonnull XS_ChangedLink*)item;
@end
#endif

#ifndef imported_XS_CharList_public
#define imported_XS_CharList_public
@interface XS_CharList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CharList*) new;
+ (xs_nonnull XS_CharList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_CharList*) add :(xs_char)item;
- (xs_nonnull XS_CharList*) addAll :(xs_nonnull XS_CharList*)list;
- (xs_nonnull XS_CharList*) copy;
+ (xs_nonnull XS_CharList*) empty;
- (xs_char) first;
- (xs_char) get :(xs_int)index;
- (xs_boolean) includes :(xs_char)item;
- (xs_int) indexOf :(xs_char)item;
- (xs_int) indexOf :(xs_char)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_char)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_CharList*)list;
- (xs_char) last;
- (xs_int) lastIndexOf :(xs_char)item;
- (xs_int) lastIndexOf :(xs_char)item :(xs_int)start;
- (xs_char) pop;
- (xs_int) push :(xs_char)item;
- (xs_nonnull XS_CharList*) reverse;
- (void) set :(xs_int)index :(xs_char)item;
+ (xs_nonnull XS_CharList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_char) shift;
- (xs_nonnull XS_CharList*) slice :(xs_int)start;
- (xs_nonnull XS_CharList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_CharList*) sort;
- (xs_int) unshift :(xs_char)item;
@end
#endif

#ifndef imported_XS_CharStream_public
#define imported_XS_CharStream_public
@interface XS_CharStream : XS_StreamBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CharStream*) new;
- (void) _init;
- (void) copyToFile :(xs_nonnull NSString*)file;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_CharStream*) empty;
+ (xs_nonnull XS_CharStream*) fromBytes :(xs_nonnull XS_ByteStream*)input;
+ (xs_nonnull XS_CharStream*) fromFile :(xs_nonnull NSString*)file;
+ (xs_nonnull XS_CharStream*) fromString :(xs_nonnull NSString*)text;
+ (xs_nonnull XS_CharStream*) fromString :(xs_nonnull NSString*)text :(xs_int)offset;
+ (xs_nonnull XS_CharStream*) fromString :(xs_nonnull NSString*)text :(xs_int)offset :(xs_int)param_length;
- (xs_int) read :(xs_nonnull XS_CharBuffer*)buffer :(xs_int)length;
- (xs_nonnull NSString*) readAndClose;
- (xs_int) readChar;
- (xs_nullable NSString*) readString;
- (xs_nullable NSString*) readString :(xs_int)length;
+ (xs_nonnull XS_CharStream*) toFile :(xs_nonnull NSString*)file;
- (xs_nonnull NSString*) toString;
- (void) undoRead :(xs_char)text;
- (void) write :(xs_nonnull XS_CharBuffer*)text;
- (void) write :(xs_nonnull XS_CharBuffer*)text :(xs_int)offset;
- (void) write :(xs_nonnull XS_CharBuffer*)text :(xs_int)offset :(xs_int)param_length;
- (void) writeChar :(xs_char)text;
- (void) writeString :(xs_nonnull NSString*)text;
- (void) writeString :(xs_nonnull NSString*)text :(xs_int)offset;
- (void) writeString :(xs_nonnull NSString*)text :(xs_int)offset :(xs_int)param_length;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_ComplexListBase_public
#define imported_XS_ComplexListBase_public
@interface XS_ComplexListBase : XS_ListBase
{
    @private NSString* xs___nullable  readLink_;
    @private NSString* xs___nullable  nextLink_;
    @private xs_nullable_int totalCount_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexListBase*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nullable NSString*) nextLink;
- (xs_nullable NSString*) readLink;
- (void) setNextLink :(xs_nullable NSString*)value;
- (void) setReadLink :(xs_nullable NSString*)value;
- (void) setTotalCount :(xs_nullable_int)value;
- (xs_nullable_int) totalCount;
@property (xs__nullable nonatomic, readwrite) NSString* nextLink;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@property (nonatomic, readwrite) xs_nullable_int totalCount;
@end
#endif

#ifndef imported_XS_ComplexType_public
#define imported_XS_ComplexType_public
@interface XS_ComplexType : XS_StructureType
{
    @private XS_ComplexTypeList* xs___nullable  subtypes_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexType*) new;
- (void) _init;
+ (xs_nonnull XS_ComplexType*) abstractBase;
- (xs_int) code;
- (xs_boolean) hasSubtypes;
- (xs_boolean) hasSupertype;
- (void) setSubtypes :(xs_nullable XS_ComplexTypeList*)value;
- (void) setSupertype :(xs_nullable XS_ComplexType*)value;
- (xs_nullable XS_ComplexTypeList*) subtypes;
- (xs_nullable XS_ComplexType*) supertype;
- (xs_nonnull NSString*) toString;
+ (xs_nonnull XS_ComplexType*) undefined;
- (xs_nonnull XS_ComplexType*) withFactory :(xs_nonnull XS_ObjectFactory*)factory;
@property (nonatomic, readonly) xs_int code;
@property (nonatomic, readonly) xs_boolean hasSubtypes;
@property (nonatomic, readonly) xs_boolean hasSupertype;
@property (xs__nullable nonatomic, readwrite, strong) XS_ComplexTypeList* subtypes;
@property (xs__nullable nonatomic, readonly, strong) XS_ComplexType* supertype;
@end
#endif

#ifdef import_XS_ComplexType_private
#ifndef imported_XS_ComplexType_private
#define imported_XS_ComplexType_private
@interface XS_ComplexType (private)
+ (xs_nonnull XS_ComplexType*) _new1 :(xs_nonnull XS_PropertyInfoList*)p1 :(xs_nonnull XS_PropertyInfoList*)p2 :(xs_nonnull NSString*)p3 :(xs_nonnull XS_PropertyInfoList*)p4 :(xs_nonnull XS_PropertyInfoList*)p5 :(xs_nonnull XS_PropertyInfoList*)p6 :(xs_nonnull XS_PropertyInfoMap*)p7 :(xs_nonnull NSString*)p8;
+ (xs_nonnull XS_ComplexType*) _new2 :(xs_boolean)p1 :(xs_nonnull XS_PropertyInfoList*)p2 :(xs_nonnull XS_PropertyInfoList*)p3 :(xs_nonnull NSString*)p4 :(xs_nonnull XS_PropertyInfoList*)p5 :(xs_nonnull XS_PropertyInfoList*)p6 :(xs_nonnull XS_PropertyInfoList*)p7 :(xs_nonnull XS_PropertyInfoMap*)p8 :(xs_nonnull NSString*)p9;
@end
#endif
#endif

#ifndef imported_XS_ComplexTypeList_public
#define imported_XS_ComplexTypeList_public
@interface XS_ComplexTypeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexTypeList*) new;
+ (xs_nonnull XS_ComplexTypeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexTypeList*) add :(xs_nonnull XS_ComplexType*)item;
- (xs_nonnull XS_ComplexTypeList*) addAll :(xs_nonnull XS_ComplexTypeList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_ComplexTypeList*) copy;
+ (xs_nonnull XS_ComplexTypeList*) empty;
- (xs_nonnull XS_ComplexType*) first;
- (xs_nonnull XS_ComplexType*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_ComplexType*)item;
- (xs_int) indexOf :(xs_nonnull XS_ComplexType*)item;
- (xs_int) indexOf :(xs_nonnull XS_ComplexType*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_ComplexType*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ComplexTypeList*)list;
- (xs_nonnull XS_ComplexType*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_ComplexType*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_ComplexType*)item :(xs_int)start;
- (xs_nonnull XS_ComplexType*) pop;
- (xs_int) push :(xs_nonnull XS_ComplexType*)item;
- (xs_nonnull XS_ComplexTypeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_ComplexType*)item;
+ (xs_nonnull XS_ComplexTypeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_ComplexType*) shift;
- (xs_nonnull XS_ComplexTypeList*) slice :(xs_int)start;
- (xs_nonnull XS_ComplexTypeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ComplexTypeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_ComplexType*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_ComplexTypeMap_EntryList_public
#define imported_XS_ComplexTypeMap_EntryList_public
@interface XS_ComplexTypeMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexTypeMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexTypeMap_EntryList*) add :(xs_nonnull XS_ComplexTypeMap_Entry*)item;
- (xs_nonnull XS_ComplexTypeMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_ComplexTypeMap_Entry*)item;
@end
#endif

#ifndef imported_XS_ComplexValue_public
#define imported_XS_ComplexValue_public
@interface XS_ComplexValue : XS_StructureBase
{
    @private XS_ComplexType* xs___nonnull  my_type_;
    @private XS_ComplexValue* xs___nullable  oldComplex_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValue*) new;
+ (xs_nonnull XS_ComplexValue*) new :(xs_nullable XS_ComplexType*)type;
- (void) _init :(xs_nullable XS_ComplexType*)type;
- (xs_nonnull XS_ComplexType*) complexType;
- (xs_nonnull XS_ComplexValue*) copyComplex;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_boolean) equal :(xs_nullable XS_ComplexValue*)a :(xs_nullable XS_ComplexValue*)b;
- (xs_boolean) isNewOrChanged :(xs_nonnull XS_PropertyInfo*)pi;
+ (xs_nonnull XS_ComplexValue*) ofType :(xs_nonnull XS_ComplexType*)type;
- (xs_nullable XS_ComplexValue*) oldComplex;
- (void) setOldComplex :(xs_nullable XS_ComplexValue*)value;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly, strong) XS_ComplexType* complexType;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readwrite, strong) XS_ComplexValue* oldComplex;
@end
#endif

#ifdef import_XS_ComplexValue_internal
#ifndef imported_XS_ComplexValue_internal
#define imported_XS_ComplexValue_internal
@interface XS_ComplexValue (internal)
- (xs_nonnull XS_ComplexType*) my_type;
- (void) prepareToSet;
- (void) setMy_type :(xs_nonnull XS_ComplexType*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ComplexType* my_type;
@end
#endif
#endif

#ifndef imported_XS_ComplexValueListWithNulls_public
#define imported_XS_ComplexValueListWithNulls_public
@interface XS_ComplexValueListWithNulls : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueListWithNulls*) new;
+ (xs_nonnull XS_ComplexValueListWithNulls*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexValueListWithNulls*) add :(xs_nullable XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueListWithNulls*) addAll :(xs_nonnull XS_ComplexValueListWithNulls*)list;
- (xs_nonnull XS_ComplexValueListWithNulls*) copy;
+ (xs_nonnull XS_ComplexValueListWithNulls*) empty;
- (xs_nullable XS_ComplexValue*) first;
- (xs_nullable XS_ComplexValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nullable XS_ComplexValue*)item;
- (xs_int) indexOf :(xs_nullable XS_ComplexValue*)item;
- (xs_int) indexOf :(xs_nullable XS_ComplexValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nullable XS_ComplexValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ComplexValueListWithNulls*)list;
- (xs_nullable XS_ComplexValue*) last;
- (xs_int) lastIndexOf :(xs_nullable XS_ComplexValue*)item;
- (xs_int) lastIndexOf :(xs_nullable XS_ComplexValue*)item :(xs_int)start;
- (xs_nullable XS_ComplexValue*) pop;
- (xs_int) push :(xs_nullable XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueListWithNulls*) reverse;
- (void) set :(xs_int)index :(xs_nullable XS_ComplexValue*)item;
+ (xs_nonnull XS_ComplexValueListWithNulls*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nullable XS_ComplexValue*) shift;
- (xs_nonnull XS_ComplexValueListWithNulls*) slice :(xs_int)start;
- (xs_nonnull XS_ComplexValueListWithNulls*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ComplexValueListWithNulls*) sort;
- (xs_int) unshift :(xs_nullable XS_ComplexValue*)item;
@end
#endif

#ifndef imported_XS_ComplexValueMap_EntryList_public
#define imported_XS_ComplexValueMap_EntryList_public
@interface XS_ComplexValueMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexValueMap_EntryList*) add :(xs_nonnull XS_ComplexValueMap_Entry*)item;
- (xs_nonnull XS_ComplexValueMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_ComplexValueMap_Entry*)item;
@end
#endif

#ifndef imported_XS_CurveCoordinates_public
#define imported_XS_CurveCoordinates_public
@interface XS_CurveCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CurveCoordinates*) new;
+ (xs_nonnull XS_CurveCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_CurveCoordinates*) add :(xs_nonnull XS_PointCoordinates*)item;
- (xs_nonnull XS_CurveCoordinates*) addAll :(xs_nonnull XS_CurveCoordinates*)list;
- (xs_nonnull XS_CurveCoordinates*) copy;
+ (xs_nonnull XS_CurveCoordinates*) empty;
- (xs_nonnull XS_PointCoordinates*) first;
- (xs_nonnull XS_PointCoordinates*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PointCoordinates*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_PointCoordinates*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_CurveCoordinates*)list;
- (xs_nonnull XS_PointCoordinates*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_PointCoordinates*)item :(xs_int)start;
- (xs_nonnull XS_PointCoordinates*) pop;
- (xs_int) push :(xs_nonnull XS_PointCoordinates*)item;
- (xs_nonnull XS_CurveCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_PointCoordinates*)item;
+ (xs_nonnull XS_CurveCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_PointCoordinates*) shift;
- (xs_nonnull XS_CurveCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_CurveCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_CurveCoordinates*) sort;
- (xs_int) unshift :(xs_nonnull XS_PointCoordinates*)item;
@end
#endif

#ifndef imported_XS_CustomPathList_public
#define imported_XS_CustomPathList_public
@interface XS_CustomPathList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CustomPathList*) new;
+ (xs_nonnull XS_CustomPathList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_CustomPathList*) add :(xs_nonnull XS_CustomPath*)item;
- (xs_nonnull XS_CustomPathList*) addAll :(xs_nonnull XS_CustomPathList*)list;
- (xs_nonnull XS_CustomPathList*) copy;
+ (xs_nonnull XS_CustomPathList*) empty;
- (xs_nonnull XS_CustomPath*) first;
- (xs_nonnull XS_CustomPath*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_CustomPath*)item;
- (xs_int) indexOf :(xs_nonnull XS_CustomPath*)item;
- (xs_int) indexOf :(xs_nonnull XS_CustomPath*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_CustomPath*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_CustomPathList*)list;
- (xs_nonnull XS_CustomPath*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_CustomPath*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_CustomPath*)item :(xs_int)start;
- (xs_nonnull XS_CustomPath*) pop;
- (xs_int) push :(xs_nonnull XS_CustomPath*)item;
- (xs_nonnull XS_CustomPathList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_CustomPath*)item;
+ (xs_nonnull XS_CustomPathList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_CustomPath*) shift;
- (xs_nonnull XS_CustomPathList*) slice :(xs_int)start;
- (xs_nonnull XS_CustomPathList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_CustomPathList*) sort;
- (xs_int) unshift :(xs_nonnull XS_CustomPath*)item;
@end
#endif

#ifndef imported_XS_DataFormatException_public
#define imported_XS_DataFormatException_public
@interface XS_DataFormatException : XS_DataException
{
}
+ (xs_nonnull XS_DataFormatException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_DataMethodList_public
#define imported_XS_DataMethodList_public
@interface XS_DataMethodList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodList*) new;
+ (xs_nonnull XS_DataMethodList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataMethodList*) add :(xs_nonnull XS_DataMethod*)item;
- (xs_nonnull XS_DataMethodList*) addAll :(xs_nonnull XS_DataMethodList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_DataMethodList*) copy;
+ (xs_nonnull XS_DataMethodList*) empty;
- (xs_nonnull XS_DataMethod*) first;
- (xs_nonnull XS_DataMethod*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DataMethod*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataMethod*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataMethod*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DataMethod*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataMethodList*)list;
- (xs_nonnull XS_DataMethod*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataMethod*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataMethod*)item :(xs_int)start;
- (xs_nonnull XS_DataMethod*) pop;
- (xs_int) push :(xs_nonnull XS_DataMethod*)item;
- (xs_nonnull XS_DataMethodList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DataMethod*)item;
+ (xs_nonnull XS_DataMethodList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DataMethod*) shift;
- (xs_nonnull XS_DataMethodList*) slice :(xs_int)start;
- (xs_nonnull XS_DataMethodList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataMethodList*) sort;
- (xs_int) unshift :(xs_nonnull XS_DataMethod*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_DataMethodMap_EntryList_public
#define imported_XS_DataMethodMap_EntryList_public
@interface XS_DataMethodMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMethodMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataMethodMap_EntryList*) add :(xs_nonnull XS_DataMethodMap_Entry*)item;
- (xs_nonnull XS_DataMethodMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_DataMethodMap_Entry*)item;
@end
#endif

#ifndef imported_XS_DataMetricList_public
#define imported_XS_DataMetricList_public
@interface XS_DataMetricList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMetricList*) new;
+ (xs_nonnull XS_DataMetricList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataMetricList*) add :(xs_nonnull XS_DataMetric*)item;
- (xs_nonnull XS_DataMetricList*) addAll :(xs_nonnull XS_DataMetricList*)list;
- (xs_nonnull XS_DataMetricList*) copy;
+ (xs_nonnull XS_DataMetricList*) empty;
- (xs_nonnull XS_DataMetric*) first;
- (xs_nonnull XS_DataMetric*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DataMetric*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataMetric*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataMetric*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DataMetric*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataMetricList*)list;
- (xs_nonnull XS_DataMetric*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataMetric*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataMetric*)item :(xs_int)start;
- (xs_nonnull XS_DataMetric*) pop;
- (xs_int) push :(xs_nonnull XS_DataMetric*)item;
- (xs_nonnull XS_DataMetricList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DataMetric*)item;
+ (xs_nonnull XS_DataMetricList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DataMetric*) shift;
- (xs_nonnull XS_DataMetricList*) slice :(xs_int)start;
- (xs_nonnull XS_DataMetricList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataMetricList*) sort;
- (xs_int) unshift :(xs_nonnull XS_DataMetric*)item;
@end
#endif

#ifndef imported_XS_DataMetricMap_EntryList_public
#define imported_XS_DataMetricMap_EntryList_public
@interface XS_DataMetricMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataMetricMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataMetricMap_EntryList*) add :(xs_nonnull XS_DataMetricMap_Entry*)item;
- (xs_nonnull XS_DataMetricMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_DataMetricMap_Entry*)item;
@end
#endif

#ifndef imported_XS_DataNetworkException_public
#define imported_XS_DataNetworkException_public
@interface XS_DataNetworkException : XS_DataException
{
}
+ (xs_nonnull XS_DataNetworkException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_DataQueryException_public
#define imported_XS_DataQueryException_public
@interface XS_DataQueryException : XS_DataException
{
}
+ (xs_nonnull XS_DataQueryException*) new;
- (void) _init;
+ (xs_nonnull XS_DataQueryException*) withCause :(xs_nullable NSException*)param_cause;
+ (xs_nonnull XS_DataQueryException*) withMessage :(xs_nullable NSString*)param_message;
@end
#endif

#ifdef import_XS_DataQueryException_private
#ifndef imported_XS_DataQueryException_private
#define imported_XS_DataQueryException_private
@interface XS_DataQueryException (private)
+ (xs_nonnull XS_DataQueryException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_DataQueryException*) _new2 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_DataSchemaException_public
#define imported_XS_DataSchemaException_public
@interface XS_DataSchemaException : XS_DataException
{
}
+ (xs_nonnull XS_DataSchemaException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_DataSchemaList_public
#define imported_XS_DataSchemaList_public
@interface XS_DataSchemaList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataSchemaList*) new;
+ (xs_nonnull XS_DataSchemaList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataSchemaList*) add :(xs_nonnull XS_DataSchema*)item;
- (xs_nonnull XS_DataSchemaList*) addAll :(xs_nonnull XS_DataSchemaList*)list;
- (xs_nonnull XS_DataSchemaList*) copy;
+ (xs_nonnull XS_DataSchemaList*) empty;
- (xs_nonnull XS_DataSchema*) first;
- (xs_nonnull XS_DataSchema*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DataSchema*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataSchema*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataSchema*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DataSchema*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataSchemaList*)list;
- (xs_nonnull XS_DataSchema*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataSchema*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataSchema*)item :(xs_int)start;
- (xs_nonnull XS_DataSchema*) pop;
- (xs_int) push :(xs_nonnull XS_DataSchema*)item;
- (xs_nonnull XS_DataSchemaList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DataSchema*)item;
+ (xs_nonnull XS_DataSchemaList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DataSchema*) shift;
- (xs_nonnull XS_DataSchemaList*) slice :(xs_int)start;
- (xs_nonnull XS_DataSchemaList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataSchemaList*) sort;
- (xs_int) unshift :(xs_nonnull XS_DataSchema*)item;
@end
#endif

#ifndef imported_XS_DataSchemaMap_EntryList_public
#define imported_XS_DataSchemaMap_EntryList_public
@interface XS_DataSchemaMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataSchemaMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataSchemaMap_EntryList*) add :(xs_nonnull XS_DataSchemaMap_Entry*)item;
- (xs_nonnull XS_DataSchemaMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_DataSchemaMap_Entry*)item;
@end
#endif

#ifndef imported_XS_DataServiceException_public
#define imported_XS_DataServiceException_public
@interface XS_DataServiceException : XS_DataException
{
    @private xs_int status_;
    @private XS_ErrorResponse* xs___nullable  response_;
}
+ (xs_nonnull XS_DataServiceException*) new;
- (void) _init;
- (xs_nullable XS_ErrorResponse*) response;
- (void) setResponse :(xs_nullable XS_ErrorResponse*)value;
- (void) setStatus :(xs_int)value;
- (xs_int) status;
+ (xs_nonnull XS_DataServiceException*) withCause :(xs_nullable NSException*)param_cause;
+ (xs_nonnull XS_DataServiceException*) withCauseAndMessage :(xs_nullable NSException*)param_cause :(xs_nullable NSString*)param_message;
+ (xs_nonnull XS_DataServiceException*) withMessage :(xs_nullable NSString*)param_message;
+ (xs_nonnull XS_DataServiceException*) withResponse :(xs_int)param_status :(xs_nullable NSString*)param_message :(xs_nullable XS_ErrorResponse*)param_response;
+ (xs_nonnull XS_DataServiceException*) withStatus :(xs_int)param_status;
+ (xs_nonnull XS_DataServiceException*) withStatus :(xs_int)param_status :(xs_nullable NSString*)param_message;
@property (xs__nullable nonatomic, readwrite, strong) XS_ErrorResponse* response;
@property (nonatomic, readwrite) xs_int status;
@end
#endif

#ifdef import_XS_DataServiceException_private
#ifndef imported_XS_DataServiceException_private
#define imported_XS_DataServiceException_private
@interface XS_DataServiceException (private)
+ (xs_nonnull XS_DataServiceException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_DataServiceException*) _new2 :(xs_nullable NSString*)p1 :(xs_nullable NSException*)p2;
+ (xs_nonnull XS_DataServiceException*) _new3 :(xs_nullable NSString*)p1;
+ (xs_nonnull XS_DataServiceException*) _new4 :(xs_nullable NSString*)p1 :(xs_int)p2;
@end
#endif
#endif

#ifndef imported_XS_DataStorageException_public
#define imported_XS_DataStorageException_public
@interface XS_DataStorageException : XS_DataException
{
}
+ (xs_nonnull XS_DataStorageException*) new;
- (void) _init;
@end
#endif

#ifndef imported_XS_DataStreamException_public
#define imported_XS_DataStreamException_public
@interface XS_DataStreamException : XS_DataException
{
}
+ (xs_nonnull XS_DataStreamException*) new;
- (void) _init;
+ (xs_nonnull XS_DataStreamException*) withCause :(xs_nullable NSException*)param_cause;
+ (xs_nonnull XS_DataStreamException*) withMessage :(xs_nullable NSString*)param_message;
@end
#endif

#ifdef import_XS_DataStreamException_private
#ifndef imported_XS_DataStreamException_private
#define imported_XS_DataStreamException_private
@interface XS_DataStreamException (private)
+ (xs_nonnull XS_DataStreamException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_DataStreamException*) _new2 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_DataTypeList_public
#define imported_XS_DataTypeList_public
@interface XS_DataTypeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataTypeList*) new;
+ (xs_nonnull XS_DataTypeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataTypeList*) add :(xs_nonnull XS_DataType*)item;
- (xs_nonnull XS_DataTypeList*) addAll :(xs_nonnull XS_DataTypeList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_DataTypeList*) copy;
+ (xs_nonnull XS_DataTypeList*) empty;
- (xs_nonnull XS_DataType*) first;
- (xs_nonnull XS_DataType*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DataType*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataType*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataType*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DataType*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataTypeList*)list;
- (xs_nonnull XS_DataType*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataType*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataType*)item :(xs_int)start;
- (xs_nonnull XS_DataType*) pop;
- (xs_int) push :(xs_nonnull XS_DataType*)item;
- (xs_nonnull XS_DataTypeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DataType*)item;
+ (xs_nonnull XS_DataTypeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DataType*) shift;
- (xs_nonnull XS_DataTypeList*) slice :(xs_int)start;
- (xs_nonnull XS_DataTypeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataTypeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_DataType*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifdef import_XS_DataTypeList_internal
#ifndef imported_XS_DataTypeList_internal
#define imported_XS_DataTypeList_internal
@interface XS_DataTypeList (internal)
- (xs_nullable XS_DataType*) getNullable :(xs_int)index;
@end
#endif
#endif

#ifndef imported_XS_DataTypeMap_EntryList_public
#define imported_XS_DataTypeMap_EntryList_public
@interface XS_DataTypeMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataTypeMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataTypeMap_EntryList*) add :(xs_nonnull XS_DataTypeMap_Entry*)item;
- (xs_nonnull XS_DataTypeMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_DataTypeMap_Entry*)item;
@end
#endif

#ifndef imported_XS_DataValueList_public
#define imported_XS_DataValueList_public
@interface XS_DataValueList : XS_ListBase
{
    @private XS_DataType* xs___nonnull  my_type;
    @private NSString* xs___nullable  readLink_;
    @private NSString* xs___nullable  nextLink_;
    @private xs_nullable_int totalCount_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueList*) new;
+ (xs_nonnull XS_DataValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataValueList*) add :(xs_nonnull XS_DataValue*)item;
- (xs_nonnull XS_DataValueList*) addAll :(xs_nonnull XS_DataValueList*)list;
- (xs_nonnull XS_DataValueList*) addNullable :(xs_nullable XS_DataValue*)item;
- (xs_nonnull XS_DataValueList*) copy;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_DataValueList*) empty;
+ (xs_boolean) equal :(xs_nullable XS_DataValueList*)a :(xs_nullable XS_DataValueList*)b;
- (xs_nonnull XS_DataValue*) first;
- (xs_nonnull XS_DataValue*) get :(xs_int)index;
- (xs_nullable XS_DataValue*) getNullable :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DataValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_DataValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DataValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataValueList*)list;
- (xs_nonnull XS_DataValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DataValue*)item :(xs_int)start;
- (xs_nullable NSString*) nextLink;
- (xs_nonnull XS_DataValue*) pop;
- (xs_int) push :(xs_nonnull XS_DataValue*)item;
- (xs_nullable NSString*) readLink;
- (xs_nonnull XS_DataValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DataValue*)item;
- (void) setNextLink :(xs_nullable NSString*)value;
- (void) setNullable :(xs_int)index :(xs_nullable XS_DataValue*)item;
- (void) setReadLink :(xs_nullable NSString*)value;
- (void) setTotalCount :(xs_nullable_int)value;
+ (xs_nonnull XS_DataValueList*) share :(xs_nonnull XS_ListBase*)list;
+ (xs_nonnull XS_DataValueList*) shareNullable :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DataValue*) shift;
- (xs_nonnull XS_DataValueList*) slice :(xs_int)start;
- (xs_nonnull XS_DataValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataValueList*) sort;
- (xs_nullable_int) totalCount;
- (xs_int) unshift :(xs_nonnull XS_DataValue*)item;
- (xs_nonnull XS_DataValueList*) withItemType :(xs_nonnull XS_DataType*)type;
- (xs_nonnull XS_DataValueListWithNulls*) withNulls;
- (xs_nonnull XS_DataValueList*) withType :(xs_nonnull XS_DataType*)type;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readwrite) NSString* nextLink;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@property (nonatomic, readwrite) xs_nullable_int totalCount;
@end
#endif

#ifdef import_XS_DataValueList_private
#ifndef imported_XS_DataValueList_private
#define imported_XS_DataValueList_private
@interface XS_DataValueList (private)
+ (xs_nonnull XS_DataType*) TYPE;
@end
#endif
#endif

#ifndef imported_XS_DataValueListWithNulls_public
#define imported_XS_DataValueListWithNulls_public
@interface XS_DataValueListWithNulls : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueListWithNulls*) new;
+ (xs_nonnull XS_DataValueListWithNulls*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataValueListWithNulls*) add :(xs_nullable XS_DataValue*)item;
- (xs_nonnull XS_DataValueListWithNulls*) addAll :(xs_nonnull XS_DataValueListWithNulls*)list;
- (xs_nonnull XS_DataValueListWithNulls*) copy;
+ (xs_nonnull XS_DataValueListWithNulls*) empty;
- (xs_nullable XS_DataValue*) first;
- (xs_nullable XS_DataValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nullable XS_DataValue*)item;
- (xs_int) indexOf :(xs_nullable XS_DataValue*)item;
- (xs_int) indexOf :(xs_nullable XS_DataValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nullable XS_DataValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DataValueListWithNulls*)list;
- (xs_nullable XS_DataValue*) last;
- (xs_int) lastIndexOf :(xs_nullable XS_DataValue*)item;
- (xs_int) lastIndexOf :(xs_nullable XS_DataValue*)item :(xs_int)start;
- (xs_nullable XS_DataValue*) pop;
- (xs_int) push :(xs_nullable XS_DataValue*)item;
- (xs_nonnull XS_DataValueListWithNulls*) reverse;
- (void) set :(xs_int)index :(xs_nullable XS_DataValue*)item;
+ (xs_nonnull XS_DataValueListWithNulls*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nullable XS_DataValue*) shift;
- (xs_nonnull XS_DataValueListWithNulls*) slice :(xs_int)start;
- (xs_nonnull XS_DataValueListWithNulls*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DataValueListWithNulls*) sort;
- (xs_int) unshift :(xs_nullable XS_DataValue*)item;
@end
#endif

#ifndef imported_XS_DataValueMap_EntryList_public
#define imported_XS_DataValueMap_EntryList_public
@interface XS_DataValueMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataValueMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DataValueMap_EntryList*) add :(xs_nonnull XS_DataValueMap_Entry*)item;
- (xs_nonnull XS_DataValueMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_DataValueMap_Entry*)item;
@end
#endif

#ifndef imported_XS_DayTimeDurationList_public
#define imported_XS_DayTimeDurationList_public
@interface XS_DayTimeDurationList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DayTimeDurationList*) new;
+ (xs_nonnull XS_DayTimeDurationList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DayTimeDurationList*) add :(xs_nonnull XS_DayTimeDuration*)item;
- (xs_nonnull XS_DayTimeDurationList*) addAll :(xs_nonnull XS_DayTimeDurationList*)list;
- (xs_nonnull XS_DayTimeDurationList*) copy;
+ (xs_nonnull XS_DayTimeDurationList*) empty;
- (xs_nonnull XS_DayTimeDuration*) first;
- (xs_nonnull XS_DayTimeDuration*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_DayTimeDuration*)item;
- (xs_int) indexOf :(xs_nonnull XS_DayTimeDuration*)item;
- (xs_int) indexOf :(xs_nonnull XS_DayTimeDuration*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_DayTimeDuration*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DayTimeDurationList*)list;
- (xs_nonnull XS_DayTimeDuration*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_DayTimeDuration*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_DayTimeDuration*)item :(xs_int)start;
- (xs_nonnull XS_DayTimeDuration*) pop;
- (xs_int) push :(xs_nonnull XS_DayTimeDuration*)item;
- (xs_nonnull XS_DayTimeDurationList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_DayTimeDuration*)item;
+ (xs_nonnull XS_DayTimeDurationList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_DayTimeDuration*) shift;
- (xs_nonnull XS_DayTimeDurationList*) slice :(xs_int)start;
- (xs_nonnull XS_DayTimeDurationList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DayTimeDurationList*) sort;
- (xs_int) unshift :(xs_nonnull XS_DayTimeDuration*)item;
@end
#endif

#ifndef imported_XS_DecimalList_public
#define imported_XS_DecimalList_public
@interface XS_DecimalList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DecimalList*) new;
+ (xs_nonnull XS_DecimalList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DecimalList*) add :(xs_nonnull XS_BigDecimal*)item;
- (xs_nonnull XS_DecimalList*) addAll :(xs_nonnull XS_DecimalList*)list;
- (xs_nonnull XS_DecimalList*) copy;
+ (xs_nonnull XS_DecimalList*) empty;
- (xs_nonnull XS_BigDecimal*) first;
- (xs_nonnull XS_BigDecimal*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_BigDecimal*)item;
- (xs_int) indexOf :(xs_nonnull XS_BigDecimal*)item;
- (xs_int) indexOf :(xs_nonnull XS_BigDecimal*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_BigDecimal*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DecimalList*)list;
- (xs_nonnull XS_BigDecimal*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_BigDecimal*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_BigDecimal*)item :(xs_int)start;
- (xs_nonnull XS_BigDecimal*) pop;
- (xs_int) push :(xs_nonnull XS_BigDecimal*)item;
- (xs_nonnull XS_DecimalList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_BigDecimal*)item;
+ (xs_nonnull XS_DecimalList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_BigDecimal*) shift;
- (xs_nonnull XS_DecimalList*) slice :(xs_int)start;
- (xs_nonnull XS_DecimalList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DecimalList*) sort;
- (xs_int) unshift :(xs_nonnull XS_BigDecimal*)item;
@end
#endif

#ifndef imported_XS_DoubleList_public
#define imported_XS_DoubleList_public
@interface XS_DoubleList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_DoubleList*) new;
+ (xs_nonnull XS_DoubleList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_DoubleList*) add :(xs_double)item;
- (xs_nonnull XS_DoubleList*) addAll :(xs_nonnull XS_DoubleList*)list;
- (xs_nonnull XS_DoubleList*) copy;
+ (xs_nonnull XS_DoubleList*) empty;
- (xs_double) first;
- (xs_double) get :(xs_int)index;
- (xs_boolean) includes :(xs_double)item;
- (xs_int) indexOf :(xs_double)item;
- (xs_int) indexOf :(xs_double)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_double)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_DoubleList*)list;
- (xs_double) last;
- (xs_int) lastIndexOf :(xs_double)item;
- (xs_int) lastIndexOf :(xs_double)item :(xs_int)start;
- (xs_double) pop;
- (xs_int) push :(xs_double)item;
- (xs_nonnull XS_DoubleList*) reverse;
- (void) set :(xs_int)index :(xs_double)item;
+ (xs_nonnull XS_DoubleList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_double) shift;
- (xs_nonnull XS_DoubleList*) slice :(xs_int)start;
- (xs_nonnull XS_DoubleList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_DoubleList*) sort;
- (xs_int) unshift :(xs_double)item;
@end
#endif

#ifndef imported_XS_EntityContainerList_public
#define imported_XS_EntityContainerList_public
@interface XS_EntityContainerList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityContainerList*) new;
+ (xs_nonnull XS_EntityContainerList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityContainerList*) add :(xs_nonnull XS_EntityContainer*)item;
- (xs_nonnull XS_EntityContainerList*) addAll :(xs_nonnull XS_EntityContainerList*)list;
- (xs_nonnull XS_EntityContainerList*) copy;
+ (xs_nonnull XS_EntityContainerList*) empty;
- (xs_nonnull XS_EntityContainer*) first;
- (xs_nonnull XS_EntityContainer*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EntityContainer*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityContainer*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityContainer*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EntityContainer*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EntityContainerList*)list;
- (xs_nonnull XS_EntityContainer*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityContainer*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityContainer*)item :(xs_int)start;
- (xs_nonnull XS_EntityContainer*) pop;
- (xs_int) push :(xs_nonnull XS_EntityContainer*)item;
- (xs_nonnull XS_EntityContainerList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityContainer*)item;
+ (xs_nonnull XS_EntityContainerList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EntityContainer*) shift;
- (xs_nonnull XS_EntityContainerList*) slice :(xs_int)start;
- (xs_nonnull XS_EntityContainerList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EntityContainerList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EntityContainer*)item;
@end
#endif

#ifndef imported_XS_EntityContainerMap_EntryList_public
#define imported_XS_EntityContainerMap_EntryList_public
@interface XS_EntityContainerMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityContainerMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityContainerMap_EntryList*) add :(xs_nonnull XS_EntityContainerMap_Entry*)item;
- (xs_nonnull XS_EntityContainerMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityContainerMap_Entry*)item;
@end
#endif

#ifndef imported_XS_EntityListBase_public
#define imported_XS_EntityListBase_public
@interface XS_EntityListBase : XS_ListBase
{
    @private xs_boolean isDeferred_;
    @private NSString* xs___nullable  deltaLink_;
    @private NSString* xs___nullable  nextLink_;
    @private NSString* xs___nullable  readLink_;
    @private xs_nullable_int totalCount_;
    @private XS_ChangedLinkList* xs___nullable  changedLinks_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityListBase*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nullable XS_ChangedLinkList*) changedLinks;
- (xs_nullable NSString*) deltaLink;
- (xs_boolean) isDeferred;
- (xs_nullable NSString*) nextLink;
- (xs_nullable NSString*) readLink;
- (void) setChangedLinks :(xs_nullable XS_ChangedLinkList*)value;
- (void) setDeltaLink :(xs_nullable NSString*)value;
- (void) setIsDeferred :(xs_boolean)value;
- (void) setNextLink :(xs_nullable NSString*)value;
- (void) setReadLink :(xs_nullable NSString*)value;
- (void) setTotalCount :(xs_nullable_int)value;
- (xs_nullable_int) totalCount;
@property (xs__nullable nonatomic, readwrite, strong) XS_ChangedLinkList* changedLinks;
@property (xs__nullable nonatomic, readwrite) NSString* deltaLink;
@property (nonatomic, readwrite) xs_boolean isDeferred;
@property (xs__nullable nonatomic, readwrite) NSString* nextLink;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@property (nonatomic, readwrite) xs_nullable_int totalCount;
@end
#endif

#ifndef imported_XS_EntitySetList_public
#define imported_XS_EntitySetList_public
@interface XS_EntitySetList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetList*) new;
+ (xs_nonnull XS_EntitySetList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntitySetList*) add :(xs_nonnull XS_EntitySet*)item;
- (xs_nonnull XS_EntitySetList*) addAll :(xs_nonnull XS_EntitySetList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_EntitySetList*) copy;
+ (xs_nonnull XS_EntitySetList*) empty;
- (xs_nonnull XS_EntitySet*) first;
- (xs_nonnull XS_EntitySet*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EntitySet*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntitySet*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntitySet*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EntitySet*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EntitySetList*)list;
- (xs_nonnull XS_EntitySet*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntitySet*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntitySet*)item :(xs_int)start;
- (xs_nonnull XS_EntitySet*) pop;
- (xs_int) push :(xs_nonnull XS_EntitySet*)item;
- (xs_nonnull XS_EntitySetList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EntitySet*)item;
+ (xs_nonnull XS_EntitySetList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EntitySet*) shift;
- (xs_nonnull XS_EntitySetList*) slice :(xs_int)start;
- (xs_nonnull XS_EntitySetList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EntitySetList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EntitySet*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_EntitySetMap_EntryList_public
#define imported_XS_EntitySetMap_EntryList_public
@interface XS_EntitySetMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntitySetMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntitySetMap_EntryList*) add :(xs_nonnull XS_EntitySetMap_Entry*)item;
- (xs_nonnull XS_EntitySetMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EntitySetMap_Entry*)item;
@end
#endif

#ifndef imported_XS_EntityType_public
#define imported_XS_EntityType_public
@interface XS_EntityType : XS_StructureType
{
    @private XS_EntityTypeList* xs___nullable  subtypes_;
    @private xs_boolean isMedia_;
    @private XS_PropertyInfoList* xs___nonnull  keyProperties_;
    @private XS_CustomPathList* xs___nullable  customPaths_;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityType*) new;
- (void) _init;
+ (xs_nonnull XS_EntityType*) abstractBase;
- (xs_int) code;
- (xs_nullable XS_CustomPathList*) customPaths;
- (xs_nonnull XS_PropertyInfo*) getKeyProperty :(xs_nonnull NSString*)param_name;
- (xs_boolean) hasSubtypes;
- (xs_boolean) hasSupertype;
- (xs_boolean) isMedia;
- (xs_nonnull XS_PropertyInfoList*) keyProperties;
- (void) setCustomPaths :(xs_nullable XS_CustomPathList*)value;
- (void) setIsMedia :(xs_boolean)value;
- (void) setKeyProperties :(xs_nonnull XS_PropertyInfoList*)value;
- (void) setSubtypes :(xs_nullable XS_EntityTypeList*)value;
- (void) setSupertype :(xs_nullable XS_EntityType*)value;
- (xs_nullable XS_EntityTypeList*) subtypes;
- (xs_nullable XS_EntityType*) supertype;
- (xs_nonnull NSString*) toString;
+ (xs_nonnull XS_EntityType*) undefined;
- (xs_nonnull XS_EntityType*) withFactory :(xs_nonnull XS_ObjectFactory*)factory;
@property (nonatomic, readonly) xs_int code;
@property (xs__nullable nonatomic, readwrite, strong) XS_CustomPathList* customPaths;
@property (nonatomic, readonly) xs_boolean hasSubtypes;
@property (nonatomic, readonly) xs_boolean hasSupertype;
@property (nonatomic, readwrite) xs_boolean isMedia;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PropertyInfoList* keyProperties;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntityTypeList* subtypes;
@property (xs__nullable nonatomic, readonly, strong) XS_EntityType* supertype;
@end
#endif

#ifdef import_XS_EntityType_private
#ifndef imported_XS_EntityType_private
#define imported_XS_EntityType_private
@interface XS_EntityType (private)
+ (xs_nonnull XS_EntityType*) _new1 :(xs_nonnull XS_PropertyInfoList*)p1 :(xs_nonnull XS_PropertyInfoList*)p2 :(xs_nonnull XS_PropertyInfoList*)p3 :(xs_nonnull NSString*)p4 :(xs_nonnull XS_PropertyInfoList*)p5 :(xs_nonnull XS_PropertyInfoList*)p6 :(xs_nullable XS_CustomPathList*)p7 :(xs_nonnull XS_PropertyInfoList*)p8 :(xs_nonnull XS_PropertyInfoMap*)p9 :(xs_nonnull NSString*)p10;
+ (xs_nonnull XS_EntityType*) _new2 :(xs_nonnull XS_PropertyInfoList*)p1 :(xs_boolean)p2 :(xs_nonnull XS_PropertyInfoList*)p3 :(xs_nonnull XS_PropertyInfoList*)p4 :(xs_nonnull NSString*)p5 :(xs_nonnull XS_PropertyInfoList*)p6 :(xs_nonnull XS_PropertyInfoList*)p7 :(xs_nullable XS_CustomPathList*)p8 :(xs_nonnull XS_PropertyInfoList*)p9 :(xs_nonnull XS_PropertyInfoMap*)p10 :(xs_nonnull NSString*)p11;
@end
#endif
#endif

#ifndef imported_XS_EntityTypeList_public
#define imported_XS_EntityTypeList_public
@interface XS_EntityTypeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityTypeList*) new;
+ (xs_nonnull XS_EntityTypeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityTypeList*) add :(xs_nonnull XS_EntityType*)item;
- (xs_nonnull XS_EntityTypeList*) addAll :(xs_nonnull XS_EntityTypeList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_EntityTypeList*) copy;
+ (xs_nonnull XS_EntityTypeList*) empty;
- (xs_nonnull XS_EntityType*) first;
- (xs_nonnull XS_EntityType*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EntityType*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityType*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityType*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EntityType*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EntityTypeList*)list;
- (xs_nonnull XS_EntityType*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityType*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityType*)item :(xs_int)start;
- (xs_nonnull XS_EntityType*) pop;
- (xs_int) push :(xs_nonnull XS_EntityType*)item;
- (xs_nonnull XS_EntityTypeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityType*)item;
+ (xs_nonnull XS_EntityTypeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EntityType*) shift;
- (xs_nonnull XS_EntityTypeList*) slice :(xs_int)start;
- (xs_nonnull XS_EntityTypeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EntityTypeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EntityType*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_EntityTypeMap_EntryList_public
#define imported_XS_EntityTypeMap_EntryList_public
@interface XS_EntityTypeMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityTypeMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityTypeMap_EntryList*) add :(xs_nonnull XS_EntityTypeMap_Entry*)item;
- (xs_nonnull XS_EntityTypeMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityTypeMap_Entry*)item;
@end
#endif

#ifndef imported_XS_EntityValue_public
#define imported_XS_EntityValue_public
@interface XS_EntityValue : XS_StructureBase
{
    @private XS_EntityType* xs___nonnull  my_type_;
    @private XS_EntitySet* xs___nullable  my_set_;
    @private xs_long my_key_;
    @private XS_StreamLink* xs___nullable  my_media_;
    @private NSString* xs___nullable  my_canon_;
    @private XS_GlobalDateTime* xs___nullable  deltaTime_;
    @private NSString* xs___nullable  entityId_;
    @private NSString* xs___nullable  entityTag_;
    @private NSString* xs___nullable  readLink_;
    @private NSString* xs___nullable  editLink_;
    @private xs_boolean copyOnWrite_;
    @private XS_EntityValue* xs___nullable  oldEntity_;
    @private xs_int systemFlags_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValue*) new;
+ (xs_nonnull XS_EntityValue*) new :(xs_nullable XS_EntityType*)type;
- (void) _init :(xs_nullable XS_EntityType*)type;
- (xs_nonnull XS_EntityValue*) copyEntity;
- (void) copyKey :(xs_nonnull XS_EntityValue*)from;
- (xs_boolean) copyOnWrite;
- (xs_boolean) createIfNonExistent;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nullable XS_GlobalDateTime*) deltaTime;
- (xs_nullable NSString*) editLink;
- (xs_nullable NSString*) entityId;
- (xs_nullable XS_EntitySet*) entitySet;
- (xs_nonnull NSString*) entitySetAndKey;
- (xs_nullable NSString*) entityTag;
- (xs_nonnull XS_EntityType*) entityType;
+ (xs_boolean) equal :(xs_nullable XS_EntityValue*)a :(xs_nullable XS_EntityValue*)b;
+ (xs_boolean) equalKeys :(xs_nullable XS_EntityValue*)a :(xs_nullable XS_EntityValue*)b;
- (xs_boolean) hasKey;
- (xs_nonnull XS_EntityValue*) inOptionalSet :(xs_nullable XS_EntitySet*)set;
- (xs_nonnull XS_EntityValue*) inSet :(xs_nonnull XS_EntitySet*)set;
- (xs_boolean) isCreated;
- (xs_boolean) isDeferred;
- (xs_boolean) isDeleted;
- (xs_boolean) isNew;
- (xs_boolean) isNewOrChanged :(xs_nonnull XS_PropertyInfo*)pi;
- (xs_boolean) isPending;
- (xs_boolean) isUpdated;
- (xs_nonnull XS_DataValueList*) keyValues;
- (xs_nullable NSString*) mediaEditLink;
- (xs_nullable NSString*) mediaEntityTag;
- (xs_nonnull XS_StreamLink*) mediaLink;
- (xs_nullable NSString*) mediaReadLink;
- (xs_nullable NSString*) mediaType;
+ (xs_nonnull XS_EntityValue*) ofType :(xs_nonnull XS_EntityType*)type;
- (xs_nullable XS_EntityValue*) oldEntity;
- (xs_nullable NSString*) readLink;
- (void) rememberOld;
- (xs_nonnull XS_EntitySet*) requiredEntitySet;
- (void) setCopyOnWrite :(xs_boolean)value;
- (void) setCreateIfNonExistent :(xs_boolean)value;
- (void) setDeltaTime :(xs_nullable XS_GlobalDateTime*)value;
- (void) setEditLink :(xs_nullable NSString*)value;
- (void) setEntityId :(xs_nullable NSString*)value;
- (void) setEntitySet :(xs_nullable XS_EntitySet*)value;
- (void) setEntityTag :(xs_nullable NSString*)value;
- (void) setIsCreated :(xs_boolean)value;
- (void) setIsDeferred :(xs_boolean)value;
- (void) setIsDeleted :(xs_boolean)value;
- (void) setIsNew :(xs_boolean)value;
- (void) setIsPending :(xs_boolean)value;
- (void) setIsUpdated :(xs_boolean)value;
- (void) setMediaEditLink :(xs_nullable NSString*)value;
- (void) setMediaEntityTag :(xs_nullable NSString*)value;
- (void) setMediaReadLink :(xs_nullable NSString*)value;
- (void) setMediaType :(xs_nullable NSString*)value;
- (void) setOldEntity :(xs_nullable XS_EntityValue*)value;
- (void) setReadLink :(xs_nullable NSString*)value;
- (void) setSystemFlags :(xs_int)value;
- (void) setSystemKey :(xs_long)value;
- (xs_int) systemFlags;
- (xs_long) systemKey;
- (xs_nonnull NSString*) toString;
- (xs_nonnull XS_EntityValue*) withKey :(xs_nonnull XS_DataValue*)key;
- (xs_nonnull XS_EntityValue*) withOptionalKey :(xs_nullable XS_DataValue*)key;
- (xs_nonnull XS_EntityValue*) withRequiredKey :(xs_nullable XS_DataValue*)key;
@property (nonatomic, readwrite) xs_boolean copyOnWrite;
@property (nonatomic, readonly) xs_boolean createIfNonExistent;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nullable nonatomic, readwrite, strong) XS_GlobalDateTime* deltaTime;
@property (xs__nullable nonatomic, readwrite) NSString* editLink;
@property (xs__nullable nonatomic, readwrite) NSString* entityId;
@property (xs__nullable nonatomic, readonly, strong) XS_EntitySet* entitySet;
@property (xs__nonnull nonatomic, readonly) NSString* entitySetAndKey;
@property (xs__nullable nonatomic, readwrite) NSString* entityTag;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityType* entityType;
@property (nonatomic, readonly) xs_boolean isCreated;
@property (nonatomic, readonly) xs_boolean isDeferred;
@property (nonatomic, readonly) xs_boolean isDeleted;
@property (nonatomic, readonly) xs_boolean isNew;
@property (nonatomic, readonly) xs_boolean isPending;
@property (nonatomic, readonly) xs_boolean isUpdated;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataValueList* keyValues;
@property (xs__nullable nonatomic, readonly) NSString* mediaEditLink;
@property (xs__nullable nonatomic, readonly) NSString* mediaEntityTag;
@property (xs__nonnull nonatomic, readonly, strong) XS_StreamLink* mediaLink;
@property (xs__nullable nonatomic, readonly) NSString* mediaReadLink;
@property (xs__nullable nonatomic, readonly) NSString* mediaType;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntityValue* oldEntity;
@property (xs__nullable nonatomic, readwrite) NSString* readLink;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySet* requiredEntitySet;
@property (nonatomic, readwrite) xs_int systemFlags;
@property (nonatomic, readonly) xs_long systemKey;
@end
#endif

#ifdef import_XS_EntityValue_private
#ifndef imported_XS_EntityValue_private
#define imported_XS_EntityValue_private
@interface XS_EntityValue (private)
+ (xs_nonnull XS_StreamLink*) _new1 :(xs_nonnull XS_StructureType*)p1;
@end
#endif
#endif

#ifdef import_XS_EntityValue_internal
#ifndef imported_XS_EntityValue_internal
#define imported_XS_EntityValue_internal
@interface XS_EntityValue (internal)
- (xs_boolean) inDownload;
- (xs_boolean) inSyncTran;
- (xs_nullable NSString*) my_canon;
- (xs_long) my_key;
- (xs_nullable XS_StreamLink*) my_media;
- (xs_nullable XS_EntitySet*) my_set;
- (xs_nonnull XS_EntityType*) my_type;
- (void) prepareToSet;
- (void) setInDownload :(xs_boolean)value;
- (void) setInSyncTran :(xs_boolean)value;
- (void) setMy_canon :(xs_nullable NSString*)value;
- (void) setMy_key :(xs_long)value;
- (void) setMy_media :(xs_nullable XS_StreamLink*)value;
- (void) setMy_set :(xs_nullable XS_EntitySet*)value;
- (void) setMy_type :(xs_nonnull XS_EntityType*)value;
@property (nonatomic, readonly) xs_boolean inDownload;
@property (nonatomic, readonly) xs_boolean inSyncTran;
@property (xs__nullable nonatomic, readwrite) NSString* my_canon;
@property (nonatomic, readwrite) xs_long my_key;
@property (xs__nullable nonatomic, readwrite, strong) XS_StreamLink* my_media;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntitySet* my_set;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityType* my_type;
@end
#endif
#endif

#ifndef imported_XS_EntityValueMap_EntryList_public
#define imported_XS_EntityValueMap_EntryList_public
@interface XS_EntityValueMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityValueMap_EntryList*) add :(xs_nonnull XS_EntityValueMap_Entry*)item;
- (xs_nonnull XS_EntityValueMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityValueMap_Entry*)item;
@end
#endif

#ifndef imported_XS_EnumTypeList_public
#define imported_XS_EnumTypeList_public
@interface XS_EnumTypeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumTypeList*) new;
+ (xs_nonnull XS_EnumTypeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EnumTypeList*) add :(xs_nonnull XS_EnumType*)item;
- (xs_nonnull XS_EnumTypeList*) addAll :(xs_nonnull XS_EnumTypeList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_EnumTypeList*) copy;
+ (xs_nonnull XS_EnumTypeList*) empty;
- (xs_nonnull XS_EnumType*) first;
- (xs_nonnull XS_EnumType*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EnumType*)item;
- (xs_int) indexOf :(xs_nonnull XS_EnumType*)item;
- (xs_int) indexOf :(xs_nonnull XS_EnumType*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EnumType*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EnumTypeList*)list;
- (xs_nonnull XS_EnumType*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EnumType*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EnumType*)item :(xs_int)start;
- (xs_nonnull XS_EnumType*) pop;
- (xs_int) push :(xs_nonnull XS_EnumType*)item;
- (xs_nonnull XS_EnumTypeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EnumType*)item;
+ (xs_nonnull XS_EnumTypeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EnumType*) shift;
- (xs_nonnull XS_EnumTypeList*) slice :(xs_int)start;
- (xs_nonnull XS_EnumTypeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EnumTypeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EnumType*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_EnumTypeMap_EntryList_public
#define imported_XS_EnumTypeMap_EntryList_public
@interface XS_EnumTypeMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumTypeMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EnumTypeMap_EntryList*) add :(xs_nonnull XS_EnumTypeMap_Entry*)item;
- (xs_nonnull XS_EnumTypeMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EnumTypeMap_Entry*)item;
@end
#endif

#ifndef imported_XS_EnumValueList_public
#define imported_XS_EnumValueList_public
@interface XS_EnumValueList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumValueList*) new;
+ (xs_nonnull XS_EnumValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EnumValueList*) add :(xs_nonnull XS_EnumValue*)item;
- (xs_nonnull XS_EnumValueList*) addAll :(xs_nonnull XS_EnumValueList*)list;
- (xs_nonnull XS_EnumValueList*) copy;
+ (xs_nonnull XS_EnumValueList*) empty;
- (xs_nonnull XS_EnumValue*) first;
- (xs_nonnull XS_EnumValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EnumValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_EnumValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_EnumValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EnumValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EnumValueList*)list;
- (xs_nonnull XS_EnumValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EnumValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EnumValue*)item :(xs_int)start;
- (xs_nonnull XS_EnumValue*) pop;
- (xs_int) push :(xs_nonnull XS_EnumValue*)item;
- (xs_nonnull XS_EnumValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EnumValue*)item;
+ (xs_nonnull XS_EnumValueList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EnumValue*) shift;
- (xs_nonnull XS_EnumValueList*) slice :(xs_int)start;
- (xs_nonnull XS_EnumValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EnumValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EnumValue*)item;
@end
#endif

#ifndef imported_XS_EnumValueMap_EntryList_public
#define imported_XS_EnumValueMap_EntryList_public
@interface XS_EnumValueMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EnumValueMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EnumValueMap_EntryList*) add :(xs_nonnull XS_EnumValueMap_Entry*)item;
- (xs_nonnull XS_EnumValueMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_EnumValueMap_Entry*)item;
@end
#endif

#ifndef imported_XS_ErrorResponseList_public
#define imported_XS_ErrorResponseList_public
@interface XS_ErrorResponseList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ErrorResponseList*) new;
+ (xs_nonnull XS_ErrorResponseList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ErrorResponseList*) add :(xs_nonnull XS_ErrorResponse*)item;
- (xs_nonnull XS_ErrorResponseList*) addAll :(xs_nonnull XS_ErrorResponseList*)list;
- (xs_nonnull XS_ErrorResponseList*) copy;
+ (xs_nonnull XS_ErrorResponseList*) empty;
- (xs_nonnull XS_ErrorResponse*) first;
- (xs_nonnull XS_ErrorResponse*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_ErrorResponse*)item;
- (xs_int) indexOf :(xs_nonnull XS_ErrorResponse*)item;
- (xs_int) indexOf :(xs_nonnull XS_ErrorResponse*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_ErrorResponse*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ErrorResponseList*)list;
- (xs_nonnull XS_ErrorResponse*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_ErrorResponse*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_ErrorResponse*)item :(xs_int)start;
- (xs_nonnull XS_ErrorResponse*) pop;
- (xs_int) push :(xs_nonnull XS_ErrorResponse*)item;
- (xs_nonnull XS_ErrorResponseList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_ErrorResponse*)item;
+ (xs_nonnull XS_ErrorResponseList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_ErrorResponse*) shift;
- (xs_nonnull XS_ErrorResponseList*) slice :(xs_int)start;
- (xs_nonnull XS_ErrorResponseList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ErrorResponseList*) sort;
- (xs_int) unshift :(xs_nonnull XS_ErrorResponse*)item;
@end
#endif

#ifndef imported_XS_FloatList_public
#define imported_XS_FloatList_public
@interface XS_FloatList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_FloatList*) new;
+ (xs_nonnull XS_FloatList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_FloatList*) add :(xs_float)item;
- (xs_nonnull XS_FloatList*) addAll :(xs_nonnull XS_FloatList*)list;
- (xs_nonnull XS_FloatList*) copy;
+ (xs_nonnull XS_FloatList*) empty;
- (xs_float) first;
- (xs_float) get :(xs_int)index;
- (xs_boolean) includes :(xs_float)item;
- (xs_int) indexOf :(xs_float)item;
- (xs_int) indexOf :(xs_float)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_float)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_FloatList*)list;
- (xs_float) last;
- (xs_int) lastIndexOf :(xs_float)item;
- (xs_int) lastIndexOf :(xs_float)item :(xs_int)start;
- (xs_float) pop;
- (xs_int) push :(xs_float)item;
- (xs_nonnull XS_FloatList*) reverse;
- (void) set :(xs_int)index :(xs_float)item;
+ (xs_nonnull XS_FloatList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_float) shift;
- (xs_nonnull XS_FloatList*) slice :(xs_int)start;
- (xs_nonnull XS_FloatList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_FloatList*) sort;
- (xs_int) unshift :(xs_float)item;
@end
#endif

#ifndef imported_XS_GeographyCollection_public
#define imported_XS_GeographyCollection_public
@interface XS_GeographyCollection : XS_GeographyValue
{
    @private XS_GeographyValueList* xs___nonnull  geographies_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyCollection*) new;
- (void) _init;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_GeographyValueList*) geographies;
+ (xs_nonnull XS_GeographyCollection*) parse :(xs_nonnull NSString*)text;
- (void) setGeographies :(xs_nonnull XS_GeographyValueList*)value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readwrite, strong) XS_GeographyValueList* geographies;
@end
#endif

#ifndef imported_XS_GeographyLineString_public
#define imported_XS_GeographyLineString_public
@interface XS_GeographyLineString : XS_GeographyValue
{
    @private XS_CurveCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyLineString*) new;
- (void) _init;
- (xs_nonnull XS_CurveCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyLineString*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_CurveCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CurveCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyMultiLineString_public
#define imported_XS_GeographyMultiLineString_public
@interface XS_GeographyMultiLineString : XS_GeographyValue
{
    @private XS_MultiCurveCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyMultiLineString*) new;
- (void) _init;
- (xs_nonnull XS_MultiCurveCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyMultiLineString*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiCurveCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiCurveCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyMultiPoint_public
#define imported_XS_GeographyMultiPoint_public
@interface XS_GeographyMultiPoint : XS_GeographyValue
{
    @private XS_MultiPointCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyMultiPoint*) new;
- (void) _init;
- (xs_nonnull XS_MultiPointCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyMultiPoint*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiPointCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiPointCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyMultiPolygon_public
#define imported_XS_GeographyMultiPolygon_public
@interface XS_GeographyMultiPolygon : XS_GeographyValue
{
    @private XS_MultiPolygonCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyMultiPolygon*) new;
- (void) _init;
- (xs_nonnull XS_MultiPolygonCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyMultiPolygon*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiPolygonCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiPolygonCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyPoint_public
#define imported_XS_GeographyPoint_public
@interface XS_GeographyPoint : XS_GeographyValue
{
    @private XS_PointCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyPoint*) new;
- (void) _init;
- (xs_nonnull XS_PointCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyPoint*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_PointCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PointCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyPolygon_public
#define imported_XS_GeographyPolygon_public
@interface XS_GeographyPolygon : XS_GeographyValue
{
    @private XS_PolygonCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyPolygon*) new;
- (void) _init;
- (xs_nonnull XS_PolygonCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeographyPolygon*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_PolygonCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PolygonCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeographyValueList_public
#define imported_XS_GeographyValueList_public
@interface XS_GeographyValueList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeographyValueList*) new;
+ (xs_nonnull XS_GeographyValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_GeographyValueList*) add :(xs_nonnull XS_GeographyValue*)item;
- (xs_nonnull XS_GeographyValueList*) addAll :(xs_nonnull XS_GeographyValueList*)list;
- (xs_nonnull XS_GeographyValueList*) copy;
+ (xs_nonnull XS_GeographyValueList*) empty;
- (xs_nonnull XS_GeographyValue*) first;
- (xs_nonnull XS_GeographyValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_GeographyValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GeographyValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GeographyValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_GeographyValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_GeographyValueList*)list;
- (xs_nonnull XS_GeographyValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_GeographyValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_GeographyValue*)item :(xs_int)start;
- (xs_nonnull XS_GeographyValue*) pop;
- (xs_int) push :(xs_nonnull XS_GeographyValue*)item;
- (xs_nonnull XS_GeographyValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_GeographyValue*)item;
+ (xs_nonnull XS_GeographyValueList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_GeographyValue*) shift;
- (xs_nonnull XS_GeographyValueList*) slice :(xs_int)start;
- (xs_nonnull XS_GeographyValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_GeographyValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_GeographyValue*)item;
@end
#endif

#ifndef imported_XS_GeometryCollection_public
#define imported_XS_GeometryCollection_public
@interface XS_GeometryCollection : XS_GeometryValue
{
    @private XS_GeometryValueList* xs___nonnull  geometries_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryCollection*) new;
- (void) _init;
- (xs_nonnull XS_DataType*) dataType;
- (xs_nonnull XS_GeometryValueList*) geometries;
+ (xs_nonnull XS_GeometryCollection*) parse :(xs_nonnull NSString*)text;
- (void) setGeometries :(xs_nonnull XS_GeometryValueList*)value;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@property (xs__nonnull nonatomic, readwrite, strong) XS_GeometryValueList* geometries;
@end
#endif

#ifndef imported_XS_GeometryLineString_public
#define imported_XS_GeometryLineString_public
@interface XS_GeometryLineString : XS_GeometryValue
{
    @private XS_CurveCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryLineString*) new;
- (void) _init;
- (xs_nonnull XS_CurveCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryLineString*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_CurveCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CurveCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryMultiLineString_public
#define imported_XS_GeometryMultiLineString_public
@interface XS_GeometryMultiLineString : XS_GeometryValue
{
    @private XS_MultiCurveCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryMultiLineString*) new;
- (void) _init;
- (xs_nonnull XS_MultiCurveCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryMultiLineString*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiCurveCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiCurveCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryMultiPoint_public
#define imported_XS_GeometryMultiPoint_public
@interface XS_GeometryMultiPoint : XS_GeometryValue
{
    @private XS_MultiPointCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryMultiPoint*) new;
- (void) _init;
- (xs_nonnull XS_MultiPointCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryMultiPoint*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiPointCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiPointCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryMultiPolygon_public
#define imported_XS_GeometryMultiPolygon_public
@interface XS_GeometryMultiPolygon : XS_GeometryValue
{
    @private XS_MultiPolygonCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryMultiPolygon*) new;
- (void) _init;
- (xs_nonnull XS_MultiPolygonCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryMultiPolygon*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_MultiPolygonCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_MultiPolygonCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryPoint_public
#define imported_XS_GeometryPoint_public
@interface XS_GeometryPoint : XS_GeometryValue
{
    @private XS_PointCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryPoint*) new;
- (void) _init;
- (xs_nonnull XS_PointCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryPoint*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_PointCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PointCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryPolygon_public
#define imported_XS_GeometryPolygon_public
@interface XS_GeometryPolygon : XS_GeometryValue
{
    @private XS_PolygonCoordinates* xs___nonnull  coordinates_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryPolygon*) new;
- (void) _init;
- (xs_nonnull XS_PolygonCoordinates*) coordinates;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_GeometryPolygon*) parse :(xs_nonnull NSString*)text;
- (void) setCoordinates :(xs_nonnull XS_PolygonCoordinates*)value;
@property (xs__nonnull nonatomic, readwrite, strong) XS_PolygonCoordinates* coordinates;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifndef imported_XS_GeometryValueList_public
#define imported_XS_GeometryValueList_public
@interface XS_GeometryValueList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_GeometryValueList*) new;
+ (xs_nonnull XS_GeometryValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_GeometryValueList*) add :(xs_nonnull XS_GeometryValue*)item;
- (xs_nonnull XS_GeometryValueList*) addAll :(xs_nonnull XS_GeometryValueList*)list;
- (xs_nonnull XS_GeometryValueList*) copy;
+ (xs_nonnull XS_GeometryValueList*) empty;
- (xs_nonnull XS_GeometryValue*) first;
- (xs_nonnull XS_GeometryValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_GeometryValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GeometryValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GeometryValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_GeometryValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_GeometryValueList*)list;
- (xs_nonnull XS_GeometryValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_GeometryValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_GeometryValue*)item :(xs_int)start;
- (xs_nonnull XS_GeometryValue*) pop;
- (xs_int) push :(xs_nonnull XS_GeometryValue*)item;
- (xs_nonnull XS_GeometryValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_GeometryValue*)item;
+ (xs_nonnull XS_GeometryValueList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_GeometryValue*) shift;
- (xs_nonnull XS_GeometryValueList*) slice :(xs_int)start;
- (xs_nonnull XS_GeometryValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_GeometryValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_GeometryValue*)item;
@end
#endif

#ifndef imported_XS_GlobalDateTimeList_public
#define imported_XS_GlobalDateTimeList_public
@interface XS_GlobalDateTimeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_GlobalDateTimeList*) new;
+ (xs_nonnull XS_GlobalDateTimeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_GlobalDateTimeList*) add :(xs_nonnull XS_GlobalDateTime*)item;
- (xs_nonnull XS_GlobalDateTimeList*) addAll :(xs_nonnull XS_GlobalDateTimeList*)list;
- (xs_nonnull XS_GlobalDateTimeList*) copy;
+ (xs_nonnull XS_GlobalDateTimeList*) empty;
- (xs_nonnull XS_GlobalDateTime*) first;
- (xs_nonnull XS_GlobalDateTime*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_GlobalDateTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_GlobalDateTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_GlobalDateTime*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_GlobalDateTime*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_GlobalDateTimeList*)list;
- (xs_nonnull XS_GlobalDateTime*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_GlobalDateTime*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_GlobalDateTime*)item :(xs_int)start;
- (xs_nonnull XS_GlobalDateTime*) pop;
- (xs_int) push :(xs_nonnull XS_GlobalDateTime*)item;
- (xs_nonnull XS_GlobalDateTimeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_GlobalDateTime*)item;
+ (xs_nonnull XS_GlobalDateTimeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_GlobalDateTime*) shift;
- (xs_nonnull XS_GlobalDateTimeList*) slice :(xs_int)start;
- (xs_nonnull XS_GlobalDateTimeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_GlobalDateTimeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_GlobalDateTime*)item;
@end
#endif

#ifndef imported_XS_GuidValueList_public
#define imported_XS_GuidValueList_public
@interface XS_GuidValueList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_GuidValueList*) new;
+ (xs_nonnull XS_GuidValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_GuidValueList*) add :(xs_nonnull XS_GuidValue*)item;
- (xs_nonnull XS_GuidValueList*) addAll :(xs_nonnull XS_GuidValueList*)list;
- (xs_nonnull XS_GuidValueList*) copy;
+ (xs_nonnull XS_GuidValueList*) empty;
- (xs_nonnull XS_GuidValue*) first;
- (xs_nonnull XS_GuidValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_GuidValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GuidValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_GuidValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_GuidValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_GuidValueList*)list;
- (xs_nonnull XS_GuidValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_GuidValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_GuidValue*)item :(xs_int)start;
- (xs_nonnull XS_GuidValue*) pop;
- (xs_int) push :(xs_nonnull XS_GuidValue*)item;
- (xs_nonnull XS_GuidValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_GuidValue*)item;
+ (xs_nonnull XS_GuidValueList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_GuidValue*) shift;
- (xs_nonnull XS_GuidValueList*) slice :(xs_int)start;
- (xs_nonnull XS_GuidValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_GuidValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_GuidValue*)item;
@end
#endif

#ifndef imported_XS_IntList_public
#define imported_XS_IntList_public
@interface XS_IntList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_IntList*) new;
+ (xs_nonnull XS_IntList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_IntList*) add :(xs_int)item;
- (xs_nonnull XS_IntList*) addAll :(xs_nonnull XS_IntList*)list;
- (xs_nonnull XS_IntList*) copy;
+ (xs_nonnull XS_IntList*) empty;
- (xs_int) first;
- (xs_int) get :(xs_int)index;
- (xs_boolean) includes :(xs_int)item;
- (xs_int) indexOf :(xs_int)item;
- (xs_int) indexOf :(xs_int)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_int)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_IntList*)list;
- (xs_int) last;
- (xs_int) lastIndexOf :(xs_int)item;
- (xs_int) lastIndexOf :(xs_int)item :(xs_int)start;
- (xs_int) pop;
- (xs_int) push :(xs_int)item;
- (xs_nonnull XS_IntList*) reverse;
- (void) set :(xs_int)index :(xs_int)item;
+ (xs_nonnull XS_IntList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_int) shift;
- (xs_nonnull XS_IntList*) slice :(xs_int)start;
- (xs_nonnull XS_IntList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_IntList*) sort;
- (xs_int) unshift :(xs_int)item;
@end
#endif

#ifndef imported_XS_IntegerList_public
#define imported_XS_IntegerList_public
@interface XS_IntegerList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_IntegerList*) new;
+ (xs_nonnull XS_IntegerList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_IntegerList*) add :(xs_nonnull XS_BigInteger*)item;
- (xs_nonnull XS_IntegerList*) addAll :(xs_nonnull XS_IntegerList*)list;
- (xs_nonnull XS_IntegerList*) copy;
+ (xs_nonnull XS_IntegerList*) empty;
- (xs_nonnull XS_BigInteger*) first;
- (xs_nonnull XS_BigInteger*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_BigInteger*)item;
- (xs_int) indexOf :(xs_nonnull XS_BigInteger*)item;
- (xs_int) indexOf :(xs_nonnull XS_BigInteger*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_BigInteger*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_IntegerList*)list;
- (xs_nonnull XS_BigInteger*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_BigInteger*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_BigInteger*)item :(xs_int)start;
- (xs_nonnull XS_BigInteger*) pop;
- (xs_int) push :(xs_nonnull XS_BigInteger*)item;
- (xs_nonnull XS_IntegerList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_BigInteger*)item;
+ (xs_nonnull XS_IntegerList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_BigInteger*) shift;
- (xs_nonnull XS_IntegerList*) slice :(xs_int)start;
- (xs_nonnull XS_IntegerList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_IntegerList*) sort;
- (xs_int) unshift :(xs_nonnull XS_BigInteger*)item;
@end
#endif

#ifndef imported_XS_LocalDateList_public
#define imported_XS_LocalDateList_public
@interface XS_LocalDateList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_LocalDateList*) new;
+ (xs_nonnull XS_LocalDateList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_LocalDateList*) add :(xs_nonnull XS_LocalDate*)item;
- (xs_nonnull XS_LocalDateList*) addAll :(xs_nonnull XS_LocalDateList*)list;
- (xs_nonnull XS_LocalDateList*) copy;
+ (xs_nonnull XS_LocalDateList*) empty;
- (xs_nonnull XS_LocalDate*) first;
- (xs_nonnull XS_LocalDate*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_LocalDate*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalDate*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalDate*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_LocalDate*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_LocalDateList*)list;
- (xs_nonnull XS_LocalDate*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalDate*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalDate*)item :(xs_int)start;
- (xs_nonnull XS_LocalDate*) pop;
- (xs_int) push :(xs_nonnull XS_LocalDate*)item;
- (xs_nonnull XS_LocalDateList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_LocalDate*)item;
+ (xs_nonnull XS_LocalDateList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_LocalDate*) shift;
- (xs_nonnull XS_LocalDateList*) slice :(xs_int)start;
- (xs_nonnull XS_LocalDateList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_LocalDateList*) sort;
- (xs_int) unshift :(xs_nonnull XS_LocalDate*)item;
@end
#endif

#ifndef imported_XS_LocalDateTimeList_public
#define imported_XS_LocalDateTimeList_public
@interface XS_LocalDateTimeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_LocalDateTimeList*) new;
+ (xs_nonnull XS_LocalDateTimeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_LocalDateTimeList*) add :(xs_nonnull XS_LocalDateTime*)item;
- (xs_nonnull XS_LocalDateTimeList*) addAll :(xs_nonnull XS_LocalDateTimeList*)list;
- (xs_nonnull XS_LocalDateTimeList*) copy;
+ (xs_nonnull XS_LocalDateTimeList*) empty;
- (xs_nonnull XS_LocalDateTime*) first;
- (xs_nonnull XS_LocalDateTime*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_LocalDateTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalDateTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalDateTime*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_LocalDateTime*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_LocalDateTimeList*)list;
- (xs_nonnull XS_LocalDateTime*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalDateTime*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalDateTime*)item :(xs_int)start;
- (xs_nonnull XS_LocalDateTime*) pop;
- (xs_int) push :(xs_nonnull XS_LocalDateTime*)item;
- (xs_nonnull XS_LocalDateTimeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_LocalDateTime*)item;
+ (xs_nonnull XS_LocalDateTimeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_LocalDateTime*) shift;
- (xs_nonnull XS_LocalDateTimeList*) slice :(xs_int)start;
- (xs_nonnull XS_LocalDateTimeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_LocalDateTimeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_LocalDateTime*)item;
@end
#endif

#ifndef imported_XS_LocalTimeList_public
#define imported_XS_LocalTimeList_public
@interface XS_LocalTimeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_LocalTimeList*) new;
+ (xs_nonnull XS_LocalTimeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_LocalTimeList*) add :(xs_nonnull XS_LocalTime*)item;
- (xs_nonnull XS_LocalTimeList*) addAll :(xs_nonnull XS_LocalTimeList*)list;
- (xs_nonnull XS_LocalTimeList*) copy;
+ (xs_nonnull XS_LocalTimeList*) empty;
- (xs_nonnull XS_LocalTime*) first;
- (xs_nonnull XS_LocalTime*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_LocalTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalTime*)item;
- (xs_int) indexOf :(xs_nonnull XS_LocalTime*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_LocalTime*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_LocalTimeList*)list;
- (xs_nonnull XS_LocalTime*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalTime*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_LocalTime*)item :(xs_int)start;
- (xs_nonnull XS_LocalTime*) pop;
- (xs_int) push :(xs_nonnull XS_LocalTime*)item;
- (xs_nonnull XS_LocalTimeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_LocalTime*)item;
+ (xs_nonnull XS_LocalTimeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_LocalTime*) shift;
- (xs_nonnull XS_LocalTimeList*) slice :(xs_int)start;
- (xs_nonnull XS_LocalTimeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_LocalTimeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_LocalTime*)item;
@end
#endif

#ifndef imported_XS_LongList_public
#define imported_XS_LongList_public
@interface XS_LongList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_LongList*) new;
+ (xs_nonnull XS_LongList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_LongList*) add :(xs_long)item;
- (xs_nonnull XS_LongList*) addAll :(xs_nonnull XS_LongList*)list;
- (xs_nonnull XS_LongList*) copy;
+ (xs_nonnull XS_LongList*) empty;
- (xs_long) first;
- (xs_long) get :(xs_int)index;
- (xs_boolean) includes :(xs_long)item;
- (xs_int) indexOf :(xs_long)item;
- (xs_int) indexOf :(xs_long)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_long)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_LongList*)list;
- (xs_long) last;
- (xs_int) lastIndexOf :(xs_long)item;
- (xs_int) lastIndexOf :(xs_long)item :(xs_int)start;
- (xs_long) pop;
- (xs_int) push :(xs_long)item;
- (xs_nonnull XS_LongList*) reverse;
- (void) set :(xs_int)index :(xs_long)item;
+ (xs_nonnull XS_LongList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_long) shift;
- (xs_nonnull XS_LongList*) slice :(xs_int)start;
- (xs_nonnull XS_LongList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_LongList*) sort;
- (xs_int) unshift :(xs_long)item;
@end
#endif

#ifndef imported_XS_MultiCurveCoordinates_public
#define imported_XS_MultiCurveCoordinates_public
@interface XS_MultiCurveCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_MultiCurveCoordinates*) new;
+ (xs_nonnull XS_MultiCurveCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_MultiCurveCoordinates*) add :(xs_nonnull XS_CurveCoordinates*)item;
- (xs_nonnull XS_MultiCurveCoordinates*) addAll :(xs_nonnull XS_MultiCurveCoordinates*)list;
- (xs_nonnull XS_MultiCurveCoordinates*) copy;
+ (xs_nonnull XS_MultiCurveCoordinates*) empty;
- (xs_nonnull XS_CurveCoordinates*) first;
- (xs_nonnull XS_CurveCoordinates*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_CurveCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_CurveCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_CurveCoordinates*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_CurveCoordinates*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_MultiCurveCoordinates*)list;
- (xs_nonnull XS_CurveCoordinates*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_CurveCoordinates*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_CurveCoordinates*)item :(xs_int)start;
- (xs_nonnull XS_CurveCoordinates*) pop;
- (xs_int) push :(xs_nonnull XS_CurveCoordinates*)item;
- (xs_nonnull XS_MultiCurveCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_CurveCoordinates*)item;
+ (xs_nonnull XS_MultiCurveCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_CurveCoordinates*) shift;
- (xs_nonnull XS_MultiCurveCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_MultiCurveCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_MultiCurveCoordinates*) sort;
- (xs_int) unshift :(xs_nonnull XS_CurveCoordinates*)item;
@end
#endif

#ifndef imported_XS_MultiPointCoordinates_public
#define imported_XS_MultiPointCoordinates_public
@interface XS_MultiPointCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_MultiPointCoordinates*) new;
+ (xs_nonnull XS_MultiPointCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_MultiPointCoordinates*) add :(xs_nonnull XS_PointCoordinates*)item;
- (xs_nonnull XS_MultiPointCoordinates*) addAll :(xs_nonnull XS_MultiPointCoordinates*)list;
- (xs_nonnull XS_MultiPointCoordinates*) copy;
+ (xs_nonnull XS_MultiPointCoordinates*) empty;
- (xs_nonnull XS_PointCoordinates*) first;
- (xs_nonnull XS_PointCoordinates*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PointCoordinates*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_PointCoordinates*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_MultiPointCoordinates*)list;
- (xs_nonnull XS_PointCoordinates*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_PointCoordinates*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_PointCoordinates*)item :(xs_int)start;
- (xs_nonnull XS_PointCoordinates*) pop;
- (xs_int) push :(xs_nonnull XS_PointCoordinates*)item;
- (xs_nonnull XS_MultiPointCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_PointCoordinates*)item;
+ (xs_nonnull XS_MultiPointCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_PointCoordinates*) shift;
- (xs_nonnull XS_MultiPointCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_MultiPointCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_MultiPointCoordinates*) sort;
- (xs_int) unshift :(xs_nonnull XS_PointCoordinates*)item;
@end
#endif

#ifndef imported_XS_MultiPolygonCoordinates_public
#define imported_XS_MultiPolygonCoordinates_public
@interface XS_MultiPolygonCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_MultiPolygonCoordinates*) new;
+ (xs_nonnull XS_MultiPolygonCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_MultiPolygonCoordinates*) add :(xs_nonnull XS_PolygonCoordinates*)item;
- (xs_nonnull XS_MultiPolygonCoordinates*) addAll :(xs_nonnull XS_MultiPolygonCoordinates*)list;
- (xs_nonnull XS_MultiPolygonCoordinates*) copy;
+ (xs_nonnull XS_MultiPolygonCoordinates*) empty;
- (xs_nonnull XS_PolygonCoordinates*) first;
- (xs_nonnull XS_PolygonCoordinates*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_PolygonCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PolygonCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_PolygonCoordinates*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_PolygonCoordinates*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_MultiPolygonCoordinates*)list;
- (xs_nonnull XS_PolygonCoordinates*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_PolygonCoordinates*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_PolygonCoordinates*)item :(xs_int)start;
- (xs_nonnull XS_PolygonCoordinates*) pop;
- (xs_int) push :(xs_nonnull XS_PolygonCoordinates*)item;
- (xs_nonnull XS_MultiPolygonCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_PolygonCoordinates*)item;
+ (xs_nonnull XS_MultiPolygonCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_PolygonCoordinates*) shift;
- (xs_nonnull XS_MultiPolygonCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_MultiPolygonCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_MultiPolygonCoordinates*) sort;
- (xs_int) unshift :(xs_nonnull XS_PolygonCoordinates*)item;
@end
#endif

#ifndef imported_XS_ObjectList_public
#define imported_XS_ObjectList_public
@interface XS_ObjectList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectList*) new;
+ (xs_nonnull XS_ObjectList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ObjectList*) add :(xs_nonnull NSObject*)item;
- (xs_nonnull XS_ObjectList*) addAll :(xs_nonnull XS_ObjectList*)list;
- (xs_nonnull XS_ObjectList*) copy;
+ (xs_nonnull XS_ObjectList*) empty;
- (xs_nonnull NSObject*) first;
- (xs_nonnull NSObject*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull NSObject*)item;
- (xs_int) indexOf :(xs_nonnull NSObject*)item;
- (xs_int) indexOf :(xs_nonnull NSObject*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull NSObject*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ObjectList*)list;
- (xs_nonnull NSObject*) last;
- (xs_int) lastIndexOf :(xs_nonnull NSObject*)item;
- (xs_int) lastIndexOf :(xs_nonnull NSObject*)item :(xs_int)start;
- (xs_nonnull NSObject*) pop;
- (xs_int) push :(xs_nonnull NSObject*)item;
- (xs_nonnull XS_ObjectList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull NSObject*)item;
+ (xs_nonnull XS_ObjectList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull NSObject*) shift;
- (xs_nonnull XS_ObjectList*) slice :(xs_int)start;
- (xs_nonnull XS_ObjectList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ObjectList*) sort;
- (xs_int) unshift :(xs_nonnull NSObject*)item;
@end
#endif

#ifndef imported_XS_ObjectMap_EntryList_public
#define imported_XS_ObjectMap_EntryList_public
@interface XS_ObjectMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ObjectMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ObjectMap_EntryList*) add :(xs_nonnull XS_ObjectMap_Entry*)item;
- (xs_nonnull XS_ObjectMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_ObjectMap_Entry*)item;
@end
#endif

#ifndef imported_XS_ParameterList_public
#define imported_XS_ParameterList_public
@interface XS_ParameterList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ParameterList*) new;
+ (xs_nonnull XS_ParameterList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ParameterList*) add :(xs_nonnull XS_Parameter*)item;
- (xs_nonnull XS_ParameterList*) addAll :(xs_nonnull XS_ParameterList*)list;
- (xs_nonnull XS_ParameterList*) copy;
+ (xs_nonnull XS_ParameterList*) empty;
- (xs_nonnull XS_Parameter*) first;
- (xs_nonnull XS_Parameter*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_Parameter*)item;
- (xs_int) indexOf :(xs_nonnull XS_Parameter*)item;
- (xs_int) indexOf :(xs_nonnull XS_Parameter*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_Parameter*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ParameterList*)list;
- (xs_nonnull XS_Parameter*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_Parameter*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_Parameter*)item :(xs_int)start;
- (xs_nonnull XS_ParameterList*) parameter :(xs_nonnull NSString*)name :(xs_nullable XS_DataValue*)value;
- (xs_nonnull XS_Parameter*) pop;
- (xs_int) push :(xs_nonnull XS_Parameter*)item;
- (xs_nonnull XS_ParameterList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_Parameter*)item;
+ (xs_nonnull XS_ParameterList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_Parameter*) shift;
- (xs_nonnull XS_ParameterList*) slice :(xs_int)start;
- (xs_nonnull XS_ParameterList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ParameterList*) sort;
- (xs_int) unshift :(xs_nonnull XS_Parameter*)item;
- (xs_nonnull XS_ParameterList*) with :(xs_nonnull NSString*)name :(xs_nullable XS_DataValue*)value;
@end
#endif

#ifdef import_XS_ParameterList_private
#ifndef imported_XS_ParameterList_private
#define imported_XS_ParameterList_private
@interface XS_ParameterList (private)
+ (xs_nonnull XS_Parameter*) _new1 :(xs_nonnull NSString*)p1 :(xs_nullable XS_DataValue*)p2;
@end
#endif
#endif

#ifndef imported_XS_PathAnnotationsList_public
#define imported_XS_PathAnnotationsList_public
@interface XS_PathAnnotationsList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PathAnnotationsList*) new;
+ (xs_nonnull XS_PathAnnotationsList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PathAnnotationsList*) add :(xs_nonnull XS_PathAnnotations*)item;
- (xs_nonnull XS_PathAnnotationsList*) addAll :(xs_nonnull XS_PathAnnotationsList*)list;
- (xs_nonnull XS_PathAnnotationsList*) copy;
+ (xs_nonnull XS_PathAnnotationsList*) empty;
- (xs_nonnull XS_PathAnnotations*) first;
- (xs_nonnull XS_PathAnnotations*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_PathAnnotations*)item;
- (xs_int) indexOf :(xs_nonnull XS_PathAnnotations*)item;
- (xs_int) indexOf :(xs_nonnull XS_PathAnnotations*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_PathAnnotations*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_PathAnnotationsList*)list;
- (xs_nonnull XS_PathAnnotations*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_PathAnnotations*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_PathAnnotations*)item :(xs_int)start;
- (xs_nonnull XS_PathAnnotations*) pop;
- (xs_int) push :(xs_nonnull XS_PathAnnotations*)item;
- (xs_nonnull XS_PathAnnotationsList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_PathAnnotations*)item;
+ (xs_nonnull XS_PathAnnotationsList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_PathAnnotations*) shift;
- (xs_nonnull XS_PathAnnotationsList*) slice :(xs_int)start;
- (xs_nonnull XS_PathAnnotationsList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_PathAnnotationsList*) sort;
- (xs_int) unshift :(xs_nonnull XS_PathAnnotations*)item;
@end
#endif

#ifndef imported_XS_PathAnnotationsMap_EntryList_public
#define imported_XS_PathAnnotationsMap_EntryList_public
@interface XS_PathAnnotationsMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PathAnnotationsMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PathAnnotationsMap_EntryList*) add :(xs_nonnull XS_PathAnnotationsMap_Entry*)item;
- (xs_nonnull XS_PathAnnotationsMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_PathAnnotationsMap_Entry*)item;
@end
#endif

#ifndef imported_XS_PointCoordinates_public
#define imported_XS_PointCoordinates_public
@interface XS_PointCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PointCoordinates*) new;
+ (xs_nonnull XS_PointCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PointCoordinates*) add :(xs_double)item;
- (xs_nonnull XS_PointCoordinates*) addAll :(xs_nonnull XS_PointCoordinates*)list;
- (xs_double) altitude;
- (xs_nonnull XS_PointCoordinates*) copy;
+ (xs_nonnull XS_PointCoordinates*) empty;
- (xs_double) first;
- (xs_double) get :(xs_int)index;
- (xs_boolean) includes :(xs_double)item;
- (xs_int) indexOf :(xs_double)item;
- (xs_int) indexOf :(xs_double)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_double)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_PointCoordinates*)list;
- (xs_double) last;
- (xs_int) lastIndexOf :(xs_double)item;
- (xs_int) lastIndexOf :(xs_double)item :(xs_int)start;
- (xs_double) latitude;
- (xs_double) longitude;
- (xs_double) pop;
- (xs_int) push :(xs_double)item;
- (xs_nonnull XS_PointCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_double)item;
- (void) setAltitude :(xs_double)value;
- (void) setLatitude :(xs_double)value;
- (void) setLongitude :(xs_double)value;
- (void) setX :(xs_double)value;
- (void) setY :(xs_double)value;
- (void) setZ :(xs_double)value;
+ (xs_nonnull XS_PointCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_double) shift;
- (xs_nonnull XS_PointCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_PointCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_PointCoordinates*) sort;
- (xs_int) unshift :(xs_double)item;
- (xs_double) x;
- (xs_double) y;
- (xs_double) z;
@property (nonatomic, readonly) xs_double altitude;
@property (nonatomic, readonly) xs_double latitude;
@property (nonatomic, readonly) xs_double longitude;
@property (nonatomic, readonly) xs_double x;
@property (nonatomic, readonly) xs_double y;
@property (nonatomic, readonly) xs_double z;
@end
#endif

#ifndef imported_XS_PolygonCoordinates_public
#define imported_XS_PolygonCoordinates_public
@interface XS_PolygonCoordinates : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PolygonCoordinates*) new;
+ (xs_nonnull XS_PolygonCoordinates*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PolygonCoordinates*) add :(xs_nonnull XS_MultiPointCoordinates*)item;
- (xs_nonnull XS_PolygonCoordinates*) addAll :(xs_nonnull XS_PolygonCoordinates*)list;
- (xs_nonnull XS_PolygonCoordinates*) copy;
+ (xs_nonnull XS_PolygonCoordinates*) empty;
- (xs_nonnull XS_MultiPointCoordinates*) first;
- (xs_nonnull XS_MultiPointCoordinates*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_MultiPointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_MultiPointCoordinates*)item;
- (xs_int) indexOf :(xs_nonnull XS_MultiPointCoordinates*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_MultiPointCoordinates*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_PolygonCoordinates*)list;
- (xs_nonnull XS_MultiPointCoordinates*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_MultiPointCoordinates*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_MultiPointCoordinates*)item :(xs_int)start;
- (xs_nonnull XS_MultiPointCoordinates*) pop;
- (xs_int) push :(xs_nonnull XS_MultiPointCoordinates*)item;
- (xs_nonnull XS_PolygonCoordinates*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_MultiPointCoordinates*)item;
+ (xs_nonnull XS_PolygonCoordinates*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_MultiPointCoordinates*) shift;
- (xs_nonnull XS_PolygonCoordinates*) slice :(xs_int)start;
- (xs_nonnull XS_PolygonCoordinates*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_PolygonCoordinates*) sort;
- (xs_int) unshift :(xs_nonnull XS_MultiPointCoordinates*)item;
@end
#endif

#ifndef imported_XS_PropertyInfoList_public
#define imported_XS_PropertyInfoList_public
@interface XS_PropertyInfoList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_PropertyInfoList*) new;
+ (xs_nonnull XS_PropertyInfoList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PropertyInfoList*) add :(xs_nonnull XS_PropertyInfo*)item;
- (xs_nonnull XS_PropertyInfoList*) addAll :(xs_nonnull XS_PropertyInfoList*)list;
- (xs_nonnull XS_PropertyInfoList*) copy;
+ (xs_nonnull XS_PropertyInfoList*) empty;
- (xs_nonnull XS_PropertyInfo*) first;
- (xs_nonnull XS_PropertyInfo*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_PropertyInfo*)item;
- (xs_int) indexOf :(xs_nonnull XS_PropertyInfo*)item;
- (xs_int) indexOf :(xs_nonnull XS_PropertyInfo*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_PropertyInfo*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_PropertyInfoList*)list;
- (xs_nonnull XS_PropertyInfo*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_PropertyInfo*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_PropertyInfo*)item :(xs_int)start;
- (xs_nonnull XS_PropertyInfo*) pop;
- (xs_int) push :(xs_nonnull XS_PropertyInfo*)item;
- (xs_nonnull XS_PropertyInfoList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_PropertyInfo*)item;
+ (xs_nonnull XS_PropertyInfoList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_PropertyInfo*) shift;
- (xs_nonnull XS_PropertyInfoList*) slice :(xs_int)start;
- (xs_nonnull XS_PropertyInfoList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_PropertyInfoList*) sort;
- (xs_int) unshift :(xs_nonnull XS_PropertyInfo*)item;
@end
#endif

#ifndef imported_XS_PropertyInfoMap_EntryList_public
#define imported_XS_PropertyInfoMap_EntryList_public
@interface XS_PropertyInfoMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_PropertyInfoMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_PropertyInfoMap_EntryList*) add :(xs_nonnull XS_PropertyInfoMap_Entry*)item;
- (xs_nonnull XS_PropertyInfoMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_PropertyInfoMap_Entry*)item;
@end
#endif

#ifndef imported_XS_ShortList_public
#define imported_XS_ShortList_public
@interface XS_ShortList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ShortList*) new;
+ (xs_nonnull XS_ShortList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ShortList*) add :(xs_short)item;
- (xs_nonnull XS_ShortList*) addAll :(xs_nonnull XS_ShortList*)list;
- (xs_nonnull XS_ShortList*) copy;
+ (xs_nonnull XS_ShortList*) empty;
- (xs_short) first;
- (xs_short) get :(xs_int)index;
- (xs_boolean) includes :(xs_short)item;
- (xs_int) indexOf :(xs_short)item;
- (xs_int) indexOf :(xs_short)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_short)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ShortList*)list;
- (xs_short) last;
- (xs_int) lastIndexOf :(xs_short)item;
- (xs_int) lastIndexOf :(xs_short)item :(xs_int)start;
- (xs_short) pop;
- (xs_int) push :(xs_short)item;
- (xs_nonnull XS_ShortList*) reverse;
- (void) set :(xs_int)index :(xs_short)item;
+ (xs_nonnull XS_ShortList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_short) shift;
- (xs_nonnull XS_ShortList*) slice :(xs_int)start;
- (xs_nonnull XS_ShortList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ShortList*) sort;
- (xs_int) unshift :(xs_short)item;
@end
#endif

#ifndef imported_XS_SimpleTypeList_public
#define imported_XS_SimpleTypeList_public
@interface XS_SimpleTypeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleTypeList*) new;
+ (xs_nonnull XS_SimpleTypeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_SimpleTypeList*) add :(xs_nonnull XS_SimpleType*)item;
- (xs_nonnull XS_SimpleTypeList*) addAll :(xs_nonnull XS_SimpleTypeList*)list;
- (xs_nonnull XS_Comparer*) comparer;
- (xs_nonnull XS_SimpleTypeList*) copy;
+ (xs_nonnull XS_SimpleTypeList*) empty;
- (xs_nonnull XS_SimpleType*) first;
- (xs_nonnull XS_SimpleType*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_SimpleType*)item;
- (xs_int) indexOf :(xs_nonnull XS_SimpleType*)item;
- (xs_int) indexOf :(xs_nonnull XS_SimpleType*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_SimpleType*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_SimpleTypeList*)list;
- (xs_nonnull XS_SimpleType*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_SimpleType*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_SimpleType*)item :(xs_int)start;
- (xs_nonnull XS_SimpleType*) pop;
- (xs_int) push :(xs_nonnull XS_SimpleType*)item;
- (xs_nonnull XS_SimpleTypeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_SimpleType*)item;
+ (xs_nonnull XS_SimpleTypeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_SimpleType*) shift;
- (xs_nonnull XS_SimpleTypeList*) slice :(xs_int)start;
- (xs_nonnull XS_SimpleTypeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_SimpleTypeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_SimpleType*)item;
@property (xs__nonnull nonatomic, readonly, strong) XS_Comparer* comparer;
@end
#endif

#ifndef imported_XS_SimpleTypeMap_EntryList_public
#define imported_XS_SimpleTypeMap_EntryList_public
@interface XS_SimpleTypeMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_SimpleTypeMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_SimpleTypeMap_EntryList*) add :(xs_nonnull XS_SimpleTypeMap_Entry*)item;
- (xs_nonnull XS_SimpleTypeMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_SimpleTypeMap_Entry*)item;
@end
#endif

#ifndef imported_XS_StringList_public
#define imported_XS_StringList_public
@interface XS_StringList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringList*) new;
+ (xs_nonnull XS_StringList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_StringList*) add :(xs_nonnull NSString*)item;
- (xs_nonnull XS_StringList*) addAll :(xs_nonnull XS_StringList*)list;
- (xs_nonnull NSString*) concat;
- (xs_nonnull XS_StringList*) copy;
- (xs_nonnull XS_StringList*) dropEmpty;
+ (xs_nonnull XS_StringList*) empty;
- (xs_nonnull NSString*) first;
- (xs_nonnull NSString*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull NSString*)item;
- (xs_int) indexOf :(xs_nonnull NSString*)item;
- (xs_int) indexOf :(xs_nonnull NSString*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull NSString*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_StringList*)list;
- (xs_nonnull NSString*) join :(xs_nonnull NSString*)separator;
- (xs_nonnull NSString*) joinLines;
- (xs_nonnull NSString*) last;
- (xs_int) lastIndexOf :(xs_nonnull NSString*)item;
- (xs_int) lastIndexOf :(xs_nonnull NSString*)item :(xs_int)start;
+ (xs_nonnull XS_StringList*) lines :(xs_nonnull NSString*)param_value;
- (xs_nonnull NSString*) pop;
- (xs_int) push :(xs_nonnull NSString*)item;
- (xs_nonnull XS_StringList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull NSString*)item;
+ (xs_nonnull XS_StringList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull NSString*) shift;
- (xs_nonnull XS_StringList*) slice :(xs_int)start;
- (xs_nonnull XS_StringList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_StringList*) sort;
- (xs_nonnull XS_StringList*) sortIgnoreCase;
+ (xs_nonnull XS_StringList*) split :(xs_nonnull NSString*)value :(xs_nonnull NSString*)separator;
+ (xs_nonnull XS_StringList*) split :(xs_nonnull NSString*)value :(xs_nonnull NSString*)separator :(xs_int)limit;
- (xs_nonnull XS_StringList*) trimAll;
- (xs_int) unshift :(xs_nonnull NSString*)item;
@end
#endif

#ifndef imported_XS_StringMap_EntryList_public
#define imported_XS_StringMap_EntryList_public
@interface XS_StringMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_StringMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_StringMap_EntryList*) add :(xs_nonnull XS_StringMap_Entry*)item;
- (xs_nonnull XS_StringMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_StringMap_Entry*)item;
@end
#endif

#ifndef imported_XS_UnsignedByteList_public
#define imported_XS_UnsignedByteList_public
@interface XS_UnsignedByteList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_UnsignedByteList*) new;
+ (xs_nonnull XS_UnsignedByteList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_UnsignedByteList*) add :(xs_nonnull XS_UnsignedByte*)item;
- (xs_nonnull XS_UnsignedByteList*) addAll :(xs_nonnull XS_UnsignedByteList*)list;
- (xs_nonnull XS_UnsignedByteList*) copy;
+ (xs_nonnull XS_UnsignedByteList*) empty;
- (xs_nonnull XS_UnsignedByte*) first;
- (xs_nonnull XS_UnsignedByte*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) indexOf :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) indexOf :(xs_nonnull XS_UnsignedByte*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_UnsignedByte*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_UnsignedByteList*)list;
- (xs_nonnull XS_UnsignedByte*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_UnsignedByte*)item :(xs_int)start;
- (xs_nonnull XS_UnsignedByte*) pop;
- (xs_int) push :(xs_nonnull XS_UnsignedByte*)item;
- (xs_nonnull XS_UnsignedByteList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_UnsignedByte*)item;
+ (xs_nonnull XS_UnsignedByteList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_UnsignedByte*) shift;
- (xs_nonnull XS_UnsignedByteList*) slice :(xs_int)start;
- (xs_nonnull XS_UnsignedByteList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_UnsignedByteList*) sort;
- (xs_int) unshift :(xs_nonnull XS_UnsignedByte*)item;
@end
#endif

#ifndef imported_XS_UnsignedShortList_public
#define imported_XS_UnsignedShortList_public
@interface XS_UnsignedShortList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_UnsignedShortList*) new;
+ (xs_nonnull XS_UnsignedShortList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_UnsignedShortList*) add :(xs_nonnull XS_UnsignedByte*)item;
- (xs_nonnull XS_UnsignedShortList*) addAll :(xs_nonnull XS_UnsignedShortList*)list;
- (xs_nonnull XS_UnsignedShortList*) copy;
+ (xs_nonnull XS_UnsignedShortList*) empty;
- (xs_nonnull XS_UnsignedByte*) first;
- (xs_nonnull XS_UnsignedByte*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) indexOf :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) indexOf :(xs_nonnull XS_UnsignedByte*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_UnsignedByte*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_UnsignedShortList*)list;
- (xs_nonnull XS_UnsignedByte*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_UnsignedByte*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_UnsignedByte*)item :(xs_int)start;
- (xs_nonnull XS_UnsignedByte*) pop;
- (xs_int) push :(xs_nonnull XS_UnsignedByte*)item;
- (xs_nonnull XS_UnsignedShortList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_UnsignedByte*)item;
+ (xs_nonnull XS_UnsignedShortList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_UnsignedByte*) shift;
- (xs_nonnull XS_UnsignedShortList*) slice :(xs_int)start;
- (xs_nonnull XS_UnsignedShortList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_UnsignedShortList*) sort;
- (xs_int) unshift :(xs_nonnull XS_UnsignedByte*)item;
@end
#endif

#ifndef imported_XS_YearMonthDurationList_public
#define imported_XS_YearMonthDurationList_public
@interface XS_YearMonthDurationList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_YearMonthDurationList*) new;
+ (xs_nonnull XS_YearMonthDurationList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_YearMonthDurationList*) add :(xs_nonnull XS_YearMonthDuration*)item;
- (xs_nonnull XS_YearMonthDurationList*) addAll :(xs_nonnull XS_YearMonthDurationList*)list;
- (xs_nonnull XS_YearMonthDurationList*) copy;
+ (xs_nonnull XS_YearMonthDurationList*) empty;
- (xs_nonnull XS_YearMonthDuration*) first;
- (xs_nonnull XS_YearMonthDuration*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_YearMonthDuration*)item;
- (xs_int) indexOf :(xs_nonnull XS_YearMonthDuration*)item;
- (xs_int) indexOf :(xs_nonnull XS_YearMonthDuration*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_YearMonthDuration*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_YearMonthDurationList*)list;
- (xs_nonnull XS_YearMonthDuration*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_YearMonthDuration*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_YearMonthDuration*)item :(xs_int)start;
- (xs_nonnull XS_YearMonthDuration*) pop;
- (xs_int) push :(xs_nonnull XS_YearMonthDuration*)item;
- (xs_nonnull XS_YearMonthDurationList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_YearMonthDuration*)item;
+ (xs_nonnull XS_YearMonthDurationList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_YearMonthDuration*) shift;
- (xs_nonnull XS_YearMonthDurationList*) slice :(xs_int)start;
- (xs_nonnull XS_YearMonthDurationList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_YearMonthDurationList*) sort;
- (xs_int) unshift :(xs_nonnull XS_YearMonthDuration*)item;
@end
#endif

#ifdef import_XS_ByteStreamFromBinary_internal
#ifndef imported_XS_ByteStreamFromBinary_internal
#define imported_XS_ByteStreamFromBinary_public
/* internal */
@interface XS_ByteStreamFromBinary : XS_ByteStream
{
    @private NSData* xs___nonnull  my_binary;
    @private xs_int my_offset;
    @private xs_int my_length;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_ByteStream*) getInstance :(xs_nonnull NSData*)data :(xs_int)offset :(xs_int)length;
- (xs_int) readByte;
- (void) undoRead :(xs_byte)data;
@end
#endif
#endif

#ifdef import_XS_ByteStreamFromBinary_private
#ifndef imported_XS_ByteStreamFromBinary_private
#define imported_XS_ByteStreamFromBinary_private
@interface XS_ByteStreamFromBinary (private)
+ (xs_nonnull XS_ByteStreamFromBinary*) new;
+ (xs_nonnull XS_ByteStreamFromBinary*) _new1 :(xs_int)p1 :(xs_nonnull NSData*)p2 :(xs_int)p3;
@end
#endif
#endif

#ifndef imported_XS_ByteStreamToBuffer_public
#define imported_XS_ByteStreamToBuffer_public
@interface XS_ByteStreamToBuffer : XS_ByteStream
{
    @private XS_ByteBuffer* xs___nonnull  buffer_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ByteStreamToBuffer*) new;
- (void) _init;
- (xs_nonnull XS_ByteBuffer*) buffer;
- (void) writeBinary :(xs_nonnull NSData*)data;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset :(xs_int)length;
- (void) writeByte :(xs_byte)data;
@property (xs__nonnull nonatomic, readonly, strong) XS_ByteBuffer* buffer;
@end
#endif

#ifdef import_XS_CharStreamFromBytes_internal
#ifndef imported_XS_CharStreamFromBytes_internal
#define imported_XS_CharStreamFromBytes_public
/* internal */
@interface XS_CharStreamFromBytes : XS_CharStream
{
    @private XS_ByteStream* xs___nonnull  my_input_;
    @private xs_int my_next1;
    @private xs_int my_next2;
}
- (xs_nonnull id) init;
- (void) _init;
- (void) close;
+ (xs_nonnull XS_CharStreamFromBytes*) getInstance :(xs_nonnull XS_ByteStream*)bytes;
- (xs_int) readChar;
- (void) undoRead :(xs_char)c;
@end
#endif
#endif

#ifdef import_XS_CharStreamFromBytes_private
#ifndef imported_XS_CharStreamFromBytes_private
#define imported_XS_CharStreamFromBytes_private
@interface XS_CharStreamFromBytes (private)
+ (xs_nonnull XS_CharStreamFromBytes*) new;
- (xs_nonnull XS_ByteStream*) my_input;
- (void) setMy_input :(xs_nonnull XS_ByteStream*)value;
+ (xs_nonnull XS_CharStreamFromBytes*) _new1 :(xs_nonnull XS_ByteStream*)p1;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ByteStream* my_input;
@end
#endif
#endif

#ifdef import_XS_CharStreamFromString_internal
#ifndef imported_XS_CharStreamFromString_internal
#define imported_XS_CharStreamFromString_public
/* internal */
@interface XS_CharStreamFromString : XS_CharStream
{
    @private NSString* xs___nonnull  my_string;
    @private xs_int my_offset;
    @private xs_int my_length;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_CharStreamFromString*) getInstance :(xs_nonnull NSString*)text :(xs_int)offset :(xs_int)length;
- (xs_int) readChar;
- (void) undoRead :(xs_char)text;
@end
#endif
#endif

#ifdef import_XS_CharStreamFromString_private
#ifndef imported_XS_CharStreamFromString_private
#define imported_XS_CharStreamFromString_private
@interface XS_CharStreamFromString (private)
+ (xs_nonnull XS_CharStreamFromString*) new;
+ (xs_nonnull XS_CharStreamFromString*) _new1 :(xs_nonnull NSString*)p1 :(xs_int)p2 :(xs_int)p3;
@end
#endif
#endif

#ifndef imported_XS_CharStreamToBuffer_public
#define imported_XS_CharStreamToBuffer_public
@interface XS_CharStreamToBuffer : XS_CharStream
{
    @private XS_CharBuffer* xs___nonnull  buffer_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CharStreamToBuffer*) new;
- (void) _init;
- (xs_nonnull XS_CharBuffer*) buffer;
- (void) writeChar :(xs_char)text;
- (void) writeString :(xs_nonnull NSString*)text;
- (void) writeString :(xs_nonnull NSString*)text :(xs_int)offset;
- (void) writeString :(xs_nonnull NSString*)text :(xs_int)offset :(xs_int)length;
@property (xs__nonnull nonatomic, readonly, strong) XS_CharBuffer* buffer;
@end
#endif

#ifndef imported_XS_ComplexValueList_public
#define imported_XS_ComplexValueList_public
@interface XS_ComplexValueList : XS_ComplexListBase
{
    @private XS_DataType* xs___nonnull  my_type;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ComplexValueList*) new;
+ (xs_nonnull XS_ComplexValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_ComplexValueList*) add :(xs_nonnull XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueList*) addAll :(xs_nonnull XS_ComplexValueList*)list;
- (xs_nonnull XS_ComplexValueList*) addNullable :(xs_nullable XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueList*) copy;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_ComplexValueList*) empty;
+ (xs_boolean) equal :(xs_nullable XS_ComplexValueList*)a :(xs_nullable XS_ComplexValueList*)b;
- (xs_nonnull XS_ComplexValue*) first;
- (xs_nullable XS_ComplexValue*) firstOrNull;
- (xs_nonnull XS_ComplexValue*) get :(xs_int)index;
- (xs_nullable XS_ComplexValue*) getNullable :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_ComplexValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_ComplexValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_ComplexValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_ComplexValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_ComplexValueList*)list;
- (xs_nonnull XS_ComplexValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_ComplexValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_ComplexValue*)item :(xs_int)start;
- (xs_nullable XS_ComplexValue*) lastOrNull;
- (xs_nonnull XS_ComplexValue*) pop;
- (xs_int) push :(xs_nonnull XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_ComplexValue*)item;
- (void) setNullable :(xs_int)index :(xs_nullable XS_ComplexValue*)item;
+ (xs_nonnull XS_ComplexValueList*) share :(xs_nonnull XS_ListBase*)list;
+ (xs_nonnull XS_ComplexValueList*) shareNullable :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_ComplexValue*) shift;
- (xs_nonnull XS_ComplexValue*) single;
- (xs_nullable XS_ComplexValue*) singleOrNull;
- (xs_nonnull XS_ComplexValueList*) slice :(xs_int)start;
- (xs_nonnull XS_ComplexValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_ComplexValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_ComplexValue*)item;
- (xs_nonnull XS_ComplexValueList*) withItemType :(xs_nonnull XS_DataType*)type;
- (xs_nonnull XS_ComplexValueListWithNulls*) withNulls;
- (xs_nonnull XS_ComplexValueList*) withType :(xs_nonnull XS_DataType*)type;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifdef import_XS_ComplexValueList_private
#ifndef imported_XS_ComplexValueList_private
#define imported_XS_ComplexValueList_private
@interface XS_ComplexValueList (private)
+ (xs_nonnull XS_DataType*) TYPE;
@end
#endif
#endif

#ifdef import_XS_EmptyByteStream_internal
#ifndef imported_XS_EmptyByteStream_internal
#define imported_XS_EmptyByteStream_public
/* internal */
@interface XS_EmptyByteStream : XS_ByteStream
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EmptyByteStream*) new;
- (void) _init;
- (xs_nullable NSString*) entityTag;
- (xs_nonnull XS_ImmutableException*) immutable;
- (xs_nullable NSString*) mediaType;
- (xs_int) readChar;
- (void) setEntityTag :(xs_nullable NSString*)value;
- (void) setMediaType :(xs_nullable NSString*)value;
@property (xs__nullable nonatomic, readonly) NSString* entityTag;
@property (xs__nullable nonatomic, readonly) NSString* mediaType;
@end
#endif
#endif

#ifdef import_XS_EmptyCharStream_internal
#ifndef imported_XS_EmptyCharStream_internal
#define imported_XS_EmptyCharStream_public
/* internal */
@interface XS_EmptyCharStream : XS_CharStream
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_EmptyCharStream*) new;
- (void) _init;
- (xs_nullable NSString*) entityTag;
- (xs_nonnull XS_ImmutableException*) immutable;
- (xs_nullable NSString*) mediaType;
- (xs_int) readChar;
- (void) setEntityTag :(xs_nullable NSString*)value;
- (void) setMediaType :(xs_nullable NSString*)value;
@property (xs__nullable nonatomic, readonly) NSString* entityTag;
@property (xs__nullable nonatomic, readonly) NSString* mediaType;
@end
#endif
#endif

#ifndef imported_XS_EntityValueList_public
#define imported_XS_EntityValueList_public
@interface XS_EntityValueList : XS_EntityListBase
{
    @private XS_DataType* xs___nonnull  my_type;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueList*) new;
+ (xs_nonnull XS_EntityValueList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityValueList*) add :(xs_nonnull XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueList*) addAll :(xs_nonnull XS_EntityValueList*)list;
- (xs_nonnull XS_EntityValueList*) addNullable :(xs_nullable XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueList*) copy;
- (xs_nonnull XS_DataType*) dataType;
+ (xs_nonnull XS_EntityValueList*) empty;
+ (xs_boolean) equal :(xs_nullable XS_EntityValueList*)a :(xs_nullable XS_EntityValueList*)b;
- (xs_nonnull XS_EntityValue*) first;
- (xs_nullable XS_EntityValue*) firstOrNull;
- (xs_nonnull XS_EntityValue*) get :(xs_int)index;
- (xs_nullable XS_EntityValue*) getNullable :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_EntityValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityValue*)item;
- (xs_int) indexOf :(xs_nonnull XS_EntityValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_EntityValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EntityValueList*)list;
- (xs_nonnull XS_EntityValue*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityValue*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_EntityValue*)item :(xs_int)start;
- (xs_nullable XS_EntityValue*) lastOrNull;
- (xs_nonnull XS_EntityValue*) pop;
- (xs_int) push :(xs_nonnull XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_EntityValue*)item;
- (void) setNullable :(xs_int)index :(xs_nullable XS_EntityValue*)item;
+ (xs_nonnull XS_EntityValueList*) share :(xs_nonnull XS_ListBase*)list;
+ (xs_nonnull XS_EntityValueList*) shareNullable :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_EntityValue*) shift;
- (xs_nonnull XS_EntityValue*) single;
- (xs_nullable XS_EntityValue*) singleOrNull;
- (xs_nonnull XS_EntityValueList*) slice :(xs_int)start;
- (xs_nonnull XS_EntityValueList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EntityValueList*) sort;
- (xs_int) unshift :(xs_nonnull XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueList*) withItemType :(xs_nonnull XS_DataType*)type;
- (xs_nonnull XS_EntityValueListWithNulls*) withNulls;
- (xs_nonnull XS_EntityValueList*) withType :(xs_nonnull XS_DataType*)type;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataType* dataType;
@end
#endif

#ifdef import_XS_EntityValueList_private
#ifndef imported_XS_EntityValueList_private
#define imported_XS_EntityValueList_private
@interface XS_EntityValueList (private)
+ (xs_nonnull XS_DataType*) TYPE;
@end
#endif
#endif

#ifndef imported_XS_EntityValueListWithNulls_public
#define imported_XS_EntityValueListWithNulls_public
@interface XS_EntityValueListWithNulls : XS_EntityListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_EntityValueListWithNulls*) new;
+ (xs_nonnull XS_EntityValueListWithNulls*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_EntityValueListWithNulls*) add :(xs_nullable XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueListWithNulls*) addAll :(xs_nonnull XS_EntityValueListWithNulls*)list;
- (xs_nonnull XS_EntityValueListWithNulls*) copy;
+ (xs_nonnull XS_EntityValueListWithNulls*) empty;
- (xs_nullable XS_EntityValue*) first;
- (xs_nullable XS_EntityValue*) firstOrNull;
- (xs_nullable XS_EntityValue*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nullable XS_EntityValue*)item;
- (xs_int) indexOf :(xs_nullable XS_EntityValue*)item;
- (xs_int) indexOf :(xs_nullable XS_EntityValue*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nullable XS_EntityValue*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_EntityValueListWithNulls*)list;
- (xs_nullable XS_EntityValue*) last;
- (xs_int) lastIndexOf :(xs_nullable XS_EntityValue*)item;
- (xs_int) lastIndexOf :(xs_nullable XS_EntityValue*)item :(xs_int)start;
- (xs_nullable XS_EntityValue*) lastOrNull;
- (xs_nullable XS_EntityValue*) pop;
- (xs_int) push :(xs_nullable XS_EntityValue*)item;
- (xs_nonnull XS_EntityValueListWithNulls*) reverse;
- (void) set :(xs_int)index :(xs_nullable XS_EntityValue*)item;
+ (xs_nonnull XS_EntityValueListWithNulls*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nullable XS_EntityValue*) shift;
- (xs_nullable XS_EntityValue*) single;
- (xs_nullable XS_EntityValue*) singleOrNull;
- (xs_nonnull XS_EntityValueListWithNulls*) slice :(xs_int)start;
- (xs_nonnull XS_EntityValueListWithNulls*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_EntityValueListWithNulls*) sort;
- (xs_int) unshift :(xs_nullable XS_EntityValue*)item;
@end
#endif

#endif
