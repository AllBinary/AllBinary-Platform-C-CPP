#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
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
typedef struct EGLConfig EGLConfig;
typedef struct GL10 GL10;
typedef struct RendererStrings RendererStrings;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/opengles/renderer/RendererStrings.h")
#include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct ShaderUpdater ShaderUpdater;
struct ShaderUpdater {
    CommonStrings* commonStrings;
    RendererStrings* rendererStrings;
};


ShaderUpdater* ShaderUpdater_new(void);
void ShaderUpdater_init(ShaderUpdater* this);

ShaderUpdater* ShaderUpdater_getInstance(void);

void ShaderUpdater_onSurfaceCreated(ShaderUpdater* this, GL10* gl, EGLConfig* eglConfig);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShaderUpdater_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShaderUpdater_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_H
