#ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
#define ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
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
typedef struct ImageRotationUtil ImageRotationUtil;
typedef struct Image Image;

typedef struct ImageToRotationImageArrayUtil ImageToRotationImageArrayUtil;
struct ImageToRotationImageArrayUtil {
    char unused;
};


ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_new(void);

ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_getInstance(void);

void ImageToRotationImageArrayUtil_init(ImageToRotationImageArrayUtil* this);

Image** ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil* this, Image* image, int32_t angleIncrement, int32_t totalAngle);
#define ImageToRotationImageArrayUtil_new0 ImageToRotationImageArrayUtil_new
#define ImageToRotationImageArrayUtil_init0 ImageToRotationImageArrayUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageToRotationImageArrayUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageToRotationImageArrayUtil_register(void);


#endif // ORG_ALLBINARY_MEDIA_IMAGE_IMAGETOROTATIONIMAGEARRAYUTIL_H
