/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2023 AllBinary
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

typedef struct ImageJ2MEScaleUtil ImageJ2MEScaleUtil;
struct ImageJ2MEScaleUtil {
    char unused;
};

static ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_instance;

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void);
ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void);

void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this);
Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height);
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height);

// Static fields with runtime initializers: call this once at startup
void ImageJ2MEScaleUtil_staticInit(void) {
    ImageJ2MEScaleUtil_instance = ImageJ2MEScaleUtil_new();
}


ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void) {
        return ImageJ2MEScaleUtil_instance;
}


void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this) {
}

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void) {
    ImageJ2MEScaleUtil* this = calloc(1, sizeof(ImageJ2MEScaleUtil));
    ImageJ2MEScaleUtil_init(this);
    return this;
}


// throws Exception
Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height) {
        for (int32_t index = 0; index < java_array_length(images); index++) {
            Image* image = images[index];
            images[index] = ImageScaleUtil_createImage2(ImageScaleUtil_getInstance(), GameFeatureImageCacheFactory_getInstance(), image, ((float) width) / 2.0f, ((float) Image_getWidth(image)), ((float) height), ((float) Image_getHeight(image)), false);
        }
        return images;
}


// throws Exception
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height) {
        return ImageScaleUtil_createImage2(ImageScaleUtil_getInstance(), GameFeatureImageCacheFactory_getInstance(), image, ((float) width), ((float) Image_getWidth(image)), ((float) height), ((float) Image_getHeight(image)), false);
}

