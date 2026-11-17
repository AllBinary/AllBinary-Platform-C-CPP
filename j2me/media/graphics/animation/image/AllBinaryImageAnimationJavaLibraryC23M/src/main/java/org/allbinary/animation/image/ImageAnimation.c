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

typedef struct ImageAnimation ImageAnimation;
struct ImageAnimation {
    IndexedAnimation base;
    Image* image;
    int32_t anchor;
};


ImageAnimation* ImageAnimation_new(Image* image, AnimationBehavior* animationBehavior);

void ImageAnimation_init(ImageAnimation* this, Image* image, AnimationBehavior* animationBehavior);
int32_t ImageAnimation_getAnimationSize(ImageAnimation* this);
void ImageAnimation_nextFrame(ImageAnimation* this);
void ImageAnimation_previousFrame(ImageAnimation* this);
void ImageAnimation_setFrame(ImageAnimation* this, int32_t index);
int32_t ImageAnimation_getFrame(ImageAnimation* this);
int32_t ImageAnimation_getSize(ImageAnimation* this);
void ImageAnimation_setSequence(ImageAnimation* this, int32_t* sequence);
int32_t* ImageAnimation_getSequence(ImageAnimation* this);
void ImageAnimation_paintXY(ImageAnimation* this, Graphics* graphics, int32_t x, int32_t y);
Image* ImageAnimation_getImage(ImageAnimation* this);
void ImageAnimation_close(ImageAnimation* this);
void ImageAnimation_finalize(ImageAnimation* this);

static void ImageAnimation_initFields(ImageAnimation* this) {
    
    this->anchor = Anchor_TOP_LEFT;
}


void ImageAnimation_init(ImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        ImageAnimation_initFields(this);
        this->image = image;
}

ImageAnimation* ImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    ImageAnimation* this = calloc(1, sizeof(ImageAnimation));
    ImageAnimation_init(this, image, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageAnimation_getAnimationSize(ImageAnimation* this) {
        return ImageAnimation_getSize(this);
}


void ImageAnimation_nextFrame(ImageAnimation* this) {
}


void ImageAnimation_previousFrame(ImageAnimation* this) {
}


void ImageAnimation_setFrame(ImageAnimation* this, int32_t index) {
}


int32_t ImageAnimation_getFrame(ImageAnimation* this) {
        return 0;
}


int32_t ImageAnimation_getSize(ImageAnimation* this) {
        return 1;
}


void ImageAnimation_setSequence(ImageAnimation* this, int32_t* sequence) {
}


int32_t* ImageAnimation_getSequence(ImageAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageAnimation_paintXY(ImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->image, x, y, this->anchor);
}


Image* ImageAnimation_getImage(ImageAnimation* this) {
        return this->image;
}


// throws Exception
void ImageAnimation_close(ImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void ImageAnimation_finalize(ImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

