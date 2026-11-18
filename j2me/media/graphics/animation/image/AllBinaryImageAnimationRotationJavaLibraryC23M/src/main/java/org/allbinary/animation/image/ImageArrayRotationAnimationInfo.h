#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H
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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
typedef struct AngleInfo AngleInfo;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

typedef struct ImageArrayRotationAnimationInfo ImageArrayRotationAnimationInfo;
struct ImageArrayRotationAnimationInfo {
    Image** imageArray;
    int32_t angleIncrement;
    int32_t totalAngle;
    int32_t dx;
    int32_t dy;
};


ImageArrayRotationAnimationInfo* ImageArrayRotationAnimationInfo_new(Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy);

void ImageArrayRotationAnimationInfo_init(ImageArrayRotationAnimationInfo* this, Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy);

void ImageArrayRotationAnimationInfo_setImageArray(ImageArrayRotationAnimationInfo* this, Image** imageArray);

Image** ImageArrayRotationAnimationInfo_getImageArray(ImageArrayRotationAnimationInfo* this);

AngleInfo* ImageArrayRotationAnimationInfo_getAngleInfoP(ImageArrayRotationAnimationInfo* this);

void ImageArrayRotationAnimationInfo_setTotalAngle(ImageArrayRotationAnimationInfo* this, int32_t totalAngle);

int32_t ImageArrayRotationAnimationInfo_getTotalAngle(ImageArrayRotationAnimationInfo* this);

void ImageArrayRotationAnimationInfo_setDx(ImageArrayRotationAnimationInfo* this, int32_t dx);

int32_t ImageArrayRotationAnimationInfo_getDx(ImageArrayRotationAnimationInfo* this);

void ImageArrayRotationAnimationInfo_setDy(ImageArrayRotationAnimationInfo* this, int32_t dy);

int32_t ImageArrayRotationAnimationInfo_getDy(ImageArrayRotationAnimationInfo* this);
#define ImageArrayRotationAnimationInfo_new5 ImageArrayRotationAnimationInfo_new
#define ImageArrayRotationAnimationInfo_init5 ImageArrayRotationAnimationInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageArrayRotationAnimationInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageArrayRotationAnimationInfo_register(void);

#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H
