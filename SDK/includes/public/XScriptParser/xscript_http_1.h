#ifndef XSCRIPT_HTTP_1_H
#define XSCRIPT_HTTP_1_H

@class XS_HttpAddress;
@class XS_HttpException;

#ifndef imported_XS_HttpAddress_public
#define imported_XS_HttpAddress_public
@interface XS_HttpAddress : XS_ObjectBase
{
    @private xs_boolean absolute_;
    @private NSString* xs___nonnull  scheme_;
    @private NSString* xs___nullable  authority_;
    @private NSString* xs___nonnull  host_;
    @private xs_int port_;
    @private NSString* xs___nullable  path_;
    @private NSString* xs___nullable  query_;
    @private NSString* xs___nullable  fragment_;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_HttpAddress*) new;
- (void) _init;
- (xs_boolean) absolute;
- (xs_nullable NSString*) authority;
- (xs_nullable NSString*) fragment;
- (xs_nonnull NSString*) host;
+ (xs_boolean) isAbsolute :(xs_nonnull NSString*)address;
+ (xs_boolean) isRelative :(xs_nonnull NSString*)address;
+ (xs_nonnull XS_HttpAddress*) parse :(xs_nonnull NSString*)url;
+ (xs_nonnull XS_HttpAddress*) parse :(xs_nonnull NSString*)url :(xs_boolean)param_absolute;
- (xs_nullable NSString*) path;
- (xs_nonnull NSString*) pathAndQuery;
- (xs_int) port;
- (xs_nullable NSString*) query;
- (xs_nonnull NSString*) scheme;
- (xs_nonnull NSString*) schemeAndAuthority;
- (void) setAbsolute :(xs_boolean)value;
- (void) setAuthority :(xs_nullable NSString*)value;
- (void) setFragment :(xs_nullable NSString*)value;
- (void) setHost :(xs_nonnull NSString*)value;
- (void) setPath :(xs_nullable NSString*)value;
- (void) setPort :(xs_int)value;
- (void) setQuery :(xs_nullable NSString*)value;
- (void) setScheme :(xs_nonnull NSString*)value;
- (xs_nonnull NSString*) toString;
@property (nonatomic, readwrite) xs_boolean absolute;
@property (xs__nullable nonatomic, readwrite) NSString* authority;
@property (xs__nullable nonatomic, readwrite) NSString* fragment;
@property (xs__nonnull nonatomic, readwrite) NSString* host;
@property (xs__nullable nonatomic, readwrite) NSString* path;
@property (nonatomic, readwrite) xs_int port;
@property (xs__nullable nonatomic, readwrite) NSString* query;
@property (xs__nonnull nonatomic, readwrite) NSString* scheme;
@end
#endif

#ifdef import_XS_HttpAddress_private
#ifndef imported_XS_HttpAddress_private
#define imported_XS_HttpAddress_private
@interface XS_HttpAddress (private)
+ (xs_nonnull XS_HttpAddress*) _new1 :(xs_nullable NSString*)p1 :(xs_boolean)p2 :(xs_nonnull NSString*)p3 :(xs_nullable NSString*)p4 :(xs_nullable NSString*)p5 :(xs_int)p6 :(xs_nonnull NSString*)p7 :(xs_nullable NSString*)p8;
@end
#endif
#endif

#ifndef imported_XS_HttpException_public
#define imported_XS_HttpException_public
@interface XS_HttpException : XS_DataNetworkException
{
}
- (void) _init;
+ (xs_nonnull XS_HttpException*) withCause :(xs_nonnull NSException*)param_cause;
+ (xs_nonnull XS_HttpException*) withCauseAndMessage :(xs_nonnull NSException*)param_cause :(xs_nonnull NSString*)param_message;
+ (xs_nonnull XS_HttpException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_HttpException_private
#ifndef imported_XS_HttpException_private
#define imported_XS_HttpException_private
@interface XS_HttpException (private)
+ (xs_nonnull XS_HttpException*) new;
+ (xs_nonnull XS_HttpException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_HttpException*) _new2 :(xs_nullable NSString*)p1 :(xs_nullable NSException*)p2;
+ (xs_nonnull XS_HttpException*) _new3 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
