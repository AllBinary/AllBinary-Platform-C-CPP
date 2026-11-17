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
#include "org/allbinary/animation/image/AllBinaryHTMLImageRotationAnimation.h"

typedef struct AllBinaryAdjustedHTMLImageRotationAnimation AllBinaryAdjustedHTMLImageRotationAnimation;
struct AllBinaryAdjustedHTMLImageRotationAnimation {
    AllBinaryHTMLImageRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AllBinaryAdjustedHTMLImageRotationAnimation* AllBinaryAdjustedHTMLImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AllBinaryAdjustedHTMLImageRotationAnimation_init(AllBinaryAdjustedHTMLImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AllBinaryAdjustedHTMLImageRotationAnimation_init(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dx, int32_t dy);
void AllBinaryAdjustedHTMLImageRotationAnimation_setDx(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dx);
int32_t AllBinaryAdjustedHTMLImageRotationAnimation_getDx(AllBinaryAdjustedHTMLImageRotationAnimation* this);
void AllBinaryAdjustedHTMLImageRotationAnimation_setDy(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dy);
int32_t AllBinaryAdjustedHTMLImageRotationAnimation_getDy(AllBinaryAdjustedHTMLImageRotationAnimation* this);
void AllBinaryAdjustedHTMLImageRotationAnimation_paintXY(AllBinaryAdjustedHTMLImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AllBinaryAdjustedHTMLImageRotationAnimation_initFields(AllBinaryAdjustedHTMLImageRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AllBinaryAdjustedHTMLImageRotationAnimation_init(AllBinaryAdjustedHTMLImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        AllBinaryHTMLImageRotationAnimation_init(&this->base, originalImage, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryAdjustedHTMLImageRotationAnimation_initFields(this);
        AllBinaryAdjustedHTMLImageRotationAnimation_init(this, dx, dy);
}

AllBinaryAdjustedHTMLImageRotationAnimation* AllBinaryAdjustedHTMLImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedHTMLImageRotationAnimation* this = calloc(1, sizeof(AllBinaryAdjustedHTMLImageRotationAnimation));
    AllBinaryAdjustedHTMLImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AllBinaryAdjustedHTMLImageRotationAnimation_init(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AllBinaryAdjustedHTMLImageRotationAnimation_setDx(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AllBinaryAdjustedHTMLImageRotationAnimation_getDx(AllBinaryAdjustedHTMLImageRotationAnimation* this) {
        return this->dx;
}


void AllBinaryAdjustedHTMLImageRotationAnimation_setDy(AllBinaryAdjustedHTMLImageRotationAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AllBinaryAdjustedHTMLImageRotationAnimation_getDy(AllBinaryAdjustedHTMLImageRotationAnimation* this) {
        return this->dy;
}


void AllBinaryAdjustedHTMLImageRotationAnimation_paintXY(AllBinaryAdjustedHTMLImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        AllBinaryHTMLImageRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

