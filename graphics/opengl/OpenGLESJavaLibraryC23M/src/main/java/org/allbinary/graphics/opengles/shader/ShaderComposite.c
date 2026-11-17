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
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"

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
void ShaderComposite_init(ShaderComposite* this, GL10* gl);

static void ShaderComposite_initFields(ShaderComposite* this) {
    
    
    
    
    
    
    
    
    this->useProgramShaderOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->shaderMatrixOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->colorEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->normalEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->vertexEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->textureEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->colorDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->normalDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->vertexDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->textureDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->uniformLightPositionOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformLightColorOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformCameraPositionOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformTextureUnitOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->programHandle = 0;
}


void ShaderComposite_init(ShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
    ShaderComposite_initFields(this);
        this->requiresOpenGLVersion = requiresOpenGLVersion;
        this->shaderArray = shaderArray;
        this->shaderInitializer = shaderInitializer;
        this->compositeShaderUpdater = compositeShaderUpdater;
        this->modelViewProjection = modelViewProjection;
        this->colorOpenGLProcessor = colorOpenGLProcessor;
        this->vertexOpenGLProcessor = vertexOpenGLProcessor;
        this->disableProgramShaderOpenGLProcessor = disableProgramShaderOpenGLProcessor;
}

ShaderComposite* ShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
    ShaderComposite* this = calloc(1, sizeof(ShaderComposite));
    ShaderComposite_init(this, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, disableProgramShaderOpenGLProcessor);
    return this;
}


void ShaderComposite_init(ShaderComposite* this, GL10* gl) {
        this->programHandle = ShaderInitializer_init(this->shaderInitializer, gl, this->shaderArray, this->compositeShaderUpdater->attributeArray);
}

