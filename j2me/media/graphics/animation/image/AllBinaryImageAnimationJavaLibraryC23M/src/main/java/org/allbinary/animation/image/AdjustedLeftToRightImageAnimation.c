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
#include "org/allbinary/animation/image/LeftToRightImageAnimation.h"

typedef struct AdjustedLeftToRightImageAnimation AdjustedLeftToRightImageAnimation;
struct AdjustedLeftToRightImageAnimation {
    LeftToRightImageAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedLeftToRightImageAnimation* AdjustedLeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedLeftToRightImageAnimation_init(AdjustedLeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedLeftToRightImageAnimation_init(AdjustedLeftToRightImageAnimation* this, int32_t dx, int32_t dy);
void AdjustedLeftToRightImageAnimation_paintXY(AdjustedLeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustedLeftToRightImageAnimation_initFields(AdjustedLeftToRightImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedLeftToRightImageAnimation_init(AdjustedLeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        LeftToRightImageAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        AdjustedLeftToRightImageAnimation_initFields(this);
        AdjustedLeftToRightImageAnimation_init(this, dx, dy);
}

AdjustedLeftToRightImageAnimation* AdjustedLeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedLeftToRightImageAnimation* this = calloc(1, sizeof(AdjustedLeftToRightImageAnimation));
    AdjustedLeftToRightImageAnimation_init(this, image, sequenceArray, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedLeftToRightImageAnimation_init(AdjustedLeftToRightImageAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedLeftToRightImageAnimation_paintXY(AdjustedLeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        LeftToRightImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

