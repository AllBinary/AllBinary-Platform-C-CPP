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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct AbFilePath AbFilePath;
struct AbFilePath {
    AbPath base;
};


AbFilePath* AbFilePath_new(const char* aPath);

void AbFilePath_init(AbFilePath* this, const char* aPath);


void AbFilePath_init(AbFilePath* this, const char* aPath) {
        AbPath_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
        AbPathData* pathData = AbPathData_getInstance();
        PathUtil* abPathUtil = PathUtil_getInstance();
        this->schema = AbFilePath_getSchema(this, aPath);
        AbFilePath_setName(this, AbPathData_getNameFromPath(pathData, aPath));
        AbFilePath_setPath(this, PathUtil_adjust(abPathUtil, AbFilePath_getPathFromPath(this, JAVA_CALL(PathUtil_removeNameFromPath(abPathUtil, aPath), toString))));
}

AbFilePath* AbFilePath_new(const char* aPath) {
    AbFilePath* this = calloc(1, sizeof(AbFilePath));
    AbFilePath_init(this, aPath);
    return this;
}

