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
#include "org/allbinary/image/ImageCache.h"

//OpenGLESNullImageJavaLibrary
typedef struct OpenGLImageCacheFactory OpenGLImageCacheFactory;
struct OpenGLImageCacheFactory {
    char unused;
};

static ImageCache* OpenGLImageCacheFactory_IMAGE_CACHE;

OpenGLImageCacheFactory* OpenGLImageCacheFactory_new(void);
ImageCache* OpenGLImageCacheFactory_getInstance(void);
void OpenGLImageCacheFactory_init(void);

// Static fields with runtime initializers: call this once at startup
void OpenGLImageCacheFactory_staticInit(void) {
    OpenGLImageCacheFactory_IMAGE_CACHE = ImageCache_NULL_IMAGE_CACHE;
}

void OpenGLImageCacheFactory_init(OpenGLImageCacheFactory* this) {
}

OpenGLImageCacheFactory* OpenGLImageCacheFactory_new(void) {
    OpenGLImageCacheFactory* this = calloc(1, sizeof(OpenGLImageCacheFactory));
    OpenGLImageCacheFactory_init(this);
    return this;
}


ImageCache* OpenGLImageCacheFactory_getInstance(void) {
        return OpenGLImageCacheFactory_IMAGE_CACHE;
}


void OpenGLImageCacheFactory_init(void) {
        if (OpenGLImageCacheFactory_IMAGE_CACHE == nullptr) {
        }
}

