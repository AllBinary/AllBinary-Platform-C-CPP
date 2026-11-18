#ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H
#define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H
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
typedef struct OpenGLESGraphics OpenGLESGraphics;

typedef struct OpenGLESGraphicsFactory OpenGLESGraphicsFactory;
struct OpenGLESGraphicsFactory {
    char unused;
};


OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void);
void OpenGLESGraphicsFactory_init(OpenGLESGraphicsFactory* this);

OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESGraphicsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESGraphicsFactory_register(void);


#endif // ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H
