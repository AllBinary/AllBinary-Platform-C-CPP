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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ImageCacheFactory ImageCacheFactory;
struct ImageCacheFactory {
    char unused;
};

static ImageCache* ImageCacheFactory_IMAGE_CACHE;

ImageCacheFactory* ImageCacheFactory_new(void);
ImageCache* ImageCacheFactory_getInstance(void);
void ImageCacheFactory_init(void);

// Static fields with runtime initializers: call this once at startup
void ImageCacheFactory_staticInit(void) {
    ImageCacheFactory_IMAGE_CACHE = ImageCache_new();
}

void ImageCacheFactory_init(ImageCacheFactory* this) {
}

ImageCacheFactory* ImageCacheFactory_new(void) {
    ImageCacheFactory* this = calloc(1, sizeof(ImageCacheFactory));
    ImageCacheFactory_init(this);
    return this;
}


ImageCache* ImageCacheFactory_getInstance(void) {
        return ImageCacheFactory_IMAGE_CACHE;
}


void ImageCacheFactory_init(void) {
}

