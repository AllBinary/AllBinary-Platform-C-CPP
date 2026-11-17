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

typedef struct OpenGLESGL11ExtImageFactory OpenGLESGL11ExtImageFactory;
struct OpenGLESGL11ExtImageFactory {
    OpenGLImageFactory base;
};


OpenGLESGL11ExtImageFactory* OpenGLESGL11ExtImageFactory_new(void);
Image* OpenGLESGL11ExtImageFactory_getInstance(OpenGLESGL11ExtImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory);

void OpenGLESGL11ExtImageFactory_init(OpenGLESGL11ExtImageFactory* this) {
    OpenGLImageFactory_init(&this->base);
}

OpenGLESGL11ExtImageFactory* OpenGLESGL11ExtImageFactory_new(void) {
    OpenGLESGL11ExtImageFactory* this = calloc(1, sizeof(OpenGLESGL11ExtImageFactory));
    OpenGLESGL11ExtImageFactory_init(this);
    return this;
}


Image* OpenGLESGL11ExtImageFactory_getInstance(OpenGLESGL11ExtImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        return OpenGLESGL11ExtImage_new(image, bitmapFactory, textureFactory);
}

