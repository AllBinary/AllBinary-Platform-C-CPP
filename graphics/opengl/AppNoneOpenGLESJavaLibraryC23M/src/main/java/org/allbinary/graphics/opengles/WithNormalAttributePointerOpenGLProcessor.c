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

typedef struct WithNormalAttributePointerOpenGLProcessor WithNormalAttributePointerOpenGLProcessor;
struct WithNormalAttributePointerOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor_instance;

WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor_new(void);
WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor_getInstance(void);

void WithNormalAttributePointerOpenGLProcessor_init(WithNormalAttributePointerOpenGLProcessor* this);
void WithNormalAttributePointerOpenGLProcessor_process(WithNormalAttributePointerOpenGLProcessor* this, GL10* gl, Any* aObject3d);

// Static fields with runtime initializers: call this once at startup
void WithNormalAttributePointerOpenGLProcessor_staticInit(void) {
    WithNormalAttributePointerOpenGLProcessor_instance = WithNormalAttributePointerOpenGLProcessor_new();
}


WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor_getInstance(void) {
        return WithNormalAttributePointerOpenGLProcessor_instance;
}


void WithNormalAttributePointerOpenGLProcessor_init(WithNormalAttributePointerOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

WithNormalAttributePointerOpenGLProcessor* WithNormalAttributePointerOpenGLProcessor_new(void) {
    WithNormalAttributePointerOpenGLProcessor* this = calloc(1, sizeof(WithNormalAttributePointerOpenGLProcessor));
    WithNormalAttributePointerOpenGLProcessor_init(this);
    return this;
}


void WithNormalAttributePointerOpenGLProcessor_process(WithNormalAttributePointerOpenGLProcessor* this, GL10* gl, Any* aObject3d) {
        java_throw(java_exception_new("RuntimeException", ""));
}

