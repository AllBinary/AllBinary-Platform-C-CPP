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
// #include "java/io/FileNotFoundException.h"
#include "android/content/Context.h"
#include "org/allbinary/data/resource/ResourceUtil.h"

typedef struct FileFactory FileFactory;
struct FileFactory {
    Context* context;
};

static FileFactory* FileFactory_SINGLETON;

FileFactory* FileFactory_new(Context* context);

void FileFactory_init(FileFactory* this, Context* context);
FileFactory* FileFactory_getInstance(void);
bool FileFactory_isFile(FileFactory* this, const char* path);
Context* FileFactory_getContext(FileFactory* this);
AbFile* FileFactory_getFile(FileFactory* this, const char* filePath);
AbFile* FileFactory_getInstance(FileFactory* this, AbFile* file, const char* childFilePath);

// Static fields with runtime initializers: call this once at startup
void FileFactory_staticInit(void) {
    FileFactory_SINGLETON = FileFactory_new(ResourceUtil_getContext(ResourceUtil_getInstance()));
}

static void FileFactory_initFields(FileFactory* this) {
    
}


void FileFactory_init(FileFactory* this, Context* context) {
    FileFactory_initFields(this);
        this->context = context;
}

FileFactory* FileFactory_new(Context* context) {
    FileFactory* this = calloc(1, sizeof(FileFactory));
    FileFactory_init(this, context);
    return this;
}


FileFactory* FileFactory_getInstance(void) {
        return FileFactory_SINGLETON;
}


// throws Exception
bool FileFactory_isFile(FileFactory* this, const char* path) {
        JAVA_TRY {
            Context_openFileInput(this->context, path);
            return true;
        } JAVA_CATCH(FileNotFoundException, e) {
            return false;
        } JAVA_END_TRY;
}


Context* FileFactory_getContext(FileFactory* this) {
        return this->context;
}


// throws Exception
AbFile* FileFactory_getFile(FileFactory* this, const char* filePath) {
        return AbFile_createAbFileFromRawPath(filePath);
}


// throws Exception
// Java overloaded method: C needs a different name
AbFile* FileFactory_getInstance(FileFactory* this, AbFile* file, const char* childFilePath) {
        return AbFile_createAbFileWithChild(file, childFilePath);
}

