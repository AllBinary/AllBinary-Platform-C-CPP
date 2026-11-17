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

typedef struct ColorAttributePointerOpenGLProcessor ColorAttributePointerOpenGLProcessor;
struct ColorAttributePointerOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor_instance;

ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor_new(void);
ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor_getInstance(void);

void ColorAttributePointerOpenGLProcessor_init(ColorAttributePointerOpenGLProcessor* this);
void ColorAttributePointerOpenGLProcessor_process(ColorAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void ColorAttributePointerOpenGLProcessor_staticInit(void) {
    ColorAttributePointerOpenGLProcessor_instance = ColorAttributePointerOpenGLProcessor_new();
}


ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor_getInstance(void) {
        return ColorAttributePointerOpenGLProcessor_instance;
}


void ColorAttributePointerOpenGLProcessor_init(ColorAttributePointerOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

ColorAttributePointerOpenGLProcessor* ColorAttributePointerOpenGLProcessor_new(void) {
    ColorAttributePointerOpenGLProcessor* this = calloc(1, sizeof(ColorAttributePointerOpenGLProcessor));
    ColorAttributePointerOpenGLProcessor_init(this);
    return this;
}


void ColorAttributePointerOpenGLProcessor_process(ColorAttributePointerOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

