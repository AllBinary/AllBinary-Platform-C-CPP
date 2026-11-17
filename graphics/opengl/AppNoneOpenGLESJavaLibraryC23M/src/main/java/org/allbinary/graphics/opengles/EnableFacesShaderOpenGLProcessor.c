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

typedef struct EnableFacesShaderOpenGLProcessor EnableFacesShaderOpenGLProcessor;
struct EnableFacesShaderOpenGLProcessor {
    ObjectThreedOpenGLProcessor base;
};

static EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor_instance;

EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor_new(void);
EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor_getInstance(void);

void EnableFacesShaderOpenGLProcessor_init(EnableFacesShaderOpenGLProcessor* this);
void EnableFacesShaderOpenGLProcessor_process(EnableFacesShaderOpenGLProcessor* this, GL10* gl, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void EnableFacesShaderOpenGLProcessor_staticInit(void) {
    EnableFacesShaderOpenGLProcessor_instance = EnableFacesShaderOpenGLProcessor_new();
}


EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor_getInstance(void) {
        return EnableFacesShaderOpenGLProcessor_instance;
}


void EnableFacesShaderOpenGLProcessor_init(EnableFacesShaderOpenGLProcessor* this) {
    ObjectThreedOpenGLProcessor_init(&this->base);
}

EnableFacesShaderOpenGLProcessor* EnableFacesShaderOpenGLProcessor_new(void) {
    EnableFacesShaderOpenGLProcessor* this = calloc(1, sizeof(EnableFacesShaderOpenGLProcessor));
    EnableFacesShaderOpenGLProcessor_init(this);
    return this;
}


void EnableFacesShaderOpenGLProcessor_process(EnableFacesShaderOpenGLProcessor* this, GL10* gl, Any* anyType) {
}

