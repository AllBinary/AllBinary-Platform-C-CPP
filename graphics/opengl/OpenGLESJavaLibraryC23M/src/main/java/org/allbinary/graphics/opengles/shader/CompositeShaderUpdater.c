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
// #include "javax/microedition/khronos/egl/EGLConfig.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"

typedef struct CompositeShaderUpdater CompositeShaderUpdater;
struct CompositeShaderUpdater {
    ShaderUpdater base;
    CommonSeps* commonSeps;
    ShaderStrings* shaderStrings;
    int32_t* uniformBlockHandleArray;
    const char** uniformBlockArray;
    int32_t* uniformHandleArray;
    const char** uniformArray;
    int32_t* attributeHandleArray;
    const char** attributeArray;
};

static CompositeShaderUpdater* CompositeShaderUpdater_instanceC;

CompositeShaderUpdater* CompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);
CompositeShaderUpdater* CompositeShaderUpdater_getInstance(void);

void CompositeShaderUpdater_init(CompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);
void CompositeShaderUpdater_onSurfaceCreated(CompositeShaderUpdater* this, GL10* gl, EGLConfig* eglConfig, int32_t programHandle);
void CompositeShaderUpdater_onSurfaceDestroyed(CompositeShaderUpdater* this, GL10* gl);

// Static fields with runtime initializers: call this once at startup
void CompositeShaderUpdater_staticInit(void) {
    CompositeShaderUpdater_instanceC = CompositeShaderUpdater_new(StringUtil_getArrayInstance(StringUtil_getInstance()), StringUtil_getArrayInstance(StringUtil_getInstance()), StringUtil_getArrayInstance(StringUtil_getInstance()), NullUtil_getInstance()->NULL_INT_ARRAY);
}

static void CompositeShaderUpdater_initFields(CompositeShaderUpdater* this) {
    this->commonSeps = CommonSeps_getInstance();
    this->shaderStrings = ShaderStrings_getInstance();
    
    
    
    
    
    
}


CompositeShaderUpdater* CompositeShaderUpdater_getInstance(void) {
        return CompositeShaderUpdater_instanceC;
}


void CompositeShaderUpdater_init(CompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    ShaderUpdater_init(&this->base);
    CompositeShaderUpdater_initFields(this);
        this->uniformBlockArray = uniformBlockArray;
        this->uniformBlockHandleArray = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->uniformBlockArray)));
        this->uniformArray = uniformArray;
        this->uniformHandleArray = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->uniformArray)));
        this->attributeArray = attributeArray;
        this->attributeHandleArray = attributeHandleArray;
}

CompositeShaderUpdater* CompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    CompositeShaderUpdater* this = calloc(1, sizeof(CompositeShaderUpdater));
    CompositeShaderUpdater_init(this, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
    return this;
}


void CompositeShaderUpdater_onSurfaceCreated(CompositeShaderUpdater* this, GL10* gl, EGLConfig* eglConfig, int32_t programHandle) {
}


void CompositeShaderUpdater_onSurfaceDestroyed(CompositeShaderUpdater* this, GL10* gl) {
}

