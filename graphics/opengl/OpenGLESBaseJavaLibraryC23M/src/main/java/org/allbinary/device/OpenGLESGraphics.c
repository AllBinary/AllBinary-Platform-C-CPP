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
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/font/FontDebugBase.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/device/GraphicsInterface.h"

typedef struct OpenGLESGraphics OpenGLESGraphics;
struct OpenGLESGraphics {
    Graphics base;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    GraphicsInterface GraphicsInterface_interface;
    CommonStrings* commonStrings;
    GL10* gl;
};


OpenGLESGraphics* OpenGLESGraphics_new(void);

void OpenGLESGraphics_init(OpenGLESGraphics* this);
void OpenGLESGraphics_updateGL(OpenGLESGraphics* this, GL* gl);
void OpenGLESGraphics_set(OpenGLESGraphics* this, GL* gl);
void OpenGLESGraphics_init(OpenGLESGraphics* this);
void OpenGLESGraphics_update(OpenGLESGraphics* this);
void OpenGLESGraphics_setOrthoginalMode(OpenGLESGraphics* this);
void OpenGLESGraphics_setCameraMode(OpenGLESGraphics* this);
GL10* OpenGLESGraphics_getGl10(OpenGLESGraphics* this);
void OpenGLESGraphics_setFontDebug(OpenGLESGraphics* this, Font* font, FontDebugBase* fontDebug);

static void OpenGLESGraphics_initFields(OpenGLESGraphics* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->gl = NullGL10_NULL_GL10;
}


void OpenGLESGraphics_init(OpenGLESGraphics* this) {
    Graphics_init(&this->base);
    OpenGLESGraphics_initFields(this);
}

OpenGLESGraphics* OpenGLESGraphics_new(void) {
    OpenGLESGraphics* this = calloc(1, sizeof(OpenGLESGraphics));
    OpenGLESGraphics_init(this);
    return this;
}


void OpenGLESGraphics_updateGL(OpenGLESGraphics* this, GL* gl) {
}


void OpenGLESGraphics_set(OpenGLESGraphics* this, GL* gl) {
}


// throws Exception
void OpenGLESGraphics_init(OpenGLESGraphics* this) {
}


// throws Exception
void OpenGLESGraphics_update(OpenGLESGraphics* this) {
}


void OpenGLESGraphics_setOrthoginalMode(OpenGLESGraphics* this) {
}


void OpenGLESGraphics_setCameraMode(OpenGLESGraphics* this) {
}


GL10* OpenGLESGraphics_getGl10(OpenGLESGraphics* this) {
        return this->gl;
}


void OpenGLESGraphics_setFontDebug(OpenGLESGraphics* this, Font* font, FontDebugBase* fontDebug) {
        java_throw(java_exception_new("RuntimeException", ""));
}

