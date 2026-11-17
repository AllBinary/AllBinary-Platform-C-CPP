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

typedef struct FilePathData FilePathData;
struct FilePathData {
    uint16_t SEPARATORCHAR;
    const char* PATH_START;
};

static FilePathData* FilePathData_instance;

FilePathData* FilePathData_new(void);
FilePathData* FilePathData_getInstance(void);

void FilePathData_init(FilePathData* this);

// Static fields with runtime initializers: call this once at startup
void FilePathData_staticInit(void) {
    FilePathData_instance = FilePathData_new();
}

static void FilePathData_initFields(FilePathData* this) {
    this->SEPARATORCHAR = u'\\';
    this->PATH_START = "\\\\";
}


FilePathData* FilePathData_getInstance(void) {
        return FilePathData_instance;
}


void FilePathData_init(FilePathData* this) {
    FilePathData_initFields(this);
}

FilePathData* FilePathData_new(void) {
    FilePathData* this = calloc(1, sizeof(FilePathData));
    FilePathData_init(this);
    return this;
}

