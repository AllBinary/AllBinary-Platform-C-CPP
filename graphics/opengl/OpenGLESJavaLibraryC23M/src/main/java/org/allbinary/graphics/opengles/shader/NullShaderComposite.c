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
#include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"

typedef struct NullShaderComposite NullShaderComposite;
struct NullShaderComposite {
    ShaderComposite base;
};

static NullShaderComposite* NullShaderComposite_instance;

NullShaderComposite* NullShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);
ShaderComposite* NullShaderComposite_getInstance(void);

void NullShaderComposite_init(NullShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);

// Static fields with runtime initializers: call this once at startup
void NullShaderComposite_staticInit(void) {
    NullShaderComposite_instance = NullShaderComposite_new(OpenGLCapabilities_getInstance()->VERSION_2_0, ((Shader**) java_array_from(sizeof(Shader*), sizeof((Shader*[]){ Shader_new(), Shader_new() }) / sizeof(Shader*), (Shader*[]){ Shader_new(), Shader_new() })), CompositeShaderUpdater_getInstance(), ShaderInitializer_getInstance(), ModelViewProjection_getInstance(), NullOpenGLProcessorFactory_getInstance(), NullOpenGLProcessorFactory_getInstance(), NullOpenGLProcessorFactory_getInstance())
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void NullShaderComposite_init(NullShaderComposite* this, GL10* gl) {
    }
#endif
;
}


ShaderComposite* NullShaderComposite_getInstance(void) {
        return NullShaderComposite_instance;
}


void NullShaderComposite_init(NullShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
        ShaderComposite_init(&this->base, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, disableProgramShaderOpenGLProcessor);
        this->useProgramShaderOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
}

NullShaderComposite* NullShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
    NullShaderComposite* this = calloc(1, sizeof(NullShaderComposite));
    NullShaderComposite_init(this, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, disableProgramShaderOpenGLProcessor);
    return this;
}

