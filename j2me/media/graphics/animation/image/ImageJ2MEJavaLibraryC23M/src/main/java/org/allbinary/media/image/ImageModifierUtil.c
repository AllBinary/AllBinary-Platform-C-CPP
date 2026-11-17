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
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    char unused;
};

static ImageModifierUtil* ImageModifierUtil_instance;

ImageModifierUtil* ImageModifierUtil_new(void);
ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);
void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt);
Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);
void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);
void ImageModifierUtil_reset(ImageModifierUtil* this);

// Static fields with runtime initializers: call this once at startup
void ImageModifierUtil_staticInit(void) {
    ImageModifierUtil_instance = ImageModifierUtil_new();
}

void ImageModifierUtil_init(ImageModifierUtil* this) {
}

ImageModifierUtil* ImageModifierUtil_new(void) {
    ImageModifierUtil* this = calloc(1, sizeof(ImageModifierUtil));
    ImageModifierUtil_init(this);
    return this;
}


ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void) {
        return ImageModifierUtil_instance;
}


void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt) {
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        return originalImageArray;
}


void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image) {
}


void ImageModifierUtil_reset(ImageModifierUtil* this) {
}

