/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLBitmapConfig OpenGLBitmapConfig;
struct OpenGLBitmapConfig {
    Any* bitmapConfig;
};


OpenGLBitmapConfig* OpenGLBitmapConfig_new(Any* bitmapConfig);

void OpenGLBitmapConfig_init(OpenGLBitmapConfig* this, Any* bitmapConfig);

static void OpenGLBitmapConfig_initFields(OpenGLBitmapConfig* this) {
    
}


void OpenGLBitmapConfig_init(OpenGLBitmapConfig* this, Any* bitmapConfig) {
    OpenGLBitmapConfig_initFields(this);
        this->bitmapConfig = bitmapConfig;
}

OpenGLBitmapConfig* OpenGLBitmapConfig_new(Any* bitmapConfig) {
    OpenGLBitmapConfig* this = calloc(1, sizeof(OpenGLBitmapConfig));
    OpenGLBitmapConfig_init(this, bitmapConfig);
    return this;
}

