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
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"

typedef struct OpenGLImageFactory OpenGLImageFactory;
struct OpenGLImageFactory {
    char unused;
};

OpenGLImageFactory* OpenGLImageFactory_NULL_OPENGL_IMAGE_FACTORY;

OpenGLImageFactory* OpenGLImageFactory_new(void);
Image* OpenGLImageFactory_getInstance(OpenGLImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

// Static fields with runtime initializers: call this once at startup
void OpenGLImageFactory_staticInit(void) {
    OpenGLImageFactory_NULL_OPENGL_IMAGE_FACTORY = OpenGLImageFactory_new();
}

void OpenGLImageFactory_init(OpenGLImageFactory* this) {
}

OpenGLImageFactory* OpenGLImageFactory_new(void) {
    OpenGLImageFactory* this = calloc(1, sizeof(OpenGLImageFactory));
    OpenGLImageFactory_init(this);
    return this;
}


Image* OpenGLImageFactory_getInstance(OpenGLImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        java_throw(java_exception_new("RuntimeException", ""));
}

