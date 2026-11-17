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
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OpenGLObject3dProcessor OpenGLObject3dProcessor;
struct OpenGLObject3dProcessor {
    CommonStrings* commonStrings;
};


OpenGLObject3dProcessor* OpenGLObject3dProcessor_new(void);
void OpenGLObject3dProcessor_process(OpenGLObject3dProcessor* this, GL10* gl, Any* object3d);
void OpenGLObject3dProcessor_process(OpenGLObject3dProcessor* this, GL10* gl, Any* object3d, int32_t index);

static void OpenGLObject3dProcessor_initFields(OpenGLObject3dProcessor* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void OpenGLObject3dProcessor_init(OpenGLObject3dProcessor* this) {
    OpenGLObject3dProcessor_initFields(this);
}

OpenGLObject3dProcessor* OpenGLObject3dProcessor_new(void) {
    OpenGLObject3dProcessor* this = calloc(1, sizeof(OpenGLObject3dProcessor));
    OpenGLObject3dProcessor_init(this);
    return this;
}


void OpenGLObject3dProcessor_process(OpenGLObject3dProcessor* this, GL10* gl, Any* object3d) {
}


// Java overloaded method: C needs a different name
void OpenGLObject3dProcessor_process(OpenGLObject3dProcessor* this, GL10* gl, Any* object3d, int32_t index) {
}

