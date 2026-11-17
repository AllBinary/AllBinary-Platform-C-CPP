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
#include "org/allbinary/animation/image/AllBinaryFlickerAndroidImageRotationAnimation.h"

typedef struct AllBinaryAdjustedAndroidImageRotationAnimation AllBinaryAdjustedAndroidImageRotationAnimation;
struct AllBinaryAdjustedAndroidImageRotationAnimation {
    AllBinaryFlickerAndroidImageRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AllBinaryAdjustedAndroidImageRotationAnimation* AllBinaryAdjustedAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AllBinaryAdjustedAndroidImageRotationAnimation_init(AllBinaryAdjustedAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AllBinaryAdjustedAndroidImageRotationAnimation_init(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dx, int32_t dy);
void AllBinaryAdjustedAndroidImageRotationAnimation_setDx(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dx);
int32_t AllBinaryAdjustedAndroidImageRotationAnimation_getDx(AllBinaryAdjustedAndroidImageRotationAnimation* this);
void AllBinaryAdjustedAndroidImageRotationAnimation_setDy(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dy);
int32_t AllBinaryAdjustedAndroidImageRotationAnimation_getDy(AllBinaryAdjustedAndroidImageRotationAnimation* this);
void AllBinaryAdjustedAndroidImageRotationAnimation_paintXY(AllBinaryAdjustedAndroidImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AllBinaryAdjustedAndroidImageRotationAnimation_initFields(AllBinaryAdjustedAndroidImageRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AllBinaryAdjustedAndroidImageRotationAnimation_init(AllBinaryAdjustedAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        AllBinaryFlickerAndroidImageRotationAnimation_init(&this->base, originalImage, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryAdjustedAndroidImageRotationAnimation_initFields(this);
        AllBinaryAdjustedAndroidImageRotationAnimation_init(this, dx, dy);
}

AllBinaryAdjustedAndroidImageRotationAnimation* AllBinaryAdjustedAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedAndroidImageRotationAnimation* this = calloc(1, sizeof(AllBinaryAdjustedAndroidImageRotationAnimation));
    AllBinaryAdjustedAndroidImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AllBinaryAdjustedAndroidImageRotationAnimation_init(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AllBinaryAdjustedAndroidImageRotationAnimation_setDx(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AllBinaryAdjustedAndroidImageRotationAnimation_getDx(AllBinaryAdjustedAndroidImageRotationAnimation* this) {
        return this->dx;
}


void AllBinaryAdjustedAndroidImageRotationAnimation_setDy(AllBinaryAdjustedAndroidImageRotationAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AllBinaryAdjustedAndroidImageRotationAnimation_getDy(AllBinaryAdjustedAndroidImageRotationAnimation* this) {
        return this->dy;
}


void AllBinaryAdjustedAndroidImageRotationAnimation_paintXY(AllBinaryAdjustedAndroidImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        AllBinaryFlickerAndroidImageRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

