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
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"

//TWB - Adjustments should be done in the resource creation and not at the animation level
typedef struct AdjustedImageArrayRotationAnimation AdjustedImageArrayRotationAnimation;
struct AdjustedImageArrayRotationAnimation {
    ImageArrayRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAdjustedImageArrayRotationAnimationInfo(Any* anyType, AnimationBehavior* animationBehavior);
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAnimation(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);

void AdjustedImageArrayRotationAnimation_init(AdjustedImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedImageArrayRotationAnimation_init(AdjustedImageArrayRotationAnimation* this, int32_t dx, int32_t dy);
void AdjustedImageArrayRotationAnimation_paintXY(AdjustedImageArrayRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void AdjustedImageArrayRotationAnimation_setDx(AdjustedImageArrayRotationAnimation* this, int32_t dx);
int32_t AdjustedImageArrayRotationAnimation_getDx(AdjustedImageArrayRotationAnimation* this);
void AdjustedImageArrayRotationAnimation_setDy(AdjustedImageArrayRotationAnimation* this, int32_t dy);
int32_t AdjustedImageArrayRotationAnimation_getDy(AdjustedImageArrayRotationAnimation* this);

static void AdjustedImageArrayRotationAnimation_initFields(AdjustedImageArrayRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


// throws Exception
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAdjustedImageArrayRotationAnimationInfo(Any* anyType, AnimationBehavior* animationBehavior) {
        ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = ((ImageArrayRotationAnimationInfo*) anyType);
        return AdjustedImageArrayRotationAnimation_new(ImageArrayRotationAnimationInfo_getImageArray(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getAngleInfoP(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getTotalAngle(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getDx(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getDy(imageRotationAnimationInfo), animationBehavior);
}


// throws Exception
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAnimation(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
        return AdjustedImageArrayRotationAnimation_new(imageArray, angleInfo, totalAngle, -(JAVA_CALL(imageArray[0], getWidth) >> 2), -(JAVA_CALL(imageArray[0], getHeight) >> 2), animationBehavior);
}


void AdjustedImageArrayRotationAnimation_init(AdjustedImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        ImageArrayRotationAnimation_init(&this->base, imageArray, angleInfo, totalAngle, animationBehavior);
        AdjustedImageArrayRotationAnimation_initFields(this);
        AdjustedImageArrayRotationAnimation_init(this, dx, dy);
}

AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayRotationAnimation* this = calloc(1, sizeof(AdjustedImageArrayRotationAnimation));
    AdjustedImageArrayRotationAnimation_init(this, imageArray, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageArrayRotationAnimation_init(AdjustedImageArrayRotationAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageArrayRotationAnimation_setDx(this, dx);
        AdjustedImageArrayRotationAnimation_setDy(this, dy);
}


void AdjustedImageArrayRotationAnimation_paintXY(AdjustedImageArrayRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageArrayRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageArrayRotationAnimation_setDx(AdjustedImageArrayRotationAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageArrayRotationAnimation_getDx(AdjustedImageArrayRotationAnimation* this) {
        return this->dx;
}


void AdjustedImageArrayRotationAnimation_setDy(AdjustedImageArrayRotationAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageArrayRotationAnimation_getDy(AdjustedImageArrayRotationAnimation* this) {
        return this->dy;
}

