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
#include "org/allbinary/graphics/Anchor.h"

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    int32_t anchor;
};

static ImageRotationUtil* ImageRotationUtil_instance;

ImageRotationUtil* ImageRotationUtil_new(void);
ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);

// Static fields with runtime initializers: call this once at startup
void ImageRotationUtil_staticInit(void) {
    ImageRotationUtil_instance = ImageRotationUtil_new();
}

static void ImageRotationUtil_initFields(ImageRotationUtil* this) {
    this->anchor = Anchor_TOP_LEFT;
}


ImageRotationUtil* ImageRotationUtil_getInstance(void) {
        return ImageRotationUtil_instance;
}


void ImageRotationUtil_init(ImageRotationUtil* this) {
    ImageRotationUtil_initFields(this);
}

ImageRotationUtil* ImageRotationUtil_new(void) {
    ImageRotationUtil* this = calloc(1, sizeof(ImageRotationUtil));
    ImageRotationUtil_init(this);
    return this;
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        return originalImage;
}

