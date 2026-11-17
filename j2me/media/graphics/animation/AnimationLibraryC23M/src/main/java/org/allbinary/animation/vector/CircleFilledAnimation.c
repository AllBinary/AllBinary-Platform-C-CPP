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

typedef struct CircleFilledAnimation CircleFilledAnimation;
struct CircleFilledAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    int32_t width;
    int32_t height;
};


CircleFilledAnimation* CircleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor);

void CircleFilledAnimation_init(CircleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor);
void CircleFilledAnimation_nextFrame(CircleFilledAnimation* this);
void CircleFilledAnimation_paintXY(CircleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y);
BasicColor* CircleFilledAnimation_getBasicColorP(CircleFilledAnimation* this);
void CircleFilledAnimation_setBasicColorP(CircleFilledAnimation* this, BasicColor* basicColor);

static void CircleFilledAnimation_initFields(CircleFilledAnimation* this) {
    
    
}


void CircleFilledAnimation_init(CircleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
        Animation_init(&this->base);
        CircleFilledAnimation_initFields(this);
        this->width = width;
        this->height = height;
        CircleFilledAnimation_setBasicColorP(this, basicColor);
}

CircleFilledAnimation* CircleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    CircleFilledAnimation* this = calloc(1, sizeof(CircleFilledAnimation));
    CircleFilledAnimation_init(this, width, height, basicColor);
    return this;
}


void CircleFilledAnimation_nextFrame(CircleFilledAnimation* this) {
}


void CircleFilledAnimation_paintXY(CircleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, CircleFilledAnimation_getBasicColorP(this), CircleFilledAnimation_getColor(this));
        Graphics_fillRect(graphics, x, y, this->width, this->height);
}


BasicColor* CircleFilledAnimation_getBasicColorP(CircleFilledAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void CircleFilledAnimation_setBasicColorP(CircleFilledAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

