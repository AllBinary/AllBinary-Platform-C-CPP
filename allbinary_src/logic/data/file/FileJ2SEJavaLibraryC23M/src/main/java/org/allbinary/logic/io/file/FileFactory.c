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

typedef struct FileFactory FileFactory;
struct FileFactory {
    char unused;
};

static FileFactory* FileFactory_instance;

FileFactory* FileFactory_new(void);
FileFactory* FileFactory_getInstance(void);
AbFile* FileFactory_getInstance(FileFactory* this, const char* filePath);
AbFile* FileFactory_getInstance(FileFactory* this, AbFile* file, const char* childFilePath);
bool FileFactory_isFile(FileFactory* this, const char* path);

// Static fields with runtime initializers: call this once at startup
void FileFactory_staticInit(void) {
    FileFactory_instance = FileFactory_new();
}

void FileFactory_init(FileFactory* this) {
}

FileFactory* FileFactory_new(void) {
    FileFactory* this = calloc(1, sizeof(FileFactory));
    FileFactory_init(this);
    return this;
}


FileFactory* FileFactory_getInstance(void) {
        return FileFactory_instance;
}


// throws Exception
// Java overloaded method: C needs a different name
AbFile* FileFactory_getInstance(FileFactory* this, const char* filePath) {
        return AbFile_createAbFileFromRawPath(filePath);
}


// throws Exception
// Java overloaded method: C needs a different name
AbFile* FileFactory_getInstance(FileFactory* this, AbFile* file, const char* childFilePath) {
        return AbFile_createAbFileWithChild(file, childFilePath);
}


// throws Exception
bool FileFactory_isFile(FileFactory* this, const char* path) {
        AbFile* file = AbFile_createAbFile(path);
        if (AbFile_exists(file)) {
            return true;
        } else {
            return false;
        }
}

