#ifndef XSCRIPT_NET_H
#define XSCRIPT_NET_H

@class XS_Socket;
@class XS_ClientSocket;
@class XS_SocketException;

#ifndef imported_XS_Socket_public
#define imported_XS_Socket_public
@interface XS_Socket : XS_ObjectBase
{
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_Socket*) new;
- (void) _init;
- (void) close;
- (xs_boolean) receive :(xs_nonnull XS_ByteBuffer*)data :(xs_int)count;
- (void) send :(xs_nonnull NSData*)data;
- (void) send :(xs_nonnull NSData*)data :(xs_int)start;
- (void) send :(xs_nonnull NSData*)data :(xs_int)start :(xs_int)count;
@end
#endif

#ifndef imported_XS_ClientSocket_public
#define imported_XS_ClientSocket_public
@interface XS_ClientSocket : XS_Socket
{
    @private xs_int my_socket;
}
- (xs_nonnull id) init;
+ (xs_nonnull XS_ClientSocket*) new;
- (void) _init;
- (void) close;
- (void) open :(xs_nonnull NSString*)host :(xs_int)port;
- (xs_boolean) receive :(xs_nonnull XS_ByteBuffer*)data :(xs_int)count;
- (void) send :(xs_nonnull NSData*)data;
- (void) send :(xs_nonnull NSData*)data :(xs_int)start;
- (void) send :(xs_nonnull NSData*)data :(xs_int)start :(xs_int)param_count;
@end
#endif

#ifndef imported_XS_SocketException_public
#define imported_XS_SocketException_public
@interface XS_SocketException : XS_ExceptionBase
{
}
+ (xs_nonnull XS_SocketException*) new;
- (void) _init;
+ (xs_nonnull XS_SocketException*) withCause :(xs_nonnull NSException*)param_cause;
+ (xs_nonnull XS_SocketException*) withMessage :(xs_nonnull NSString*)param_message;
@end
#endif

#ifdef import_XS_SocketException_private
#ifndef imported_XS_SocketException_private
#define imported_XS_SocketException_private
@interface XS_SocketException (private)
+ (xs_nonnull XS_SocketException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_SocketException*) _new2 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#endif
