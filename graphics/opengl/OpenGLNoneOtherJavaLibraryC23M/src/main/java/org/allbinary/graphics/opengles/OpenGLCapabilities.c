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
#include "org/allbinary/logic/string/StringUtil.h"

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

static OpenGLCapabilities* OpenGLCapabilities_instance;

OpenGLCapabilities* OpenGLCapabilities_new(void);
OpenGLCapabilities* OpenGLCapabilities_getInstance(void);

void OpenGLCapabilities_init(OpenGLCapabilities* this);
bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this);
void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, Any* gl);
bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this);
const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this);
bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this);
bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight);

// Static fields with runtime initializers: call this once at startup
void OpenGLCapabilities_staticInit(void) {
    OpenGLCapabilities_instance = OpenGLCapabilities_new();
}

static void OpenGLCapabilities_initFields(OpenGLCapabilities* this) {
    this->CUSTOM_GL_SURFACE_VIEW = true;
    this->VERSION_1_0 = "1.0";
    this->VERSION_1_1 = "1.1";
    this->VERSION_2_0 = "2.0";
    this->VERSION_3_0 = "3.0";
    this->VERSION_3_1 = "3.1";
    this->VERSION_3_2 = "3.2";
    this->VERSION_HIGHER_THAN_EXISTS = "999.999";
    this->glVersion = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderVersion = 0;
    this->glInstanceVersion = StringUtil_getInstance()->EMPTY_STRING;
    this->maxTextureSize = 64;
}


OpenGLCapabilities* OpenGLCapabilities_getInstance(void) {
        return OpenGLCapabilities_instance;
}


void OpenGLCapabilities_init(OpenGLCapabilities* this) {
    OpenGLCapabilities_initFields(this);
}

OpenGLCapabilities* OpenGLCapabilities_new(void) {
    OpenGLCapabilities* this = calloc(1, sizeof(OpenGLCapabilities));
    OpenGLCapabilities_init(this);
    return this;
}


bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this) {
        return true;
}


void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, Any* gl) {
}


bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this) {
        return false;
}


const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this) {
        return this->glVersion;
}


bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this) {
        return false;
}


bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight) {
        return true;
}

