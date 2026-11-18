#ifndef ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
#define ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
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
// package org.allbinary.logic.io.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AbPathData AbPathData;
typedef struct AbFilePath AbFilePath;
typedef struct AbPath AbPath;
typedef struct FilePathData FilePathData;
typedef struct StringUtil StringUtil;
typedef struct StringValidationUtil StringValidationUtil;
#if __has_include("org/allbinary/logic/io/file/FilePathData.h")
#include "org/allbinary/logic/io/file/FilePathData.h"
#endif
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
#endif

//Used to correct user input for paths
typedef struct PathUtil PathUtil;
struct PathUtil {
    AbPathData* abPathData;
    FilePathData* filePathData;
};


PathUtil* PathUtil_new(void);

PathUtil* PathUtil_getInstance(void);

void PathUtil_init(PathUtil* this);

const char* PathUtil_getExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath);

const char* PathUtil_getExtensionWithAbPath(PathUtil* this, AbPath* abPath);

const char* PathUtil_getWithoutExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath);

const char* PathUtil_getWithoutExtensionWithAbPath(PathUtil* this, AbPath* abPath);

const char* PathUtil_getWithoutExtension(PathUtil* this, const char* filePath);

bool PathUtil_isValid(PathUtil* this, const char* path);



const char* PathUtil_adjustStart(PathUtil* this, const char* path);

const char* PathUtil_adjustEnd(PathUtil* this, const char* path);

const char* PathUtil_adjust(PathUtil* this, const char* path);

AbPath* PathUtil_removeNameFromPath(PathUtil* this, const char* path);
#define PathUtil_new0 PathUtil_new
#define PathUtil_init0 PathUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PathUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PathUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_H
