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
#include "org/allbinary/animation/image/ImageArrayAnimation.h"

typedef struct AdjustedImageArrayAnimation AdjustedImageArrayAnimation;
struct AdjustedImageArrayAnimation {
    ImageArrayAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageArrayAnimation* AdjustedImageArrayAnimation_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, int32_t dx, int32_t dy);
void AdjustedImageArrayAnimation_paintXY(AdjustedImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void AdjustedImageArrayAnimation_setDx(AdjustedImageArrayAnimation* this, int32_t dx);
int32_t AdjustedImageArrayAnimation_getDx(AdjustedImageArrayAnimation* this);
void AdjustedImageArrayAnimation_setDy(AdjustedImageArrayAnimation* this, int32_t dy);
int32_t AdjustedImageArrayAnimation_getDy(AdjustedImageArrayAnimation* this);

static void AdjustedImageArrayAnimation_initFields(AdjustedImageArrayAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        ImageArrayAnimation_init(&this->base, imageArray, animationBehavior);
        AdjustedImageArrayAnimation_initFields(this);
        AdjustedImageArrayAnimation_init(this, dx, dy);
}

AdjustedImageArrayAnimation* AdjustedImageArrayAnimation_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayAnimation* this = calloc(1, sizeof(AdjustedImageArrayAnimation));
    AdjustedImageArrayAnimation_init(this, imageArray, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageArrayAnimation_setDx(this, dx);
        AdjustedImageArrayAnimation_setDy(this, dy);
}


void AdjustedImageArrayAnimation_paintXY(AdjustedImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageArrayAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageArrayAnimation_setDx(AdjustedImageArrayAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageArrayAnimation_getDx(AdjustedImageArrayAnimation* this) {
        return this->dx;
}


void AdjustedImageArrayAnimation_setDy(AdjustedImageArrayAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageArrayAnimation_getDy(AdjustedImageArrayAnimation* this) {
        return this->dy;
}

