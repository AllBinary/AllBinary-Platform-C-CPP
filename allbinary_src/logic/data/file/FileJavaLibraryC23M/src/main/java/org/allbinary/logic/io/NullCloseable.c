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
// #include "java/io/Closeable.h"
// #include "java/io/IOException.h"

typedef struct NullCloseable NullCloseable;
struct NullCloseable {
    Closeable Closeable_interface;
};

NullCloseable* NullCloseable_NULL_CLOSEABLE;

NullCloseable* NullCloseable_new(void);
void NullCloseable_close(NullCloseable* this);

// Static fields with runtime initializers: call this once at startup
void NullCloseable_staticInit(void) {
    NullCloseable_NULL_CLOSEABLE = NullCloseable_new();
}

void NullCloseable_init(NullCloseable* this) {
}

NullCloseable* NullCloseable_new(void) {
    NullCloseable* this = calloc(1, sizeof(NullCloseable));
    NullCloseable_init(this);
    return this;
}


// throws IOException
void NullCloseable_close(NullCloseable* this) {
}

