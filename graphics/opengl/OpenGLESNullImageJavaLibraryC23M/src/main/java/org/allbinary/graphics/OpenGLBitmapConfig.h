#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPCONFIG_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPCONFIG_H
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
    void* bitmapConfig;
};


OpenGLBitmapConfig* OpenGLBitmapConfig_new(void* bitmapConfig);

void OpenGLBitmapConfig_init(OpenGLBitmapConfig* this, void* bitmapConfig);
#define OpenGLBitmapConfig_new1 OpenGLBitmapConfig_new
#define OpenGLBitmapConfig_init1 OpenGLBitmapConfig_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLBitmapConfig_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLBitmapConfig_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLBITMAPCONFIG_H
