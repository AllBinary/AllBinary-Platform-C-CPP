#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H
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
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct Shader Shader;
struct Shader {
    const char* shaderName;
    BasicArrayList* shaderStringList;
    const char* shaderAsString;
    int32_t shaderHandle;
};


Shader* Shader_new(void);
void Shader_init(Shader* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Shader_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Shader_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADER_H
