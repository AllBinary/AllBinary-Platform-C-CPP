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
#include "android/graphics/Paint.h"
#include "android/graphics/PorterDuff.h"
#include "android/graphics/PorterDuffColorFilter.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    Paint* paint;
};


ImageModifierUtil* ImageModifierUtil_new(void);
ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);
void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);
void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt);
Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);
void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);
void ImageModifierUtil_reset(ImageModifierUtil* this);

static void ImageModifierUtil_initFields(ImageModifierUtil* this) {
    this->paint = Paint_new(Paint_ANTI_ALIAS_FLAG);
}

void ImageModifierUtil_init(ImageModifierUtil* this) {
    ImageModifierUtil_initFields(this);
}

ImageModifierUtil* ImageModifierUtil_new(void) {
    ImageModifierUtil* this = calloc(1, sizeof(ImageModifierUtil));
    ImageModifierUtil_init(this);
    return this;
}


ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void) {
        return ImageModifierUtil_new();
}


void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
        Paint_setColorFilter(this->paint, PorterDuffColorFilter_new(BasicColor_intValue(basicColor), PorterDuff_Mode->SRC_IN));
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
        Paint_setColorFilter(this->paint, PorterDuffColorFilter_new(BasicColor_intValue(basicColor), PorterDuff_Mode->SRC_IN));
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt) {
        if (alphaInt != Paint_getAlpha(this->paint)) {
            Paint_setAlpha(this->paint, alphaInt);
        }
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        return originalImageArray;
}


void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image) {
}


void ImageModifierUtil_reset(ImageModifierUtil* this) {
}

