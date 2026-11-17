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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

typedef struct RectangleFilledAdjustedAnimation RectangleFilledAdjustedAnimation;
struct RectangleFilledAdjustedAnimation {
    RectangleFilledAnimation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t offsetX;
    int32_t offsetY;
};


RectangleFilledAdjustedAnimation* RectangleFilledAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleFilledAdjustedAnimation_init(RectangleFilledAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);
void RectangleFilledAdjustedAnimation_nextFrame(RectangleFilledAdjustedAnimation* this);
void RectangleFilledAdjustedAnimation_paintXY(RectangleFilledAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void RectangleFilledAdjustedAnimation_setOffsetX(RectangleFilledAdjustedAnimation* this, int32_t offsetX);
void RectangleFilledAdjustedAnimation_setOffsetY(RectangleFilledAdjustedAnimation* this, int32_t offsetY);
BasicColor* RectangleFilledAdjustedAnimation_getBasicColorP(RectangleFilledAdjustedAnimation* this);
void RectangleFilledAdjustedAnimation_setBasicColorP(RectangleFilledAdjustedAnimation* this, BasicColor* basicColor);

static void RectangleFilledAdjustedAnimation_initFields(RectangleFilledAdjustedAnimation* this) {
    
    
}


void RectangleFilledAdjustedAnimation_init(RectangleFilledAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
        RectangleFilledAnimation_init(&this->base, width, height, basicColor);
        RectangleFilledAdjustedAnimation_initFields(this);
        this->offsetX = offsetX;
        this->offsetY = offsetY;
        RectangleFilledAdjustedAnimation_setBasicColorP(this, basicColor);
}

RectangleFilledAdjustedAnimation* RectangleFilledAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleFilledAdjustedAnimation* this = calloc(1, sizeof(RectangleFilledAdjustedAnimation));
    RectangleFilledAdjustedAnimation_init(this, width, height, offsetX, offsetY, basicColor);
    return this;
}


void RectangleFilledAdjustedAnimation_nextFrame(RectangleFilledAdjustedAnimation* this) {
}


void RectangleFilledAdjustedAnimation_paintXY(RectangleFilledAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, RectangleFilledAdjustedAnimation_getBasicColorP(this), RectangleFilledAdjustedAnimation_getColor(this));
        RectangleFilledAnimation_paintXY((&this->base), graphics, x + this->offsetX, y + this->offsetY);
}


void RectangleFilledAdjustedAnimation_setOffsetX(RectangleFilledAdjustedAnimation* this, int32_t offsetX) {
        this->offsetX = offsetX;
}


void RectangleFilledAdjustedAnimation_setOffsetY(RectangleFilledAdjustedAnimation* this, int32_t offsetY) {
        this->offsetY = offsetY;
}


BasicColor* RectangleFilledAdjustedAnimation_getBasicColorP(RectangleFilledAdjustedAnimation* this) {
        return RectangleFilledAnimation_getBasicColorP((&this->base));
}


void RectangleFilledAdjustedAnimation_setBasicColorP(RectangleFilledAdjustedAnimation* this, BasicColor* basicColor) {
        RectangleFilledAnimation_setBasicColorP((&this->base), basicColor);
}

