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
#include "org/allbinary/math/AngleFactory.h"

typedef struct CircleAnimation CircleAnimation;
struct CircleAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t TOTAL_ANGLE;
    int32_t width;
    int32_t height;
};


CircleAnimation* CircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void CircleAnimation_init(CircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);
void CircleAnimation_nextFrame(CircleAnimation* this);
void CircleAnimation_paintXY(CircleAnimation* this, Graphics* graphics, int32_t x, int32_t y);
BasicColor* CircleAnimation_getBasicColorP(CircleAnimation* this);
void CircleAnimation_setBasicColorP(CircleAnimation* this, BasicColor* basicColor);

static void CircleAnimation_initFields(CircleAnimation* this) {
    this->TOTAL_ANGLE = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
    
    
}


void CircleAnimation_init(CircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    Animation_init(&this->base);
    CircleAnimation_initFields(this);
        this->width = width;
        this->height = height;
        CircleAnimation_setBasicColorP(this, basicColor);
}

CircleAnimation* CircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    CircleAnimation* this = calloc(1, sizeof(CircleAnimation));
    CircleAnimation_init(this, width, height, basicColor);
    return this;
}


void CircleAnimation_nextFrame(CircleAnimation* this) {
}


void CircleAnimation_paintXY(CircleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, CircleAnimation_getBasicColorP(this), CircleAnimation_getColor(this));
        Graphics_drawArc(graphics, x, y, this->width, this->height, 0, this->TOTAL_ANGLE);
}


BasicColor* CircleAnimation_getBasicColorP(CircleAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void CircleAnimation_setBasicColorP(CircleAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

