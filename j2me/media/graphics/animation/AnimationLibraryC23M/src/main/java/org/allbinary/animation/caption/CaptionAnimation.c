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
// package org.allbinary.animation.caption

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

typedef struct CaptionAnimation CaptionAnimation;
struct CaptionAnimation {
    Animation base;
    Animation* animationInterface;
    Animation* overlayAnimationInterface;
    int32_t captionDx;
    int32_t captionDy;
    int32_t dx;
    int32_t dy;
};


CaptionAnimation* CaptionAnimation_new(Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

void CaptionAnimation_init(CaptionAnimation* this, Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);
void CaptionAnimation_nextFrame(CaptionAnimation* this);
void CaptionAnimation_paintXY(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CaptionAnimation_paintThreedXYZ(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);

static void CaptionAnimation_initFields(CaptionAnimation* this) {
    
    
    
    
    
    
}


void CaptionAnimation_init(CaptionAnimation* this, Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    Animation_init(&this->base);
    CaptionAnimation_initFields(this);
        this->animationInterface = animationInterface;
        this->overlayAnimationInterface = overlayAnimationInterface;
        this->captionDx = captionDx;
        this->captionDy = captionDy;
        this->dx = dx;
        this->dy = dy;
}

CaptionAnimation* CaptionAnimation_new(Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimation* this = calloc(1, sizeof(CaptionAnimation));
    CaptionAnimation_init(this, animationInterface, overlayAnimationInterface, captionDx, captionDy, dx, dy);
    return this;
}


// throws Exception
void CaptionAnimation_nextFrame(CaptionAnimation* this) {
}


void CaptionAnimation_paintXY(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy);
        Animation_paintXY(this->overlayAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy);
}


void CaptionAnimation_paintThreedXYZ(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy, z);
        Animation_paintThreedXYZ(this->overlayAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy, z);
}

