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

typedef struct OpenGLESGraphicsFactory OpenGLESGraphicsFactory;
struct OpenGLESGraphicsFactory {
    char unused;
};


OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void);
OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this);

void OpenGLESGraphicsFactory_init(OpenGLESGraphicsFactory* this) {
}

OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void) {
    OpenGLESGraphicsFactory* this = calloc(1, sizeof(OpenGLESGraphicsFactory));
    OpenGLESGraphicsFactory_init(this);
    return this;
}


OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this) {
        return nullptr;
}

