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
#include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ShaderUpdater ShaderUpdater;
struct ShaderUpdater {
    CommonStrings* commonStrings;
    RendererStrings* rendererStrings;
};

static ShaderUpdater* ShaderUpdater_instance;

ShaderUpdater* ShaderUpdater_new(void);
ShaderUpdater* ShaderUpdater_getInstance(void);
void ShaderUpdater_onSurfaceCreated(ShaderUpdater* this, GL10* gl, EGLConfig* eglConfig);

// Static fields with runtime initializers: call this once at startup
void ShaderUpdater_staticInit(void) {
    ShaderUpdater_instance = ShaderUpdater_new();
}

static void ShaderUpdater_initFields(ShaderUpdater* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->rendererStrings = RendererStrings_getInstance();
}

void ShaderUpdater_init(ShaderUpdater* this) {
    ShaderUpdater_initFields(this);
}

ShaderUpdater* ShaderUpdater_new(void) {
    ShaderUpdater* this = calloc(1, sizeof(ShaderUpdater));
    ShaderUpdater_init(this);
    return this;
}


ShaderUpdater* ShaderUpdater_getInstance(void) {
        return ShaderUpdater_instance;
}


void ShaderUpdater_onSurfaceCreated(ShaderUpdater* this, GL10* gl, EGLConfig* eglConfig) {
}

