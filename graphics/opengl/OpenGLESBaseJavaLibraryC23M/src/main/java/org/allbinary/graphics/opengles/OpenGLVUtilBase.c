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
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct OpenGLVUtilBase OpenGLVUtilBase;
struct OpenGLVUtilBase {
    char unused;
};


OpenGLVUtilBase* OpenGLVUtilBase_new(void);
void OpenGLVUtilBase_glTexEnvix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param);
void OpenGLVUtilBase_glTexParameterix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param);
void OpenGLVUtilBase_glGenerateMipmap(OpenGLVUtilBase* this, GL10* gl, int32_t textureId, int32_t target, bool generateMipMap);

void OpenGLVUtilBase_init(OpenGLVUtilBase* this) {
}

OpenGLVUtilBase* OpenGLVUtilBase_new(void) {
    OpenGLVUtilBase* this = calloc(1, sizeof(OpenGLVUtilBase));
    OpenGLVUtilBase_init(this);
    return this;
}


void OpenGLVUtilBase_glTexEnvix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param) {
}


void OpenGLVUtilBase_glTexParameterix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param) {
}


void OpenGLVUtilBase_glGenerateMipmap(OpenGLVUtilBase* this, GL10* gl, int32_t textureId, int32_t target, bool generateMipMap) {
}

