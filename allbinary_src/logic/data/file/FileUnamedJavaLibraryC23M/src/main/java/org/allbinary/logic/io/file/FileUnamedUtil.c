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
#include "org/allbinary/string/CommonSeps.h"

typedef struct FileUnamedUtil FileUnamedUtil;
struct FileUnamedUtil {
    CommonSeps* commonSeps;
};

static FileUnamedUtil* FileUnamedUtil_instance;

FileUnamedUtil* FileUnamedUtil_new(void);
FileUnamedUtil* FileUnamedUtil_getInstance(void);
const char* FileUnamedUtil_process(FileUnamedUtil* this, const char* string);

// Static fields with runtime initializers: call this once at startup
void FileUnamedUtil_staticInit(void) {
    FileUnamedUtil_instance = FileUnamedUtil_new();
}

static void FileUnamedUtil_initFields(FileUnamedUtil* this) {
    this->commonSeps = CommonSeps_getInstance();
}

void FileUnamedUtil_init(FileUnamedUtil* this) {
    FileUnamedUtil_initFields(this);
}

FileUnamedUtil* FileUnamedUtil_new(void) {
    FileUnamedUtil* this = calloc(1, sizeof(FileUnamedUtil));
    FileUnamedUtil_init(this);
    return this;
}


FileUnamedUtil* FileUnamedUtil_getInstance(void) {
        return FileUnamedUtil_instance;
}


const char* FileUnamedUtil_process(FileUnamedUtil* this, const char* string) {
        const char* simplifiedString = java_string_toLowerCase(string);
        simplifiedString = java_string_replace(simplifiedString, this->commonSeps->SPACE, this->commonSeps->UNDERSCORE);
        simplifiedString = java_string_replace(simplifiedString, this->commonSeps->DASH, this->commonSeps->UNDERSCORE);
        return simplifiedString;
}

