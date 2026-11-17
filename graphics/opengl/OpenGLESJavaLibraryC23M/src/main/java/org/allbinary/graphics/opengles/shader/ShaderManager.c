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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct ShaderManager ShaderManager;
struct ShaderManager {
    CommonStrings* commonStrings;
    const char* LOAD_SHADER;
    const char* __VERSION__;
    int32_t GL_VERTEX_SHADER;
    int32_t GL_FRAGMENT_SHADER;
};

static ShaderManager* ShaderManager_instance;

ShaderManager* ShaderManager_new(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);
ShaderManager* ShaderManager_getInstance(void);

void ShaderManager_init(ShaderManager* this, int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);
int32_t ShaderManager_load(ShaderManager* this, GL10* gl, const char* resource, const char** shaderAsStringArray, int32_t shaderType);
int32_t ShaderManager_loadShader(ShaderManager* this, GL10* gl, const char* resource, BasicArrayList* stringList, int32_t shaderType);

// Static fields with runtime initializers: call this once at startup
void ShaderManager_staticInit(void) {
    ShaderManager_instance = ShaderManager_new(-1, -1);
}

static void ShaderManager_initFields(ShaderManager* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->LOAD_SHADER = "loadShader";
    this->__VERSION__ = "__VERSION__";
    
    
}


ShaderManager* ShaderManager_getInstance(void) {
        return ShaderManager_instance;
}


void ShaderManager_init(ShaderManager* this, int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER) {
    ShaderManager_initFields(this);
        this->GL_VERTEX_SHADER = GL_VERTEX_SHADER;
        this->GL_FRAGMENT_SHADER = GL_FRAGMENT_SHADER;
}

ShaderManager* ShaderManager_new(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER) {
    ShaderManager* this = calloc(1, sizeof(ShaderManager));
    ShaderManager_init(this, GL_VERTEX_SHADER, GL_FRAGMENT_SHADER);
    return this;
}


int32_t ShaderManager_load(ShaderManager* this, GL10* gl, const char* resource, const char** shaderAsStringArray, int32_t shaderType) {
        return -1;
}


int32_t ShaderManager_loadShader(ShaderManager* this, GL10* gl, const char* resource, BasicArrayList* stringList, int32_t shaderType) {
        return -1;
}

