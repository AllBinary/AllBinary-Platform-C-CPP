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

typedef struct TopToBottomImageAnimation TopToBottomImageAnimation;
struct TopToBottomImageAnimation {
    ImageSegmentAnimation base;
    int32_t currentHeight;
    int32_t anchor;
};


TopToBottomImageAnimation* TopToBottomImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);

void TopToBottomImageAnimation_init(TopToBottomImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior);
void TopToBottomImageAnimation_nextFrame(TopToBottomImageAnimation* this);
void TopToBottomImageAnimation_previousFrame(TopToBottomImageAnimation* this);
void TopToBottomImageAnimation_setFrame(TopToBottomImageAnimation* this, int32_t index);
static void TopToBottomImageAnimation_update(TopToBottomImageAnimation* this);
void TopToBottomImageAnimation_paintXY(TopToBottomImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void TopToBottomImageAnimation_initFields(TopToBottomImageAnimation* this) {
    
    this->anchor = Anchor_TOP_LEFT;
}


void TopToBottomImageAnimation_init(TopToBottomImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
        ImageSegmentAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        TopToBottomImageAnimation_initFields(this);
        this->currentHeight = 0;
        if (TopToBottomImageAnimation_getSequence(this)[0] == -1) {
            TopToBottomImageAnimation_setFrame(this, TopToBottomImageAnimation_getSize(this) - 1);
        }
}

TopToBottomImageAnimation* TopToBottomImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    TopToBottomImageAnimation* this = calloc(1, sizeof(TopToBottomImageAnimation));
    TopToBottomImageAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void TopToBottomImageAnimation_nextFrame(TopToBottomImageAnimation* this) {
        if (TopToBottomImageAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_previousFrame((&this->base));
        } else {
            ImageSegmentAnimation_nextFrame((&this->base));
        }
        TopToBottomImageAnimation_update(this);
}


void TopToBottomImageAnimation_previousFrame(TopToBottomImageAnimation* this) {
        if (TopToBottomImageAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_nextFrame((&this->base));
        } else {
            ImageSegmentAnimation_previousFrame((&this->base));
        }
        TopToBottomImageAnimation_update(this);
}


void TopToBottomImageAnimation_setFrame(TopToBottomImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        TopToBottomImageAnimation_update(this);
}


static void TopToBottomImageAnimation_update(TopToBottomImageAnimation* this) {
        this->currentHeight = TopToBottomImageAnimation_getDrawHeight(this) * TopToBottomImageAnimation_getFrame(this) / TopToBottomImageAnimation_getSize(this);
}


void TopToBottomImageAnimation_paintXY(TopToBottomImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, TopToBottomImageAnimation_getImage(this), TopToBottomImageAnimation_getStartX(this), TopToBottomImageAnimation_getStartY(this), TopToBottomImageAnimation_getDrawWidth(this), this->currentHeight, Sprite_TRANS_NONE, x, y, this->anchor);
}

