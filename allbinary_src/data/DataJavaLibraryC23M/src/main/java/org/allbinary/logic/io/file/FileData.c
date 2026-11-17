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

typedef struct FileData FileData;
struct FileData {
    const char* NAME;
    const char* ISFILE;
    const char* ISDIRECTORY;
    const char* ISHIDDEN;
    const char* ISABSOLUTE;
    const char* ROOT_NAME;
    const char* PATH;
    const char* ABSOLUTE_PATH;
    const char* CANONICAL_PATH;
    const char* PARENT;
    int32_t MINLEN;
    int32_t MAXLEN;
    int32_t MAXIMAGEFILESIZE;
    int32_t MINIMAGEFILESIZE;
    int32_t MAXDOWNLOADABLEFILESIZE;
    int32_t MINDOWNLOADABLEFILESIZE;
};

static FileData* FileData_instance;

FileData* FileData_new(void);
FileData* FileData_getInstance(void);

void FileData_init(FileData* this);

// Static fields with runtime initializers: call this once at startup
void FileData_staticInit(void) {
    FileData_instance = FileData_new();
}

static void FileData_initFields(FileData* this) {
    this->NAME = "FILE_NAME";
    this->ISFILE = "FILE_ISFILE";
    this->ISDIRECTORY = "FILE_ISDIRECTORY";
    this->ISHIDDEN = "FILE_ISHIDDEN";
    this->ISABSOLUTE = "FILE_ISABSOLUTE";
    this->ROOT_NAME = "FILE_ROOT_NAME";
    this->PATH = "FILE_PATH";
    this->ABSOLUTE_PATH = "FILE_ABSOLUTE_PATH";
    this->CANONICAL_PATH = "FILE_CANONICAL_PATH";
    this->PARENT = "FILE_PARENT";
    this->MINLEN = 1;
    this->MAXLEN = 120;
    this->MAXIMAGEFILESIZE = 1048576;
    this->MINIMAGEFILESIZE = 32;
    this->MAXDOWNLOADABLEFILESIZE = 1048576 * 20;
    this->MINDOWNLOADABLEFILESIZE = 1;
}


FileData* FileData_getInstance(void) {
        return FileData_instance;
}


void FileData_init(FileData* this) {
    FileData_initFields(this);
}

FileData* FileData_new(void) {
    FileData* this = calloc(1, sizeof(FileData));
    FileData_init(this);
    return this;
}

