#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVUTILBASE_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVUTILBASE_H
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
typedef struct GL10 GL10;

typedef struct OpenGLVUtilBase OpenGLVUtilBase;
struct OpenGLVUtilBase {
    char unused;
};


OpenGLVUtilBase* OpenGLVUtilBase_new(void);
void OpenGLVUtilBase_init(OpenGLVUtilBase* this);

void OpenGLVUtilBase_glTexEnvix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param);

void OpenGLVUtilBase_glTexParameterix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param);

void OpenGLVUtilBase_glGenerateMipmap(OpenGLVUtilBase* this, GL10* gl, int32_t textureId, int32_t target, bool generateMipMap);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLVUtilBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLVUtilBase_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVUTILBASE_H
