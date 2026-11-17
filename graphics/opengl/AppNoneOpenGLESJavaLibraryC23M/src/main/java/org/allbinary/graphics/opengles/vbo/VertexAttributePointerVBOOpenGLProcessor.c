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

typedef struct VertexAttributePointerVBOOpenGLProcessor VertexAttributePointerVBOOpenGLProcessor;
struct VertexAttributePointerVBOOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static VertexAttributePointerVBOOpenGLProcessor* VertexAttributePointerVBOOpenGLProcessor_instance;

VertexAttributePointerVBOOpenGLProcessor* VertexAttributePointerVBOOpenGLProcessor_new(void);
VertexAttributePointerVBOOpenGLProcessor* VertexAttributePointerVBOOpenGLProcessor_getInstance(void);

void VertexAttributePointerVBOOpenGLProcessor_init(VertexAttributePointerVBOOpenGLProcessor* this);
void VertexAttributePointerVBOOpenGLProcessor_process(VertexAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void VertexAttributePointerVBOOpenGLProcessor_staticInit(void) {
    VertexAttributePointerVBOOpenGLProcessor_instance = VertexAttributePointerVBOOpenGLProcessor_new();
}


VertexAttributePointerVBOOpenGLProcessor* VertexAttributePointerVBOOpenGLProcessor_getInstance(void) {
        return VertexAttributePointerVBOOpenGLProcessor_instance;
}


void VertexAttributePointerVBOOpenGLProcessor_init(VertexAttributePointerVBOOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

VertexAttributePointerVBOOpenGLProcessor* VertexAttributePointerVBOOpenGLProcessor_new(void) {
    VertexAttributePointerVBOOpenGLProcessor* this = calloc(1, sizeof(VertexAttributePointerVBOOpenGLProcessor));
    VertexAttributePointerVBOOpenGLProcessor_init(this);
    return this;
}


void VertexAttributePointerVBOOpenGLProcessor_process(VertexAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

