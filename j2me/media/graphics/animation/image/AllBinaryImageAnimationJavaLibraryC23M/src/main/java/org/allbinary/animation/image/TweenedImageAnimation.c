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
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct TweenedImageAnimation TweenedImageAnimation;
struct TweenedImageAnimation {
    IndexedAnimation base;
    Image* image;
    int32_t dx;
    int32_t dy;
    int32_t totalFrames;
    CircularIndexUtil* circularIndexUtil;
    int32_t anchor;
};


TweenedImageAnimation* TweenedImageAnimation_new(Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior);

void TweenedImageAnimation_init(TweenedImageAnimation* this, Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior);
int32_t TweenedImageAnimation_getAnimationSize(TweenedImageAnimation* this);
void TweenedImageAnimation_nextFrame(TweenedImageAnimation* this);
void TweenedImageAnimation_previousFrame(TweenedImageAnimation* this);
void TweenedImageAnimation_setFrame(TweenedImageAnimation* this, int32_t index);
int32_t TweenedImageAnimation_getFrame(TweenedImageAnimation* this);
int32_t TweenedImageAnimation_getSize(TweenedImageAnimation* this);
void TweenedImageAnimation_setSequence(TweenedImageAnimation* this, int32_t* sequence);
int32_t* TweenedImageAnimation_getSequence(TweenedImageAnimation* this);
void TweenedImageAnimation_paintXY(TweenedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void TweenedImageAnimation_close(TweenedImageAnimation* this);
void TweenedImageAnimation_finalize(TweenedImageAnimation* this);

static void TweenedImageAnimation_initFields(TweenedImageAnimation* this) {
    
    
    
    
    
    this->anchor = Anchor_TOP_LEFT;
}


void TweenedImageAnimation_init(TweenedImageAnimation* this, Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        TweenedImageAnimation_initFields(this);
        this->image = image;
        this->dx = dx;
        this->dy = dy;
        this->totalFrames = totalFrames;
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}

TweenedImageAnimation* TweenedImageAnimation_new(Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior) {
    TweenedImageAnimation* this = calloc(1, sizeof(TweenedImageAnimation));
    TweenedImageAnimation_init(this, image, dx, dy, totalFrames, animationBehavior);
    return this;
}


// throws Exception
int32_t TweenedImageAnimation_getAnimationSize(TweenedImageAnimation* this) {
        return TweenedImageAnimation_getSize(this);
}


void TweenedImageAnimation_nextFrame(TweenedImageAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void TweenedImageAnimation_previousFrame(TweenedImageAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void TweenedImageAnimation_setFrame(TweenedImageAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t TweenedImageAnimation_getFrame(TweenedImageAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t TweenedImageAnimation_getSize(TweenedImageAnimation* this) {
        return this->totalFrames;
}


void TweenedImageAnimation_setSequence(TweenedImageAnimation* this, int32_t* sequence) {
}


int32_t* TweenedImageAnimation_getSequence(TweenedImageAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void TweenedImageAnimation_paintXY(TweenedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t frame = TweenedImageAnimation_getFrame(this);
        int32_t currentX = this->dx * frame;
        int32_t currentY = this->dy * frame;
        Graphics_drawImage(graphics, this->image, x + currentX, y + currentY, this->anchor);
}


// throws Exception
void TweenedImageAnimation_close(TweenedImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void TweenedImageAnimation_finalize(TweenedImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

