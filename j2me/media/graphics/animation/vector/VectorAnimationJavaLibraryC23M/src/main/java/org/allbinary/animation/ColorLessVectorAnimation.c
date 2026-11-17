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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/animation/VectorAnimation.h"

typedef struct ColorLessVectorAnimation ColorLessVectorAnimation;
struct ColorLessVectorAnimation {
    VectorAnimation base;
};


ColorLessVectorAnimation* ColorLessVectorAnimation_new(int32_t*** currentPoints, AnimationBehavior* animationBehavior);

void ColorLessVectorAnimation_init(ColorLessVectorAnimation* this, int32_t*** currentPoints, AnimationBehavior* animationBehavior);
void ColorLessVectorAnimation_paintXY(ColorLessVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);


void ColorLessVectorAnimation_init(ColorLessVectorAnimation* this, int32_t*** currentPoints, AnimationBehavior* animationBehavior) {
        VectorAnimation_init(&this->base, currentPoints, BasicColorFactory_getInstance()->WHITE, animationBehavior);
}

ColorLessVectorAnimation* ColorLessVectorAnimation_new(int32_t*** currentPoints, AnimationBehavior* animationBehavior) {
    ColorLessVectorAnimation* this = calloc(1, sizeof(ColorLessVectorAnimation));
    ColorLessVectorAnimation_init(this, currentPoints, animationBehavior);
    return this;
}


void ColorLessVectorAnimation_paintXY(ColorLessVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ColorLessVectorAnimation_paintVectors(this, graphics, x, y);
}

