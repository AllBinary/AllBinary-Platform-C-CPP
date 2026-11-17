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

typedef struct ImageToRotationImageArrayUtil ImageToRotationImageArrayUtil;
struct ImageToRotationImageArrayUtil {
    char unused;
};

static ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_instance;

ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_new(void);
ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_getInstance(void);

void ImageToRotationImageArrayUtil_init(ImageToRotationImageArrayUtil* this);
Image** ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil* this, Image* image, int32_t angleIncrement, int32_t totalAngle);

// Static fields with runtime initializers: call this once at startup
void ImageToRotationImageArrayUtil_staticInit(void) {
    ImageToRotationImageArrayUtil_instance = ImageToRotationImageArrayUtil_new();
}


ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_getInstance(void) {
        return ImageToRotationImageArrayUtil_instance;
}


void ImageToRotationImageArrayUtil_init(ImageToRotationImageArrayUtil* this) {
}

ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_new(void) {
    ImageToRotationImageArrayUtil* this = calloc(1, sizeof(ImageToRotationImageArrayUtil));
    ImageToRotationImageArrayUtil_init(this);
    return this;
}


// throws Exception
Image** ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil* this, Image* image, int32_t angleIncrement, int32_t totalAngle) {
        ImageRotationUtil* imageRotationUtil = ImageRotationUtil_getInstance();
        int32_t totalFrames = totalAngle / angleIncrement;
        Image** imageArray = ((Image**) java_array_new(sizeof(Image*), totalFrames));
        imageArray[0] = image;
        for (int32_t index = 1; index < totalFrames; index++) {
            imageArray[index] = ImageRotationUtil_createRotatedImage(imageRotationUtil, image, index * angleIncrement);
        }
        return imageArray;
}

