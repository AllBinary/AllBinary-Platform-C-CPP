#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H
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
typedef struct OpenGLProcessor OpenGLProcessor;
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"

typedef struct ShaderOpenGLProcessor ShaderOpenGLProcessor;
struct ShaderOpenGLProcessor {
    OpenGLProcessor base;
};


ShaderOpenGLProcessor* ShaderOpenGLProcessor_new(void);

void ShaderOpenGLProcessor_init(ShaderOpenGLProcessor* this);

void ShaderOpenGLProcessor_process0(ShaderOpenGLProcessor* this, GL10* gl);

void ShaderOpenGLProcessor_process1(ShaderOpenGLProcessor* this, GL10* gl);

void ShaderOpenGLProcessor_process(ShaderOpenGLProcessor* this, GL10* gl);

void ShaderOpenGLProcessor_process2(ShaderOpenGLProcessor* this, GL10* gl);

void ShaderOpenGLProcessor_process3(ShaderOpenGLProcessor* this, GL10* gl);
#define ShaderOpenGLProcessor_new0 ShaderOpenGLProcessor_new
#define ShaderOpenGLProcessor_init0 ShaderOpenGLProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderOpenGLProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderOpenGLProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADEROPENGLPROCESSOR_H
