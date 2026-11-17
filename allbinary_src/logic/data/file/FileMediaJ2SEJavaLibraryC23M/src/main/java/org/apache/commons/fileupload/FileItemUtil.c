// Generated Code Do Not Modify
// package org.apache.commons.fileupload

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct FileItemUtil FileItemUtil;
struct FileItemUtil {
    LogUtil* logUtil;
    const char* DEFAULT_CHARSET;
};

static FileItemUtil* FileItemUtil_instance;

FileItemUtil* FileItemUtil_new(void);
FileItemUtil* FileItemUtil_getInstance(void);
const char* FileItemUtil_getString(FileItemUtil* this, int8_t* byteArray);
const char* FileItemUtil_getString(FileItemUtil* this, FileItemStream* fileItem);
int8_t* FileItemUtil_getBytes(FileItemUtil* this, FileItemStream* fileItem);
void FileItemUtil_write(FileItemUtil* this, FileItem* fileItem, AbFile* file);

// Static fields with runtime initializers: call this once at startup
void FileItemUtil_staticInit(void) {
    FileItemUtil_instance = FileItemUtil_new();
}

static void FileItemUtil_initFields(FileItemUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->DEFAULT_CHARSET = "ISO-8859-1";
}

void FileItemUtil_init(FileItemUtil* this) {
    FileItemUtil_initFields(this);
}

FileItemUtil* FileItemUtil_new(void) {
    FileItemUtil* this = calloc(1, sizeof(FileItemUtil));
    FileItemUtil_init(this);
    return this;
}


FileItemUtil* FileItemUtil_getInstance(void) {
        return FileItemUtil_instance;
}


// throws Exception
const char* FileItemUtil_getString(FileItemUtil* this, int8_t* byteArray) {
        return java_string_new(byteArray, this->DEFAULT_CHARSET);
}


// throws Exception
// Java overloaded method: C needs a different name
const char* FileItemUtil_getString(FileItemUtil* this, FileItemStream* fileItem) {
        return java_string_new(FileItemUtil_getBytes(this, fileItem), this->DEFAULT_CHARSET);
}


// throws Exception
int8_t* FileItemUtil_getBytes(FileItemUtil* this, FileItemStream* fileItem) {
        StreamUtil* streamUtil = StreamUtil_getInstance();
        InputStream* inputStream = nullptr;
        ByteArrayOutputStream* outputStream = nullptr;
        JAVA_TRY {
            inputStream = FileItemStream_openStream(fileItem);
            outputStream = ByteArrayOutputStream_new();
            if (FileItemStream_isFormField(fileItem)) {
                LogUtil_putF(this->logUtil, java_concat("FileItemStream FieldName: ", java_string_of(FileItemStream_getFieldName(fileItem))), this, "write()");
            } else {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Uploaded File FieldName: ");
                StringMaker_append(stringBuffer, FileItemStream_getFieldName(fileItem));
                StringMaker_append(stringBuffer, " name = ");
                StringMaker_append(stringBuffer, FileItemStream_getName(fileItem));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "write()");
            }
            outputStream = ((ByteArrayOutputStream*) StreamUtil_get(streamUtil, inputStream, outputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            return ByteArrayOutputStream_toByteArray(outputStream);
        } JAVA_FINALLY {
            StreamUtil_close(streamUtil, outputStream);
            StreamUtil_close(streamUtil, inputStream);
        } JAVA_END_TRY;
}


// throws Exception
void FileItemUtil_write(FileItemUtil* this, FileItem* fileItem, AbFile* file) {
        FileItemStream_write(fileItem, AbFileNativeUtil_get(file));
}

