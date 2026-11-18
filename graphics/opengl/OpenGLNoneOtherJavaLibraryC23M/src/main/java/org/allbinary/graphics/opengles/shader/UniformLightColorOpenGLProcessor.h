#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTCOLOROPENGLPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTCOLOROPENGLPROCESSOR_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot 
 *   
 */
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
typedef struct OpenGLObject3dProcessor OpenGLObject3dProcessor;
typedef struct ShaderComposite ShaderComposite;
typedef struct GL10 GL10;
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"

typedef struct UniformLightColorOpenGLProcessor UniformLightColorOpenGLProcessor;
struct UniformLightColorOpenGLProcessor {
    OpenGLObject3dProcessor base;
};


UniformLightColorOpenGLProcessor* UniformLightColorOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformLightColorOpenGLProcessor_init(UniformLightColorOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformLightColorOpenGLProcessor_process(UniformLightColorOpenGLProcessor* this, GL10* gl, void* unused);
#define UniformLightColorOpenGLProcessor_new2 UniformLightColorOpenGLProcessor_new
#define UniformLightColorOpenGLProcessor_init2 UniformLightColorOpenGLProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UniformLightColorOpenGLProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UniformLightColorOpenGLProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMLIGHTCOLOROPENGLPROCESSOR_H
