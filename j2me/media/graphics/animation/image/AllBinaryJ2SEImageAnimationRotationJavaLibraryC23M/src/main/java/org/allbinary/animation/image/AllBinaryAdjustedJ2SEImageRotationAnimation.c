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
#include "org/allbinary/animation/image/AllBinaryJ2SEImageRotationAnimation.h"

typedef struct AllBinaryAdjustedJ2SEImageRotationAnimation AllBinaryAdjustedJ2SEImageRotationAnimation;
struct AllBinaryAdjustedJ2SEImageRotationAnimation {
    AllBinaryJ2SEImageRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AllBinaryAdjustedJ2SEImageRotationAnimation* AllBinaryAdjustedJ2SEImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AllBinaryAdjustedJ2SEImageRotationAnimation_init(AllBinaryAdjustedJ2SEImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AllBinaryAdjustedJ2SEImageRotationAnimation_init(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dx, int32_t dy);
void AllBinaryAdjustedJ2SEImageRotationAnimation_setDx(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dx);
int32_t AllBinaryAdjustedJ2SEImageRotationAnimation_getDx(AllBinaryAdjustedJ2SEImageRotationAnimation* this);
void AllBinaryAdjustedJ2SEImageRotationAnimation_setDy(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dy);
int32_t AllBinaryAdjustedJ2SEImageRotationAnimation_getDy(AllBinaryAdjustedJ2SEImageRotationAnimation* this);
void AllBinaryAdjustedJ2SEImageRotationAnimation_paintXY(AllBinaryAdjustedJ2SEImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AllBinaryAdjustedJ2SEImageRotationAnimation_initFields(AllBinaryAdjustedJ2SEImageRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AllBinaryAdjustedJ2SEImageRotationAnimation_init(AllBinaryAdjustedJ2SEImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        AllBinaryJ2SEImageRotationAnimation_init(&this->base, originalImage, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryAdjustedJ2SEImageRotationAnimation_initFields(this);
        AllBinaryAdjustedJ2SEImageRotationAnimation_init(this, dx, dy);
}

AllBinaryAdjustedJ2SEImageRotationAnimation* AllBinaryAdjustedJ2SEImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedJ2SEImageRotationAnimation* this = calloc(1, sizeof(AllBinaryAdjustedJ2SEImageRotationAnimation));
    AllBinaryAdjustedJ2SEImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AllBinaryAdjustedJ2SEImageRotationAnimation_init(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AllBinaryAdjustedJ2SEImageRotationAnimation_setDx(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AllBinaryAdjustedJ2SEImageRotationAnimation_getDx(AllBinaryAdjustedJ2SEImageRotationAnimation* this) {
        return this->dx;
}


void AllBinaryAdjustedJ2SEImageRotationAnimation_setDy(AllBinaryAdjustedJ2SEImageRotationAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AllBinaryAdjustedJ2SEImageRotationAnimation_getDy(AllBinaryAdjustedJ2SEImageRotationAnimation* this) {
        return this->dy;
}


void AllBinaryAdjustedJ2SEImageRotationAnimation_paintXY(AllBinaryAdjustedJ2SEImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        AllBinaryJ2SEImageRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

