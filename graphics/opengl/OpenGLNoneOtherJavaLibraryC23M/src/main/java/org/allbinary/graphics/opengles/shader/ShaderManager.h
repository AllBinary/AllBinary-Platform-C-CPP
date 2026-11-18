#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H
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
typedef struct GL10 GL10;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct ShaderManager ShaderManager;
struct ShaderManager {
    const char* LOAD_SHADER;
    CommonStrings* commonStrings;
    int32_t GL_VERTEX_SHADER;
    int32_t GL_FRAGMENT_SHADER;
};


ShaderManager* ShaderManager_new(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);

ShaderManager* ShaderManager_getInstance(void);

void ShaderManager_init(ShaderManager* this, int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER);

int32_t ShaderManager_load(ShaderManager* this, GL10* gl, const char* resource, const char** shaderAsStringArray, int32_t shaderType);

int32_t ShaderManager_loadShader(ShaderManager* this, GL10* gl, const char* resource, BasicArrayList* stringList, int32_t shaderType);
#define ShaderManager_new2 ShaderManager_new
#define ShaderManager_init2 ShaderManager_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderManager_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_H
