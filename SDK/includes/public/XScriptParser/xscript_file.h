#ifndef XSCRIPT_FILE_H
#define XSCRIPT_FILE_H

@class XS_FileSystem;
@class XS_DataFileReader;
@class XS_DataFileWriter;
@class XS_FileException;
@class XS_TextFileReader;
@class XS_TextFileWriter;

#ifndef imported_XS_FileSystem_public
#define imported_XS_FileSystem_public
@interface XS_FileSystem : XS_ObjectBase
{
}
+ (void) copyFile :(xs_nonnull NSString*)source :(xs_nonnull NSString*)target;
+ (void) createDirectory :(xs_nonnull NSString*)file;
+ (void) createDirectory :(xs_nonnull NSString*)param_file :(xs_boolean)createParents;
+ (void) createParentFor :(xs_nonnull NSString*)file;
+ (void) deleteDirectory :(xs_nonnull NSString*)file;
+ (void) deleteDirectory :(xs_nonnull NSString*)file :(xs_boolean)deleteChildren;
+ (void) deleteFile :(xs_nonnull NSString*)file;
+ (xs_boolean) fileExists :(xs_nonnull NSString*)file;
+ (xs_long) fileLength :(xs_nonnull NSString*)file;
+ (xs_nonnull NSString*) getLocalDirectory;
+ (xs_boolean) isDirectory :(xs_nonnull NSString*)file;
+ (xs_nonnull XS_StringList*) listFiles :(xs_nonnull NSString*)param_path;
+ (xs_nullable NSString*) parentDirectory :(xs_nonnull NSString*)file;
+ (void) renameFile :(xs_nonnull NSString*)oldName :(xs_nonnull NSString*)newName;
+ (xs_nonnull NSString*) resolveName :(xs_nonnull NSString*)file;
+ (xs_nonnull NSString*) unqualifiedName :(xs_nonnull NSString*)file;
@end
#endif

#ifndef imported_XS_DataFileReader_public
#define imported_XS_DataFileReader_public
@interface XS_DataFileReader : XS_ByteStream
{
    @private FILE* fp;
    @private XS_ByteBuffer* xs___nullable  my_buffer;
    @private xs_int my_length;
    @private xs_int my_offset;
    @private xs_int my_size;
    @private xs_long my_position;
}
- (xs_nonnull id) init;
- (void) _init;
- (void) close;
+ (xs_nonnull XS_DataFileReader*) open :(xs_nonnull NSString*)file;
- (xs_long) position;
- (xs_nullable NSData*) readBinary :(xs_int)length;
- (xs_int) readByte;
+ (xs_nonnull NSData*) readFile :(xs_nonnull NSString*)file;
- (xs_nonnull XS_DataFileReader*) withBufferSize :(xs_int)size;
@property (nonatomic, readonly) xs_long position;
@end
#endif

#ifdef import_XS_DataFileReader_private
#ifndef imported_XS_DataFileReader_private
#define imported_XS_DataFileReader_private
@interface XS_DataFileReader (private)
+ (xs_nonnull XS_DataFileReader*) new;
- (xs_boolean) readMore;
@end
#endif
#endif

#ifndef imported_XS_DataFileWriter_public
#define imported_XS_DataFileWriter_public
@interface XS_DataFileWriter : XS_ByteStream
{
    @private FILE* fp;
    @private XS_ByteBuffer* xs___nullable  my_buffer;
    @private xs_int my_size;
    @private xs_long my_position;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_DataFileWriter*) append :(xs_nonnull NSString*)file;
- (void) close;
- (void) flush;
+ (xs_nonnull XS_DataFileWriter*) open :(xs_nonnull NSString*)file;
- (xs_long) position;
- (xs_nonnull XS_DataFileWriter*) withBufferSize :(xs_int)size;
- (void) writeBinary :(xs_nonnull NSData*)data;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset;
- (void) writeBinary :(xs_nonnull NSData*)data :(xs_int)offset :(xs_int)length;
- (void) writeByte :(xs_byte)data;
+ (void) writeFile :(xs_nonnull NSString*)file :(xs_nonnull NSData*)data;
@property (nonatomic, readonly) xs_long position;
@end
#endif

#ifdef import_XS_DataFileWriter_private
#ifndef imported_XS_DataFileWriter_private
#define imported_XS_DataFileWriter_private
@interface XS_DataFileWriter (private)
+ (xs_nonnull XS_DataFileWriter*) new;
- (void) flushBuffer;
- (xs_nonnull XS_ByteBuffer*) getBuffer;
- (void) initBuffer;
@end
#endif
#endif

#ifndef imported_XS_FileException_public
#define imported_XS_FileException_public
@interface XS_FileException : XS_DataStorageException
{
}
+ (xs_nonnull XS_FileException*) new;
- (void) _init;
+ (xs_nonnull XS_FileException*) withCause :(xs_nullable NSException*)param_cause;
+ (xs_nonnull XS_FileException*) withCauseAndMessage :(xs_nullable NSException*)param_cause :(xs_nonnull NSString*)param_message;
+ (xs_nonnull XS_FileException*) withMessage :(xs_nullable NSString*)param_message;
@end
#endif

#ifdef import_XS_FileException_private
#ifndef imported_XS_FileException_private
#define imported_XS_FileException_private
@interface XS_FileException (private)
+ (xs_nonnull XS_FileException*) _new1 :(xs_nullable NSException*)p1;
+ (xs_nonnull XS_FileException*) _new2 :(xs_nullable NSString*)p1 :(xs_nullable NSException*)p2;
+ (xs_nonnull XS_FileException*) _new3 :(xs_nullable NSString*)p1;
@end
#endif
#endif

#ifndef imported_XS_TextFileReader_public
#define imported_XS_TextFileReader_public
@interface XS_TextFileReader : XS_CharStream
{
    @private NSString* xs___nonnull  my_file;
    @private XS_DataFileReader* xs___nonnull  my_reader_;
}
- (xs_nonnull id) init;
- (void) _init;
- (void) close;
+ (xs_nonnull XS_TextFileReader*) open :(xs_nonnull NSString*)file;
- (xs_long) position;
- (xs_int) readChar;
+ (xs_nonnull NSString*) readFile :(xs_nonnull NSString*)file;
- (xs_nullable NSString*) readLine;
+ (xs_nonnull XS_StringList*) readLines :(xs_nonnull NSString*)file;
- (xs_nullable NSString*) readString :(xs_int)length;
- (xs_nonnull XS_TextFileReader*) withBufferSize :(xs_int)size;
@property (nonatomic, readonly) xs_long position;
@end
#endif

#ifdef import_XS_TextFileReader_private
#ifndef imported_XS_TextFileReader_private
#define imported_XS_TextFileReader_private
@interface XS_TextFileReader (private)
+ (xs_nonnull XS_TextFileReader*) new;
- (void) badUTF8;
- (xs_nonnull XS_DataFileReader*) my_reader;
- (void) setMy_reader :(xs_nonnull XS_DataFileReader*)value;
+ (xs_nonnull XS_TextFileReader*) _new1 :(xs_nonnull NSString*)p1 :(xs_nonnull XS_DataFileReader*)p2;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataFileReader* my_reader;
@end
#endif
#endif

#ifndef imported_XS_TextFileWriter_public
#define imported_XS_TextFileWriter_public
@interface XS_TextFileWriter : XS_CharStream
{
    @private XS_CharBuffer* xs___nonnull  my_buffer;
    @private XS_DataFileWriter* xs___nonnull  my_writer_;
}
- (xs_nonnull id) init;
- (void) _init;
+ (xs_nonnull XS_TextFileWriter*) append :(xs_nonnull NSString*)file;
- (void) close;
- (void) flush;
+ (xs_nonnull XS_TextFileWriter*) open :(xs_nonnull NSString*)file;
- (xs_long) position;
- (xs_nonnull XS_TextFileWriter*) withBufferSize :(xs_int)size;
- (void) writeChar :(xs_char)text;
+ (void) writeFile :(xs_nonnull NSString*)file :(xs_nonnull NSString*)text;
- (void) writeLine :(xs_nonnull NSString*)text;
- (void) writeString :(xs_nonnull NSString*)text;
- (void) writeString :(xs_nonnull NSString*)text :(xs_int)offset;
- (void) writeString :(xs_nonnull NSString*)param_text :(xs_int)offset :(xs_int)param_length;
@property (nonatomic, readonly) xs_long position;
@end
#endif

#ifdef import_XS_TextFileWriter_private
#ifndef imported_XS_TextFileWriter_private
#define imported_XS_TextFileWriter_private
@interface XS_TextFileWriter (private)
+ (xs_nonnull XS_TextFileWriter*) new;
- (void) forceWrite :(xs_nonnull XS_CharBuffer*)buffer;
- (void) maybeWrite :(xs_nonnull XS_CharBuffer*)buffer;
- (xs_nonnull XS_DataFileWriter*) my_writer;
- (void) setMy_writer :(xs_nonnull XS_DataFileWriter*)value;
+ (xs_nonnull XS_TextFileWriter*) _new1 :(xs_nonnull XS_DataFileWriter*)p1;
@property (xs__nonnull nonatomic, readwrite, strong) XS_DataFileWriter* my_writer;
@end
#endif
#endif

#endif
