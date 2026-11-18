#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H
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

typedef struct UniformCameraPositionOpenGLProcessor UniformCameraPositionOpenGLProcessor;
struct UniformCameraPositionOpenGLProcessor {
    OpenGLObject3dProcessor base;
};


UniformCameraPositionOpenGLProcessor* UniformCameraPositionOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformCameraPositionOpenGLProcessor_init(UniformCameraPositionOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformCameraPositionOpenGLProcessor_process(UniformCameraPositionOpenGLProcessor* this, GL10* gl, void* anyType);
#define UniformCameraPositionOpenGLProcessor_new2 UniformCameraPositionOpenGLProcessor_new
#define UniformCameraPositionOpenGLProcessor_init2 UniformCameraPositionOpenGLProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UniformCameraPositionOpenGLProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UniformCameraPositionOpenGLProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_UNIFORMCAMERAPOSITIONOPENGLPROCESSOR_H
