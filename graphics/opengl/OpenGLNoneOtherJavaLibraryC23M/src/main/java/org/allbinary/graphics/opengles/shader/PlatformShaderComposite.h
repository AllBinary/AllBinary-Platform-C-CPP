#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H
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
typedef struct ShaderComposite ShaderComposite;
typedef struct Shader Shader;
typedef struct CompositeShaderUpdater CompositeShaderUpdater;
typedef struct ShaderInitializer ShaderInitializer;
typedef struct ModelViewProjection ModelViewProjection;
typedef struct NullOpenGLProcessorFactory NullOpenGLProcessorFactory;
typedef struct OpenGLProcessor OpenGLProcessor;
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"

typedef struct PlatformShaderComposite PlatformShaderComposite;
struct PlatformShaderComposite {
    ShaderComposite base;
};


PlatformShaderComposite* PlatformShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor);

void PlatformShaderComposite_init(PlatformShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor);
#define PlatformShaderComposite_new7 PlatformShaderComposite_new
#define PlatformShaderComposite_init7 PlatformShaderComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformShaderComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformShaderComposite_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H
