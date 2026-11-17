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
// #include "java/io/Reader.h"

typedef struct NullReader NullReader;
struct NullReader {
    Reader base;
};

NullReader* NullReader_NULL_READER;

NullReader* NullReader_new(void);
int32_t NullReader_read(NullReader* this);
int32_t NullReader_read(NullReader* this, uint16_t* cbuf, int32_t off, int32_t len);
bool NullReader_ready(NullReader* this);
int64_t NullReader_skip(NullReader* this, int64_t n);
void NullReader_close(NullReader* this);

// Static fields with runtime initializers: call this once at startup
void NullReader_staticInit(void) {
    NullReader_NULL_READER = NullReader_new();
}

void NullReader_init(NullReader* this) {
    Reader_init(&this->base);
}

NullReader* NullReader_new(void) {
    NullReader* this = calloc(1, sizeof(NullReader));
    NullReader_init(this);
    return this;
}


// throws IOException
int32_t NullReader_read(NullReader* this) {
        return -1;
}


// throws IOException
// Java overloaded method: C needs a different name
int32_t NullReader_read(NullReader* this, uint16_t* cbuf, int32_t off, int32_t len) {
        return -1;
}


// throws IOException
bool NullReader_ready(NullReader* this) {
        return false;
}


// throws IOException
int64_t NullReader_skip(NullReader* this, int64_t n) {
        return 0LL;
}


void NullReader_close(NullReader* this) {
}

