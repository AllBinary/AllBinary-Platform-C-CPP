// Generated Code Do Not Modify
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLESNullGraphicsFactory OpenGLESNullGraphicsFactory;
struct OpenGLESNullGraphicsFactory {
    char unused;
};

static OpenGLESGraphics* OpenGLESNullGraphicsFactory_instance;

OpenGLESNullGraphicsFactory* OpenGLESNullGraphicsFactory_new(void);
OpenGLESGraphics* OpenGLESNullGraphicsFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLESNullGraphicsFactory_staticInit(void) {
    OpenGLESNullGraphicsFactory_instance = OpenGLESGraphics_new();
}

void OpenGLESNullGraphicsFactory_init(OpenGLESNullGraphicsFactory* this) {
}

OpenGLESNullGraphicsFactory* OpenGLESNullGraphicsFactory_new(void) {
    OpenGLESNullGraphicsFactory* this = calloc(1, sizeof(OpenGLESNullGraphicsFactory));
    OpenGLESNullGraphicsFactory_init(this);
    return this;
}


OpenGLESGraphics* OpenGLESNullGraphicsFactory_getInstance(void) {
        return OpenGLESNullGraphicsFactory_instance;
}

