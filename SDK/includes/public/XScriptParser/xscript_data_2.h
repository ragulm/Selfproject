#ifndef XSCRIPT_DATA_2_H
#define XSCRIPT_DATA_2_H

@class XS_DataContext;
@class XS_UrlConventions;
@class XS_ValueToStringContext; /* internal */

#ifndef imported_XS_DataContext_public
#define imported_XS_DataContext_public
@interface XS_DataContext : XS_ObjectBase
{
    @private XS_EntitySetList* xs___nonnull  expectedStack;
    @private XS_CsdlDocument* xs___nonnull  csdlDocument_;
    @private xs_int bindOptions_;
    @private xs_int versionCode_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_DataContext*) new :(xs_nonnull XS_CsdlDocument*)csdl;
- (void) _init :(xs_nonnull XS_CsdlDocument*)csdl;
- (xs_int) bindOptions;
- (xs_nonnull XS_CsdlDocument*) csdlDocument;
+ (xs_nullable XS_ComplexType*) findActualComplex :(xs_nonnull XS_ComplexType*)formalType :(xs_nonnull NSString*)typeName;
+ (xs_nullable XS_EntityType*) findActualEntity :(xs_nonnull XS_EntityType*)formalType :(xs_nonnull NSString*)typeName;
+ (xs_nonnull XS_DataContext*) forConversionToString;
- (xs_nonnull XS_DataContext*) forEntity :(xs_nullable XS_EntitySet*)entitySet;
- (xs_nonnull XS_DataContext*) forVersion :(xs_int)version;
- (xs_nonnull XS_ComplexType*) getComplexType :(xs_nonnull NSString*)name;
- (xs_nonnull XS_DataMethod*) getDataMethod :(xs_nonnull NSString*)name;
- (xs_nullable NSObject*) getDocument :(xs_nonnull XS_DataType*)dataType :(xs_nonnull NSString*)location;
- (xs_nonnull XS_EntitySet*) getEntitySet :(xs_nonnull NSString*)name;
- (xs_nonnull XS_EntityType*) getEntityType :(xs_nonnull NSString*)name;
- (xs_nullable XS_DataMethod*) getOptionalDataMethod :(xs_nonnull NSString*)name;
- (xs_nullable XS_EntitySet*) getOptionalEntitySet :(xs_nonnull NSString*)name;
- (xs_nonnull NSString*) getServiceRoot;
- (xs_boolean) hasMetadata;
- (xs_boolean) inferEntitySet :(xs_nullable NSString*)url;
- (xs_nullable NSString*) makeRelative :(xs_nullable NSString*)url;
- (void) popExpected;
- (void) prepareToFormat :(xs_nullable XS_DataValue*)value;
- (void) prepareToPatch :(xs_nullable XS_DataValue*)value :(xs_nullable XS_DataValue*)old;
- (void) pushExpected :(xs_nonnull XS_EntitySet*)entitySet;
- (xs_nullable XS_DataType*) resolveAnyType :(xs_nonnull NSString*)name;
- (void) setBindOptions :(xs_int)value;
- (void) setCsdlDocument :(xs_nonnull XS_CsdlDocument*)value;
- (void) setVersionCode :(xs_int)value;
- (xs_nonnull XS_EntitySet*) topExpected;
- (xs_int) versionCode;
- (xs_nonnull XS_DataContext*) withExpected :(xs_nonnull XS_EntitySet*)entitySet;
- (xs_nonnull XS_DataContext*) withOptions :(xs_int)options;
- (xs_nonnull XS_DataContext*) withVersion :(xs_int)version;
#define XS_DataContext_KEY_ONLY 1
#define XS_DataContext_KEY_AND_CHANGES 2
#define XS_DataContext_SEND_TO_CLIENT 4
#define XS_DataContext_VALUE_TO_STRING 8
#define XS_DataContext_FULL_METADATA 16
@property (nonatomic, readwrite) xs_int bindOptions;
@property (xs__nonnull nonatomic, readwrite, strong) XS_CsdlDocument* csdlDocument;
@property (nonatomic, readwrite) xs_int versionCode;
@end
#endif

#ifndef imported_XS_UrlConventions_public
#define imported_XS_UrlConventions_public
@interface XS_UrlConventions : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) entityReference :(xs_nonnull XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) formatAbsolute :(xs_nonnull XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) formatCanonical :(xs_nonnull XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) formatDataValue :(xs_nullable XS_DataValue*)value :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) formatEntityKey :(xs_nonnull XS_EntityValue*)entity :(xs_nonnull XS_DataContext*)context;
+ (xs_nonnull NSString*) formatKeyValues :(xs_nonnull XS_EntityType*)entityType :(xs_nonnull XS_DataValueList*)keyValues :(xs_nonnull XS_DataContext*)context;
+ (xs_nullable XS_EntityValue*) parseCanonical :(xs_nonnull NSString*)url :(xs_nonnull XS_DataContext*)context;
+ (xs_nullable XS_DataValue*) parseDataValue :(xs_nonnull NSString*)value :(xs_nonnull XS_DataType*)type :(xs_nonnull XS_DataContext*)context;
@end
#endif

#ifdef import_XS_UrlConventions_private
#ifndef imported_XS_UrlConventions_private
#define imported_XS_UrlConventions_private
@interface XS_UrlConventions (private)
+ (xs_int) firstUnquotedPos :(xs_char)c :(xs_nonnull NSString*)s;
+ (xs_nonnull XS_StringList*) getUnquotedParts :(xs_char)c :(xs_nonnull NSString*)s;
+ (xs_int) lastUnquotedPos :(xs_char)c :(xs_nonnull NSString*)s;
+ (xs_nonnull NSString*) removeQuotesFrom :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) removeTypeSuffix :(xs_nonnull NSString*)text :(xs_char)lowerSuffix :(xs_char)upperSuffix;
+ (xs_nonnull NSString*) singleQuotedText :(xs_nonnull NSString*)text;
+ (xs_nonnull NSString*) textBetweenQuotes :(xs_nonnull NSString*)text;
@end
#endif
#endif

#ifdef import_XS_ValueToStringContext_internal
#ifndef imported_XS_ValueToStringContext_internal
#define imported_XS_ValueToStringContext_public
/* internal */
@interface XS_ValueToStringContext : XS_DataContext
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_ValueToStringContext*) new;
- (void) _init;
- (xs_nullable NSObject*) getDocument :(xs_nonnull XS_DataType*)dataType :(xs_nonnull NSString*)location;
- (xs_boolean) hasMetadata;
@end
#endif
#endif

#ifdef import_XS_ValueToStringContext_private
#ifndef imported_XS_ValueToStringContext_private
#define imported_XS_ValueToStringContext_private
@interface XS_ValueToStringContext (private)
+ (xs_nonnull XS_CsdlDocument*) EMPTY_CSDL;
@end
#endif
#endif

#endif
