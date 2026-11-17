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
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"

typedef struct AppRendererShaderUpdaterFactory AppRendererShaderUpdaterFactory;
struct AppRendererShaderUpdaterFactory {
    ShaderUpdater base;
    ShaderComposite** NULL_SHADER_COMPOSITE_ARRAY;
    ShaderComposite** shaderCompositeArray;
    ShaderOpenGLProcessor** shaderOpenGLProcessorArray;
};

static AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory_instanceC;

AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory_new(void);
AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory_getInstance(void);
ShaderOpenGLProcessor** AppRendererShaderUpdaterFactory_getTestShaders(AppRendererShaderUpdaterFactory* this);
void AppRendererShaderUpdaterFactory_setShaderComposite(AppRendererShaderUpdaterFactory* this, Any* object3d);

// Static fields with runtime initializers: call this once at startup
void AppRendererShaderUpdaterFactory_staticInit(void) {
    AppRendererShaderUpdaterFactory_instanceC = AppRendererShaderUpdaterFactory_new();
}

static void AppRendererShaderUpdaterFactory_initFields(AppRendererShaderUpdaterFactory* this) {
    this->NULL_SHADER_COMPOSITE_ARRAY = ((ShaderComposite**) java_array_new(sizeof(ShaderComposite*), 0));
    this->shaderCompositeArray = this->NULL_SHADER_COMPOSITE_ARRAY;
    this->shaderOpenGLProcessorArray = ((ShaderOpenGLProcessor**) java_array_new(sizeof(ShaderOpenGLProcessor*), 0));
}

void AppRendererShaderUpdaterFactory_init(AppRendererShaderUpdaterFactory* this) {
    ShaderUpdater_init(&this->base);
    AppRendererShaderUpdaterFactory_initFields(this);
}

AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory_new(void) {
    AppRendererShaderUpdaterFactory* this = calloc(1, sizeof(AppRendererShaderUpdaterFactory));
    AppRendererShaderUpdaterFactory_init(this);
    return this;
}


AppRendererShaderUpdaterFactory* AppRendererShaderUpdaterFactory_getInstance(void) {
        return AppRendererShaderUpdaterFactory_instanceC;
}


ShaderOpenGLProcessor** AppRendererShaderUpdaterFactory_getTestShaders(AppRendererShaderUpdaterFactory* this) {
        return this->shaderOpenGLProcessorArray;
}


void AppRendererShaderUpdaterFactory_setShaderComposite(AppRendererShaderUpdaterFactory* this, Any* object3d) {
}

