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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct FileStreamFactory FileStreamFactory;
struct FileStreamFactory {
    char unused;
};

static Any* FileStreamFactory_SINGLETON;

FileStreamFactory* FileStreamFactory_new(void);
FileStreamFactory* FileStreamFactory_getInstance(void);

void FileStreamFactory_init(FileStreamFactory* this);
AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);
AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);
void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName);

// Static fields with runtime initializers: call this once at startup
void FileStreamFactory_staticInit(void) {
    FileStreamFactory_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}


FileStreamFactory* FileStreamFactory_getInstance(void) {
        if (FileStreamFactory_SINGLETON == NullUtil_getInstance()->NULL_OBJECT) {
            FileStreamFactory_SINGLETON = FileStreamFactory_new();
        }
        return ((FileStreamFactory*) FileStreamFactory_SINGLETON);
}


void FileStreamFactory_init(FileStreamFactory* this) {
}

FileStreamFactory* FileStreamFactory_new(void) {
    FileStreamFactory* this = calloc(1, sizeof(FileStreamFactory));
    FileStreamFactory_init(this);
    return this;
}


// throws Exception
AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        return AbFileInputStream_createFromAbFile(file);
}


// throws Exception
AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        if (AbFile_exists(file)) {
            AbFile_delete(file);
            AbFile_createNewFile(file);
        }
        return AbFileOutputStream_createFromAbFile(file);
}


// throws Exception
void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName) {
        AbPath* FILEABPATH = AbPath_new(path, fileName);
        AbFile* file = AbFile_createAbFileFromAbPath(FILEABPATH);
        AbFile_delete(file);
}

