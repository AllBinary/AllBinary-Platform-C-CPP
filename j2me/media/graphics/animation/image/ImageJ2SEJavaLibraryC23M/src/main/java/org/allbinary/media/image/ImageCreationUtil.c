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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"

typedef struct ImageCreationUtil ImageCreationUtil;
struct ImageCreationUtil {
    char unused;
};

static ImageCreationUtil* ImageCreationUtil_instance;

ImageCreationUtil* ImageCreationUtil_new(void);
ImageCreationUtil* ImageCreationUtil_getInstance(void);

void ImageCreationUtil_init(ImageCreationUtil* this);
Image* ImageCreationUtil_createImageWH(ImageCreationUtil* this, int32_t width, int32_t height);
Image* ImageCreationUtil_createImage(ImageCreationUtil* this, int32_t width, int32_t height, float maxScaleX, float maxScaleY);

// Static fields with runtime initializers: call this once at startup
void ImageCreationUtil_staticInit(void) {
    ImageCreationUtil_instance = ImageCreationUtil_new();
}


ImageCreationUtil* ImageCreationUtil_getInstance(void) {
        return ImageCreationUtil_instance;
}


void ImageCreationUtil_init(ImageCreationUtil* this) {
}

ImageCreationUtil* ImageCreationUtil_new(void) {
    ImageCreationUtil* this = calloc(1, sizeof(ImageCreationUtil));
    ImageCreationUtil_init(this);
    return this;
}


// throws Exception
Image* ImageCreationUtil_createImageWH(ImageCreationUtil* this, int32_t width, int32_t height) {
        Image* image = GameFeatureImageCacheFactory_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(this), width, height);
        return image;
}


// throws Exception
Image* ImageCreationUtil_createImage(ImageCreationUtil* this, int32_t width, int32_t height, float maxScaleX, float maxScaleY) {
        Image* image = GameFeatureImageCacheFactory_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(this), ((int32_t) (((float) width) * maxScaleX)) + 1, ((int32_t) (((float) height) * maxScaleY)) + 1);
        return image;
}

