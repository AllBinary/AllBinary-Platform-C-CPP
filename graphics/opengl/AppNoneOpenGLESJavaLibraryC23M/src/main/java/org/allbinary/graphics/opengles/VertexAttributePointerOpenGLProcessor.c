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

typedef struct VertexAttributePointerOpenGLProcessor VertexAttributePointerOpenGLProcessor;
struct VertexAttributePointerOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static VertexAttributePointerOpenGLProcessor* VertexAttributePointerOpenGLProcessor_instance;

VertexAttributePointerOpenGLProcessor* VertexAttributePointerOpenGLProcessor_new(void);
VertexAttributePointerOpenGLProcessor* VertexAttributePointerOpenGLProcessor_getInstance(void);

void VertexAttributePointerOpenGLProcessor_init(VertexAttributePointerOpenGLProcessor* this);
void VertexAttributePointerOpenGLProcessor_process(VertexAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void VertexAttributePointerOpenGLProcessor_staticInit(void) {
    VertexAttributePointerOpenGLProcessor_instance = VertexAttributePointerOpenGLProcessor_new();
}


VertexAttributePointerOpenGLProcessor* VertexAttributePointerOpenGLProcessor_getInstance(void) {
        return VertexAttributePointerOpenGLProcessor_instance;
}


void VertexAttributePointerOpenGLProcessor_init(VertexAttributePointerOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

VertexAttributePointerOpenGLProcessor* VertexAttributePointerOpenGLProcessor_new(void) {
    VertexAttributePointerOpenGLProcessor* this = calloc(1, sizeof(VertexAttributePointerOpenGLProcessor));
    VertexAttributePointerOpenGLProcessor_init(this);
    return this;
}


void VertexAttributePointerOpenGLProcessor_process(VertexAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

