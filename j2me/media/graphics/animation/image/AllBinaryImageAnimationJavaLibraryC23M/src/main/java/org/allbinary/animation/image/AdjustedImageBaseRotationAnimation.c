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
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

typedef struct AdjustedImageBaseRotationAnimation AdjustedImageBaseRotationAnimation;
struct AdjustedImageBaseRotationAnimation {
    ImageBaseRotationAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageBaseRotationAnimation* AdjustedImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageBaseRotationAnimation_init(AdjustedImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedImageBaseRotationAnimation_init(AdjustedImageBaseRotationAnimation* this, int32_t dx, int32_t dy);
void AdjustedImageBaseRotationAnimation_paintXY(AdjustedImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustedImageBaseRotationAnimation_initFields(AdjustedImageBaseRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageBaseRotationAnimation_init(AdjustedImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AdjustedImageBaseRotationAnimation_initFields(this);
        AdjustedImageBaseRotationAnimation_init(this, dx, dy);
}

AdjustedImageBaseRotationAnimation* AdjustedImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageBaseRotationAnimation* this = calloc(1, sizeof(AdjustedImageBaseRotationAnimation));
    AdjustedImageBaseRotationAnimation_init(this, image, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageBaseRotationAnimation_init(AdjustedImageBaseRotationAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedImageBaseRotationAnimation_paintXY(AdjustedImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageBaseRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

