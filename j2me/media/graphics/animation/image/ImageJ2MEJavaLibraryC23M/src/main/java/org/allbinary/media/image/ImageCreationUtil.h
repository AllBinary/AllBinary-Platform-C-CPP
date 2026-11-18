#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECREATIONUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECREATIONUTIL_H
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
typedef struct Image Image;
typedef struct GameFeatureImageCacheFactory GameFeatureImageCacheFactory;

typedef struct ImageCreationUtil ImageCreationUtil;
struct ImageCreationUtil {
    char unused;
};


ImageCreationUtil* ImageCreationUtil_new(void);

ImageCreationUtil* ImageCreationUtil_getInstance(void);

void ImageCreationUtil_init(ImageCreationUtil* this);

Image* ImageCreationUtil_createImageWH(ImageCreationUtil* this, int32_t width, int32_t height);

Image* ImageCreationUtil_createImage(ImageCreationUtil* this, int32_t width, int32_t height, float maxScaleX, float maxScaleY);
#define ImageCreationUtil_new0 ImageCreationUtil_new
#define ImageCreationUtil_init0 ImageCreationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCreationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCreationUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGECREATIONUTIL_H
