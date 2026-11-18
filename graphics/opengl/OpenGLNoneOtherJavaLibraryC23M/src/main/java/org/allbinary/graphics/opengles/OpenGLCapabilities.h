#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;

typedef struct OpenGLCapabilities OpenGLCapabilities;
struct OpenGLCapabilities {
    bool CUSTOM_GL_SURFACE_VIEW;
    const char* VERSION_1_0;
    const char* VERSION_1_1;
    const char* VERSION_2_0;
    const char* VERSION_3_0;
    const char* VERSION_3_1;
    const char* VERSION_3_2;
    const char* VERSION_HIGHER_THAN_EXISTS;
    const char* glVersion;
    int32_t shaderVersion;
    const char* glInstanceVersion;
    int32_t maxTextureSize;
};


OpenGLCapabilities* OpenGLCapabilities_new(void);

OpenGLCapabilities* OpenGLCapabilities_getInstance(void);

void OpenGLCapabilities_init(OpenGLCapabilities* this);

bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this);

void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, void* gl);

bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this);

const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this);

bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this);

bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight);
#define OpenGLCapabilities_new0 OpenGLCapabilities_new
#define OpenGLCapabilities_init0 OpenGLCapabilities_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLCapabilities_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLCapabilities_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_H
