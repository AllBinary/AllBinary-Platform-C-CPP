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

typedef struct NullOpenGLProcessorFactory NullOpenGLProcessorFactory;
struct NullOpenGLProcessorFactory {
    char unused;
};

static OpenGLProcessor* NullOpenGLProcessorFactory_instance;

NullOpenGLProcessorFactory* NullOpenGLProcessorFactory_new(void);
OpenGLProcessor* NullOpenGLProcessorFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullOpenGLProcessorFactory_staticInit(void) {
    NullOpenGLProcessorFactory_instance = OpenGLProcessor_new();
}

void NullOpenGLProcessorFactory_init(NullOpenGLProcessorFactory* this) {
}

NullOpenGLProcessorFactory* NullOpenGLProcessorFactory_new(void) {
    NullOpenGLProcessorFactory* this = calloc(1, sizeof(NullOpenGLProcessorFactory));
    NullOpenGLProcessorFactory_init(this);
    return this;
}


OpenGLProcessor* NullOpenGLProcessorFactory_getInstance(void) {
        return NullOpenGLProcessorFactory_instance;
}

