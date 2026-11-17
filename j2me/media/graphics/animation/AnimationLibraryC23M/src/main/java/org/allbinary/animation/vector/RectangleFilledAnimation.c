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

typedef struct RectangleFilledAnimation RectangleFilledAnimation;
struct RectangleFilledAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t widthP;
    int32_t heightP;
};


RectangleFilledAnimation* RectangleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void RectangleFilledAnimation_init(RectangleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);
void RectangleFilledAnimation_nextFrame(RectangleFilledAnimation* this);
void RectangleFilledAnimation_paintXY(RectangleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void RectangleFilledAnimation_setWidth(RectangleFilledAnimation* this, int32_t width);
void RectangleFilledAnimation_setHeight(RectangleFilledAnimation* this, int32_t height);
BasicColor* RectangleFilledAnimation_getBasicColorP(RectangleFilledAnimation* this);
void RectangleFilledAnimation_setBasicColorP(RectangleFilledAnimation* this, BasicColor* basicColor);

static void RectangleFilledAnimation_initFields(RectangleFilledAnimation* this) {
    
    
}


void RectangleFilledAnimation_init(RectangleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    Animation_init(&this->base);
    RectangleFilledAnimation_initFields(this);
        this->widthP = width;
        this->heightP = height;
        RectangleFilledAnimation_setBasicColorP(this, basicColor);
}

RectangleFilledAnimation* RectangleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleFilledAnimation* this = calloc(1, sizeof(RectangleFilledAnimation));
    RectangleFilledAnimation_init(this, width, height, basicColor);
    return this;
}


void RectangleFilledAnimation_nextFrame(RectangleFilledAnimation* this) {
}


void RectangleFilledAnimation_paintXY(RectangleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, RectangleFilledAnimation_getBasicColorP(this), RectangleFilledAnimation_getColor(this));
        Graphics_fillRect(graphics, x, y, this->widthP, this->heightP);
}


void RectangleFilledAnimation_setWidth(RectangleFilledAnimation* this, int32_t width) {
        this->widthP = width;
}


void RectangleFilledAnimation_setHeight(RectangleFilledAnimation* this, int32_t height) {
        this->heightP = height;
}


BasicColor* RectangleFilledAnimation_getBasicColorP(RectangleFilledAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleFilledAnimation_setBasicColorP(RectangleFilledAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

