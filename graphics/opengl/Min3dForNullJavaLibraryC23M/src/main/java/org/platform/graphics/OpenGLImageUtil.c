// Generated Code Do Not Modify
// package org.platform.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/image/opengles/OpenGLImageUtilBase.h"

typedef struct OpenGLImageUtil OpenGLImageUtil;
struct OpenGLImageUtil {
    OpenGLImageUtilBase base;
};

static OpenGLImageUtil* OpenGLImageUtil_instance;

OpenGLImageUtil* OpenGLImageUtil_new(void);
OpenGLImageUtil* OpenGLImageUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLImageUtil_staticInit(void) {
    OpenGLImageUtil_instance = OpenGLImageUtil_new();
}

void OpenGLImageUtil_init(OpenGLImageUtil* this) {
    OpenGLImageUtilBase_init(&this->base);
}

OpenGLImageUtil* OpenGLImageUtil_new(void) {
    OpenGLImageUtil* this = calloc(1, sizeof(OpenGLImageUtil));
    OpenGLImageUtil_init(this);
    return this;
}


OpenGLImageUtil* OpenGLImageUtil_getInstance(void) {
        return OpenGLImageUtil_instance;
}

