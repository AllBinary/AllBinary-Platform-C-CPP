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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/math/AngleInfo.h"

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

static void ImageArrayRotationAnimationInfo_initFields(ImageArrayRotationAnimationInfo* this) {
    
    
    
    
    
}


void ImageArrayRotationAnimationInfo_init(ImageArrayRotationAnimationInfo* this, Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy) {
    ImageArrayRotationAnimationInfo_initFields(this);
        this->imageArray = imageArray;
        this->angleIncrement = angleIncrement;
        this->totalAngle = totalAngle;
        this->dx = dx;
        this->dy = dy;
}

ImageArrayRotationAnimationInfo* ImageArrayRotationAnimationInfo_new(Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy) {
    ImageArrayRotationAnimationInfo* this = calloc(1, sizeof(ImageArrayRotationAnimationInfo));
    ImageArrayRotationAnimationInfo_init(this, imageArray, angleIncrement, totalAngle, dx, dy);
    return this;
}


void ImageArrayRotationAnimationInfo_setImageArray(ImageArrayRotationAnimationInfo* this, Image** imageArray) {
        this->imageArray = imageArray;
}


Image** ImageArrayRotationAnimationInfo_getImageArray(ImageArrayRotationAnimationInfo* this) {
        return this->imageArray;
}


AngleInfo* ImageArrayRotationAnimationInfo_getAngleInfoP(ImageArrayRotationAnimationInfo* this) {
        return AngleInfo_getInstance(((int16_t) this->angleIncrement));
}


void ImageArrayRotationAnimationInfo_setTotalAngle(ImageArrayRotationAnimationInfo* this, int32_t totalAngle) {
        this->totalAngle = totalAngle;
}


int32_t ImageArrayRotationAnimationInfo_getTotalAngle(ImageArrayRotationAnimationInfo* this) {
        return this->totalAngle;
}


void ImageArrayRotationAnimationInfo_setDx(ImageArrayRotationAnimationInfo* this, int32_t dx) {
        this->dx = dx;
}


int32_t ImageArrayRotationAnimationInfo_getDx(ImageArrayRotationAnimationInfo* this) {
        return this->dx;
}


void ImageArrayRotationAnimationInfo_setDy(ImageArrayRotationAnimationInfo* this, int32_t dy) {
        this->dy = dy;
}


int32_t ImageArrayRotationAnimationInfo_getDy(ImageArrayRotationAnimationInfo* this) {
        return this->dy;
}

