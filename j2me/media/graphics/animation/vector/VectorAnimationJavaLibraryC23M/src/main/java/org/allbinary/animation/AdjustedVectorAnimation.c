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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/VectorAnimation.h"

typedef struct AdjustedVectorAnimation AdjustedVectorAnimation;
struct AdjustedVectorAnimation {
    VectorAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedVectorAnimation* AdjustedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedVectorAnimation_init(AdjustedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedVectorAnimation_paintXY(AdjustedVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustedVectorAnimation_initFields(AdjustedVectorAnimation* this) {
    
    
}


void AdjustedVectorAnimation_init(AdjustedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        VectorAnimation_init(&this->base, currentPoints, basicColor, animationBehavior);
        AdjustedVectorAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustedVectorAnimation* AdjustedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedVectorAnimation* this = calloc(1, sizeof(AdjustedVectorAnimation));
    AdjustedVectorAnimation_init(this, currentPoints, basicColor, dx, dy, animationBehavior);
    return this;
}


void AdjustedVectorAnimation_paintXY(AdjustedVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        VectorAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

