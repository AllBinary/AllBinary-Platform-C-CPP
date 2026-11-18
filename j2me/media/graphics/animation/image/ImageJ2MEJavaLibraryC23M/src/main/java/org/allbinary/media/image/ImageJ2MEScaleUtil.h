#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
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
typedef struct Image Image;

typedef struct ImageJ2MEScaleUtil ImageJ2MEScaleUtil;
struct ImageJ2MEScaleUtil {
    char unused;
};


ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_new(void);

ImageJ2MEScaleUtil* ImageJ2MEScaleUtil_getInstance(void);

void ImageJ2MEScaleUtil_init(ImageJ2MEScaleUtil* this);

Image** ImageJ2MEScaleUtil_scaleArray(ImageJ2MEScaleUtil* this, Image** images, int32_t width, int32_t height);

Image* ImageJ2MEScaleUtil_scale(ImageJ2MEScaleUtil* this, Image* image, int32_t width, int32_t height);
#define ImageJ2MEScaleUtil_new0 ImageJ2MEScaleUtil_new
#define ImageJ2MEScaleUtil_init0 ImageJ2MEScaleUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageJ2MEScaleUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageJ2MEScaleUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
