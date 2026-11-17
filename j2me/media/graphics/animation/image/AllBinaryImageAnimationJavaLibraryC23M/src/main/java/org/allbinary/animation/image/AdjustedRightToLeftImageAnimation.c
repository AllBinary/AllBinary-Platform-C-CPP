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
#include "org/allbinary/animation/image/RightToLeftImageAnimation.h"

typedef struct AdjustedRightToLeftImageAnimation AdjustedRightToLeftImageAnimation;
struct AdjustedRightToLeftImageAnimation {
    RightToLeftImageAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedRightToLeftImageAnimation* AdjustedRightToLeftImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedRightToLeftImageAnimation_init(AdjustedRightToLeftImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedRightToLeftImageAnimation_init(AdjustedRightToLeftImageAnimation* this, int32_t dx, int32_t dy);
void AdjustedRightToLeftImageAnimation_paintXY(AdjustedRightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustedRightToLeftImageAnimation_initFields(AdjustedRightToLeftImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedRightToLeftImageAnimation_init(AdjustedRightToLeftImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        RightToLeftImageAnimation_init(&this->base, image, animationBehavior);
        AdjustedRightToLeftImageAnimation_initFields(this);
        AdjustedRightToLeftImageAnimation_init(this, dx, dy);
}

AdjustedRightToLeftImageAnimation* AdjustedRightToLeftImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedRightToLeftImageAnimation* this = calloc(1, sizeof(AdjustedRightToLeftImageAnimation));
    AdjustedRightToLeftImageAnimation_init(this, image, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedRightToLeftImageAnimation_init(AdjustedRightToLeftImageAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedRightToLeftImageAnimation_paintXY(AdjustedRightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        RightToLeftImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

