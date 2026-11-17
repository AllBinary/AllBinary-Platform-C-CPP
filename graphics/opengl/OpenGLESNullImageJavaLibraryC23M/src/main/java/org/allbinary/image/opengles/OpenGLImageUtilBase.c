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
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/graphics/OpenGLBitmap.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct OpenGLImageUtilBase OpenGLImageUtilBase;
struct OpenGLImageUtilBase {
    char unused;
};


OpenGLImageUtilBase* OpenGLImageUtilBase_new(void);
OpenGLBitmap* OpenGLImageUtilBase_paint(OpenGLImageUtilBase* this, OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index);
OpenGLBitmap* OpenGLImageUtilBase_paint(OpenGLImageUtilBase* this, OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor);
OpenGLBitmap* OpenGLImageUtilBase_createImage(OpenGLImageUtilBase* this, const char* name);
OpenGLBitmap* OpenGLImageUtilBase_createImageFromInputStream(OpenGLImageUtilBase* this, InputStream* inputStream);

void OpenGLImageUtilBase_init(OpenGLImageUtilBase* this) {
}

OpenGLImageUtilBase* OpenGLImageUtilBase_new(void) {
    OpenGLImageUtilBase* this = calloc(1, sizeof(OpenGLImageUtilBase));
    OpenGLImageUtilBase_init(this);
    return this;
}


OpenGLBitmap* OpenGLImageUtilBase_paint(OpenGLImageUtilBase* this, OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// Java overloaded method: C needs a different name
OpenGLBitmap* OpenGLImageUtilBase_paint(OpenGLImageUtilBase* this, OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws IOException
OpenGLBitmap* OpenGLImageUtilBase_createImage(OpenGLImageUtilBase* this, const char* name) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws IOException
OpenGLBitmap* OpenGLImageUtilBase_createImageFromInputStream(OpenGLImageUtilBase* this, InputStream* inputStream) {
        java_throw(java_exception_new("RuntimeException", ""));
}

