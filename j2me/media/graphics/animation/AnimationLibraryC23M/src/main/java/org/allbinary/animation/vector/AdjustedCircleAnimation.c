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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/vector/CircleAnimation.h"

typedef struct AdjustedCircleAnimation AdjustedCircleAnimation;
struct AdjustedCircleAnimation {
    CircleAnimation base;
    int32_t xAdjustment;
    int32_t yAdjustment;
};


AdjustedCircleAnimation* AdjustedCircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);
AdjustedCircleAnimation* AdjustedCircleAnimation_createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor);
AdjustedCircleAnimation* AdjustedCircleAnimation_createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor);

void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);
static void AdjustedCircleAnimation_initXY(AdjustedCircleAnimation* this, int32_t xAdjustment, int32_t yAdjustment);
static void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t innerWidth);
void AdjustedCircleAnimation_paintXY(AdjustedCircleAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustedCircleAnimation_initFields(AdjustedCircleAnimation* this) {
    this->xAdjustment = 0;
    this->yAdjustment = 0;
}


AdjustedCircleAnimation* AdjustedCircleAnimation_createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor) {
        AdjustedCircleAnimation* adjustedCircleAnimation = AdjustedCircleAnimation_new(width, height, basicColor);
        AdjustedCircleAnimation_initXY(adjustedCircleAnimation, xAdjustment, yAdjustment);
        return adjustedCircleAnimation;
}


AdjustedCircleAnimation* AdjustedCircleAnimation_createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor) {
        AdjustedCircleAnimation* adjustedCircleAnimation = AdjustedCircleAnimation_new(width, height, basicColor);
        AdjustedCircleAnimation_init(adjustedCircleAnimation, innerWidth);
        return adjustedCircleAnimation;
}


void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
        CircleAnimation_init(&this->base, width, height, basicColor);
        AdjustedCircleAnimation_initFields(this);
}

AdjustedCircleAnimation* AdjustedCircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    AdjustedCircleAnimation* this = calloc(1, sizeof(AdjustedCircleAnimation));
    AdjustedCircleAnimation_init(this, width, height, basicColor);
    return this;
}


static void AdjustedCircleAnimation_initXY(AdjustedCircleAnimation* this, int32_t xAdjustment, int32_t yAdjustment) {
        this->xAdjustment = xAdjustment;
        this->yAdjustment = yAdjustment;
}


static void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t innerWidth) {
        if (AndroidUtil_isAndroid()) {
            int32_t widthPortion = (((innerWidth / 3) * 10) / 7);
            this->xAdjustment = -((this->width >> 1) - widthPortion);
            this->yAdjustment = this->xAdjustment;
        } else {
            this->xAdjustment = -((this->width >> 1) - innerWidth);
            this->yAdjustment = this->xAdjustment;
        }
}


void AdjustedCircleAnimation_paintXY(AdjustedCircleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, AdjustedCircleAnimation_getBasicColorP(this), AdjustedCircleAnimation_getColor(this));
        Graphics_drawArc(graphics, x + this->xAdjustment, y + this->yAdjustment, this->width, this->height, 0, this->TOTAL_ANGLE);
}

