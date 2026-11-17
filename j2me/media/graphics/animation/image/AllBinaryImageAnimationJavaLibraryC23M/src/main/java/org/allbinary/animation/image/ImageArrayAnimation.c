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
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct ImageArrayAnimation ImageArrayAnimation;
struct ImageArrayAnimation {
    IndexedAnimation base;
    Image** imageArray;
    int32_t totalFrames;
    CircularIndexUtil* circularIndexUtil;
    int32_t anchor;
};


ImageArrayAnimation* ImageArrayAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior);

void ImageArrayAnimation_init(ImageArrayAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior);
int32_t ImageArrayAnimation_getAnimationSize(ImageArrayAnimation* this);
void ImageArrayAnimation_nextFrame(ImageArrayAnimation* this);
void ImageArrayAnimation_previousFrame(ImageArrayAnimation* this);
void ImageArrayAnimation_setFrame(ImageArrayAnimation* this, int32_t index);
int32_t ImageArrayAnimation_getFrame(ImageArrayAnimation* this);
int32_t ImageArrayAnimation_getSize(ImageArrayAnimation* this);
void ImageArrayAnimation_setSequence(ImageArrayAnimation* this, int32_t* sequence);
int32_t* ImageArrayAnimation_getSequence(ImageArrayAnimation* this);
Image* ImageArrayAnimation_getImage(ImageArrayAnimation* this, int32_t index);
Image** ImageArrayAnimation_getImageArray(ImageArrayAnimation* this);
void ImageArrayAnimation_setImageArray(ImageArrayAnimation* this, Image** imageArray);
void ImageArrayAnimation_paintXY(ImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void ImageArrayAnimation_initFields(ImageArrayAnimation* this) {
    this->imageArray = NullImage_NULL_IMAGE_ARRAY;
    this->totalFrames = 0;
    this->circularIndexUtil = CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL;
    this->anchor = Anchor_TOP_LEFT;
}


void ImageArrayAnimation_init(ImageArrayAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
        ImageArrayAnimation_initFields(this);
        ImageArrayAnimation_setImageArray(this, imageArray);
}

ImageArrayAnimation* ImageArrayAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArrayAnimation* this = calloc(1, sizeof(ImageArrayAnimation));
    ImageArrayAnimation_init(this, imageArray, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageArrayAnimation_getAnimationSize(ImageArrayAnimation* this) {
        return ImageArrayAnimation_getSize(this);
}


void ImageArrayAnimation_nextFrame(ImageArrayAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void ImageArrayAnimation_previousFrame(ImageArrayAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void ImageArrayAnimation_setFrame(ImageArrayAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t ImageArrayAnimation_getFrame(ImageArrayAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t ImageArrayAnimation_getSize(ImageArrayAnimation* this) {
        return this->totalFrames;
}


void ImageArrayAnimation_setSequence(ImageArrayAnimation* this, int32_t* sequence) {
}


int32_t* ImageArrayAnimation_getSequence(ImageArrayAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


Image* ImageArrayAnimation_getImage(ImageArrayAnimation* this, int32_t index) {
        return this->imageArray[index];
}


Image** ImageArrayAnimation_getImageArray(ImageArrayAnimation* this) {
        return this->imageArray;
}


void ImageArrayAnimation_setImageArray(ImageArrayAnimation* this, Image** imageArray) {
        this->imageArray = imageArray;
        this->totalFrames = java_array_length(imageArray);
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}


void ImageArrayAnimation_paintXY(ImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->imageArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], x, y, this->anchor);
}

