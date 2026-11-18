#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
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
typedef struct Anchor Anchor;

typedef struct ImageRotationUtil ImageRotationUtil;
struct ImageRotationUtil {
    int32_t anchor;
};


ImageRotationUtil* ImageRotationUtil_new(void);

ImageRotationUtil* ImageRotationUtil_getInstance(void);

void ImageRotationUtil_init(ImageRotationUtil* this);

Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees);
#define ImageRotationUtil_new0 ImageRotationUtil_new
#define ImageRotationUtil_init0 ImageRotationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageRotationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageRotationUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
