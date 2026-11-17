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
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"

typedef struct RightToLeftImageAnimation RightToLeftImageAnimation;
struct RightToLeftImageAnimation {
    ImageSegmentAnimation base;
    int32_t startWidth;
    int32_t currentWidth;
    int32_t anchor;
};


RightToLeftImageAnimation* RightToLeftImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void RightToLeftImageAnimation_init(RightToLeftImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);
void RightToLeftImageAnimation_nextFrame(RightToLeftImageAnimation* this);
void RightToLeftImageAnimation_previousFrame(RightToLeftImageAnimation* this);
void RightToLeftImageAnimation_setFrame(RightToLeftImageAnimation* this, int32_t index);
static void RightToLeftImageAnimation_update(RightToLeftImageAnimation* this);
void RightToLeftImageAnimation_paintXY(RightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void RightToLeftImageAnimation_initFields(RightToLeftImageAnimation* this) {
    this->startWidth = 0;
    this->currentWidth = 0;
    this->anchor = Anchor_TOP_LEFT;
}


void RightToLeftImageAnimation_init(RightToLeftImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
        ImageSegmentAnimation_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), animationBehavior);
        RightToLeftImageAnimation_initFields(this);
        RightToLeftImageAnimation_setFrame(this, RightToLeftImageAnimation_getSize(this) - 1);
}

RightToLeftImageAnimation* RightToLeftImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    RightToLeftImageAnimation* this = calloc(1, sizeof(RightToLeftImageAnimation));
    RightToLeftImageAnimation_init(this, image, animationBehavior);
    return this;
}


void RightToLeftImageAnimation_nextFrame(RightToLeftImageAnimation* this) {
        ImageSegmentAnimation_previousFrame((&this->base));
        RightToLeftImageAnimation_update(this);
}


void RightToLeftImageAnimation_previousFrame(RightToLeftImageAnimation* this) {
        ImageSegmentAnimation_nextFrame((&this->base));
        RightToLeftImageAnimation_update(this);
}


void RightToLeftImageAnimation_setFrame(RightToLeftImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        RightToLeftImageAnimation_update(this);
}


static void RightToLeftImageAnimation_update(RightToLeftImageAnimation* this) {
        this->startWidth = RightToLeftImageAnimation_getDrawWidth(this) * RightToLeftImageAnimation_getFrame(this) / RightToLeftImageAnimation_getSize(this);
        this->currentWidth = RightToLeftImageAnimation_getDrawWidth(this) - this->startWidth;
}


void RightToLeftImageAnimation_paintXY(RightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, RightToLeftImageAnimation_getImage(this), this->startWidth, RightToLeftImageAnimation_getStartY(this), this->currentWidth, RightToLeftImageAnimation_getDrawHeight(this), Sprite_TRANS_NONE, x + this->startWidth, y, this->anchor);
}

