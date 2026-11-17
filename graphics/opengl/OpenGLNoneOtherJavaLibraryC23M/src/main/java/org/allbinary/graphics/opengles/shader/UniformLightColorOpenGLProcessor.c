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
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"

typedef struct UniformLightColorOpenGLProcessor UniformLightColorOpenGLProcessor;
struct UniformLightColorOpenGLProcessor {
    OpenGLObject3dProcessor base;
};


UniformLightColorOpenGLProcessor* UniformLightColorOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformLightColorOpenGLProcessor_init(UniformLightColorOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex);
void UniformLightColorOpenGLProcessor_process(UniformLightColorOpenGLProcessor* this, GL10* gl, Any* unused);


void UniformLightColorOpenGLProcessor_init(UniformLightColorOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    OpenGLObject3dProcessor_init(&this->base);
}

UniformLightColorOpenGLProcessor* UniformLightColorOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformLightColorOpenGLProcessor* this = calloc(1, sizeof(UniformLightColorOpenGLProcessor));
    UniformLightColorOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformLightColorOpenGLProcessor_process(UniformLightColorOpenGLProcessor* this, GL10* gl, Any* unused) {
}

