#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
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
typedef struct Image Image;
typedef struct BasicColor BasicColor;

typedef struct ImageModifierUtil ImageModifierUtil;
struct ImageModifierUtil {
    char unused;
};


ImageModifierUtil* ImageModifierUtil_new(void);
void ImageModifierUtil_init(ImageModifierUtil* this);

ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void);

void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor);

void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt);

Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray);

void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image);

void ImageModifierUtil_reset(ImageModifierUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageModifierUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageModifierUtil_register(void);


#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGEMODIFIERUTIL_H
