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
// package org.allbinary.graphics.opengles.shader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NullOpenGLTextureProcessor NullOpenGLTextureProcessor;
struct NullOpenGLTextureProcessor {
    char unused;
};

static OpenGLObject3dProcessor* NullOpenGLTextureProcessor_instance;

NullOpenGLTextureProcessor* NullOpenGLTextureProcessor_new(void);
OpenGLObject3dProcessor* NullOpenGLTextureProcessor_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullOpenGLTextureProcessor_staticInit(void) {
    NullOpenGLTextureProcessor_instance = OpenGLObject3dProcessor_new();
}

void NullOpenGLTextureProcessor_init(NullOpenGLTextureProcessor* this) {
}

NullOpenGLTextureProcessor* NullOpenGLTextureProcessor_new(void) {
    NullOpenGLTextureProcessor* this = calloc(1, sizeof(NullOpenGLTextureProcessor));
    NullOpenGLTextureProcessor_init(this);
    return this;
}


OpenGLObject3dProcessor* NullOpenGLTextureProcessor_getInstance(void) {
        return NullOpenGLTextureProcessor_instance;
}

