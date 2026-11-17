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

typedef struct RectangleAnimation RectangleAnimation;
struct RectangleAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
};


RectangleAnimation* RectangleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void RectangleAnimation_init(RectangleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);
void RectangleAnimation_nextFrame(RectangleAnimation* this);
void RectangleAnimation_paintXY(RectangleAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void RectangleAnimation_setWidth(RectangleAnimation* this, int32_t width);
void RectangleAnimation_setHeight(RectangleAnimation* this, int32_t height);
BasicColor* RectangleAnimation_getBasicColorP(RectangleAnimation* this);
void RectangleAnimation_setBasicColorP(RectangleAnimation* this, BasicColor* basicColor);

static void RectangleAnimation_initFields(RectangleAnimation* this) {
    
    
}


void RectangleAnimation_init(RectangleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    Animation_init(&this->base);
    RectangleAnimation_initFields(this);
        this->width = width;
        this->height = height;
        RectangleAnimation_setBasicColorP(this, basicColor);
}

RectangleAnimation* RectangleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleAnimation* this = calloc(1, sizeof(RectangleAnimation));
    RectangleAnimation_init(this, width, height, basicColor);
    return this;
}


void RectangleAnimation_nextFrame(RectangleAnimation* this) {
}


void RectangleAnimation_paintXY(RectangleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, RectangleAnimation_getBasicColorP(this), RectangleAnimation_getColor(this));
        Graphics_drawRect(graphics, x, y, this->width, this->height);
}


void RectangleAnimation_setWidth(RectangleAnimation* this, int32_t width) {
        this->width = width;
}


void RectangleAnimation_setHeight(RectangleAnimation* this, int32_t height) {
        this->height = height;
}


BasicColor* RectangleAnimation_getBasicColorP(RectangleAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleAnimation_setBasicColorP(RectangleAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

