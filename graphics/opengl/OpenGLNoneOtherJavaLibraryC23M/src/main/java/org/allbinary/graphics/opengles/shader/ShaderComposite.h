#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H
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
typedef struct Shader Shader;
typedef struct ShaderInitializer ShaderInitializer;
typedef struct CompositeShaderUpdater CompositeShaderUpdater;
typedef struct ModelViewProjection ModelViewProjection;
typedef struct NullOpenGLTextureProcessor NullOpenGLTextureProcessor;
typedef struct OpenGLObject3dProcessor OpenGLObject3dProcessor;
typedef struct GL10 GL10;
typedef struct NullOpenGLProcessorFactory NullOpenGLProcessorFactory;
typedef struct OpenGLProcessor OpenGLProcessor;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/graphics/opengles/OpenGLProcessor.h")
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/Shader.h")
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderInitializer.h")
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h")
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ModelViewProjection.h")
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h")
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#endif

typedef struct ShaderComposite ShaderComposite;
struct ShaderComposite {
    OpenGLProcessor* disableProgramShaderOpenGLProcessor;
    const char* requiresOpenGLVersion;
    Shader** shaderArray;
    ShaderInitializer* shaderInitializer;
    CompositeShaderUpdater* compositeShaderUpdater;
    ModelViewProjection* modelViewProjection;
    OpenGLProcessor* colorOpenGLProcessor;
    OpenGLProcessor* vertexOpenGLProcessor;
    OpenGLProcessor* useProgramShaderOpenGLProcessor;
    OpenGLProcessor* shaderMatrixOpenGLProcessor;
    OpenGLProcessor* colorEnableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* normalEnableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* vertexEnableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* textureEnableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* colorDisableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* normalDisableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* vertexDisableVertexAttribArrayOpenGLProcessor;
    OpenGLProcessor* textureDisableVertexAttribArrayOpenGLProcessor;
    OpenGLObject3dProcessor* uniformLightPositionOpenGLProcessor;
    OpenGLObject3dProcessor* uniformLightColorOpenGLProcessor;
    OpenGLObject3dProcessor* uniformCameraPositionOpenGLProcessor;
    OpenGLObject3dProcessor* uniformTextureUnitOpenGLProcessor;
    int32_t programHandle;
};


ShaderComposite* ShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);

void ShaderComposite_init(ShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);

void ShaderComposite_initMethod(ShaderComposite* this, GL10* gl);
#define ShaderComposite_new8 ShaderComposite_new
#define ShaderComposite_init8 ShaderComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderComposite_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H
