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
// package org.allbinary.graphics.opengles.vbo

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

typedef struct TextureAttributePointerVBOOpenGLProcessor TextureAttributePointerVBOOpenGLProcessor;
struct TextureAttributePointerVBOOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor_instance;

TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor_new(void);
TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor_getInstance(void);

void TextureAttributePointerVBOOpenGLProcessor_init(TextureAttributePointerVBOOpenGLProcessor* this);
void TextureAttributePointerVBOOpenGLProcessor_process(TextureAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void TextureAttributePointerVBOOpenGLProcessor_staticInit(void) {
    TextureAttributePointerVBOOpenGLProcessor_instance = TextureAttributePointerVBOOpenGLProcessor_new();
}


TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor_getInstance(void) {
        return TextureAttributePointerVBOOpenGLProcessor_instance;
}


void TextureAttributePointerVBOOpenGLProcessor_init(TextureAttributePointerVBOOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

TextureAttributePointerVBOOpenGLProcessor* TextureAttributePointerVBOOpenGLProcessor_new(void) {
    TextureAttributePointerVBOOpenGLProcessor* this = calloc(1, sizeof(TextureAttributePointerVBOOpenGLProcessor));
    TextureAttributePointerVBOOpenGLProcessor_init(this);
    return this;
}


void TextureAttributePointerVBOOpenGLProcessor_process(TextureAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

