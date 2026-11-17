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
// #include "java/io/FileNotFoundException.h"
// #include "java/io/FileOutputStream.h"
// #include "java/io/IOException.h"
// #include "java/io/OutputStream.h"
// #include "java/nio/channels/FileChannel.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct AbFileOutputStream AbFileOutputStream;
struct AbFileOutputStream {
    OutputStream base;
    FileOutputStream* fileOutputStream;
};


AbFileOutputStream* AbFileOutputStream_new(FileOutputStream* fileOutputStream);
AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file);
AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append);
AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name);
AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append);

void AbFileOutputStream_init(AbFileOutputStream* this, FileOutputStream* fileOutputStream);
void AbFileOutputStream_close(AbFileOutputStream* this);
FileChannel* AbFileOutputStream_getChannel(AbFileOutputStream* this);
void AbFileOutputStream_write(AbFileOutputStream* this, int8_t* buffer);
void AbFileOutputStream_write(AbFileOutputStream* this, int8_t* buffer, int32_t offset, int32_t count);
void AbFileOutputStream_write(AbFileOutputStream* this, int32_t b);

static void AbFileOutputStream_initFields(AbFileOutputStream* this) {
    
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFile(AbFile* file) {
        return AbFileOutputStream_new(FileOutputStream_new(AbFileNativeUtil_get(file)));
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromAbFileAppend(AbFile* file, bool append) {
        return AbFileOutputStream_new(FileOutputStream_new(AbFile_getPath(file)));
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePath(const char* name) {
        return AbFileOutputStream_new(FileOutputStream_new(name));
}


// throws FileNotFoundException
AbFileOutputStream* AbFileOutputStream_createFromFilePathAppend(const char* name, bool append) {
        return AbFileOutputStream_new(FileOutputStream_new(name));
}


void AbFileOutputStream_init(AbFileOutputStream* this, FileOutputStream* fileOutputStream) {
    OutputStream_init(&this->base);
    AbFileOutputStream_initFields(this);
        this->fileOutputStream = fileOutputStream;
}

AbFileOutputStream* AbFileOutputStream_new(FileOutputStream* fileOutputStream) {
    AbFileOutputStream* this = calloc(1, sizeof(AbFileOutputStream));
    AbFileOutputStream_init(this, fileOutputStream);
    return this;
}


// throws IOException
void AbFileOutputStream_close(AbFileOutputStream* this) {
        FileOutputStream_close(this->fileOutputStream);
}


FileChannel* AbFileOutputStream_getChannel(AbFileOutputStream* this) {
        return FileOutputStream_getChannel(this->fileOutputStream);
}


// throws IOException
void AbFileOutputStream_write(AbFileOutputStream* this, int8_t* buffer) {
        FileOutputStream_write(this->fileOutputStream, buffer);
}


// throws IOException
// Java overloaded method: C needs a different name
void AbFileOutputStream_write(AbFileOutputStream* this, int8_t* buffer, int32_t offset, int32_t count) {
        FileOutputStream_write(this->fileOutputStream, buffer, offset, count);
}


// throws IOException
// Java overloaded method: C needs a different name
void AbFileOutputStream_write(AbFileOutputStream* this, int32_t b) {
        FileOutputStream_write(this->fileOutputStream, b);
}

