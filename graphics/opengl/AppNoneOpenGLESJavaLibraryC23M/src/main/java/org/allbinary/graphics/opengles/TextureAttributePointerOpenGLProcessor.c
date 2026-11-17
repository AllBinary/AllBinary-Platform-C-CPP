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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/threed/min3d/renderer/processor/ObjectThreedOpenGLProcessor.h"

typedef struct TextureAttributePointerOpenGLProcessor TextureAttributePointerOpenGLProcessor;
struct TextureAttributePointerOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor_instance;

TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor_new(void);
TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor_getInstance(void);

void TextureAttributePointerOpenGLProcessor_init(TextureAttributePointerOpenGLProcessor* this);
void TextureAttributePointerOpenGLProcessor_process(TextureAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void TextureAttributePointerOpenGLProcessor_staticInit(void) {
    TextureAttributePointerOpenGLProcessor_instance = TextureAttributePointerOpenGLProcessor_new();
}


TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor_getInstance(void) {
        return TextureAttributePointerOpenGLProcessor_instance;
}


void TextureAttributePointerOpenGLProcessor_init(TextureAttributePointerOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

TextureAttributePointerOpenGLProcessor* TextureAttributePointerOpenGLProcessor_new(void) {
    TextureAttributePointerOpenGLProcessor* this = calloc(1, sizeof(TextureAttributePointerOpenGLProcessor));
    TextureAttributePointerOpenGLProcessor_init(this);
    return this;
}


void TextureAttributePointerOpenGLProcessor_process(TextureAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

