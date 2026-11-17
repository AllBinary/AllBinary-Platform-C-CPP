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
#include "android/content/Context.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct FileStreamFactory FileStreamFactory;
struct FileStreamFactory {
    Any* context;
};

static Any* FileStreamFactory_SINGLETON;

FileStreamFactory* FileStreamFactory_new(Context* context);
FileStreamFactory* FileStreamFactory_getInstance(void);

void FileStreamFactory_init(FileStreamFactory* this, Context* context);
AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);
AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName);
void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName);
static Context* FileStreamFactory_getContext(FileStreamFactory* this);

// Static fields with runtime initializers: call this once at startup
void FileStreamFactory_staticInit(void) {
    FileStreamFactory_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

static void FileStreamFactory_initFields(FileStreamFactory* this) {
    
}


FileStreamFactory* FileStreamFactory_getInstance(void) {
        if (FileStreamFactory_SINGLETON == NullUtil_getInstance()->NULL_OBJECT) {
            FileStreamFactory_SINGLETON = FileStreamFactory_new(ResourceUtil_getContext(ResourceUtil_getInstance()));
        }
        return ((FileStreamFactory*) FileStreamFactory_SINGLETON);
}


void FileStreamFactory_init(FileStreamFactory* this, Context* context) {
    FileStreamFactory_initFields(this);
        this->context = context;
}

FileStreamFactory* FileStreamFactory_new(Context* context) {
    FileStreamFactory* this = calloc(1, sizeof(FileStreamFactory));
    FileStreamFactory_init(this, context);
    return this;
}


// throws Exception
AbFileInputStream* FileStreamFactory_getFileInputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        return AbFileInputStream_new(JAVA_CALL(FileStreamFactory_getContext(this), openFileInput, fileName));
}


// throws Exception
AbFileOutputStream* FileStreamFactory_getFileOutputStreamInstance(FileStreamFactory* this, const char* path, const char* fileName) {
        Context* context = FileStreamFactory_getContext(this);
        Any_deleteFile(context, fileName);
        return AbFileOutputStream_new(Any_openFileOutput(context, fileName, 0));
}


// throws Exception
void FileStreamFactory_delete(FileStreamFactory* this, const char* path, const char* fileName) {
        JAVA_CALL(FileStreamFactory_getContext(this), deleteFile, fileName);
}


static Context* FileStreamFactory_getContext(FileStreamFactory* this) {
        return ((Context*) this->context);
}

