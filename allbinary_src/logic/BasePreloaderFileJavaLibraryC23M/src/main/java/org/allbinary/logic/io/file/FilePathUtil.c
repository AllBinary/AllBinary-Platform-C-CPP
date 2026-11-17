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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"

//Used to correct user input for paths
typedef struct FilePathUtil FilePathUtil;
struct FilePathUtil {
    char unused;
};


FilePathUtil* FilePathUtil_new(void);

void FilePathUtil_init(FilePathUtil* this);
const char* FilePathUtil_adjust(const char* path);


void FilePathUtil_init(FilePathUtil* this) {
}

FilePathUtil* FilePathUtil_new(void) {
    FilePathUtil* this = calloc(1, sizeof(FilePathUtil));
    FilePathUtil_init(this);
    return this;
}


const char* FilePathUtil_adjust(const char* path) {
        AbPathData* abPathData = AbPathData_getInstance();
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        FilePathData* filePathData = FilePathData_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return filePathData->PATH_START;
        }
        path = java_string_replace(path, abPathData->SEPARATORCHAR, filePathData->SEPARATORCHAR);
        return path;
}

