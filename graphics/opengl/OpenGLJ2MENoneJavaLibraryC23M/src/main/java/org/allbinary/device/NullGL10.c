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
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct NullGL10 NullGL10;
struct NullGL10 {
    GL10 GL10_interface;
};

NullGL10* NullGL10_NULL_GL10;

NullGL10* NullGL10_new(void);

// Static fields with runtime initializers: call this once at startup
void NullGL10_staticInit(void) {
    NullGL10_NULL_GL10 = NullGL10_new();
}

void NullGL10_init(NullGL10* this) {
}

NullGL10* NullGL10_new(void) {
    NullGL10* this = calloc(1, sizeof(NullGL10));
    NullGL10_init(this);
    return this;
}

