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

typedef struct ColorAttributePointerVBOOpenGLProcessor ColorAttributePointerVBOOpenGLProcessor;
struct ColorAttributePointerVBOOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static ColorAttributePointerVBOOpenGLProcessor* ColorAttributePointerVBOOpenGLProcessor_instance;

ColorAttributePointerVBOOpenGLProcessor* ColorAttributePointerVBOOpenGLProcessor_new(void);
ColorAttributePointerVBOOpenGLProcessor* ColorAttributePointerVBOOpenGLProcessor_getInstance(void);

void ColorAttributePointerVBOOpenGLProcessor_init(ColorAttributePointerVBOOpenGLProcessor* this);
void ColorAttributePointerVBOOpenGLProcessor_process(ColorAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void ColorAttributePointerVBOOpenGLProcessor_staticInit(void) {
    ColorAttributePointerVBOOpenGLProcessor_instance = ColorAttributePointerVBOOpenGLProcessor_new();
}


ColorAttributePointerVBOOpenGLProcessor* ColorAttributePointerVBOOpenGLProcessor_getInstance(void) {
        return ColorAttributePointerVBOOpenGLProcessor_instance;
}


void ColorAttributePointerVBOOpenGLProcessor_init(ColorAttributePointerVBOOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

ColorAttributePointerVBOOpenGLProcessor* ColorAttributePointerVBOOpenGLProcessor_new(void) {
    ColorAttributePointerVBOOpenGLProcessor* this = calloc(1, sizeof(ColorAttributePointerVBOOpenGLProcessor));
    ColorAttributePointerVBOOpenGLProcessor_init(this);
    return this;
}


void ColorAttributePointerVBOOpenGLProcessor_process(ColorAttributePointerVBOOpenGLProcessor* this, GL10* gl, Any* anyType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

