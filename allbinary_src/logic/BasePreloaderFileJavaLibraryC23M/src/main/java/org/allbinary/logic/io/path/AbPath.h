#ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
#define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
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
typedef struct PathUtil PathUtil;
typedef struct FilePathData FilePathData;
typedef struct FilePathUtil FilePathUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
#endif
#if __has_include("org/allbinary/logic/io/path/PathUtil.h")
#include "org/allbinary/logic/io/path/PathUtil.h"
#endif

typedef struct AbPath AbPath;
struct AbPath {
    CommonSeps* commonSeps;
    AbPathData* abPathData;
    PathUtil* abPathUtil;
    const char* EMPTY_STRING;
    const char* schema;
    const char* path;
    const char* nameP;
    bool hasSchemaP;
    int32_t numberOfSeps;
};


AbPath* AbPath_new(const char* aPath, const char* name);

AbPath* AbPath_createAbPath(void);

void AbPath_init(AbPath* this, const char* aPath, const char* name);


const char* AbPath_getSchema(AbPath* this, const char* aPath);

bool AbPath_hasSchema(AbPath* this);

const char* AbPath_getPathFromPath(AbPath* this, const char* aPath);

void AbPath_setName(AbPath* this, const char* name);

const char* AbPath_getName(AbPath* this);

const char* AbPath_toString(AbPath* this);

const char* AbPath_toFileSystemString(AbPath* this);

const char* AbPath_getPath(AbPath* this);

void AbPath_setPath(AbPath* this, const char* path);
#define AbPath_new2 AbPath_new
#define AbPath_init2 AbPath_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbPath_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbPath_register(void);


#endif // ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_H
