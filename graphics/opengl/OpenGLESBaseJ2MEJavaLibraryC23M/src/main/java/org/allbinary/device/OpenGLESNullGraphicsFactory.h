#ifndef ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H
#define ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H
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
typedef struct OpenGLESGraphics OpenGLESGraphics;
#if __has_include("org/allbinary/device/OpenGLESGraphics.h")
#include "org/allbinary/device/OpenGLESGraphics.h"
#endif

typedef struct OpenGLESNullGraphicsFactory OpenGLESNullGraphicsFactory;
struct OpenGLESNullGraphicsFactory {
    char unused;
};


OpenGLESNullGraphicsFactory* OpenGLESNullGraphicsFactory_new(void);
void OpenGLESNullGraphicsFactory_init(OpenGLESNullGraphicsFactory* this);

OpenGLESGraphics* OpenGLESNullGraphicsFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESNullGraphicsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESNullGraphicsFactory_register(void);


#endif // ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H
