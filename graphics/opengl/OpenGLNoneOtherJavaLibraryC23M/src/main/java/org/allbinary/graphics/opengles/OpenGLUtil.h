#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
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
typedef struct Image Image;
#include "java/lang/Runnable.h"

typedef struct OpenGLUtil OpenGLUtil;
struct OpenGLUtil {
    char unused;
};


OpenGLUtil* OpenGLUtil_new(void);
void OpenGLUtil_init(OpenGLUtil* this);

OpenGLUtil* OpenGLUtil_getInstance(void);

Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image);

void OpenGLUtil_clear(OpenGLUtil* this);

void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
