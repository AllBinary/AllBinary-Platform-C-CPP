#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H
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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct OpenGLBitmap OpenGLBitmap;
typedef struct BasicColor BasicColor;
#include "java/io/IOException.h"
#include "java/io/InputStream.h"

typedef struct OpenGLImageUtilBase OpenGLImageUtilBase;
struct OpenGLImageUtilBase {
    char unused;
};


OpenGLImageUtilBase* OpenGLImageUtilBase_new(void);
void OpenGLImageUtilBase_init(OpenGLImageUtilBase* this);

OpenGLBitmap* OpenGLImageUtilBase_paint4(OpenGLImageUtilBase* this, OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index);

OpenGLBitmap* OpenGLImageUtilBase_paint5(OpenGLImageUtilBase* this, OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor);

OpenGLBitmap* OpenGLImageUtilBase_createImage(OpenGLImageUtilBase* this, const char* name);

OpenGLBitmap* OpenGLImageUtilBase_createImageFromInputStream(OpenGLImageUtilBase* this, InputStream* inputStream);
#define OpenGLImageUtilBase_paint(...) JAVA_OVERLOADED(OpenGLImageUtilBase_paint, __VA_ARGS__)
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLImageUtilBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLImageUtilBase_register(void);

#if __has_include("org/allbinary/graphics/OpenGLBitmap.h")
#include "org/allbinary/graphics/OpenGLBitmap.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLIMAGEUTILBASE_H
