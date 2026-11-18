#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.opengles.shader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GL10 GL10;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct OpenGLObject3dProcessor OpenGLObject3dProcessor;
struct OpenGLObject3dProcessor {
    CommonStrings* commonStrings;
};


OpenGLObject3dProcessor* OpenGLObject3dProcessor_new(void);
void OpenGLObject3dProcessor_init(OpenGLObject3dProcessor* this);

void OpenGLObject3dProcessor_process3(OpenGLObject3dProcessor* this, GL10* gl, void* object3d);

void OpenGLObject3dProcessor_process4(OpenGLObject3dProcessor* this, GL10* gl, void* object3d, int32_t index);
#define OpenGLObject3dProcessor_process(...) JAVA_OVERLOADED(OpenGLObject3dProcessor_process, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLObject3dProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLObject3dProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_OPENGLOBJECT3DPROCESSOR_H
