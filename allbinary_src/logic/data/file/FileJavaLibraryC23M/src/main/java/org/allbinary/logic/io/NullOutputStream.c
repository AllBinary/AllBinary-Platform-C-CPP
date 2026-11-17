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
// #include "java/io/OutputStream.h"

typedef struct NullOutputStream NullOutputStream;
struct NullOutputStream {
    OutputStream base;
};

NullOutputStream* NullOutputStream_NULL_OUTPUT_STREAM;

NullOutputStream* NullOutputStream_new(void);
void NullOutputStream_write(NullOutputStream* this, int32_t b);
void NullOutputStream_write(NullOutputStream* this, int8_t* b, int32_t off, int32_t len);
void NullOutputStream_close(NullOutputStream* this);

// Static fields with runtime initializers: call this once at startup
void NullOutputStream_staticInit(void) {
    NullOutputStream_NULL_OUTPUT_STREAM = NullOutputStream_new();
}

void NullOutputStream_init(NullOutputStream* this) {
    OutputStream_init(&this->base);
}

NullOutputStream* NullOutputStream_new(void) {
    NullOutputStream* this = calloc(1, sizeof(NullOutputStream));
    NullOutputStream_init(this);
    return this;
}


// throws IOException
void NullOutputStream_write(NullOutputStream* this, int32_t b) {
}


// throws IOException
// Java overloaded method: C needs a different name
void NullOutputStream_write(NullOutputStream* this, int8_t* b, int32_t off, int32_t len) {
}


void NullOutputStream_close(NullOutputStream* this) {
}

