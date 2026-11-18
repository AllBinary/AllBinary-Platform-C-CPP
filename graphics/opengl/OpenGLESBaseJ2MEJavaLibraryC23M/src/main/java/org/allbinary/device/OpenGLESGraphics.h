#ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
#define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
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
typedef struct GraphicsInterface GraphicsInterface;
typedef struct NullGL10 NullGL10;
typedef struct GL GL;
typedef struct GL10 GL10;
typedef struct Font Font;
typedef struct FontDebugBase FontDebugBase;
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/khronos/opengles/GL10.h")
#include "javax/microedition/khronos/opengles/GL10.h"
#endif
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/device/GraphicsInterface.h"

typedef struct OpenGLESGraphics OpenGLESGraphics;
struct OpenGLESGraphics {
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    GraphicsInterface GraphicsInterface_interface;
    CommonStrings* commonStrings;
    GL10* gl;
};


OpenGLESGraphics* OpenGLESGraphics_new(void);

void OpenGLESGraphics_init(OpenGLESGraphics* this);

void OpenGLESGraphics_updateGL(OpenGLESGraphics* this, GL* gl);

void OpenGLESGraphics_set(OpenGLESGraphics* this, GL* gl);

void OpenGLESGraphics_initMethod(OpenGLESGraphics* this);

void OpenGLESGraphics_update(OpenGLESGraphics* this);

void OpenGLESGraphics_setOrthoginalMode(OpenGLESGraphics* this);

void OpenGLESGraphics_setCameraMode(OpenGLESGraphics* this);

GL10* OpenGLESGraphics_getGlP(OpenGLESGraphics* this);

void OpenGLESGraphics_setFontDebug(OpenGLESGraphics* this, Font* font, FontDebugBase* fontDebug);
#define OpenGLESGraphics_new0 OpenGLESGraphics_new
#define OpenGLESGraphics_init0 OpenGLESGraphics_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESGraphics_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESGraphics_register(void);

#if __has_include("javax/microedition/khronos/opengles/GL10.h")
#include "javax/microedition/khronos/opengles/GL10.h"
#endif

#endif // ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
