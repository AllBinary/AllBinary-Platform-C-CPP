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
#include "org/allbinary/image/opengles/OpenGLImageFactory.h"

typedef struct OpenGLESGL10ImageFactory OpenGLESGL10ImageFactory;
struct OpenGLESGL10ImageFactory {
    OpenGLImageFactory base;
};


OpenGLESGL10ImageFactory* OpenGLESGL10ImageFactory_new(void);
Image* OpenGLESGL10ImageFactory_getInstance(OpenGLESGL10ImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESGL10ImageFactory_init(OpenGLESGL10ImageFactory* this) {
    OpenGLImageFactory_init(&this->base);
}

OpenGLESGL10ImageFactory* OpenGLESGL10ImageFactory_new(void) {
    OpenGLESGL10ImageFactory* this = calloc(1, sizeof(OpenGLESGL10ImageFactory));
    OpenGLESGL10ImageFactory_init(this);
    return this;
}


Image* OpenGLESGL10ImageFactory_getInstance(OpenGLESGL10ImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        return OpenGLESGL10Image_new(image, bitmapFactory, textureFactory);
}

