#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/InputStream.h"
// #include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

//J2MEForJ2ME
typedef struct AbFileSystem AbFileSystem;
struct AbFileSystem {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


AbFileSystem* AbFileSystem_new(void);
void AbFileSystem_init(AbFileSystem* this);

AbFileSystem* AbFileSystem_getInstance(void);

bool AbFileSystem_isDirectoryOrFile(AbFileSystem* this, const char* path);

bool AbFileSystem_isDirectory(AbFileSystem* this, const char* path);

const char** AbFileSystem_getFilesAsStringArrayForPath(AbFileSystem* this, const char* currentDirPath);

const char* AbFileSystem_readAsString2(AbFileSystem* this, const char* fileName);

const char* AbFileSystem_readAsString3(AbFileSystem* this, const char* fileName, int8_t* bytes);

bool AbFileSystem_close(AbFileSystem* this, void* closeable);
#define AbFileSystem_readAsString(...) JAVA_OVERLOADED(AbFileSystem_readAsString, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFileSystem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFileSystem_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_FILE_ABFILESYSTEM_H
