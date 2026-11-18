#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
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
typedef struct OpenGLProcessor OpenGLProcessor;
#if __has_include("org/allbinary/graphics/opengles/OpenGLProcessor.h")
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#endif

typedef struct NullOpenGLProcessorFactory NullOpenGLProcessorFactory;
struct NullOpenGLProcessorFactory {
    char unused;
};


NullOpenGLProcessorFactory* NullOpenGLProcessorFactory_new(void);
void NullOpenGLProcessorFactory_init(NullOpenGLProcessorFactory* this);

OpenGLProcessor* NullOpenGLProcessorFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullOpenGLProcessorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullOpenGLProcessorFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
