/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/animation/image/ImageAnimation.h"

typedef struct AdjustedImageAnimation AdjustedImageAnimation;
struct AdjustedImageAnimation {
    ImageAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustedImageAnimation* AdjustedImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustedImageAnimation_init(AdjustedImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
void AdjustedImageAnimation_init(AdjustedImageAnimation* this, int32_t dx, int32_t dy);
void AdjustedImageAnimation_paintXY(AdjustedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void AdjustedImageAnimation_setDx(AdjustedImageAnimation* this, int32_t dx);
int32_t AdjustedImageAnimation_getDx(AdjustedImageAnimation* this);
void AdjustedImageAnimation_setDy(AdjustedImageAnimation* this, int32_t dy);
int32_t AdjustedImageAnimation_getDy(AdjustedImageAnimation* this);

static void AdjustedImageAnimation_initFields(AdjustedImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageAnimation_init(AdjustedImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        ImageAnimation_init(&this->base, image, animationBehavior);
        AdjustedImageAnimation_initFields(this);
        AdjustedImageAnimation_init(this, dx, dy);
}

AdjustedImageAnimation* AdjustedImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageAnimation* this = calloc(1, sizeof(AdjustedImageAnimation));
    AdjustedImageAnimation_init(this, image, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageAnimation_init(AdjustedImageAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageAnimation_setDx(this, dx);
        AdjustedImageAnimation_setDy(this, dy);
}


void AdjustedImageAnimation_paintXY(AdjustedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageAnimation_setDx(AdjustedImageAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageAnimation_getDx(AdjustedImageAnimation* this) {
        return this->dx;
}


void AdjustedImageAnimation_setDy(AdjustedImageAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageAnimation_getDy(AdjustedImageAnimation* this) {
        return this->dy;
}

