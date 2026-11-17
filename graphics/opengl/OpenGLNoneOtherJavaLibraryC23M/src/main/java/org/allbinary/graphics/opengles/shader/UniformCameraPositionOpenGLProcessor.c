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

typedef struct UniformCameraPositionOpenGLProcessor UniformCameraPositionOpenGLProcessor;
struct UniformCameraPositionOpenGLProcessor {
    OpenGLObject3dProcessor base;
};


UniformCameraPositionOpenGLProcessor* UniformCameraPositionOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex);

void UniformCameraPositionOpenGLProcessor_init(UniformCameraPositionOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex);
void UniformCameraPositionOpenGLProcessor_process(UniformCameraPositionOpenGLProcessor* this, GL10* gl, Any* anyType);


void UniformCameraPositionOpenGLProcessor_init(UniformCameraPositionOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    OpenGLObject3dProcessor_init(&this->base);
}

UniformCameraPositionOpenGLProcessor* UniformCameraPositionOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformCameraPositionOpenGLProcessor* this = calloc(1, sizeof(UniformCameraPositionOpenGLProcessor));
    UniformCameraPositionOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformCameraPositionOpenGLProcessor_process(UniformCameraPositionOpenGLProcessor* this, GL10* gl, Any* anyType) {
}

