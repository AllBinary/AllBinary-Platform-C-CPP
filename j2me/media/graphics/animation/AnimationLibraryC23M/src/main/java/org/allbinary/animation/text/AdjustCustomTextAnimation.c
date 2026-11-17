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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/text/CustomTextAnimation.h"

typedef struct AdjustCustomTextAnimation AdjustCustomTextAnimation;
struct AdjustCustomTextAnimation {
    CustomTextAnimation base;
    int32_t dx;
    int32_t dy;
};


AdjustCustomTextAnimation* AdjustCustomTextAnimation_new(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

void AdjustCustomTextAnimation_init(AdjustCustomTextAnimation* this, const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);
int32_t AdjustCustomTextAnimation_getDx(AdjustCustomTextAnimation* this);
void AdjustCustomTextAnimation_setDx(AdjustCustomTextAnimation* this, int32_t dx);
int32_t AdjustCustomTextAnimation_getDy(AdjustCustomTextAnimation* this);
void AdjustCustomTextAnimation_setDy(AdjustCustomTextAnimation* this, int32_t dy);
void AdjustCustomTextAnimation_paintXY(AdjustCustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AdjustCustomTextAnimation_initFields(AdjustCustomTextAnimation* this) {
    
    
}


void AdjustCustomTextAnimation_init(AdjustCustomTextAnimation* this, const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
        CustomTextAnimation_init(&this->base, text, fontSize, animationBehavior);
        AdjustCustomTextAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustCustomTextAnimation* AdjustCustomTextAnimation_new(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustCustomTextAnimation* this = calloc(1, sizeof(AdjustCustomTextAnimation));
    AdjustCustomTextAnimation_init(this, text, fontSize, dx, dy, animationBehavior);
    return this;
}


int32_t AdjustCustomTextAnimation_getDx(AdjustCustomTextAnimation* this) {
        return this->dx;
}


void AdjustCustomTextAnimation_setDx(AdjustCustomTextAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustCustomTextAnimation_getDy(AdjustCustomTextAnimation* this) {
        return this->dy;
}


void AdjustCustomTextAnimation_setDy(AdjustCustomTextAnimation* this, int32_t dy) {
        this->dy = dy;
}


void AdjustCustomTextAnimation_paintXY(AdjustCustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        CustomTextAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

