#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H
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
typedef struct GL10 GL10;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct ShaderInitializer ShaderInitializer;
struct ShaderInitializer {
    CommonStrings* commonStrings;
};


ShaderInitializer* ShaderInitializer_new(void);
void ShaderInitializer_init(ShaderInitializer* this);

ShaderInitializer* ShaderInitializer_getInstance(void);

int32_t ShaderInitializer_initMethod(ShaderInitializer* this, GL10* gl, Shader** shader, const char** attributeArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderInitializer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderInitializer_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_H
