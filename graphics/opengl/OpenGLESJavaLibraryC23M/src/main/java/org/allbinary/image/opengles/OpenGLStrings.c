// Generated Code Do Not Modify
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLStrings OpenGLStrings;
struct OpenGLStrings {
    const char* GL_ERROR_LABEL;
    const char* SET;
};

static OpenGLStrings* OpenGLStrings_instance;

OpenGLStrings* OpenGLStrings_new(void);
OpenGLStrings* OpenGLStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLStrings_staticInit(void) {
    OpenGLStrings_instance = OpenGLStrings_new();
}

static void OpenGLStrings_initFields(OpenGLStrings* this) {
    this->GL_ERROR_LABEL = "GLError: ";
    this->SET = "set(GL10)";
}

void OpenGLStrings_init(OpenGLStrings* this) {
    OpenGLStrings_initFields(this);
}

OpenGLStrings* OpenGLStrings_new(void) {
    OpenGLStrings* this = calloc(1, sizeof(OpenGLStrings));
    OpenGLStrings_init(this);
    return this;
}


OpenGLStrings* OpenGLStrings_getInstance(void) {
        return OpenGLStrings_instance;
}

