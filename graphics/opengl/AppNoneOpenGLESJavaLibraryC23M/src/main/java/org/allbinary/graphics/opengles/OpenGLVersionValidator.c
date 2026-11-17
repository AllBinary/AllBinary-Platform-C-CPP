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
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"

typedef struct OpenGLVersionValidator OpenGLVersionValidator;
struct OpenGLVersionValidator {
    int32_t EGL_CONTEXT_CLIENT_VERSION_VALUE;
};

static OpenGLVersionValidator* OpenGLVersionValidator_instance;

OpenGLVersionValidator* OpenGLVersionValidator_new(void);
OpenGLVersionValidator* OpenGLVersionValidator_getInstance(void);
bool OpenGLVersionValidator_isGL31OrHigher(OpenGLVersionValidator* this);
bool OpenGLVersionValidator_isAvailable(OpenGLVersionValidator* this, const char* glVersionRequired);
void OpenGLVersionValidator_setShaderComposite(OpenGLVersionValidator* this, ShaderComposite* shaderComposite, Any* anyType);

// Static fields with runtime initializers: call this once at startup
void OpenGLVersionValidator_staticInit(void) {
    OpenGLVersionValidator_instance = OpenGLVersionValidator_new();
}

static void OpenGLVersionValidator_initFields(OpenGLVersionValidator* this) {
    this->EGL_CONTEXT_CLIENT_VERSION_VALUE = -1;
}

void OpenGLVersionValidator_init(OpenGLVersionValidator* this) {
    OpenGLVersionValidator_initFields(this);
}

OpenGLVersionValidator* OpenGLVersionValidator_new(void) {
    OpenGLVersionValidator* this = calloc(1, sizeof(OpenGLVersionValidator));
    OpenGLVersionValidator_init(this);
    return this;
}


OpenGLVersionValidator* OpenGLVersionValidator_getInstance(void) {
        return OpenGLVersionValidator_instance;
}


bool OpenGLVersionValidator_isGL31OrHigher(OpenGLVersionValidator* this) {
        return false;
}


bool OpenGLVersionValidator_isAvailable(OpenGLVersionValidator* this, const char* glVersionRequired) {
        return false;
}


void OpenGLVersionValidator_setShaderComposite(OpenGLVersionValidator* this, ShaderComposite* shaderComposite, Any* anyType) {
}

