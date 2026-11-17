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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"

typedef struct RectangleAdjustedAnimation RectangleAdjustedAnimation;
struct RectangleAdjustedAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
    int32_t offsetX;
    int32_t offsetY;
};


RectangleAdjustedAnimation* RectangleAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);

void RectangleAdjustedAnimation_init(RectangleAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor);
void RectangleAdjustedAnimation_nextFrame(RectangleAdjustedAnimation* this);
void RectangleAdjustedAnimation_paintXY(RectangleAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void RectangleAdjustedAnimation_setWidth(RectangleAdjustedAnimation* this, int32_t width);
void RectangleAdjustedAnimation_setHeight(RectangleAdjustedAnimation* this, int32_t height);
void RectangleAdjustedAnimation_setOffsetX(RectangleAdjustedAnimation* this, int32_t offsetX);
void RectangleAdjustedAnimation_setOffsetY(RectangleAdjustedAnimation* this, int32_t offsetY);
BasicColor* RectangleAdjustedAnimation_getBasicColorP(RectangleAdjustedAnimation* this);
void RectangleAdjustedAnimation_setBasicColorP(RectangleAdjustedAnimation* this, BasicColor* basicColor);

static void RectangleAdjustedAnimation_initFields(RectangleAdjustedAnimation* this) {
    
    
    
    
}


void RectangleAdjustedAnimation_init(RectangleAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    Animation_init(&this->base);
    RectangleAdjustedAnimation_initFields(this);
        this->width = width;
        this->height = height;
        this->offsetX = offsetX;
        this->offsetY = offsetY;
        RectangleAdjustedAnimation_setBasicColorP(this, basicColor);
}

RectangleAdjustedAnimation* RectangleAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleAdjustedAnimation* this = calloc(1, sizeof(RectangleAdjustedAnimation));
    RectangleAdjustedAnimation_init(this, width, height, offsetX, offsetY, basicColor);
    return this;
}


void RectangleAdjustedAnimation_nextFrame(RectangleAdjustedAnimation* this) {
}


void RectangleAdjustedAnimation_paintXY(RectangleAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, RectangleAdjustedAnimation_getBasicColorP(this), RectangleAdjustedAnimation_getColor(this));
        Graphics_drawRect(graphics, x + this->offsetX, y + this->offsetY, this->width, this->height);
}


void RectangleAdjustedAnimation_setWidth(RectangleAdjustedAnimation* this, int32_t width) {
        this->width = width;
}


void RectangleAdjustedAnimation_setHeight(RectangleAdjustedAnimation* this, int32_t height) {
        this->height = height;
}


void RectangleAdjustedAnimation_setOffsetX(RectangleAdjustedAnimation* this, int32_t offsetX) {
        this->offsetX = offsetX;
}


void RectangleAdjustedAnimation_setOffsetY(RectangleAdjustedAnimation* this, int32_t offsetY) {
        this->offsetY = offsetY;
}


BasicColor* RectangleAdjustedAnimation_getBasicColorP(RectangleAdjustedAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleAdjustedAnimation_setBasicColorP(RectangleAdjustedAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

