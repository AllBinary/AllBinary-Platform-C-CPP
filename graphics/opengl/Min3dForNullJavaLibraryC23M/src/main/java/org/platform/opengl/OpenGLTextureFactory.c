// Generated Code Do Not Modify
// package org.platform.opengl

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"

typedef struct OpenGLTextureFactory OpenGLTextureFactory;
struct OpenGLTextureFactory {
    PlatformTextureBaseFactory base;
    OpenGLGLUUtils* gluUtils;
};

static OpenGLTextureFactory* OpenGLTextureFactory_instance;

OpenGLTextureFactory* OpenGLTextureFactory_new(void);
OpenGLTextureFactory* OpenGLTextureFactory_getInstance(void);

void OpenGLTextureFactory_init(OpenGLTextureFactory* this);
void OpenGLTextureFactory_load(OpenGLTextureFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

// Static fields with runtime initializers: call this once at startup
void OpenGLTextureFactory_staticInit(void) {
    OpenGLTextureFactory_instance = OpenGLTextureFactory_new();
}

static void OpenGLTextureFactory_initFields(OpenGLTextureFactory* this) {
    this->gluUtils = OpenGLGLUUtils_getInstance();
}


OpenGLTextureFactory* OpenGLTextureFactory_getInstance(void) {
        return OpenGLTextureFactory_instance;
}


void OpenGLTextureFactory_init(OpenGLTextureFactory* this) {
    PlatformTextureBaseFactory_init(&this->base);
    OpenGLTextureFactory_initFields(this);
}

OpenGLTextureFactory* OpenGLTextureFactory_new(void) {
    OpenGLTextureFactory* this = calloc(1, sizeof(OpenGLTextureFactory));
    OpenGLTextureFactory_init(this);
    return this;
}


void OpenGLTextureFactory_load(OpenGLTextureFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip) {
        java_throw(java_exception_new("RuntimeException", ""));
}

