#ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H
#define ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H
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
typedef struct AbPath AbPath;
typedef struct AbPathData AbPathData;
typedef struct PathUtil PathUtil;
typedef struct StringUtil StringUtil;
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct AbFilePath AbFilePath;
struct AbFilePath {
    AbPath base;
};


AbFilePath* AbFilePath_new(const char* aPath);

void AbFilePath_init(AbFilePath* this, const char* aPath);
#define AbFilePath_new1 AbFilePath_new
#define AbFilePath_init1 AbFilePath_init
#ifndef AbFilePath_createAbPath
#define AbFilePath_createAbPath AbPath_createAbPath
#endif
#ifndef AbFilePath_getSchema
#define AbFilePath_getSchema AbPath_getSchema
#endif
#ifndef AbFilePath_hasSchema
#define AbFilePath_hasSchema AbPath_hasSchema
#endif
#ifndef AbFilePath_getPathFromPath
#define AbFilePath_getPathFromPath AbPath_getPathFromPath
#endif
#ifndef AbFilePath_setName
#define AbFilePath_setName AbPath_setName
#endif
#ifndef AbFilePath_getName
#define AbFilePath_getName AbPath_getName
#endif
#ifndef AbFilePath_toString
#define AbFilePath_toString AbPath_toString
#endif
#ifndef AbFilePath_toFileSystemString
#define AbFilePath_toFileSystemString AbPath_toFileSystemString
#endif
#ifndef AbFilePath_getPath
#define AbFilePath_getPath AbPath_getPath
#endif
#ifndef AbFilePath_setPath
#define AbFilePath_setPath AbPath_setPath
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFilePath_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbFilePath_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_PATH_ABFILEPATH_H
