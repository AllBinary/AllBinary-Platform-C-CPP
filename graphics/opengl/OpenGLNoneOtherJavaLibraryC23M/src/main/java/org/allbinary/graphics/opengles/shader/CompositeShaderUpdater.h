#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
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
typedef struct ShaderUpdater ShaderUpdater;
typedef struct EGLConfig EGLConfig;
typedef struct GL10 GL10;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"

typedef struct CompositeShaderUpdater CompositeShaderUpdater;
struct CompositeShaderUpdater {
    ShaderUpdater base;
    CommonSeps* commonSeps;
};


CompositeShaderUpdater* CompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);

CompositeShaderUpdater* CompositeShaderUpdater_getInstance(void);

void CompositeShaderUpdater_init(CompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray);

void CompositeShaderUpdater_onSurfaceCreated(CompositeShaderUpdater* this, GL10* gl, EGLConfig* eglConfig, int32_t programHandle);

void CompositeShaderUpdater_onSurfaceDestroyed(CompositeShaderUpdater* this, GL10* gl);
#define CompositeShaderUpdater_new4 CompositeShaderUpdater_new
#define CompositeShaderUpdater_init4 CompositeShaderUpdater_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompositeShaderUpdater_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompositeShaderUpdater_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_H
