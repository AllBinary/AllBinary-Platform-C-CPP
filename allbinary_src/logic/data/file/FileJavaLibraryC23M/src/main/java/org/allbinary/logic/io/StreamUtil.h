#ifndef ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H
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
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/Closeable.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct StreamUtil StreamUtil;
struct StreamUtil {
    LogUtil* logUtil;
};


StreamUtil* StreamUtil_new(void);

StreamUtil* StreamUtil_getInstance(void);

void StreamUtil_init(StreamUtil* this);

OutputStream* StreamUtil_get(StreamUtil* this, InputStream* inputStream, OutputStream* outputStream, int8_t* buffer);

int8_t* StreamUtil_getByteArray(StreamUtil* this, InputStream* inputStream, ByteArrayOutputStream* outputStream2, int8_t* byteArray);

bool StreamUtil_close(StreamUtil* this, Closeable* closeable);
#define StreamUtil_new0 StreamUtil_new
#define StreamUtil_init0 StreamUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StreamUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StreamUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_STREAMUTIL_H
