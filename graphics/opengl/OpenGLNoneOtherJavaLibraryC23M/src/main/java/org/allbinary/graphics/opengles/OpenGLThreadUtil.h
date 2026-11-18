#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
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

typedef struct OpenGLThreadUtil OpenGLThreadUtil;
struct OpenGLThreadUtil {
    char unused;
};


OpenGLThreadUtil* OpenGLThreadUtil_new(void);
void OpenGLThreadUtil_init(OpenGLThreadUtil* this);

OpenGLThreadUtil* OpenGLThreadUtil_getInstance(void);

void OpenGLThreadUtil_set(OpenGLThreadUtil* this, void* glSurfaceView);

void OpenGLThreadUtil_onPause(OpenGLThreadUtil* this);

void OpenGLThreadUtil_onResume(OpenGLThreadUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLThreadUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLThreadUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
