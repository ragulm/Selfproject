#ifndef XSCRIPT_XML_H
#define XSCRIPT_XML_H

@class XS_Any_as_xscript_xml_XmlAttribute_in_xscript_xml; /* internal */
@class XS_Any_as_xscript_xml_XmlComment_in_xscript_xml; /* internal */
@class XS_Any_as_xscript_xml_XmlElement_in_xscript_xml; /* internal */
@class XS_Any_as_xscript_xml_XmlNode_in_xscript_xml; /* internal */
@class XS_Any_as_xscript_xml_XmlText_in_xscript_xml; /* internal */
@class XS_XmlAttribute;
@class XS_XmlDocument;
@class XS_XmlName;
@class XS_XmlNode;
@class XS_XmlParser;
@class XS_XmlPretty;
@class XS_XmlComment;
@class XS_XmlElement;
@class XS_XmlText;
@class XS_XmlAttributeList;
@class XS_XmlCommentList;
@class XS_XmlElementList;
@class XS_XmlNodeList;
@class XS_XmlException;

#ifdef import_XS_Any_as_xscript_xml_XmlAttribute_in_xscript_xml_internal
#ifndef imported_XS_Any_as_xscript_xml_XmlAttribute_in_xscript_xml_internal
#define imported_XS_Any_as_xscript_xml_XmlAttribute_in_xscript_xml_public
/* internal */
@interface XS_Any_as_xscript_xml_XmlAttribute_in_xscript_xml : XS_ObjectBase
{
}
+ (xs_nonnull XS_XmlAttribute*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_xml_XmlComment_in_xscript_xml_internal
#ifndef imported_XS_Any_as_xscript_xml_XmlComment_in_xscript_xml_internal
#define imported_XS_Any_as_xscript_xml_XmlComment_in_xscript_xml_public
/* internal */
@interface XS_Any_as_xscript_xml_XmlComment_in_xscript_xml : XS_ObjectBase
{
}
+ (xs_nonnull XS_XmlComment*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_xml_XmlElement_in_xscript_xml_internal
#ifndef imported_XS_Any_as_xscript_xml_XmlElement_in_xscript_xml_internal
#define imported_XS_Any_as_xscript_xml_XmlElement_in_xscript_xml_public
/* internal */
@interface XS_Any_as_xscript_xml_XmlElement_in_xscript_xml : XS_ObjectBase
{
}
+ (xs_nonnull XS_XmlElement*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_xml_XmlNode_in_xscript_xml_internal
#ifndef imported_XS_Any_as_xscript_xml_XmlNode_in_xscript_xml_internal
#define imported_XS_Any_as_xscript_xml_XmlNode_in_xscript_xml_public
/* internal */
@interface XS_Any_as_xscript_xml_XmlNode_in_xscript_xml : XS_ObjectBase
{
}
+ (xs_nonnull XS_XmlNode*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifdef import_XS_Any_as_xscript_xml_XmlText_in_xscript_xml_internal
#ifndef imported_XS_Any_as_xscript_xml_XmlText_in_xscript_xml_internal
#define imported_XS_Any_as_xscript_xml_XmlText_in_xscript_xml_public
/* internal */
@interface XS_Any_as_xscript_xml_XmlText_in_xscript_xml : XS_ObjectBase
{
}
+ (xs_nonnull XS_XmlText*) cast :(xs_nullable NSObject*)value;
@end
#endif
#endif

#ifndef imported_XS_XmlAttribute_public
#define imported_XS_XmlAttribute_public
@interface XS_XmlAttribute : XS_ObjectBase
{
    @private NSString* xs___nonnull  name_;
    @private NSString* xs___nullable  prefix_;
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nullable  namespaceURI_;
    @private NSString* xs___nonnull  value_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlAttribute*) new;
- (void) _init;
- (xs_nonnull XS_XmlAttribute*) andValue :(xs_nonnull NSString*)param_value;
- (xs_boolean) hasPrefix;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nullable NSString*) namespaceURI;
- (xs_nullable NSString*) prefix;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setName :(xs_nonnull NSString*)value;
- (void) setNamespaceURI :(xs_nullable NSString*)value;
- (void) setPrefix :(xs_nullable NSString*)value;
- (void) setValue :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) value;
+ (xs_nonnull XS_XmlAttribute*) withName :(xs_nonnull NSString*)param_name;
+ (xs_nonnull XS_XmlAttribute*) withQName :(xs_nonnull XS_XmlName*)param_name;
@property (nonatomic, readonly) xs_boolean hasPrefix;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readwrite) NSString* name;
@property (xs__nullable nonatomic, readwrite) NSString* namespaceURI;
@property (xs__nullable nonatomic, readwrite) NSString* prefix;
@property (xs__nonnull nonatomic, readwrite) NSString* value;
@end
#endif

#ifdef import_XS_XmlAttribute_private
#ifndef imported_XS_XmlAttribute_private
#define imported_XS_XmlAttribute_private
@interface XS_XmlAttribute (private)
+ (xs_nonnull XS_XmlAttribute*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nullable NSString*)p3;
@end
#endif
#endif

#ifndef imported_XS_XmlDocument_public
#define imported_XS_XmlDocument_public
@interface XS_XmlDocument : XS_ObjectBase
{
    @private NSString* xs___nullable  declaration_;
    @private XS_XmlElement* xs___nonnull  rootElement_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlDocument*) new;
- (void) _init;
- (void) appendTo :(xs_nonnull XS_CharBuffer*)buffer;
- (void) appendTo :(xs_nonnull XS_CharBuffer*)buffer :(xs_int)indent;
- (xs_nullable NSString*) declaration;
+ (xs_nonnull XS_XmlDocument*) parse :(xs_nonnull NSString*)xml;
+ (xs_nonnull XS_XmlDocument*) parseMixed :(xs_nonnull NSString*)xml :(xs_boolean)mixed;
- (void) resolveNamespaces;
- (xs_nonnull XS_XmlElement*) rootElement;
- (void) setDeclaration :(xs_nullable NSString*)value;
- (void) setRootElement :(xs_nonnull XS_XmlElement*)value;
- (xs_nonnull NSString*) toString;
@property (xs__nullable nonatomic, readwrite) NSString* declaration;
@property (xs__nonnull nonatomic, readwrite, strong) XS_XmlElement* rootElement;
@end
#endif

#ifndef imported_XS_XmlName_public
#define imported_XS_XmlName_public
@interface XS_XmlName : XS_ObjectBase
{
    @private NSString* xs___nullable  prefix_;
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nullable  full;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlName*) new;
- (void) _init;
- (xs_nonnull NSString*) fullName;
- (xs_nonnull NSString*) localName;
+ (xs_nonnull XS_XmlName*) parse :(xs_nonnull NSString*)name;
- (xs_nullable NSString*) prefix;
- (void) setFullName :(xs_nonnull NSString*)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setPrefix :(xs_nullable NSString*)value;
- (xs_nonnull NSString*) toString;
@property (xs__nonnull nonatomic, readonly) NSString* fullName;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nullable nonatomic, readwrite) NSString* prefix;
@end
#endif

#ifdef import_XS_XmlName_private
#ifndef imported_XS_XmlName_private
#define imported_XS_XmlName_private
@interface XS_XmlName (private)
+ (xs_nonnull XS_XmlName*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nullable NSString*)p3;
@end
#endif
#endif

#ifndef imported_XS_XmlNode_public
#define imported_XS_XmlNode_public
@interface XS_XmlNode : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlNode*) new;
- (void) _init;
- (xs_int) type;
#define XS_XmlNode_TYPE_COMMENT 1
#define XS_XmlNode_TYPE_ELEMENT 2
#define XS_XmlNode_TYPE_TEXT 3
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifndef imported_XS_XmlParser_public
#define imported_XS_XmlParser_public
@interface XS_XmlParser : XS_ObjectBase
{
    @private XS_CharStream* xs___nonnull  stream_;
    @private XS_CharBuffer* xs___nonnull  buffer;
    @private xs_boolean mixed;
    @private xs_boolean elementOnly;
    @private xs_int line;
    @private xs_boolean hasRoot;
    @private NSString* xs___nullable  declaration_;
    @private XS_XmlElement* xs___nonnull  rootElement_;
}
- (xs_nonnull id) init;
- (void) _init;
- (xs_nullable NSString*) declaration;
- (xs_nullable XS_XmlNode*) nextChild :(xs_nonnull XS_XmlElement*)element :(xs_boolean)parseNested;
- (xs_nullable XS_XmlElement*) nextChildElement :(xs_nonnull XS_XmlElement*)element :(xs_boolean)parseNested;
- (xs_nonnull XS_XmlElement*) nextElement;
+ (xs_nonnull XS_XmlDocument*) parseDocument :(xs_nonnull XS_CharStream*)param_stream :(xs_boolean)param_mixed;
+ (xs_nonnull XS_XmlElement*) parseElement :(xs_nonnull XS_CharStream*)param_stream :(xs_boolean)param_mixed;
- (xs_nonnull XS_XmlElement*) parseElement;
- (void) readChildren :(xs_nonnull XS_XmlElement*)element;
- (xs_nonnull XS_XmlElement*) rootElement;
- (void) setDeclaration :(xs_nullable NSString*)value;
- (void) setRootElement :(xs_nonnull XS_XmlElement*)value;
+ (xs_nonnull XS_XmlParser*) startDocument :(xs_nonnull XS_CharStream*)param_stream :(xs_boolean)param_mixed;
+ (xs_nonnull XS_XmlParser*) startElement :(xs_nonnull XS_CharStream*)param_stream :(xs_boolean)param_mixed;
@property (xs__nullable nonatomic, readwrite) NSString* declaration;
@property (xs__nonnull nonatomic, readwrite, strong) XS_XmlElement* rootElement;
@end
#endif

#ifdef import_XS_XmlParser_private
#ifndef imported_XS_XmlParser_private
#define imported_XS_XmlParser_private
@interface XS_XmlParser (private)
+ (xs_nonnull XS_XmlParser*) new;
- (xs_nonnull NSString*) atLocation;
- (void) expectNext :(xs_char)match :(xs_boolean)space;
- (xs_char) read;
- (void) readCData;
- (xs_nonnull NSString*) readComment;
- (xs_boolean) readMatch :(xs_char)match :(xs_boolean)space;
- (xs_nullable XS_XmlName*) readQName :(xs_nonnull NSString*)kind :(xs_boolean)required :(xs_boolean)space;
- (xs_nonnull NSString*) readValue;
- (xs_char) readXChar;
- (xs_char) readXHash;
- (xs_nonnull NSString*) readXmlPI;
- (void) setStream :(xs_nonnull XS_CharStream*)value;
- (xs_nonnull XS_CharStream*) stream;
- (void) unread :(xs_char)c;
+ (xs_nonnull XS_XmlParser*) _new1 :(xs_nonnull XS_CharStream*)p1 :(xs_boolean)p2;
+ (xs_nonnull XS_XmlDocument*) _new2 :(xs_nullable NSString*)p1 :(xs_nonnull XS_XmlElement*)p2;
+ (xs_nonnull XS_XmlParser*) _new3 :(xs_boolean)p1 :(xs_nonnull XS_CharStream*)p2 :(xs_boolean)p3;
+ (xs_nonnull XS_XmlName*) _new4 :(xs_nonnull NSString*)p1;
+ (xs_nonnull XS_XmlName*) _new5 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nullable NSString*)p3;
#define XS_XmlParser_EXPECTED_ROOT @"expected root element"
@property (xs__nonnull nonatomic, readwrite, strong) XS_CharStream* stream;
@end
#endif
#endif

#ifndef imported_XS_XmlPretty_public
#define imported_XS_XmlPretty_public
@interface XS_XmlPretty : XS_ObjectBase
{
}
+ (xs_nonnull NSString*) printDocument :(xs_nonnull XS_XmlDocument*)document;
+ (xs_nonnull NSString*) printDocument :(xs_nonnull XS_XmlDocument*)document :(xs_int)indent;
+ (xs_nonnull NSString*) printElement :(xs_nonnull XS_XmlElement*)element;
+ (xs_nonnull NSString*) printElement :(xs_nonnull XS_XmlElement*)element :(xs_int)indent;
@end
#endif

#ifndef imported_XS_XmlComment_public
#define imported_XS_XmlComment_public
@interface XS_XmlComment : XS_XmlNode
{
    @private NSString* xs___nonnull  text_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlComment*) new;
- (void) _init;
- (void) setText :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) text;
- (xs_int) type;
+ (xs_nonnull XS_XmlComment*) withText :(xs_nonnull NSString*)param_text;
@property (xs__nonnull nonatomic, readwrite) NSString* text;
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifdef import_XS_XmlComment_private
#ifndef imported_XS_XmlComment_private
#define imported_XS_XmlComment_private
@interface XS_XmlComment (private)
+ (xs_nonnull XS_XmlComment*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_XmlElement_public
#define imported_XS_XmlElement_public
@interface XS_XmlElement : XS_XmlNode
{
    @private xs_boolean isEmpty_;
    @private xs_boolean hasElements_;
    @private XS_XmlAttributeList* xs___nullable  my_attributes;
    @private XS_XmlNodeList* xs___nullable  my_childNodes;
    @private NSString* xs___nonnull  name_;
    @private NSString* xs___nullable  prefix_;
    @private NSString* xs___nonnull  localName_;
    @private NSString* xs___nullable  namespaceURI_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlElement*) new;
- (void) _init;
- (xs_nonnull XS_XmlElement*) addAttribute :(xs_nonnull NSString*)param_name :(xs_nonnull NSString*)value;
- (xs_nonnull XS_XmlElement*) addAttributeWithQName :(xs_nonnull XS_XmlName*)param_name :(xs_nonnull NSString*)value;
- (xs_nonnull XS_XmlElement*) addChild :(xs_nonnull XS_XmlNode*)child;
- (xs_nonnull XS_XmlElement*) addComment :(xs_nonnull NSString*)param_text;
- (xs_nonnull XS_XmlElement*) addElement :(xs_nonnull XS_XmlElement*)child;
- (xs_nonnull XS_XmlElement*) addElements :(xs_nonnull XS_XmlElementList*)param_elements;
- (xs_nonnull XS_XmlElement*) addText :(xs_nonnull NSString*)param_text;
- (void) appendTo :(xs_nonnull XS_CharBuffer*)buffer;
- (void) appendTo :(xs_nonnull XS_CharBuffer*)buffer :(xs_int)indent;
- (xs_nonnull XS_XmlAttributeList*) attributes;
- (xs_nonnull XS_XmlNodeList*) childNodes;
- (xs_nonnull XS_XmlCommentList*) comments;
- (xs_nonnull XS_XmlElementList*) elements;
- (xs_nonnull XS_XmlElementList*) elementsNamed :(xs_nonnull NSString*)param_name;
- (xs_nonnull XS_XmlElementList*) findElements :(xs_nonnull NSString*)param_name;
- (xs_nullable NSString*) getAttribute :(xs_nonnull NSString*)param_name;
- (xs_nullable XS_XmlElement*) getElement :(xs_nonnull NSString*)param_name;
- (xs_nonnull NSString*) getRequiredAttribute :(xs_nonnull NSString*)param_name;
- (xs_nonnull XS_XmlElement*) getRequiredElement :(xs_nonnull NSString*)param_name;
- (xs_boolean) hasPrefix;
- (xs_nonnull NSString*) localName;
- (xs_nonnull NSString*) name;
- (xs_nullable NSString*) namespaceURI;
+ (xs_nonnull XS_XmlElement*) parse :(xs_nonnull NSString*)xml;
+ (xs_nonnull XS_XmlElement*) parseMixed :(xs_nonnull NSString*)xml;
+ (xs_nonnull XS_XmlElement*) parseMixed :(xs_nonnull NSString*)xml :(xs_boolean)mixed;
- (xs_nullable NSString*) prefix;
- (void) removeAttribute :(xs_nonnull NSString*)param_name;
- (void) resolveNamespaces;
- (xs_nonnull XS_XmlElement*) setAttribute :(xs_nonnull NSString*)param_name :(xs_nonnull NSString*)value;
- (xs_nonnull XS_XmlElement*) setAttributeWithQName :(xs_nonnull XS_XmlName*)param_name :(xs_nonnull NSString*)value;
- (void) setAttributes :(xs_nonnull XS_XmlAttributeList*)value;
- (void) setChildNodes :(xs_nonnull XS_XmlNodeList*)value;
- (void) setLocalName :(xs_nonnull NSString*)value;
- (void) setName :(xs_nonnull NSString*)value;
- (void) setNamespaceURI :(xs_nullable NSString*)value;
- (void) setPrefix :(xs_nullable NSString*)value;
- (xs_nonnull NSString*) text;
- (xs_nonnull NSString*) toString;
- (xs_int) type;
+ (xs_nonnull XS_XmlElement*) withName :(xs_nonnull NSString*)param_name;
+ (xs_nonnull XS_XmlElement*) withQName :(xs_nonnull XS_XmlName*)param_name;
@property (xs__nonnull nonatomic, readonly, strong) XS_XmlAttributeList* attributes;
@property (xs__nonnull nonatomic, readonly, strong) XS_XmlNodeList* childNodes;
@property (xs__nonnull nonatomic, readonly, strong) XS_XmlCommentList* comments;
@property (xs__nonnull nonatomic, readonly, strong) XS_XmlElementList* elements;
@property (nonatomic, readonly) xs_boolean hasPrefix;
@property (xs__nonnull nonatomic, readwrite) NSString* localName;
@property (xs__nonnull nonatomic, readwrite) NSString* name;
@property (xs__nullable nonatomic, readwrite) NSString* namespaceURI;
@property (xs__nullable nonatomic, readwrite) NSString* prefix;
@property (xs__nonnull nonatomic, readonly) NSString* text;
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifdef import_XS_XmlElement_private
#ifndef imported_XS_XmlElement_private
#define imported_XS_XmlElement_private
@interface XS_XmlElement (private)
- (void) resolve :(xs_nonnull XS_StringMap*)map :(xs_nullable NSString*)param_xmlns;
- (void) writeText :(xs_nonnull XS_CharBuffer*)buffer :(xs_nonnull NSString*)chars;
+ (xs_nonnull XS_XmlElement*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull NSString*)p2 :(xs_nullable NSString*)p3;
@end
#endif
#endif

#ifdef import_XS_XmlElement_internal
#ifndef imported_XS_XmlElement_internal
#define imported_XS_XmlElement_internal
@interface XS_XmlElement (internal)
+ (void) addIndent :(xs_nonnull XS_CharBuffer*)buffer :(xs_int)indent;
- (xs_boolean) hasElements;
- (xs_boolean) isEmpty;
- (void) setHasElements :(xs_boolean)value;
- (void) setIsEmpty :(xs_boolean)value;
@property (nonatomic, readwrite) xs_boolean hasElements;
@property (nonatomic, readwrite) xs_boolean isEmpty;
@end
#endif
#endif

#ifndef imported_XS_XmlText_public
#define imported_XS_XmlText_public
@interface XS_XmlText : XS_XmlNode
{
    @private NSString* xs___nonnull  text_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlText*) new;
- (void) _init;
- (void) setText :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) text;
- (xs_int) type;
+ (xs_nonnull XS_XmlText*) withText :(xs_nonnull NSString*)param_text;
@property (xs__nonnull nonatomic, readwrite) NSString* text;
@property (nonatomic, readonly) xs_int type;
@end
#endif

#ifdef import_XS_XmlText_private
#ifndef imported_XS_XmlText_private
#define imported_XS_XmlText_private
@interface XS_XmlText (private)
+ (xs_nonnull XS_XmlText*) _new1 :(xs_nonnull NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_XmlAttributeList_public
#define imported_XS_XmlAttributeList_public
@interface XS_XmlAttributeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlAttributeList*) new;
+ (xs_nonnull XS_XmlAttributeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_XmlAttributeList*) add :(xs_nonnull XS_XmlAttribute*)item;
- (xs_nonnull XS_XmlAttributeList*) addAll :(xs_nonnull XS_XmlAttributeList*)list;
- (xs_nonnull XS_XmlAttributeList*) copy;
+ (xs_nonnull XS_XmlAttributeList*) empty;
- (xs_nonnull XS_XmlAttribute*) first;
- (xs_nonnull XS_XmlAttribute*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_XmlAttribute*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlAttribute*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlAttribute*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_XmlAttribute*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_XmlAttributeList*)list;
- (xs_nonnull XS_XmlAttribute*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlAttribute*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlAttribute*)item :(xs_int)start;
- (xs_nonnull XS_XmlAttribute*) pop;
- (xs_int) push :(xs_nonnull XS_XmlAttribute*)item;
- (xs_nonnull XS_XmlAttributeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_XmlAttribute*)item;
+ (xs_nonnull XS_XmlAttributeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_XmlAttribute*) shift;
- (xs_nonnull XS_XmlAttributeList*) slice :(xs_int)start;
- (xs_nonnull XS_XmlAttributeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_XmlAttributeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_XmlAttribute*)item;
@end
#endif

#ifndef imported_XS_XmlCommentList_public
#define imported_XS_XmlCommentList_public
@interface XS_XmlCommentList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlCommentList*) new;
+ (xs_nonnull XS_XmlCommentList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_XmlCommentList*) add :(xs_nonnull XS_XmlComment*)item;
- (xs_nonnull XS_XmlCommentList*) addAll :(xs_nonnull XS_XmlCommentList*)list;
- (xs_nonnull XS_XmlCommentList*) copy;
+ (xs_nonnull XS_XmlCommentList*) empty;
- (xs_nonnull XS_XmlComment*) first;
- (xs_nonnull XS_XmlComment*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_XmlComment*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlComment*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlComment*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_XmlComment*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_XmlCommentList*)list;
- (xs_nonnull XS_XmlComment*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlComment*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlComment*)item :(xs_int)start;
- (xs_nonnull XS_XmlComment*) pop;
- (xs_int) push :(xs_nonnull XS_XmlComment*)item;
- (xs_nonnull XS_XmlCommentList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_XmlComment*)item;
+ (xs_nonnull XS_XmlCommentList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_XmlComment*) shift;
- (xs_nonnull XS_XmlCommentList*) slice :(xs_int)start;
- (xs_nonnull XS_XmlCommentList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_XmlCommentList*) sort;
- (xs_int) unshift :(xs_nonnull XS_XmlComment*)item;
@end
#endif

#ifndef imported_XS_XmlElementList_public
#define imported_XS_XmlElementList_public
@interface XS_XmlElementList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlElementList*) new;
+ (xs_nonnull XS_XmlElementList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_XmlElementList*) add :(xs_nonnull XS_XmlElement*)item;
- (xs_nonnull XS_XmlElementList*) addAll :(xs_nonnull XS_XmlElementList*)list;
- (xs_nonnull XS_XmlElementList*) copy;
+ (xs_nonnull XS_XmlElementList*) empty;
- (xs_nonnull XS_XmlElement*) first;
- (xs_nonnull XS_XmlElement*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_XmlElement*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlElement*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlElement*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_XmlElement*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_XmlElementList*)list;
- (xs_nonnull XS_XmlElement*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlElement*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlElement*)item :(xs_int)start;
- (xs_nonnull XS_XmlElement*) pop;
- (xs_int) push :(xs_nonnull XS_XmlElement*)item;
- (xs_nonnull XS_XmlElementList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_XmlElement*)item;
+ (xs_nonnull XS_XmlElementList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_XmlElement*) shift;
- (xs_nonnull XS_XmlElementList*) slice :(xs_int)start;
- (xs_nonnull XS_XmlElementList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_XmlElementList*) sort;
- (xs_int) unshift :(xs_nonnull XS_XmlElement*)item;
@end
#endif

#ifndef imported_XS_XmlNodeList_public
#define imported_XS_XmlNodeList_public
@interface XS_XmlNodeList : XS_ListBase
{
}
+ (void) initialize;
- (xs_nonnull id) init;
+ (xs_nonnull XS_XmlNodeList*) new;
+ (xs_nonnull XS_XmlNodeList*) new :(xs_int)capacity;
- (void) _init :(xs_int)capacity;
- (xs_nonnull XS_XmlNodeList*) add :(xs_nonnull XS_XmlNode*)item;
- (xs_nonnull XS_XmlNodeList*) addAll :(xs_nonnull XS_XmlNodeList*)list;
- (xs_nonnull XS_XmlNodeList*) copy;
+ (xs_nonnull XS_XmlNodeList*) empty;
- (xs_nonnull XS_XmlNode*) first;
- (xs_nonnull XS_XmlNode*) get :(xs_int)index;
- (xs_boolean) includes :(xs_nonnull XS_XmlNode*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlNode*)item;
- (xs_int) indexOf :(xs_nonnull XS_XmlNode*)item :(xs_int)start;
- (void) insert :(xs_int)index :(xs_nonnull XS_XmlNode*)item;
- (void) insertAll :(xs_int)index :(xs_nonnull XS_XmlNodeList*)list;
- (xs_nonnull XS_XmlNode*) last;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlNode*)item;
- (xs_int) lastIndexOf :(xs_nonnull XS_XmlNode*)item :(xs_int)start;
- (xs_nonnull XS_XmlNode*) pop;
- (xs_int) push :(xs_nonnull XS_XmlNode*)item;
- (xs_nonnull XS_XmlNodeList*) reverse;
- (void) set :(xs_int)index :(xs_nonnull XS_XmlNode*)item;
+ (xs_nonnull XS_XmlNodeList*) share :(xs_nonnull XS_ListBase*)list;
- (xs_nonnull XS_XmlNode*) shift;
- (xs_nonnull XS_XmlNodeList*) slice :(xs_int)start;
- (xs_nonnull XS_XmlNodeList*) slice :(xs_int)param_start :(xs_int)param_end;
- (xs_nonnull XS_XmlNodeList*) sort;
- (xs_int) unshift :(xs_nonnull XS_XmlNode*)item;
@end
#endif

#ifndef imported_XS_XmlException_public
#define imported_XS_XmlException_public
@interface XS_XmlException : XS_DataFormatException
{
}
+ (xs_nonnull XS_XmlException*) new;
- (void) _init;
+ (xs_nonnull XS_XmlException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_XmlException_private
#ifndef imported_XS_XmlException_private
#define imported_XS_XmlException_private
@interface XS_XmlException (private)
+ (xs_nonnull XS_XmlException*) _new1 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
