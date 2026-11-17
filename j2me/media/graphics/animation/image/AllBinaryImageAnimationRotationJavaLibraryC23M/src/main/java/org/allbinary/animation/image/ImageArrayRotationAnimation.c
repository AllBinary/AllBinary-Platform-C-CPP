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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"

typedef struct ImageArrayRotationAnimation ImageArrayRotationAnimation;
struct ImageArrayRotationAnimation {
    ImageArrayBaseRotationAnimation base;
    int32_t expectedTotalFrames;
};


ImageArrayRotationAnimation* ImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);
ImageArrayRotationAnimation* ImageArrayRotationAnimation_createAnimation(Any* anyType, AnimationBehavior* animationBehavior);

void ImageArrayRotationAnimation_init(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);
static void ImageArrayRotationAnimation_initImageArray(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle);
void ImageArrayRotationAnimation_setImageArray(ImageArrayRotationAnimation* this, Image** imageArray);

static void ImageArrayRotationAnimation_initFields(ImageArrayRotationAnimation* this) {
    this->expectedTotalFrames = 0;
}


// throws Exception
ImageArrayRotationAnimation* ImageArrayRotationAnimation_createAnimation(Any* anyType, AnimationBehavior* animationBehavior) {
        ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = ((ImageArrayRotationAnimationInfo*) anyType);
        return ImageArrayRotationAnimation_new(ImageArrayRotationAnimationInfo_getImageArray(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getAngleInfoP(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getTotalAngle(imageRotationAnimationInfo), animationBehavior);
}


void ImageArrayRotationAnimation_init(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
        ImageArrayBaseRotationAnimation_init(&this->base, imageArray, angleInfo, animationBehavior);
        ImageArrayRotationAnimation_initFields(this);
        ImageArrayRotationAnimation_initImageArray(this, imageArray, angleInfo, totalAngle);
}

ImageArrayRotationAnimation* ImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimation* this = calloc(1, sizeof(ImageArrayRotationAnimation));
    ImageArrayRotationAnimation_init(this, imageArray, angleInfo, totalAngle, animationBehavior);
    return this;
}


// throws Exception
static void ImageArrayRotationAnimation_initImageArray(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle) {
        this->expectedTotalFrames = totalAngle / JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getAngleIncrement);
        AngleInfo_adjustAngle(this->angleInfo, 0);
        if (this->expectedTotalFrames != ImageArrayRotationAnimation_getSize(this)) {
            java_throw(java_exception_new("Exception", "Wrong Number of Frames"));
        }
}


void ImageArrayRotationAnimation_setImageArray(ImageArrayRotationAnimation* this, Image** imageArray) {
        ImageArrayBaseRotationAnimation_setImageArray((&this->base), imageArray);
        AngleInfo_adjustAngle(this->angleInfo, 0);
}

