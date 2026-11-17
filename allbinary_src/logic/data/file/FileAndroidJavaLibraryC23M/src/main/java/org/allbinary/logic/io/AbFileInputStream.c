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
// #include "java/io/FileInputStream.h"
// #include "java/io/FileNotFoundException.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "java/nio/channels/FileChannel.h"

typedef struct AbFileInputStream AbFileInputStream;
struct AbFileInputStream {
    InputStream base;
    FileInputStream* fileInputStream;
};


AbFileInputStream* AbFileInputStream_new(FileInputStream* fileInputStream);

void AbFileInputStream_init(AbFileInputStream* this, FileInputStream* fileInputStream);
void AbFileInputStream_mark(AbFileInputStream* this, int32_t readlimit);
bool AbFileInputStream_markSupported(AbFileInputStream* this);
void AbFileInputStream_reset(AbFileInputStream* this);
int32_t AbFileInputStream_available(AbFileInputStream* this);
void AbFileInputStream_close(AbFileInputStream* this);
FileChannel* AbFileInputStream_getChannel(AbFileInputStream* this);
int32_t AbFileInputStream_read(AbFileInputStream* this);
int32_t AbFileInputStream_read(AbFileInputStream* this, int8_t* b);
int32_t AbFileInputStream_read(AbFileInputStream* this, int8_t* buffer, int32_t offset, int32_t count);
int64_t AbFileInputStream_skip(AbFileInputStream* this, int64_t n);

static void AbFileInputStream_initFields(AbFileInputStream* this) {
    
}


void AbFileInputStream_init(AbFileInputStream* this, FileInputStream* fileInputStream) {
    InputStream_init(&this->base);
    AbFileInputStream_initFields(this);
        this->fileInputStream = fileInputStream;
}

AbFileInputStream* AbFileInputStream_new(FileInputStream* fileInputStream) {
    AbFileInputStream* this = calloc(1, sizeof(AbFileInputStream));
    AbFileInputStream_init(this, fileInputStream);
    return this;
}


void AbFileInputStream_mark(AbFileInputStream* this, int32_t readlimit) {
        FileInputStream_mark(this->fileInputStream, readlimit);
}


bool AbFileInputStream_markSupported(AbFileInputStream* this) {
        return FileInputStream_markSupported(this->fileInputStream);
}


// throws IOException
// synchronized
void AbFileInputStream_reset(AbFileInputStream* this) {
        FileInputStream_reset(this->fileInputStream);
}


// throws IOException
int32_t AbFileInputStream_available(AbFileInputStream* this) {
        return FileInputStream_available(this->fileInputStream);
}


// throws IOException
void AbFileInputStream_close(AbFileInputStream* this) {
        FileInputStream_close(this->fileInputStream);
}


FileChannel* AbFileInputStream_getChannel(AbFileInputStream* this) {
        return FileInputStream_getChannel(this->fileInputStream);
}


// throws IOException
int32_t AbFileInputStream_read(AbFileInputStream* this) {
        return FileInputStream_read(this->fileInputStream);
}


// throws IOException
// Java overloaded method: C needs a different name
int32_t AbFileInputStream_read(AbFileInputStream* this, int8_t* b) {
        return FileInputStream_read(this->fileInputStream, b);
}


// throws IOException
// Java overloaded method: C needs a different name
int32_t AbFileInputStream_read(AbFileInputStream* this, int8_t* buffer, int32_t offset, int32_t count) {
        return FileInputStream_read(this->fileInputStream, buffer, offset, count);
}


// throws IOException
int64_t AbFileInputStream_skip(AbFileInputStream* this, int64_t n) {
        return FileInputStream_skip(this->fileInputStream, n);
}

