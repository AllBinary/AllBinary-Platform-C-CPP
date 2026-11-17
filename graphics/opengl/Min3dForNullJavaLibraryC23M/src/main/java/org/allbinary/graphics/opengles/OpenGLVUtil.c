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
#include "org/allbinary/graphics/opengles/OpenGLVUtilBase.h"

typedef struct OpenGLVUtil OpenGLVUtil;
struct OpenGLVUtil {
    OpenGLVUtilBase base;
};

static OpenGLVUtil* OpenGLVUtil_instance;

OpenGLVUtil* OpenGLVUtil_new(void);
OpenGLVUtil* OpenGLVUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLVUtil_staticInit(void) {
    OpenGLVUtil_instance = OpenGLVUtil_new();
}

void OpenGLVUtil_init(OpenGLVUtil* this) {
    OpenGLVUtilBase_init(&this->base);
}

OpenGLVUtil* OpenGLVUtil_new(void) {
    OpenGLVUtil* this = calloc(1, sizeof(OpenGLVUtil));
    OpenGLVUtil_init(this);
    return this;
}


OpenGLVUtil* OpenGLVUtil_getInstance(void) {
        return OpenGLVUtil_instance;
}

