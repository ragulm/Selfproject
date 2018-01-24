#ifndef XSCRIPT_CSDL_H
#define XSCRIPT_CSDL_H

@class XS_AnnotationToResolve; /* internal */
@class XS_Any_as_xscript_csdl_AnnotationToResolve_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_csdl_CsdlAssociationMap_Entry_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_csdl_CsdlAssociation_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_data_ComplexType_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_data_DataType_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_data_EntityType_in_xscript_csdl; /* internal */
@class XS_Any_as_xscript_data_EnumType_in_xscript_csdl; /* internal */
@class XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_csdl; /* internal */
@class XS_Any_isNullable_xscript_data_EntityValue_in_xscript_csdl; /* internal */
@class XS_CsdlAssociation; /* internal */
@class XS_CsdlAssociationMap_Entry; /* internal */
@class XS_CsdlDocument;
@class XS_CsdlFetcher;
@class XS_CsdlOption;
@class XS_CsdlParser;
@class XS_CsdlAssociationMap; /* internal */
@class XS_AnnotationToResolveList; /* internal */
@class XS_CsdlAssociationList; /* internal */
@class XS_CsdlAssociationMap_EntryList; /* internal */
@class XS_CsdlNavigation; /* internal */
@class XS_CsdlException;

#ifdef import_XS_AnnotationToResolve_internal
#ifndef imported_XS_AnnotationToResolve_internal
#define imported_XS_AnnotationToResolve_public
/* internal */
@interface XS_AnnotationToResolve : XS_ObjectBase
{
    @private XS_XmlElement* xs___nonnull  element_;
    @private XS_AnnotationTerm* xs___nonnull  term_;
    @private XS_Annotation* xs___nonnull  ann_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationToResolve*) new;
- (void) _init;
- (xs_nonnull XS_Annotation*) ann;
- (xs_nonnull XS_XmlElement*) element;
- (void) setAnn :(xs_nonnull XS_Annotation*)value;
- (void) setElement :(xs_nonnull XS_XmlElement*)value;
- (void) setTerm :(xs_nonnull XS_AnnotationTerm*)value;
- (xs_nonnull XS_AnnotationTerm*) term;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Annotation* ann;
@property (xs__nonnull nonatomic, readwrite, strong) XS_XmlElement* element;
@property (xs__nonnull nonatomic, readwrite, strong) XS_AnnotationTerm* term;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_csdl_AnnotationToResolve_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_csdl_AnnotationToResolve_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_csdl_AnnotationToResolve_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_csdl_AnnotationToResolve_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_AnnotationToResolve*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_csdl_CsdlAssociationMap_Entry_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_csdl_CsdlAssociationMap_Entry_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_csdl_CsdlAssociationMap_Entry_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_csdl_CsdlAssociationMap_Entry_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_CsdlAssociationMap_Entry*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_csdl_CsdlAssociation_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_csdl_CsdlAssociation_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_csdl_CsdlAssociation_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_csdl_CsdlAssociation_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_CsdlAssociation*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_ComplexType_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_data_ComplexType_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_data_ComplexType_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_data_ComplexType_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_ComplexType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_DataType_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_data_DataType_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_data_DataType_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_data_DataType_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_DataType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EntityType_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_data_EntityType_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_data_EntityType_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_data_EntityType_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_EntityType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_data_EnumType_in_xscript_csdl_internal
#ifndef imported_XS_Any_as_xscript_data_EnumType_in_xscript_csdl_internal
#define imported_XS_Any_as_xscript_data_EnumType_in_xscript_csdl_public
/* internal */
@interface XS_Any_as_xscript_data_EnumType_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_nonnull XS_EnumType*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_csdl_internal
#ifndef imported_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_csdl_internal
#define imported_XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_csdl_public
/* internal */
@interface XS_Any_isNullable_xscript_data_ComplexValue_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_csdl_internal
#ifndef imported_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_csdl_internal
#define imported_XS_Any_isNullable_xscript_data_EntityValue_in_xscript_csdl_public
/* internal */
@interface XS_Any_isNullable_xscript_data_EntityValue_in_xscript_csdl : XS_ObjectBase
{
}
+ (xs_boolean) check :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociation_internal
#ifndef imported_XS_CsdlAssociation_internal
#define imported_XS_CsdlAssociation_public
/* internal */
@interface XS_CsdlAssociation : XS_ObjectBase
{
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nonnull  qualifiedName_;
    @private NSString* xs___nullable  endType1_;
    @private NSString* xs___nullable  endRole1_;
    @private xs_boolean endMany1_;
    @private xs_boolean endZero1_;
    @private NSString* xs___nullable  endType2_;
    @private NSString* xs___nullable  endRole2_;
    @private xs_boolean endMany2_;
    @private xs_boolean endZero2_;
    @private xs_int onDelete1_;
    @private xs_int onDelete2_;
    @private XS_StringMap* xs___nullable  refConst1_;
    @private XS_StringMap* xs___nullable  refConst2_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlAssociation*) new;
- (void) _init;
- (xs_boolean) endMany1;
- (xs_boolean) endMany2;
- (xs_nullable NSString*) endRole1;
- (xs_nullable NSString*) endRole2;
- (xs_nullable NSString*) endType1;
- (xs_nullable NSString*) endType2;
- (xs_boolean) endZero1;
- (xs_boolean) endZero2;
- (xs_nonnull NSString*) localName;
- (xs_int) onDelete1;
- (xs_int) onDelete2;
- (xs_nonnull NSString*) qualifiedName;
- (xs_nullable XS_StringMap*) refConst1;
- (xs_nullable XS_StringMap*) refConst2;
- (void) setEndMany1 :(xs_boolean)value;
- (void) setEndMany2 :(xs_boolean)value;
- (void) setEndRole1 :(xs_nullable NSString*)value;
- (void) setEndRole2 :(xs_nullable NSString*)value;
- (void) setEndType1 :(xs_nullable NSString*)value;
- (void) setEndType2 :(xs_nullable NSString*)value;
- (void) setEndZero1 :(xs_boolean)value;
- (void) setEndZero2 :(xs_boolean)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setOnDelete1 :(xs_int)value;
- (void) setOnDelete2 :(xs_int)value;
- (void) setQualifiedName :(xs_nonnull NSString*)value;
- (void) setRefConst1 :(xs_nullable XS_StringMap*)value;
- (void) setRefConst2 :(xs_nullable XS_StringMap*)value;
@property (nonatomic, readwrite) xs_boolean endMany1;
@property (nonatomic, readwrite) xs_boolean endMany2;
@property (xs__nullable nonatomic, readwrite) NSString* endRole1;
@property (xs__nullable nonatomic, readwrite) NSString* endRole2;
@property (xs__nullable nonatomic, readwrite) NSString* endType1;
@property (xs__nullable nonatomic, readwrite) NSString* endType2;
@property (nonatomic, readwrite) xs_boolean endZero1;
@property (nonatomic, readwrite) xs_boolean endZero2;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (nonatomic, readwrite) xs_int onDelete1;
@property (nonatomic, readwrite) xs_int onDelete2;
@property (xs__nonnull nonatomic, readwrite) NSString* qualifiedName;
@property (xs__nullable nonatomic, readwrite, strong) XS_StringMap* refConst1;
@property (xs__nullable nonatomic, readwrite, strong) XS_StringMap* refConst2;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociationMap_Entry_internal
#ifndef imported_XS_CsdlAssociationMap_Entry_internal
#define imported_XS_CsdlAssociationMap_Entry_public
/* internal */
@interface XS_CsdlAssociationMap_Entry : XS_ObjectBase
{
    @private NSString* xs___nonnull  key_;
    @private XS_CsdlAssociation* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlAssociationMap_Entry*) new;
- (void) _init;
- (xs_nonnull NSString*) key;
- (void) setKey :(xs_nonnull NSString*)value;
- (void) setValue :(xs_nonnull XS_CsdlAssociation*)value;
- (xs_nonnull XS_CsdlAssociation*) value;
@property (xs__nonnull nonatomic, readwrite) NSString* key;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CsdlAssociation* value;
@end
#endif
#endif

#ifndef imported_XS_CsdlDocument_public
#define imported_XS_CsdlDocument_public
@interface XS_CsdlDocument : XS_ObjectBase
{
    @private NSString* xs___nonnull  versionText_;
    @private xs_int versionCode_;
    @private NSString* xs___nullable  originalText_;
    @private NSString* xs___nullable  resolvedText_;
    @private XS_DataSchema* xs___nullable  mainSchema_;
    @private XS_EntityContainer* xs___nullable  defaultContainer_;
    @private XS_DataSchemaMap* xs___nonnull  dataSchemas_;
    @private XS_DataMethodMap* xs___nonnull  dataMethods_;
    @private XS_DataTypeMap* xs___nonnull  builtinTypes_;
    @private XS_SimpleTypeMap* xs___nonnull  simpleTypes_;
    @private XS_EnumTypeMap* xs___nonnull  enumTypes_;
    @private XS_ComplexTypeMap* xs___nonnull  complexTypes_;
    @private XS_EntityTypeMap* xs___nonnull  entityTypes_;
    @private XS_EntitySetMap* xs___nonnull  entitySets_;
    @private XS_AnnotationTermMap* xs___nonnull  annotationTerms_;
    @private XS_PathAnnotationsMap* xs___nonnull  pathAnnotations_;
    @private XS_EntityContainerMap* xs___nonnull  entityContainers_;
    @private XS_StringMap* xs___nonnull  xmlNamespaces_;
    @private XS_EntitySetMap* xs___nonnull  lookupSets_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlDocument*) new;
- (void) _init;
- (xs_nonnull XS_AnnotationTermMap*) annotationTerms;
- (xs_nonnull XS_DataTypeMap*) builtinTypes;
- (xs_nonnull XS_ComplexTypeMap*) complexTypes;
- (xs_nonnull XS_DataMethodMap*) dataMethods;
- (xs_nonnull XS_DataSchemaMap*) dataSchemas;
- (xs_nullable XS_EntityContainer*) defaultContainer;
- (xs_nonnull XS_EntityContainerMap*) entityContainers;
- (xs_nonnull XS_EntitySetMap*) entitySets;
- (xs_nonnull XS_EntityTypeMap*) entityTypes;
- (xs_nonnull XS_EnumTypeMap*) enumTypes;
- (xs_nonnull XS_ComplexType*) getComplexType :(xs_nonnull NSString*)name;
- (xs_nonnull XS_DataMethod*) getDataMethod :(xs_nonnull NSString*)name;
- (xs_nonnull XS_DataSchema*) getDataSchema :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EntitySet*) getEntitySet :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EntityType*) getEntityType :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EnumType*) getEnumType :(xs_nonnull NSString*)name;
- (xs_nonnull XS_SimpleType*) getSimpleType :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EntitySetMap*) lookupSets;
- (xs_nullable XS_DataSchema*) mainSchema;
- (xs_nullable NSString*) originalText;
- (xs_nonnull XS_PathAnnotationsMap*) pathAnnotations;
- (xs_nullable NSString*) resolvedText;
- (void) setDefaultContainer :(xs_nullable XS_EntityContainer*)value;
- (void) setMainSchema :(xs_nullable XS_DataSchema*)value;
- (void) setOriginalText :(xs_nullable NSString*)value;
- (void) setResolvedText :(xs_nullable NSString*)value;
- (void) setVersionCode :(xs_int)value;
- (void) setVersionText :(xs_nonnull NSString*)value;
- (xs_nonnull XS_SimpleTypeMap*) simpleTypes;
- (xs_int) versionCode;
- (xs_nonnull NSString*) versionText;
- (xs_nonnull XS_StringMap*) xmlNamespaces;
@property (xs__nonnull nonatomic, readonly, strong) XS_AnnotationTermMap* annotationTerms;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataTypeMap* builtinTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_ComplexTypeMap* complexTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataMethodMap* dataMethods;
@property (xs__nonnull nonatomic, readonly, strong) XS_DataSchemaMap* dataSchemas;
@property (xs__nullable nonatomic, readwrite, strong) XS_EntityContainer* defaultContainer;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityContainerMap* entityContainers;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMap* entitySets;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntityTypeMap* entityTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_EnumTypeMap* enumTypes;
@property (xs__nonnull nonatomic, readonly, strong) XS_EntitySetMap* lookupSets;
@property (xs__nullable nonatomic, readwrite, strong) XS_DataSchema* mainSchema;
@property (xs__nullable nonatomic, readwrite) NSString* originalText;
@property (xs__nonnull nonatomic, readonly, strong) XS_PathAnnotationsMap* pathAnnotations;
@property (xs__nullable nonatomic, readwrite) NSString* resolvedText;
@property (xs__nonnull nonatomic, readonly, strong) XS_SimpleTypeMap* simpleTypes;
@property (nonatomic, readwrite) xs_int versionCode;
@property (xs__nonnull nonatomic, readwrite) NSString* versionText;
@property (xs__nonnull nonatomic, readonly, strong) XS_StringMap* xmlNamespaces;
@end
#endif

#ifndef imported_XS_CsdlFetcher_public
#define imported_XS_CsdlFetcher_public
@interface XS_CsdlFetcher : XS_ObjectBase
{
}
- (xs_nonnull NSString*) fetch:(xs_nonnull NSString*)uri;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlFetcher*) new;
- (void) _init;
- (xs_boolean) accept :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns;
- (xs_nonnull NSString*) fetch :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns;
- (xs_boolean) ignore :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns;
@end
#endif

#ifndef imported_XS_CsdlOption_public
#define imported_XS_CsdlOption_public
@interface XS_CsdlOption : XS_ObjectBase
{
}
#define XS_CsdlOption_PROCESS_MIXED_VERSIONS 1
#define XS_CsdlOption_RETAIN_ORIGINAL_TEXT 2
#define XS_CsdlOption_RETAIN_RESOLVED_TEXT 4
#define XS_CsdlOption_IGNORE_EXTERNAL_REFERENCES 8
#define XS_CsdlOption_IGNORE_INTERNAL_REFERENCES 16
#define XS_CsdlOption_IGNORE_STANDARD_REFERENCES 32
#define XS_CsdlOption_IGNORE_ALL_REFERENCES 63
#define XS_CsdlOption_IGNORE_EDM_ANNOTATIONS 64
#define XS_CsdlOption_IGNORE_XML_ANNOTATIONS 128
#define XS_CsdlOption_IGNORE_ALL_ANNOTATIONS 255
#define XS_CsdlOption_IGNORE_UNDEFINED_TERMS 256
#define XS_CsdlOption_RESOLVE_UNDEFINED_TERMS 512
#define XS_CsdlOption_WARN_UNDEFINED_TERMS 1024
@end
#endif

#ifndef imported_XS_CsdlParser_public
#define imported_XS_CsdlParser_public
@interface XS_CsdlParser : XS_ObjectBase
{
    @private XS_Logger* xs___nonnull  logger_;
    @private XS_XmlElement* xs___nonnull  rootElement_;
    @private XS_CsdlDocument* xs___nonnull  document_;
    @private xs_int phase;
    @private XS_DataSchema* xs___nonnull  schema_;
    @private xs_boolean inSchema;
    @private XS_StringMap* xs___nonnull  nsAliases_;
    @private XS_DataTypeMap* xs___nullable  primitives;
    @private XS_ComplexTypeMap* xs___nonnull  finalComplex_;
    @private XS_EntityTypeMap* xs___nonnull  finalEntity_;
    @private XS_EntityContainerMap* xs___nonnull  finalContainer_;
    @private XS_EntityContainer* xs___nullable  lastContainer;
    @private xs_boolean fixedPoint;
    @private XS_CsdlAssociationMap* xs___nonnull  v3Associations_;
    @private XS_StringSet* xs___nonnull  alreadyLoaded_;
    @private NSString* xs___nullable  baseURL;
    @private NSString* xs___nullable  myURL;
    @private XS_AnnotationToResolveList* xs___nonnull  annotationsToResolve;
    @private XS_CsdlFetcher* xs___nullable  csdlFetcher_;
    @private xs_int csdlOptions_;
    @private XS_XmlElementList* xs___nonnull  includeReferences_;
    @private XS_DataSchemaList* xs___nonnull  includeSchemas_;
    @private xs_boolean logErrors_;
    @private xs_boolean logWarnings_;
    @private xs_boolean traceRequests_;
    @private NSString* xs___nullable  serviceName_;
    @private XS_StringSet* xs___nonnull  allVersions;
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlParser*) new;
- (void) _init;
- (xs_nullable XS_CsdlFetcher*) csdlFetcher;
- (xs_int) csdlOptions;
- (void) includeNamespace :(xs_nonnull NSString*)ns;
- (void) includeNamespace :(xs_nonnull NSString*)ns :(xs_nullable NSString*)alias;
- (void) includeReference :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns;
- (void) includeReference :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns :(xs_nullable NSString*)alias;
- (xs_nonnull XS_XmlElementList*) includeReferences;
- (void) includeSchema :(xs_nonnull XS_DataSchema*)param_schema;
- (xs_nonnull XS_DataSchemaList*) includeSchemas;
- (xs_boolean) logErrors;
- (xs_boolean) logWarnings;
- (xs_nonnull XS_CsdlDocument*) parse :(xs_nonnull NSString*)csdl :(xs_nonnull NSString*)url;
- (xs_nonnull XS_CsdlDocument*) parseNoThrow :(xs_nonnull NSString*)csdl :(xs_nonnull NSString*)url;
- (xs_nullable NSString*) serviceName;
- (void) setCsdlFetcher :(xs_nullable XS_CsdlFetcher*)value;
- (void) setCsdlOptions :(xs_int)value;
- (void) setIncludeReferences :(xs_nonnull XS_XmlElementList*)value;
- (void) setIncludeSchemas :(xs_nonnull XS_DataSchemaList*)value;
- (void) setLogErrors :(xs_boolean)value;
- (void) setLogWarnings :(xs_boolean)value;
- (void) setServiceName :(xs_nullable NSString*)value;
- (void) setTraceRequests :(xs_boolean)value;
- (xs_boolean) traceRequests;
@property (xs__nullable nonatomic, readwrite, strong) XS_CsdlFetcher* csdlFetcher;
@property (nonatomic, readwrite) xs_int csdlOptions;
@property (xs__nonnull nonatomic, readwrite, strong) XS_XmlElementList* includeReferences;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataSchemaList* includeSchemas;
@property (nonatomic, readwrite) xs_boolean logErrors;
@property (nonatomic, readwrite) xs_boolean logWarnings;
@property (xs__nullable nonatomic, readwrite) NSString* serviceName;
@property (nonatomic, readwrite) xs_boolean traceRequests;
@end
#endif

#ifdef import_XS_CsdlParser_private
#ifndef imported_XS_CsdlParser_private
#define imported_XS_CsdlParser_private
@interface XS_CsdlParser (private)
- (void) addPrimitiveType :(xs_nonnull XS_DataTypeMap*)map :(xs_nonnull NSString*)name :(xs_int)code;
- (xs_nonnull XS_StringSet*) alreadyLoaded;
- (void) copyDataMethods;
- (xs_nonnull XS_PropertyInfoList*) copyPropertyList :(xs_nonnull XS_PropertyInfoList*)list;
- (xs_nonnull XS_CsdlDocument*) document;
- (xs_nonnull XS_CsdlException*) errorWithCause :(xs_nonnull NSException*)cause;
- (xs_nonnull XS_CsdlException*) errorWithMessage :(xs_nonnull NSString*)message;
- (xs_nonnull NSString*) fetch :(xs_nonnull NSString*)uri :(xs_nonnull NSString*)ns;
- (xs_nonnull XS_ComplexTypeMap*) finalComplex;
- (xs_nonnull XS_EntityContainerMap*) finalContainer;
- (xs_nonnull XS_EntityTypeMap*) finalEntity;
- (xs_nonnull NSString*) getBoundName :(xs_nonnull XS_XmlElement*)element :(xs_boolean)isAction;
- (xs_nonnull XS_PropertyInfoList*) getComplexProperties :(xs_nonnull XS_PropertyInfoList*)list;
- (xs_nullable NSString*) getOptionalAttribute :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)name;
- (xs_nonnull XS_DataTypeMap*) getPrimitiveTypes;
- (xs_nonnull NSString*) getRequiredAttribute :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)name;
- (xs_nonnull NSString*) getRequiredAttributeIn :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull XS_XmlElement*) getRequiredElementIn :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull XS_PropertyInfoList*) getStreamProperties :(xs_nonnull XS_PropertyInfoList*)list;
- (xs_nonnull XS_DataType*) inferCollectionType :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull XS_ComplexType*) inferComplexType :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)defaultName;
- (xs_nonnull XS_EnumType*) inferEnumType :(xs_nonnull NSString*)value;
- (xs_nonnull XS_DataType*) inferTermType :(xs_nonnull NSString*)name :(xs_nonnull NSString*)value :(xs_nonnull XS_AnnotationTerm*)term :(xs_nullable XS_XmlElement*)element;
- (xs_boolean) isCustomAttribute :(xs_nonnull XS_XmlAttribute*)attribute;
- (xs_boolean) isEdmNamespace :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmNamespaceV2 :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmNamespaceV4 :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmOrEdmxNamespace :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmOrEdmxNamespaceV2 :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmOrEdmxNamespaceV4 :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmxNamespace :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmxNamespaceV2 :(xs_nonnull NSString*)uri;
- (xs_boolean) isEdmxNamespaceV4 :(xs_nonnull NSString*)uri;
- (xs_nonnull XS_Logger*) logger;
- (xs_nonnull XS_StringMap*) nsAliases;
- (xs_nullable XS_Annotation*) parseAnnotation :(xs_nonnull XS_XmlElement*)element;
- (void) parseAnnotationTerm :(xs_nonnull XS_AnnotationTerm*)term :(xs_nonnull XS_XmlElement*)element;
- (void) parseAnnotations :(xs_nonnull XS_XmlElement*)element;
- (void) parseAssociationSetV3 :(xs_nonnull XS_XmlElement*)element;
- (xs_nonnull XS_CsdlAssociation*) parseAssociationV3 :(xs_nonnull XS_XmlElement*)element;
- (void) parseComplexType :(xs_nonnull XS_ComplexType*)ct :(xs_nonnull XS_XmlElement*)element;
- (xs_nonnull XS_Annotation*) parseCustomAttribute :(xs_nonnull XS_XmlAttribute*)attribute;
- (void) parseDataMethod :(xs_nonnull XS_DataMethod*)dm :(xs_nonnull XS_XmlElement*)element :(xs_boolean)isAction;
- (void) parseDataServices :(xs_nonnull XS_XmlElement*)element;
- (xs_nullable XS_DataValue*) parseDefaultValue :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName :(xs_nonnull XS_DataType*)type :(xs_nullable NSString*)value;
- (void) parseEdmx :(xs_nonnull XS_XmlElement*)edmx;
- (void) parseEntityContainer :(xs_nonnull XS_EntityContainer*)ec :(xs_nonnull XS_XmlElement*)element;
- (void) parseEntitySet :(xs_nonnull XS_EntitySet*)es :(xs_nonnull XS_XmlElement*)element;
- (void) parseEntityType :(xs_nonnull XS_EntityType*)et :(xs_nonnull XS_XmlElement*)element;
- (void) parseEnumType :(xs_nonnull XS_EnumType*)nt :(xs_nonnull XS_XmlElement*)element;
- (xs_nullable XS_TypeFacets*) parseFacets :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName :(xs_nullable XS_DataType*)dt;
- (void) parseInclude :(xs_nonnull XS_XmlElement*)element;
- (void) parseIncludeAnnotations :(xs_nonnull XS_XmlElement*)element;
- (xs_nonnull XS_PropertyInfo*) parseNavigationProperty :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_int) parseOnDelete :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull XS_Parameter*) parseParameter :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull XS_StringList*) parsePath :(xs_nonnull NSString*)path;
- (xs_nonnull XS_PropertyInfo*) parseProperty :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull NSString*) parsePropertyRef :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (xs_nonnull NSString*) parsePropertyRefChild :(xs_nonnull XS_XmlElement*)element :(xs_nonnull NSString*)refKind :(xs_nonnull NSString*)refName;
- (void) parseReference :(xs_nonnull XS_XmlElement*)element;
- (void) parseSchema :(xs_nonnull XS_XmlElement*)element;
- (void) parseSimpleType :(xs_nonnull XS_SimpleType*)st :(xs_nonnull XS_XmlElement*)element;
- (xs_nullable XS_DataValue*) parseTermElement :(xs_nonnull XS_XmlElement*)element :(xs_nonnull XS_DataType*)type;
- (xs_nonnull XS_DataValue*) parseTermLiteral :(xs_nonnull NSString*)name :(xs_nonnull XS_DataType*)type :(xs_nonnull NSString*)value;
- (void) processAnnotations :(xs_nullable XS_AnnotationList*)list :(xs_nullable XS_AnnotationMap*)map :(xs_nonnull XS_XmlElement*)element;
- (void) processInPhases :(xs_nonnull XS_XmlElement*)edmx;
- (void) registerNamespaces :(xs_nonnull XS_XmlElement*)element;
- (xs_nonnull NSString*) resolveAlias :(xs_nonnull NSString*)name;
- (void) resolveAnnotation :(xs_nonnull XS_XmlElement*)element :(xs_nonnull XS_AnnotationTerm*)term :(xs_nonnull XS_Annotation*)ann;
- (void) resolveAnnotations;
- (xs_nonnull XS_ComplexType*) resolveComplexType :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (xs_nonnull XS_DataType*) resolveDataType :(xs_nonnull NSString*)param_name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (xs_nonnull XS_EntitySet*) resolveEntitySet :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (xs_nonnull XS_EntityType*) resolveEntityType :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (xs_nonnull XS_EnumType*) resolveEnumType :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (void) resolveReference :(xs_nonnull XS_XmlElement*)element;
- (void) resolveReferences :(xs_nonnull XS_XmlElement*)root :(xs_nonnull NSString*)url;
- (xs_nonnull NSObject*) resolveTargetPath :(xs_nonnull XS_StringList*)segments;
- (xs_nullable XS_AnnotationTerm*) resolveTerm :(xs_nonnull NSString*)name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName;
- (xs_nullable XS_AnnotationTerm*) resolveTerm :(xs_nonnull NSString*)param_name :(xs_nonnull NSString*)refKind :(xs_nullable NSString*)refName :(xs_boolean)required;
- (xs_nonnull XS_XmlElement*) rootElement;
- (xs_nonnull XS_DataSchema*) schema;
- (void) setAlreadyLoaded :(xs_nonnull XS_StringSet*)value;
- (void) setDocument :(xs_nonnull XS_CsdlDocument*)value;
- (void) setFinalComplex :(xs_nonnull XS_ComplexTypeMap*)value;
- (void) setFinalContainer :(xs_nonnull XS_EntityContainerMap*)value;
- (void) setFinalEntity :(xs_nonnull XS_EntityTypeMap*)value;
- (void) setLogger :(xs_nonnull XS_Logger*)value;
- (void) setNsAliases :(xs_nonnull XS_StringMap*)value;
- (void) setRootElement :(xs_nonnull XS_XmlElement*)value;
- (void) setSchema :(xs_nonnull XS_DataSchema*)value;
- (void) setV3Associations :(xs_nonnull XS_CsdlAssociationMap*)value;
+ (xs_nonnull XS_Logger*) staticLogger;
- (xs_nonnull XS_CsdlAssociationMap*) v3Associations;
- (void) validateNamespaces :(xs_nonnull XS_XmlElement*)element;
- (void) warn :(xs_nonnull NSString*)message;
- (void) warn :(xs_nonnull NSString*)message :(xs_nullable NSException*)cause;
- (void) warnUnqualified :(xs_nonnull XS_DataType*)type :(xs_nonnull NSString*)name;
+ (xs_nonnull XS_ComplexType*) _new1 :(xs_nonnull XS_PropertyInfoList*)p1 :(xs_nonnull XS_PropertyInfoList*)p2 :(xs_nonnull NSString*)p3 :(xs_nonnull XS_PropertyInfoList*)p4 :(xs_nonnull XS_PropertyInfoList*)p5 :(xs_nonnull XS_PropertyInfoList*)p6 :(xs_boolean)p7 :(xs_nonnull XS_PropertyInfoMap*)p8 :(xs_nonnull NSString*)p9;
+ (xs_nonnull XS_EnumType*) _new2 :(xs_nonnull XS_EnumValueMap*)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull XS_EnumValueList*)p3 :(xs_nonnull XS_DataType*)p4 :(xs_boolean)p5 :(xs_nonnull NSString*)p6;
+ (xs_nonnull XS_Annotation*) _new3 :(xs_nonnull XS_AnnotationTerm*)p1 :(xs_nullable NSString*)p2;
+ (xs_nonnull XS_AnnotationToResolve*) _new4 :(xs_nonnull XS_AnnotationTerm*)p1 :(xs_nonnull XS_Annotation*)p2 :(xs_nonnull XS_XmlElement*)p3;
+ (xs_nonnull XS_PathAnnotations*) _new5 :(xs_nonnull XS_DataPath*)p1;
+ (xs_nonnull XS_CsdlAssociation*) _new6 :(xs_nonnull NSString*)p1;
+ (xs_nonnull XS_AnnotationTerm*) _new7 :(xs_nonnull NSString*)p1 :(xs_nonnull XS_DataType*)p2 :(xs_nonnull NSString*)p3;
+ (xs_nonnull XS_Annotation*) _new8 :(xs_nullable XS_DataValue*)p1 :(xs_nonnull XS_AnnotationTerm*)p2;
+ (xs_nonnull XS_CsdlNavigation*) _new9 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nullable XS_StringMap*)p3 :(xs_nullable XS_TypeFacets*)p4 :(xs_nonnull NSString*)p5 :(xs_nonnull XS_DataType*)p6 :(xs_nonnull NSString*)p7 :(xs_int)p8;
+ (xs_nonnull XS_PropertyInfo*) _new10 :(xs_nonnull NSString*)p1 :(xs_nullable XS_TypeFacets*)p2 :(xs_nonnull XS_DataType*)p3 :(xs_int)p4;
+ (xs_nonnull XS_Parameter*) _new11 :(xs_nonnull NSString*)p1 :(xs_nullable XS_TypeFacets*)p2 :(xs_nonnull XS_DataType*)p3 :(xs_int)p4;
+ (xs_nonnull XS_PropertyInfo*) _new12 :(xs_nonnull NSString*)p1 :(xs_nullable XS_TypeFacets*)p2 :(xs_nonnull XS_DataType*)p3;
+ (xs_nonnull XS_DataSchema*) _new13 :(xs_nonnull NSString*)p1 :(xs_nullable NSString*)p2;
+ (xs_nonnull XS_SimpleType*) _new14 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_EnumType*) _new15 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_ComplexType*) _new16 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_EntityType*) _new17 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_AnnotationTerm*) _new18 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_DataMethod*) _new19 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_EntityContainer*) _new20 :(xs_nonnull XS_DataSchema*)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull NSString*)p3;
+ (xs_nonnull XS_EntitySet*) _new21 :(xs_boolean)p1 :(xs_nonnull NSString*)p2 :(xs_nonnull NSString*)p3;
+ (xs_nonnull XS_DataMethod*) _new22 :(xs_boolean)p1 :(xs_nonnull NSString*)p2;
+ (xs_nonnull XS_PropertyInfo*) _new23 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_int)p3 :(xs_nonnull XS_DataType*)p4;
+ (xs_nonnull XS_AnnotationTerm*) _new24 :(xs_nonnull NSString*)p1 :(xs_nonnull XS_DataType*)p2 :(xs_boolean)p3 :(xs_nonnull NSString*)p4;
#define XS_CsdlParser_ABSTRACT @"Abstract"
#define XS_CsdlParser_ACTION @"Action"
#define XS_CsdlParser_ACTION_IMPORT @"ActionImport"
#define XS_CsdlParser_ALIAS @"Alias"
#define XS_CsdlParser_ANNOTATION @"Annotation"
#define XS_CsdlParser_ANNOTATIONS @"Annotations"
#define XS_CsdlParser_ASSOCIATION @"Association"
#define XS_CsdlParser_ASSOCIATION_SET @"AssociationSet"
#define XS_CsdlParser_BAG @"Bag"
#define XS_CsdlParser_BASE_TYPE @"BaseType"
#define XS_CsdlParser_CASCADE @"Cascade"
#define XS_CsdlParser_COLLECTION @"Collection"
#define XS_CsdlParser_COMPLEX_TYPE @"ComplexType"
#define XS_CsdlParser_CONTAINS_TARGET @"ContainsTarget"
#define XS_CsdlParser_DATA_SERVICE_VERSION @"DataServiceVersion"
#define XS_CsdlParser_DATA_SERVICES @"DataServices"
#define XS_CsdlParser_DEPENDENT @"Dependent"
#define XS_CsdlParser_END @"End"
#define XS_CsdlParser_ENTITY_CONTAINER @"EntityContainer"
#define XS_CsdlParser_ENTITY_SET @"EntitySet"
#define XS_CsdlParser_ENTITY_TYPE @"EntityType"
#define XS_CsdlParser_ENUM_MEMBER @"EnumMember"
#define XS_CsdlParser_ENUM_TYPE @"EnumType"
#define XS_CsdlParser_ERROR_URL @"$URL"
#define XS_CsdlParser_EXTENDS @"Extends"
#define XS_CsdlParser_FIXED @"Fixed"
#define XS_CsdlParser_FROM_ROLE @"FromRole"
#define XS_CsdlParser_FUNCTION @"Function"
#define XS_CsdlParser_FUNCTION_IMPORT @"FunctionImport"
#define XS_CsdlParser_INCLUDE @"Include"
#define XS_CsdlParser_INCLUDE_ANNOTATIONS @"IncludeAnnotations"
#define XS_CsdlParser_IS_BOUND @"IsBound"
#define XS_CsdlParser_KEY @"Key"
#define XS_CsdlParser_LIST @"List"
#define XS_CsdlParser_MEMBER @"Member"
#define XS_CsdlParser_MODE @"Mode"
#define XS_CsdlParser_MULTIPLICITY @"Multiplicity"
#define XS_CsdlParser_NAME @"Name"
#define XS_CsdlParser_NAMESPACE @"Namespace"
#define XS_CsdlParser_NAVIGATION_PROPERTY @"NavigationProperty"
#define XS_CsdlParser_NAVIGATION_PROPERTY_BINDING @"NavigationPropertyBinding"
#define XS_CsdlParser_NONE @"None"
#define XS_CsdlParser_NULLABLE @"Nullable"
#define XS_CsdlParser_ON_DELETE @"OnDelete"
#define XS_CsdlParser_OPEN_TYPE @"OpenType"
#define XS_CsdlParser_PARAMETER @"Parameter"
#define XS_CsdlParser_PARTNER @"Partner"
#define XS_CsdlParser_PATH @"Path"
#define XS_CsdlParser_PRINCIPAL @"Principal"
#define XS_CsdlParser_PROPERTY @"Property"
#define XS_CsdlParser_PROPERTY_REF @"PropertyRef"
#define XS_CsdlParser_PROPERTY_VALUE @"PropertyValue"
#define XS_CsdlParser_QUALIFIER @"Qualifier"
#define XS_CsdlParser_RECORD @"Record"
#define XS_CsdlParser_REFERENCE @"Reference"
#define XS_CsdlParser_REFERENCED_PROPERTY @"ReferencedProperty"
#define XS_CsdlParser_REFERENTIAL_CONSTRAINT @"ReferentialConstraint"
#define XS_CsdlParser_RELATIONSHIP @"Relationship"
#define XS_CsdlParser_ROLE @"Role"
#define XS_CsdlParser_SCHEMA @"Schema"
#define XS_CsdlParser_SET_DEFAULT @"SetDefault"
#define XS_CsdlParser_SET_NULL @"SetNull"
#define XS_CsdlParser_SINGLETON @"Singleton"
#define XS_CsdlParser_TARGET @"Target"
#define XS_CsdlParser_TERM @"Term"
#define XS_CsdlParser_TO_ROLE @"ToRole"
#define XS_CsdlParser_TYPE @"Type"
#define XS_CsdlParser_TYPE_REF @"TypeRef"
#define XS_CsdlParser_TYPE_DEFINITION @"TypeDefinition"
#define XS_CsdlParser_UNDERLYING_TYPE @"UnderlyingType"
#define XS_CsdlParser_URL_REF @"UrlRef"
#define XS_CsdlParser_VALUE @"Value"
#define XS_CsdlParser_VERSION @"Version"
#define XS_CsdlParser_NONAME @"[UNNAMED]"
#define XS_CsdlParser_IGNORE @"ignore_"
#define XS_CsdlParser_TEXT_TRUE @"true"
#define XS_CsdlParser_TEXT_FALSE @"false"
#define XS_CsdlParser_NS_EDMX_V2 @"http://schemas.microsoft.com/ado/2007/06/edmx"
#define XS_CsdlParser_NS_EDMX_V4 @"http://docs.oasis-open.org/odata/ns/edmx"
#define XS_CsdlParser_MINIMUM_PHASE 1
#define XS_CsdlParser_MAXIMUM_PHASE 12
#define XS_CsdlParser_DEFINE_SCHEMAS 1
#define XS_CsdlParser_DEFINE_ASSOCIATIONS 2
#define XS_CsdlParser_DEFINE_TERMS 3
#define XS_CsdlParser_DEFINE_TYPES 3
#define XS_CsdlParser_DEFINE_METHODS 3
#define XS_CsdlParser_PARSE_BASIC 4
#define XS_CsdlParser_PARSE_TERMS 5
#define XS_CsdlParser_PARSE_TYPES 6
#define XS_CsdlParser_PARSE_METHODS 6
#define XS_CsdlParser_DEFINE_CONTAINERS 7
#define XS_CsdlParser_PARSE_CONTAINERS 8
#define XS_CsdlParser_DEFINE_SETS 9
#define XS_CsdlParser_PARSE_SETS 10
#define XS_CsdlParser_PARSE_ASSOCIATIONS 11
#define XS_CsdlParser_IMPORT_METHODS 11
#define XS_CsdlParser_PARSE_ANNOTATIONS 12
#define XS_CsdlParser_EMPTY_EDMX @"<Edmx/>"
#define XS_CsdlParser_V40_CS_PREFIX @"http://docs.oasis-open.org/odata/odata/v4.0/cs"
#define XS_CsdlParser_V40_OS_PREFIX @"http://docs.oasis-open.org/odata/odata/v4.0/os/"
#define XS_CsdlParser_V40_E01_PREFIX @"http://docs.oasis-open.org/odata/odata/v4.0/errata01/os/complete/vocabularies/"
#define XS_CsdlParser_V40_E02_PREFIX @"http://docs.oasis-open.org/odata/odata/v4.0/errata02/os/complete/vocabularies/"
#define XS_CsdlParser_URL_1_SUFFIX @"/Org.OData.Capabilities.V1.xml"
#define XS_CsdlParser_URL_2_SUFFIX @"/Org.OData.Core.V1.xml"
#define XS_CsdlParser_URL_3_SUFFIX @"/Org.OData.Measures.V1.xml"
#define XS_CsdlParser_NAMESPACE_1 @"Org.OData.Capabilities.V1"
#define XS_CsdlParser_NAMESPACE_2 @"Org.OData.Core.V1"
#define XS_CsdlParser_NAMESPACE_3 @"Org.OData.Measures.V1"
#define XS_CsdlParser_DOC_1_SCHEMA @"﻿<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n<!--\r\n\r\n     OData Version 4.0 Plus Errata 02\r\n     OASIS Standard incorporating Approved Errata 02\r\n     30 October 2014\r\n     Copyright (c) OASIS Open 2014. All Rights Reserved.\r\n     Source: http://docs.oasis-open.org/odata/odata/v4.0/errata02/os/complete/vocabularies/\r\n \r\n-->\r\n<!--\r\n\r\nTechnical Committee:\r\n  OASIS Open Data Protocol (OData) TC\r\n  https://www.oasis-open.org/committees/odata\r\n\r\nChairs:\r\n  - Barbara Hartel (barbara.hartel@sap.com), SAP AG\r\n  - Ram Jeyaraman (Ram.Jeyaraman@microsoft.com), Microsoft\r\n\r\nEditors:\r\n  - Ralf Handl (ralf.handl@sap.com), SAP AG\r\n  - Michael Pizzo (mikep@microsoft.com), Microsoft\r\n  - Martin Zurmuehl (martin.zurmuehl@sap.com), SAP AG\r\n\r\nAdditional artifacts: \r\n  This CSDL document is one component of a Work Product which consists of:\r\n  - OData Version 4.0 Part 1: Protocol\r\n  - OData Version 4.0 Part 2: URL Conventions\r\n  - OData Version 4.0 Part 3: Common Schema Definition Language (CSDL)\r\n  - OData ABNF Construction Rules Version 4.0 \r\n  - OData ABNF Test Cases\r\n  - OData Core Vocabulary\r\n  - OData Capabilities Vocabulary (this document)\r\n  - OData Measures Vocabulary\r\n  - OData Metadata Service Entity Model\r\n  - OData EDMX XML Schema\r\n  - OData EDM XML Schema\r\n\r\nRelated work:\r\n  This work product is related to the following two Work Products, each of \r\n  which define alternate formats for OData payloads\r\n  - OData Atom Format Version 4.0\r\n  - OData JSON Format Version 4.0\r\n  This specification replaces or supersedes:\r\n  - None\r\n\r\nDeclared XML namespaces:\r\n  - http://docs.oasis-open.org/odata/ns/edmx\r\n  - http://docs.oasis-open.org/odata/ns/edm\r\n\r\nAbstract:\r\n  The Open Data Protocol (OData) enables the creation of REST-based data\r\n  services, which allow resources, identified using Uniform Resource\r\n  Identifiers (URLs) and defined in a data model, to be published and \r\n  edited by Web clients using simple HTTP messages. This document defines\r\n  the URL syntax for requests and the serialization format for primitive \r\n  literals in request and response payloads.\r\n\r\nOverview:\r\n  This document contains terms describing capabilities of an OData service.  \r\n\r\n-->\r\n<edmx:Edmx xmlns:edmx=\"http://docs.oasis-open.org/odata/ns/edmx\" Version=\"4.0\">\r\n  <edmx:Reference Uri=\"http://docs.oasis-open.org/odata/odata/v4.0/os/vocabularies/Org.OData.Core.V1.xml\">\r\n    <edmx:Include Alias=\"Core\" Namespace=\"Org.OData.Core.V1\" />\r\n  </edmx:Reference>\r\n  <edmx:DataServices>\r\n    <Schema xmlns=\"http://docs.oasis-open.org/odata/ns/edm\" Namespace=\"Org.OData.Capabilities.V1\" Alias=\"Capabilities\">\r\n      <Annotation Term=\"Core.Description\">\r\n        <String>\r\n          The Capabilities vocabulary aims to provide a way for service authors to describe\r\n          certain capabilities of an OData Service.\r\n        </String>\r\n      </Annotation>\r\n      <Annotation Term=\"Core.LongDescription\">\r\n        <String>\r\n          There are some capabilities which are strongly recommended for services to support even\r\n          though they are optional. Support for $top and $skip is a good example as\r\n          supporting these query options helps with performance of a service and are essential. Such\r\n          capabilities are assumed to be default capabilities of an OData service even in\r\n          the case that a capabilities annotation doesn’t exist. Capabilities annotations are\r\n          mainly expected to be used to explicitly specify that a service doesn’t support such\r\n          capabilities. Capabilities annotations can as well be used to declaratively\r\n          specify the support of such capabilities.\r\n\r\n          On the other hand, there are some capabilities that a service may choose to support or\r\n          not support and in varying degrees. $filter and $orderby are such good examples.\r\n          This vocabulary aims to define terms to specify support or no support for such\r\n          capabilities.\r\n\r\n          A service is assumed to support by default the following capabilities even though an\r\n          annotation doesn’t exist:\r\n          - Countability ($count)\r\n          - Client pageability ($top, $skip)\r\n          - Expandability ($expand)\r\n          - Indexability by key\r\n          - Batch support ($batch)\r\n          - Navigability of navigation properties\r\n\r\n          A service is expected to support the following capabilities. If not supported, the\r\n          service is expected to call out the restrictions using annotations:\r\n          - Filterability ($filter)\r\n          - Sortability ($orderby)\r\n          - Queryability of top level entity sets\r\n          - Query functions\r\n\r\n          A client cannot assume that a service supports certain capabilities. A client can try, but\r\n          it needs to be prepared to handle an error in case the following capabilities are not\r\n          supported:\r\n          - Insertability\r\n          - Updatability\r\n          - Deletability\r\n        </String>\r\n      </Annotation>\r\n\r\n      <!-- Conformance Level -->\r\n\r\n      <Term Name=\"ConformanceLevel\" Type=\"Capabilities.ConformanceLevelType\" AppliesTo=\"EntityContainer\" />\r\n      <EnumType Name=\"ConformanceLevelType\">\r\n        <Member Name=\"Minimal\" />\r\n        <Member Name=\"Intermediate\" />\r\n        <Member Name=\"Advanced\" />\r\n      </EnumType>\r\n\r\n      <!-- Request Capabilities -->\r\n\r\n      <Term Name=\"SupportedFormats\" Type=\"Collection(Edm.String)\">\r\n        <Annotation Term=\"Core.Description\" String=\"Media types of supported formats, including format parameters\" />\r\n        <Annotation Term=\"Core.IsMediaType\" />\r\n      </Term>\r\n\r\n      <Term Name=\"AcceptableEncodings\" Type=\"Collection(Edm.String)\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"List of acceptable compression methods for ($batch) requests, e.g. gzip\" />\r\n      </Term>\r\n\r\n      <!-- Supported Preferences -->\r\n\r\n      <Term Name=\"AsynchronousRequestsSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Service supports the asynchronous request preference\" />\r\n      </Term>\r\n\r\n      <Term Name=\"BatchContinueOnErrorSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Service supports the continue on error preference\" />\r\n      </Term>\r\n\r\n      <Term Name=\"IsolationSupported\" Type=\"Capabilities.IsolationLevel\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supported odata.isolation levels\" />\r\n      </Term>\r\n      <EnumType Name=\"IsolationLevel\" IsFlags=\"true\">\r\n        <Member Name=\"Snapshot\" Value=\"1\" />\r\n      </EnumType>\r\n\r\n      <Term Name=\"CallbackSupported\" Type=\"Capabilities.CallbackType\" AppliesTo=\"EntityContainer EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports callbacks for the specified protocols\" />\r\n      </Term>\r\n      <Term Name=\"CrossJoinSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports cross joins for the entity sets in this container\" />\r\n      </Term>\r\n      <ComplexType Name=\"CallbackType\">\r\n        <Property Name=\"CallbackProtocols\" Type=\"Collection(Capabilities.CallbackProtocol)\" />\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"A non-empty collection lists the full set of supported protocols. A empty collection means 'only HTTP is supported'\" />\r\n      </ComplexType>\r\n      <ComplexType Name=\"CallbackProtocol\">\r\n        <Property Name=\"Id\" Type=\"Edm.String\">\r\n          <Annotation Term=\"Core.Description\" String=\"Protcol Identifier\" />\r\n        </Property>\r\n        <Property Name=\"UrlTemplate\" Type=\"Edm.String\">\r\n          <Annotation Term=\"Core.Description\"\r\n            String=\"URL Template including parameters. Parameters are enclosed in curly braces {} as defined in RFC6570\" />\r\n        </Property>\r\n        <Property Name=\"DocumentationUrl\" Type=\"Edm.String\" Nullable=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"Human readable description of the meaning of the URL Template parameters\" />\r\n          <Annotation Term=\"Core.IsURL\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"ChangeTracking\" Type=\"Capabilities.ChangeTrackingType\" AppliesTo=\"EntityContainer EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Change tracking capabilities of this service or entity set\" />\r\n      </Term>\r\n      <ComplexType Name=\"ChangeTrackingType\">\r\n        <Property Name=\"Supported\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"This entity set supports the odata.track-changes preference\" />\r\n        </Property>\r\n        <Property Name=\"FilterableProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"Change tracking supports filters on these properties\" />\r\n        </Property>\r\n        <Property Name=\"ExpandableProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"Change tracking supports these properties expanded\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <!--Query Capabilities -->\r\n\r\n      <Term Name=\"CountRestrictions\" Type=\"Capabilities.CountRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on /$count path suffix and $count=true system query option\" />\r\n      </Term>\r\n      <ComplexType Name=\"CountRestrictionsType\">\r\n        <Property Name=\"Countable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"Entities can be counted\" />\r\n        </Property>\r\n        <Property Name=\"NonCountableProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These collection properties do not allow /$count segments\" />\r\n        </Property>\r\n        <Property Name=\"NonCountableNavigationProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These navigation properties do not allow /$count segments\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"NavigationRestrictions\" Type=\"Capabilities.NavigationRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on navigating properties according to OData URL conventions\" />\r\n      </Term>\r\n      <ComplexType Name=\"NavigationRestrictionsType\">\r\n        <Property Name=\"Navigability\" Type=\"Capabilities.NavigationType\">\r\n          <Annotation Term=\"Core.Description\" String=\"Supported Navigability\" />\r\n        </Property>\r\n        <Property Name=\"RestrictedProperties\" Type=\"Collection(Capabilities.NavigationPropertyRestriction)\" />\r\n      </ComplexType>\r\n      <ComplexType Name=\"NavigationPropertyRestriction\">\r\n        <Property Name=\"NavigationProperty\" Type=\"Edm.NavigationPropertyPath\">\r\n          <Annotation Term=\"Core.Description\" String=\"Navigation properties can be navigated\" />\r\n        </Property>\r\n        <Property Name=\"Navigability\" Type=\"Capabilities.NavigationType\">\r\n          <Annotation Term=\"Core.Description\" String=\"Navigation properties can be navigated to this level\" />\r\n        </Property>\r\n      </ComplexType>\r\n      <EnumType Name=\"NavigationType\">\r\n        <Member Name=\"Recursive\">\r\n          <Annotation Term=\"Core.Description\" String=\"Navigation properties can be recursively navigated\" />\r\n        </Member>\r\n        <Member Name=\"Single\">\r\n          <Annotation Term=\"Core.Description\" String=\"Navigation properties can be navigated to a single level\" />\r\n        </Member>\r\n        <Member Name=\"None\">\r\n          <Annotation Term=\"Core.Description\" String=\"Navigation properties are not navigable\" />\r\n        </Member>\r\n      </EnumType>\r\n\r\n      <Term Name=\"IndexableByKey\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports key values according to OData URL conventions\" />\r\n      </Term>\r\n\r\n      <Term Name=\"TopSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports $top\" />\r\n      </Term>\r\n      <Term Name=\"SkipSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports $skip\" />\r\n      </Term>\r\n\r\n      <Term Name=\"BatchSupported\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Supports $batch requests\" />\r\n      </Term>\r\n\r\n      <Term Name=\"FilterFunctions\" Type=\"Collection(Edm.String)\" AppliesTo=\"EntityContainer EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"List of functions supported in $filter\" />\r\n      </Term>\r\n\r\n      <Term Name=\"FilterRestrictions\" Type=\"Capabilities.FilterRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on $filter expressions\" />\r\n      </Term>\r\n      <ComplexType Name=\"FilterRestrictionsType\">\r\n        <Property Name=\"Filterable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"$filter is supported\" />\r\n        </Property>\r\n        <Property Name=\"RequiresFilter\" Type=\"Edm.Boolean\" Nullable=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"$filter is required\" />\r\n        </Property>\r\n        <Property Name=\"RequiredProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\"\r\n            String=\"These properties must be specified in the $filter clause (properties of derived types are not allowed here)\" />\r\n        </Property>\r\n        <Property Name=\"NonFilterableProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These properties cannot be used in $filter expressions\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"SortRestrictions\" Type=\"Capabilities.SortRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on $orderby expressions\" />\r\n      </Term>\r\n      <ComplexType Name=\"SortRestrictionsType\">\r\n        <Property Name=\"Sortable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"$orderby is supported\" />\r\n        </Property>\r\n        <Property Name=\"AscendingOnlyProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These properties can only be used for sorting in Ascending order\" />\r\n        </Property>\r\n        <Property Name=\"DescendingOnlyProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These properties can only be used for sorting in Descending order\" />\r\n        </Property>\r\n        <Property Name=\"NonSortableProperties\" Type=\"Collection(Edm.PropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These properties cannot be used in $orderby expressions\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"ExpandRestrictions\" Type=\"Capabilities.ExpandRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on $expand expressions\" />\r\n      </Term>\r\n      <ComplexType Name=\"ExpandRestrictionsType\">\r\n        <Property Name=\"Expandable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"$expand is supported\" />\r\n        </Property>\r\n        <Property Name=\"NonExpandableProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These properties cannot be used in $expand expressions\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"SearchRestrictions\" Type=\"Capabilities.SearchRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on $search expressions\" />\r\n      </Term>\r\n      <ComplexType Name=\"SearchRestrictionsType\">\r\n        <Property Name=\"Searchable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"$search is supported\" />\r\n        </Property>\r\n        <Property Name=\"UnsupportedExpressions\" Type=\"Capabilities.SearchExpressions\" DefaultValue=\"none\">\r\n          <Annotation Term=\"Core.Description\" String=\"Expressions supported in $search\" />\r\n        </Property>\r\n      </ComplexType>\r\n      <EnumType Name=\"SearchExpressions\" IsFlags=\"true\">\r\n        <Member Name=\"none\" Value=\"0\" />\r\n        <Member Name=\"AND\" Value=\"1\" />\r\n        <Member Name=\"OR\" Value=\"2\" />\r\n        <Member Name=\"NOT\" Value=\"4\" />\r\n        <Member Name=\"phrase\" Value=\"8\" />\r\n        <Member Name=\"group\" Value=\"16\" />\r\n      </EnumType>\r\n\r\n      <!-- Data Modification Capabilities -->\r\n\r\n      <Term Name=\"InsertRestrictions\" Type=\"Capabilities.InsertRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on insert operations\" />\r\n      </Term>\r\n      <ComplexType Name=\"InsertRestrictionsType\">\r\n        <Property Name=\"Insertable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"Entities can be inserted\" />\r\n        </Property>\r\n        <Property Name=\"NonInsertableNavigationProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These navigation properties do not allow deep inserts\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"UpdateRestrictions\" Type=\"Capabilities.UpdateRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on update operations\" />\r\n      </Term>\r\n      <ComplexType Name=\"UpdateRestrictionsType\">\r\n        <Property Name=\"Updatable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"Entities can be updated\" />\r\n        </Property>\r\n        <Property Name=\"NonUpdatableNavigationProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These navigation properties do not allow rebinding\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n      <Term Name=\"DeleteRestrictions\" Type=\"Capabilities.DeleteRestrictionsType\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\" String=\"Restrictions on delete operations\" />\r\n      </Term>\r\n      <ComplexType Name=\"DeleteRestrictionsType\">\r\n        <Property Name=\"Deletable\" Type=\"Edm.Boolean\" DefaultValue=\"true\">\r\n          <Annotation Term=\"Core.Description\" String=\"Entities can be deleted\" />\r\n        </Property>\r\n        <Property Name=\"NonDeletableNavigationProperties\" Type=\"Collection(Edm.NavigationPropertyPath)\">\r\n          <Annotation Term=\"Core.Description\" String=\"These navigation properties do not allow DeleteLink requests\" />\r\n        </Property>\r\n      </ComplexType>\r\n\r\n    </Schema>\r\n  </edmx:DataServices>\r\n</edmx:Edmx>"
#define XS_CsdlParser_DOC_2_SCHEMA @"<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n<!--\r\n\r\n     OData Version 4.0 Plus Errata 02\r\n     OASIS Standard incorporating Approved Errata 02\r\n     30 October 2014\r\n     Copyright (c) OASIS Open 2014. All Rights Reserved.\r\n     Source: http://docs.oasis-open.org/odata/odata/v4.0/errata02/os/complete/vocabularies/\r\n \r\n-->\r\n<!--\r\n\r\nTechnical Committee:\r\n  OASIS Open Data Protocol (OData) TC\r\n  https://www.oasis-open.org/committees/odata\r\n\r\nChairs:\r\n  - Barbara Hartel (barbara.hartel@sap.com), SAP AG\r\n  - Ram Jeyaraman (Ram.Jeyaraman@microsoft.com), Microsoft\r\n\r\nEditors:\r\n  - Ralf Handl (ralf.handl@sap.com), SAP AG\r\n  - Michael Pizzo (mikep@microsoft.com), Microsoft\r\n  - Martin Zurmuehl (martin.zurmuehl@sap.com), SAP AG\r\n\r\nAdditional artifacts: \r\n  This CSDL document is one component of a Work Product which consists of:\r\n  - OData Version 4.0 Part 1: Protocol\r\n  - OData Version 4.0 Part 2: URL Conventions\r\n  - OData Version 4.0 Part 3: Common Schema Definition Language (CSDL)\r\n  - OData ABNF Construction Rules Version 4.0 \r\n  - OData ABNF Test Cases\r\n  - OData Core Vocabulary (this document)\r\n  - OData Capabilities Vocabulary\r\n  - OData Measures Vocabulary\r\n  - OData Metadata Service Entity Model\r\n  - OData EDMX XML Schema\r\n  - OData EDM XML Schema\r\n\r\nRelated work:\r\n  This work product is related to the following two Work Products, each of \r\n  which define alternate formats for OData payloads\r\n  - OData Atom Format Version 4.0\r\n  - OData JSON Format Version 4.0\r\n  This specification replaces or supersedes:\r\n  - None\r\n\r\nDeclared XML namespaces:\r\n  - http://docs.oasis-open.org/odata/ns/edmx\r\n  - http://docs.oasis-open.org/odata/ns/edm\r\n\r\nAbstract:\r\n  The Open Data Protocol (OData) enables the creation of REST-based data\r\n  services, which allow resources, identified using Uniform Resource\r\n  Identifiers (URLs) and defined in a data model, to be published and \r\n  edited by Web clients using simple HTTP messages. This document defines\r\n  the URL syntax for requests and the serialization format for primitive \r\n  literals in request and response payloads.\r\n\r\nOverview:\r\n  This document contains Core terms needed to write vocabularies.  \r\n\r\n-->\r\n<edmx:Edmx xmlns:edmx=\"http://docs.oasis-open.org/odata/ns/edmx\" Version=\"4.0\">\r\n  <edmx:DataServices>\r\n    <Schema xmlns=\"http://docs.oasis-open.org/odata/ns/edm\" Namespace=\"Org.OData.Core.V1\" Alias=\"Core\">\r\n      <Annotation Term=\"Core.Description\">\r\n        <String>Core terms needed to write vocabularies</String>\r\n      </Annotation>\r\n\r\n      <!--Documentation -->\r\n\r\n      <Term Name=\"Description\" Type=\"Edm.String\">\r\n        <Annotation Term=\"Core.Description\" String=\"A brief description of a model element\" />\r\n        <Annotation Term=\"Core.IsLanguageDependent\" />\r\n      </Term>\r\n\r\n      <Term Name=\"LongDescription\" Type=\"Edm.String\">\r\n        <Annotation Term=\"Core.Description\" String=\"A lengthy description of a model element\" />\r\n        <Annotation Term=\"Core.IsLanguageDependent\" />\r\n      </Term>\r\n\r\n      <!-- Localization -->\r\n\r\n      <Term Name=\"IsLanguageDependent\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"Term Property\">\r\n        <Annotation Term=\"Core.Description\" String=\"Properties and terms annotated with this term are language-dependent\" />\r\n        <Annotation Term=\"Core.RequiresType\" String=\"Edm.String\" />\r\n      </Term>\r\n\r\n      <!-- Term Restrictions -->\r\n\r\n      <TypeDefinition Name=\"Tag\" UnderlyingType=\"Edm.Boolean\">\r\n        <Annotation Term=\"Core.Description\" String=\"This is the type to use for all tagging terms\" />\r\n      </TypeDefinition>\r\n\r\n      <Term Name=\"RequiresType\" Type=\"Edm.String\" AppliesTo=\"Term\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"Terms annotated with this term can only be applied to elements that have a type that is identical to or derived from the given type name\" />\r\n      </Term>\r\n\r\n      <!--Resource Paths -->\r\n\r\n      <Term Name=\"ResourcePath\" Type=\"Edm.String\" AppliesTo=\"EntitySet Singleton ActionImport FunctionImport\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"Resource path for entity container child, can be relative to xml:base and the request URL\" />\r\n        <!-- fix bug: <Annotation Term=\"Core.IsUrl\" /> -->\r\n        <Annotation Term=\"Core.IsURL\" />\r\n      </Term>\r\n\r\n      <Term Name=\"DereferenceableIDs\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Entity-ids are URLs that locate the identified entity\" />\r\n      </Term>\r\n\r\n      <Term Name=\"ConventionalIDs\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"EntityContainer\">\r\n        <Annotation Term=\"Core.Description\" String=\"Entity-ids follow OData URL conventions\" />\r\n      </Term>\r\n\r\n      <!-- Permissions -->\r\n\r\n      <Term Name=\"Permissions\" Type=\"Core.Permission\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\" String=\"Permissions available for a property.The value of 2 is reserved for future use.\" />\r\n      </Term>\r\n      <EnumType Name=\"Permission\" IsFlags=\"true\">\r\n        <Member Name=\"None\" Value=\"0\" />\r\n        <Member Name=\"Read\" Value=\"1\" />\r\n        <Member Name=\"ReadWrite\" Value=\"3\" />\r\n      </EnumType>\r\n\r\n      <!-- Metadata Extensions -->\r\n\r\n      <Term Name=\"Immutable\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"A value for this non-key property can be provided on insert and remains unchanged on update\" />\r\n      </Term>\r\n\r\n      <Term Name=\"Computed\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\" String=\"A value for this property is generated on both insert and update\" />\r\n      </Term>\r\n\r\n      <Term Name=\"IsURL\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"Property Term\">\r\n        <Annotation Term=\"Core.Description\" String=\"Properties and terms annotated with this term MUST contain a valid URL\" />\r\n        <Annotation Term=\"Core.RequiresType\" String=\"Edm.String\" />\r\n      </Term>\r\n\r\n      <Term Name=\"AcceptableMediaTypes\" Type=\"Collection(Edm.String)\" AppliesTo=\"EntityType Property\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"Lists the MIME types acceptable for the annotated entity type marked with HasStream=&quot;true&quot; or the annotated stream property\" />\r\n        <Annotation Term=\"Core.IsMediaType\" />\r\n      </Term>\r\n\r\n      <Term Name=\"MediaType\" Type=\"Edm.String\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.IsMediaType\" />\r\n        <Annotation Term=\"Core.RequiresType\" String=\"Edm.Binary\" />\r\n      </Term>\r\n\r\n      <Term Name=\"IsMediaType\" Type=\"Core.Tag\" DefaultValue=\"true\" AppliesTo=\"Property Term\">\r\n        <Annotation Term=\"Core.Description\" String=\"Properties and terms annotated with this term MUST contain a valid MIME type\" />\r\n        <Annotation Term=\"Core.RequiresType\" String=\"Edm.String\" />\r\n      </Term>\r\n\r\n      <Term Name=\"OptimisticConcurrency\" Type=\"Collection(Edm.PropertyPath)\" AppliesTo=\"EntitySet\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"Data modification requires the use of Etags. A non-empty collection contains the set of properties that are used to compute the ETag\" />\r\n      </Term>\r\n\r\n    </Schema>\r\n  </edmx:DataServices>\r\n</edmx:Edmx>"
#define XS_CsdlParser_DOC_3_SCHEMA @"<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n<!--\r\n\r\n     OData Version 4.0 Plus Errata 02\r\n     OASIS Standard incorporating Approved Errata 02\r\n     30 October 2014\r\n     Copyright (c) OASIS Open 2014. All Rights Reserved.\r\n     Source: http://docs.oasis-open.org/odata/odata/v4.0/errata02/os/complete/vocabularies/\r\n \r\n-->\r\n<!--\r\n\r\nTechnical Committee:\r\n  OASIS Open Data Protocol (OData) TC\r\n  https://www.oasis-open.org/committees/odata\r\n\r\nChairs:\r\n  - Barbara Hartel (barbara.hartel@sap.com), SAP AG\r\n  - Ram Jeyaraman (Ram.Jeyaraman@microsoft.com), Microsoft\r\n\r\nEditors:\r\n  - Ralf Handl (ralf.handl@sap.com), SAP AG\r\n  - Michael Pizzo (mikep@microsoft.com), Microsoft\r\n  - Martin Zurmuehl (martin.zurmuehl@sap.com), SAP AG\r\n\r\nAdditional artifacts: \r\n  This CSDL document is one component of a Work Product which consists of:\r\n  - OData Version 4.0 Part 1: Protocol\r\n  - OData Version 4.0 Part 2: URL Conventions\r\n  - OData Version 4.0 Part 3: Common Schema Definition Language (CSDL)\r\n  - OData ABNF Construction Rules Version 4.0 \r\n  - OData ABNF Test Cases\r\n  - OData Core Vocabulary\r\n  - OData Capabilities Vocabulary\r\n  - OData Measures Vocabulary (this document)\r\n  - OData Metadata Service Entity Model\r\n  - OData EDMX XML Schema\r\n  - OData EDM XML Schema\r\n\r\nRelated work:\r\n  This work product is related to the following two Work Products, each of \r\n  which define alternate formats for OData payloads\r\n  - OData Atom Format Version 4.0\r\n  - OData JSON Format Version 4.0\r\n  This specification replaces or supersedes:\r\n  - None\r\n\r\nDeclared XML namespaces:\r\n  - http://docs.oasis-open.org/odata/ns/edmx\r\n  - http://docs.oasis-open.org/odata/ns/edm\r\n\r\nAbstract:\r\n  The Open Data Protocol (OData) enables the creation of REST-based data\r\n  services, which allow resources, identified using Uniform Resource\r\n  Identifiers (URLs) and defined in a data model, to be published and \r\n  edited by Web clients using simple HTTP messages. This document defines\r\n  the URL syntax for requests and the serialization format for primitive \r\n  literals in request and response payloads.\r\n\r\nOverview:\r\n  This document contains terms describing monetary amounts and measured quantities.  \r\n\r\n-->\r\n<edmx:Edmx xmlns:edmx=\"http://docs.oasis-open.org/odata/ns/edmx\" Version=\"4.0\">\r\n  <edmx:Reference Uri=\"http://docs.oasis-open.org/odata/odata/v4.0/os/vocabularies/Org.OData.Core.V1.xml\">\r\n    <edmx:Include Alias=\"Core\" Namespace=\"Org.OData.Core.V1\" />\r\n  </edmx:Reference>\r\n  <edmx:DataServices>\r\n    <Schema xmlns=\"http://docs.oasis-open.org/odata/ns/edm\" Namespace=\"Org.OData.Measures.V1\" Alias=\"Measures\">\r\n      <Annotation Term=\"Core.Description\">\r\n        <String>Terms describing monetary amounts and measured quantities</String>\r\n      </Annotation>\r\n\r\n      <Term Name=\"ISOCurrency\" Type=\"Edm.String\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\" String=\"The currency for this monetary amount as an ISO 4217 currency code\" />\r\n      </Term>\r\n\r\n      <Term Name=\"Scale\" Type=\"Edm.Byte\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\"\r\n          String=\"The number of significant decimal places in the scale part (less than or equal to the number declared in the Scale facet)\" />\r\n        <Annotation Term=\"Core.RequiresType\" String=\"Edm.Decimal\" />\r\n      </Term>\r\n\r\n      <Term Name=\"Unit\" Type=\"Edm.String\" AppliesTo=\"Property\">\r\n        <Annotation Term=\"Core.Description\" String=\"The unit of measure for this measured quantity, e.g. cm for centimeters or % for percentages\" />\r\n      </Term>\r\n\r\n    </Schema>\r\n  </edmx:DataServices>\r\n</edmx:Edmx>"
@property (xs__nonnull nonatomic, readwrite, strong) XS_StringSet* alreadyLoaded;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CsdlDocument* document;
@property (xs__nonnull nonatomic, readwrite, strong) XS_ComplexTypeMap* finalComplex;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityContainerMap* finalContainer;
@property (xs__nonnull nonatomic, readwrite, strong) XS_EntityTypeMap* finalEntity;
@property (xs__nonnull nonatomic, readwrite, strong) XS_Logger* logger;
@property (xs__nonnull nonatomic, readwrite, strong) XS_StringMap* nsAliases;
@property (xs__nonnull nonatomic, readwrite, strong) XS_XmlElement* rootElement;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataSchema* schema;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CsdlAssociationMap* v3Associations;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociationMap_internal
#ifndef imported_XS_CsdlAssociationMap_internal
#define imported_XS_CsdlAssociationMap_public
/* internal */
@interface XS_CsdlAssociationMap : XS_MapBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlAssociationMap*) new;
+ (xs_nonnull XS_CsdlAssociationMap*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_boolean) delete_ :(xs_nonnull NSString*)key;
+ (xs_nonnull XS_CsdlAssociationMap*) empty;
- (xs_nonnull XS_CsdlAssociationMap_EntryList*) entries;
- (xs_nullable XS_CsdlAssociation*) get :(xs_nonnull NSString*)key;
- (xs_nonnull XS_CsdlAssociation*) getRequired :(xs_nonnull NSString*)key;
- (xs_boolean) has :(xs_nonnull NSString*)key;
- (xs_nonnull XS_StringList*) keys;
- (xs_nonnull XS_CsdlAssociationMap*) set :(xs_nonnull NSString*)key :(xs_nonnull XS_CsdlAssociation*)value;
- (xs_nonnull XS_CsdlAssociationList*) values;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociationMap_private
#ifndef imported_XS_CsdlAssociationMap_private
#define imported_XS_CsdlAssociationMap_private
@interface XS_CsdlAssociationMap (private)
+ (xs_nonnull XS_CsdlAssociationMap_Entry*) _new1 :(xs_nonnull XS_CsdlAssociation*)p1 :(xs_nonnull NSString*)p2;
@end
#endif
#endif

#ifdef import_XS_AnnotationToResolveList_internal
#ifndef imported_XS_AnnotationToResolveList_internal
#define imported_XS_AnnotationToResolveList_public
/* internal */
@interface XS_AnnotationToResolveList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_AnnotationToResolveList*) new;
+ (xs_nonnull XS_AnnotationToResolveList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_AnnotationToResolveList*) add :(xs_nonnull XS_AnnotationToResolve*)item;
- (xs_nonnull XS_AnnotationToResolveList*) addAll :(xs_nonnull XS_AnnotationToResolveList*)list;
- (xs_nonnull XS_AnnotationToResolveList*) copy;
+ (xs_nonnull XS_AnnotationToResolveList*) empty;
- (xs_nonnull XS_AnnotationToResolve*) first;
- (xs_nonnull XS_AnnotationToResolve*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_AnnotationToResolve*)item;
- (xs_int) indexOf :(xs_nonnull XS_AnnotationToResolve*)item;
- (xs_int) indexOf :(xs_nonnull XS_AnnotationToResolve*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_AnnotationToResolve*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_AnnotationToResolveList*)list;
- (xs_nonnull XS_AnnotationToResolve*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_AnnotationToResolve*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_AnnotationToResolve*)item :(xs_int)start;
- (xs_nonnull XS_AnnotationToResolve*) pop;
- (xs_int) push :(xs_nonnull XS_AnnotationToResolve*)item;
- (xs_nonnull XS_AnnotationToResolveList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_AnnotationToResolve*)item;
+ (xs_nonnull XS_AnnotationToResolveList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_AnnotationToResolve*) shift;
- (xs_nonnull XS_AnnotationToResolveList*) slice :(xs_int)start;
- (xs_nonnull XS_AnnotationToResolveList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_AnnotationToResolveList*) sort;
- (xs_int) unshift :(xs_nonnull XS_AnnotationToResolve*)item;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociationList_internal
#ifndef imported_XS_CsdlAssociationList_internal
#define imported_XS_CsdlAssociationList_public
/* internal */
@interface XS_CsdlAssociationList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlAssociationList*) new;
+ (xs_nonnull XS_CsdlAssociationList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_CsdlAssociationList*) add :(xs_nonnull XS_CsdlAssociation*)item;
- (xs_nonnull XS_CsdlAssociationList*) addAll :(xs_nonnull XS_CsdlAssociationList*)list;
- (xs_nonnull XS_CsdlAssociationList*) copy;
+ (xs_nonnull XS_CsdlAssociationList*) empty;
- (xs_nonnull XS_CsdlAssociation*) first;
- (xs_nonnull XS_CsdlAssociation*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_CsdlAssociation*)item;
- (xs_int) indexOf :(xs_nonnull XS_CsdlAssociation*)item;
- (xs_int) indexOf :(xs_nonnull XS_CsdlAssociation*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_CsdlAssociation*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_CsdlAssociationList*)list;
- (xs_nonnull XS_CsdlAssociation*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_CsdlAssociation*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_CsdlAssociation*)item :(xs_int)start;
- (xs_nonnull XS_CsdlAssociation*) pop;
- (xs_int) push :(xs_nonnull XS_CsdlAssociation*)item;
- (xs_nonnull XS_CsdlAssociationList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_CsdlAssociation*)item;
+ (xs_nonnull XS_CsdlAssociationList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_CsdlAssociation*) shift;
- (xs_nonnull XS_CsdlAssociationList*) slice :(xs_int)start;
- (xs_nonnull XS_CsdlAssociationList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_CsdlAssociationList*) sort;
- (xs_int) unshift :(xs_nonnull XS_CsdlAssociation*)item;
@end
#endif
#endif

#ifdef import_XS_CsdlAssociationMap_EntryList_internal
#ifndef imported_XS_CsdlAssociationMap_EntryList_internal
#define imported_XS_CsdlAssociationMap_EntryList_public
/* internal */
@interface XS_CsdlAssociationMap_EntryList : XS_ListBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlAssociationMap_EntryList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_CsdlAssociationMap_EntryList*) add :(xs_nonnull XS_CsdlAssociationMap_Entry*)item;
- (xs_nonnull XS_CsdlAssociationMap_Entry*) get :(xs_int)index;
- (void) set :(xs_int)index :(xs_nonnull XS_CsdlAssociationMap_Entry*)item;
@end
#endif
#endif

#ifdef import_XS_CsdlNavigation_internal
#ifndef imported_XS_CsdlNavigation_internal
#define imported_XS_CsdlNavigation_public
/* internal */
@interface XS_CsdlNavigation : XS_PropertyInfo
{
    @private NSString* xs___nonnull  relName_;
    @private NSString* xs___nonnull  fromRole_;
    @private NSString* xs___nonnull  toRole_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_CsdlNavigation*) new;
- (void) _init;
- (xs_nonnull NSString*) fromRole;
- (xs_nonnull NSString*) relName;
- (void) setFromRole :(xs_nonnull NSString*)value;
- (void) setRelName :(xs_nonnull NSString*)value;
- (void) setToRole :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) toRole;
@property (xs__nonnull nonatomic, readwrite) NSString* fromRole;
@property (xs__nonnull nonatomic, readwrite) NSString* relName;
@property (xs__nonnull nonatomic, readwrite) NSString* toRole;
@end
#endif
#endif

#ifndef imported_XS_CsdlException_public
#define imported_XS_CsdlException_public
@interface XS_CsdlException : XS_DataSchemaException
{
}
+ (xs_nonnull XS_CsdlException*) new;
- (void) _init;
+ (xs_nonnull XS_CsdlException*) cannotFetch :(xs_nonnull NSString*)url;
+ (xs_nonnull XS_CsdlException*) unknownSchema :(xs_nonnull NSString*)ns;
+ (xs_nonnull XS_CsdlException*) withCause :(xs_nullable NSException*)param_cause;
+ (xs_nonnull XS_CsdlException*) withCauseAndMessage :(xs_nullable NSException*)param_cause :(xs_nullable NSString*)param_message;
+ (xs_nonnull XS_CsdlException*) withMessage :(xs_nullable NSString*)param_message;
@end
#endif

#ifdef import_XS_CsdlException_private
#ifndef imported_XS_CsdlException_private
#define imported_XS_CsdlException_private
@interface XS_CsdlException (private)
+ (xs_nonnull XS_CsdlException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_CsdlException*) _new2 :(xs_nullable NSString*)p1 :(xs_nullable NSException*)p2;
+ (xs_nonnull XS_CsdlException*) _new3 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
