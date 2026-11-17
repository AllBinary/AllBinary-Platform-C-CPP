/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *   
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/Closeable.h"
// #include "java/io/InputStream.h"
// #include "java/io/OutputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct StreamUtil StreamUtil;
struct StreamUtil {
    LogUtil* logUtil;
};

static StreamUtil* StreamUtil_instance;

StreamUtil* StreamUtil_new(void);
StreamUtil* StreamUtil_getInstance(void);

void StreamUtil_init(StreamUtil* this);
OutputStream* StreamUtil_get(StreamUtil* this, InputStream* inputStream, OutputStream* outputStream, int8_t* buffer);
int8_t* StreamUtil_getByteArray(StreamUtil* this, InputStream* inputStream, ByteArrayOutputStream* outputStream2, int8_t* byteArray);
bool StreamUtil_close(StreamUtil* this, Closeable* closeable);

// Static fields with runtime initializers: call this once at startup
void StreamUtil_staticInit(void) {
    StreamUtil_instance = StreamUtil_new();
}

static void StreamUtil_initFields(StreamUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


StreamUtil* StreamUtil_getInstance(void) {
        return StreamUtil_instance;
}


void StreamUtil_init(StreamUtil* this) {
    StreamUtil_initFields(this);
}

StreamUtil* StreamUtil_new(void) {
    StreamUtil* this = calloc(1, sizeof(StreamUtil));
    StreamUtil_init(this);
    return this;
}


// throws Exception
OutputStream* StreamUtil_get(StreamUtil* this, InputStream* inputStream, OutputStream* outputStream, int8_t* buffer) {
        int32_t len = 0;
        while (true) {
            len = InputStream_read(inputStream, buffer, 0, java_array_length(buffer));
            if (len != -1) {
            } else {
                break;
            }
            OutputStream_write(outputStream, buffer, 0, len);
        }
        return outputStream;
}


// throws Exception
int8_t* StreamUtil_getByteArray(StreamUtil* this, InputStream* inputStream, ByteArrayOutputStream* outputStream2, int8_t* byteArray) {
        ByteArrayOutputStream* outputStream = outputStream2;
        JAVA_TRY {
            StreamUtil_get(this, inputStream, outputStream, byteArray);
            return OutputStream_toByteArray(outputStream);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(this, outputStream);
        } JAVA_END_TRY;
}


bool StreamUtil_close(StreamUtil* this, Closeable* closeable) {
        JAVA_TRY {
            if (closeable != nullptr) {
                Closeable_close(closeable);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CLOSE, e);
            return false;
        } JAVA_END_TRY;
}

