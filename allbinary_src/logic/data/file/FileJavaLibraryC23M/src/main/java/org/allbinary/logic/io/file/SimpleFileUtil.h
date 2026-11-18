#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct NullOutputStream NullOutputStream;
typedef struct NullReader NullReader;
typedef struct NullWriter NullWriter;
typedef struct StreamUtil StreamUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/Reader.h"
#include "java/io/Writer.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/io/StreamUtil.h")
#include "org/allbinary/logic/io/StreamUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct SimpleFileUtil SimpleFileUtil;
struct SimpleFileUtil {
    LogUtil* logUtil;
    Writer* NULL_WRITER;
    Reader* NULL_READER;
    CommonStrings* commonStrings;
    NullUtil* nullUtil;
    StreamUtil* streamUtil;
};


SimpleFileUtil* SimpleFileUtil_new(void);
void SimpleFileUtil_init(SimpleFileUtil* this);

SimpleFileUtil* SimpleFileUtil_getInstance(void);

OutputStream* SimpleFileUtil_nullOutputStream(void);

Writer* SimpleFileUtil_nullWriter(void);

Reader* SimpleFileUtil_nullReader(void);

BasicArrayList* SimpleFileUtil_loadFileAsList(SimpleFileUtil* this, InputStream* inputStream, int32_t max, int8_t* byteArray1);

BasicArrayList* SimpleFileUtil_loadFileAsListReturnLine(SimpleFileUtil* this, InputStream* inputStream, int32_t max, int8_t* byteArray1, int32_t includeReturnLine);

const char* SimpleFileUtil_createStringFromArrayOfStrings(SimpleFileUtil* this, const char** stringArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimpleFileUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimpleFileUtil_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_H
