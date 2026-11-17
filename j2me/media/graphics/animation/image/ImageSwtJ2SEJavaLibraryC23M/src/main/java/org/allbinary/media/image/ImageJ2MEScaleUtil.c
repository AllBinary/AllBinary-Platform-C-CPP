/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
        Image** scaledImages = ((Image**) java_array_new(sizeof(Image*), java_array_length(images)));
        for (int32_t index = java_array_length(images); --index >= 0; ) {
            scaledImages[index] = ImageJ2MEScaleUtil_scale(this, images[index], width, height);
        }
        return scaledImages;
}


// throws Exception
Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height) {
        Image* scaledImage = ImageCopyUtil_createImageWH(ImageCopyUtil_getInstance(), image, width, height, true);
        return scaledImage;
}

