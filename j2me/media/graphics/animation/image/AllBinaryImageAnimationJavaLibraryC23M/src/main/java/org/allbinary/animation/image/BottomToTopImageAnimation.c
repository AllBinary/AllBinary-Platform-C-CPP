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

typedef struct BottomToTopImageAnimation BottomToTopImageAnimation;
struct BottomToTopImageAnimation {
    ImageSegmentAnimation base;
    int32_t startHeight;
    int32_t currentHeight;
    int32_t anchor;
};


BottomToTopImageAnimation* BottomToTopImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void BottomToTopImageAnimation_init(BottomToTopImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);
void BottomToTopImageAnimation_nextFrame(BottomToTopImageAnimation* this);
void BottomToTopImageAnimation_previousFrame(BottomToTopImageAnimation* this);
void BottomToTopImageAnimation_setFrame(BottomToTopImageAnimation* this, int32_t index);
static void BottomToTopImageAnimation_update(BottomToTopImageAnimation* this);
void BottomToTopImageAnimation_paintXY(BottomToTopImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void BottomToTopImageAnimation_initFields(BottomToTopImageAnimation* this) {
    this->startHeight = 0;
    this->currentHeight = 0;
    this->anchor = Anchor_TOP_LEFT;
}


void BottomToTopImageAnimation_init(BottomToTopImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
        ImageSegmentAnimation_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), animationBehavior);
        BottomToTopImageAnimation_initFields(this);
        BottomToTopImageAnimation_setFrame(this, BottomToTopImageAnimation_getSize(this) - 1);
}

BottomToTopImageAnimation* BottomToTopImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    BottomToTopImageAnimation* this = calloc(1, sizeof(BottomToTopImageAnimation));
    BottomToTopImageAnimation_init(this, image, animationBehavior);
    return this;
}


void BottomToTopImageAnimation_nextFrame(BottomToTopImageAnimation* this) {
        ImageSegmentAnimation_previousFrame((&this->base));
        BottomToTopImageAnimation_update(this);
}


void BottomToTopImageAnimation_previousFrame(BottomToTopImageAnimation* this) {
        ImageSegmentAnimation_nextFrame((&this->base));
        BottomToTopImageAnimation_update(this);
}


void BottomToTopImageAnimation_setFrame(BottomToTopImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        BottomToTopImageAnimation_update(this);
}


static void BottomToTopImageAnimation_update(BottomToTopImageAnimation* this) {
        this->startHeight = BottomToTopImageAnimation_getDrawHeight(this) * BottomToTopImageAnimation_getFrame(this) / BottomToTopImageAnimation_getSize(this);
        this->currentHeight = BottomToTopImageAnimation_getDrawHeight(this) - this->startHeight;
}


void BottomToTopImageAnimation_paintXY(BottomToTopImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, BottomToTopImageAnimation_getImage(this), BottomToTopImageAnimation_getStartX(this), this->startHeight, BottomToTopImageAnimation_getDrawWidth(this), this->currentHeight, Sprite_TRANS_NONE, x, y + this->startHeight, this->anchor);
}

