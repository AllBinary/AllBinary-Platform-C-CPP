#ifndef ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
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
typedef struct AbFile AbFile;
typedef struct AbFileNativeUtil AbFileNativeUtil;
typedef struct AbPathData AbPathData;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
#include "java/io/BufferedWriter.h"
#include "java/io/FileWriter.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct BufferedWriterUtil BufferedWriterUtil;
struct BufferedWriterUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonLabels* commonLabels;
    const char* REMOVING_OLD;
};


BufferedWriterUtil* BufferedWriterUtil_new(void);
void BufferedWriterUtil_init(BufferedWriterUtil* this);

BufferedWriterUtil* BufferedWriterUtil_getInstance(void);

void BufferedWriterUtil_overwrite3_1(BufferedWriterUtil* this, const char* path, const char* data);

void BufferedWriterUtil_overwrite3_2(BufferedWriterUtil* this, AbFile* abFile, const char* data);

void BufferedWriterUtil_write(BufferedWriterUtil* this, AbFile* abFile, const char* data);
#define BufferedWriterUtil_overwrite(...) JAVA_OVERLOADED(BufferedWriterUtil_overwrite, __VA_ARGS__)
#define BufferedWriterUtil_overwrite3(a1, a2, a3) _Generic((a2), const char*: BufferedWriterUtil_overwrite3_1, char*: BufferedWriterUtil_overwrite3_1, default: BufferedWriterUtil_overwrite3_2)(a1, a2, a3)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BufferedWriterUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BufferedWriterUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_BUFFEREDWRITERUTIL_H
