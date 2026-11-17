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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
// #include "java/io/Writer.h"

typedef struct NullWriter NullWriter;
struct NullWriter {
    Writer base;
};

NullWriter* NullWriter_NULL_WRITER;

NullWriter* NullWriter_new(void);
void NullWriter_write(NullWriter* this, int32_t c);
void NullWriter_write(NullWriter* this, uint16_t* cbuf, int32_t off, int32_t len);
void NullWriter_write(NullWriter* this, const char* str);
void NullWriter_write(NullWriter* this, const char* str, int32_t off, int32_t len);
void NullWriter_flush(NullWriter* this);
void NullWriter_close(NullWriter* this);

// Static fields with runtime initializers: call this once at startup
void NullWriter_staticInit(void) {
    NullWriter_NULL_WRITER = NullWriter_new();
}

void NullWriter_init(NullWriter* this) {
    Writer_init(&this->base);
}

NullWriter* NullWriter_new(void) {
    NullWriter* this = calloc(1, sizeof(NullWriter));
    NullWriter_init(this);
    return this;
}


// throws IOException
void NullWriter_write(NullWriter* this, int32_t c) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write(NullWriter* this, uint16_t* cbuf, int32_t off, int32_t len) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write(NullWriter* this, const char* str) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullWriter_write(NullWriter* this, const char* str, int32_t off, int32_t len) {
}


// throws IOException
void NullWriter_flush(NullWriter* this) {
}


// throws IOException
void NullWriter_close(NullWriter* this) {
}

