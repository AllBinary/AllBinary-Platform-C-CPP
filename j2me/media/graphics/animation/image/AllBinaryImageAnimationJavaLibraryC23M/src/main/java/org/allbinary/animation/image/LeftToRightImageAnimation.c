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
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"

typedef struct LeftToRightImageAnimation LeftToRightImageAnimation;
struct LeftToRightImageAnimation {
    ImageSegmentAnimation base;
    int32_t currentWidth;
    int32_t anchor;
};


LeftToRightImageAnimation* LeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void LeftToRightImageAnimation_init(LeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);
void LeftToRightImageAnimation_nextFrame(LeftToRightImageAnimation* this);
void LeftToRightImageAnimation_previousFrame(LeftToRightImageAnimation* this);
void LeftToRightImageAnimation_setFrame(LeftToRightImageAnimation* this, int32_t index);
static void LeftToRightImageAnimation_update(LeftToRightImageAnimation* this);
void LeftToRightImageAnimation_paintXY(LeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void LeftToRightImageAnimation_initFields(LeftToRightImageAnimation* this) {
    
    this->anchor = Anchor_TOP_LEFT;
}


void LeftToRightImageAnimation_init(LeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
        ImageSegmentAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        LeftToRightImageAnimation_initFields(this);
        this->currentWidth = 0;
        if (LeftToRightImageAnimation_getSequence(this)[0] == -1) {
            LeftToRightImageAnimation_setFrame(this, LeftToRightImageAnimation_getSize(this) - 1);
        }
}

LeftToRightImageAnimation* LeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    LeftToRightImageAnimation* this = calloc(1, sizeof(LeftToRightImageAnimation));
    LeftToRightImageAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void LeftToRightImageAnimation_nextFrame(LeftToRightImageAnimation* this) {
        if (LeftToRightImageAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_previousFrame((&this->base));
        } else {
            ImageSegmentAnimation_nextFrame((&this->base));
        }
        LeftToRightImageAnimation_update(this);
}


void LeftToRightImageAnimation_previousFrame(LeftToRightImageAnimation* this) {
        if (LeftToRightImageAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_nextFrame((&this->base));
        } else {
            ImageSegmentAnimation_previousFrame((&this->base));
        }
        LeftToRightImageAnimation_update(this);
}


void LeftToRightImageAnimation_setFrame(LeftToRightImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        LeftToRightImageAnimation_update(this);
}


static void LeftToRightImageAnimation_update(LeftToRightImageAnimation* this) {
        this->currentWidth = LeftToRightImageAnimation_getDrawWidth(this) * LeftToRightImageAnimation_getFrame(this) / LeftToRightImageAnimation_getSize(this);
}


void LeftToRightImageAnimation_paintXY(LeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, LeftToRightImageAnimation_getImage(this), LeftToRightImageAnimation_getStartX(this), LeftToRightImageAnimation_getStartY(this), this->currentWidth, LeftToRightImageAnimation_getDrawHeight(this), Sprite_TRANS_NONE, x, y, this->anchor);
}

