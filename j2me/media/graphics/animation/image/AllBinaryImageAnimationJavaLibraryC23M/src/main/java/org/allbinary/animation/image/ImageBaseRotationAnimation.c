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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct ImageBaseRotationAnimation ImageBaseRotationAnimation;
struct ImageBaseRotationAnimation {
    RotationAnimation base;
    Image* image;
    int32_t anchor;
};


ImageBaseRotationAnimation* ImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void ImageBaseRotationAnimation_init(ImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
int32_t ImageBaseRotationAnimation_getAnimationSize(ImageBaseRotationAnimation* this);
void ImageBaseRotationAnimation_setSequence(ImageBaseRotationAnimation* this, int32_t* sequence);
int32_t* ImageBaseRotationAnimation_getSequence(ImageBaseRotationAnimation* this);
void ImageBaseRotationAnimation_paintXY(ImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
Image* ImageBaseRotationAnimation_getImage(ImageBaseRotationAnimation* this);
int32_t ImageBaseRotationAnimation_getWidth(ImageBaseRotationAnimation* this);
int32_t ImageBaseRotationAnimation_getHeight(ImageBaseRotationAnimation* this);
void ImageBaseRotationAnimation_close(ImageBaseRotationAnimation* this);
void ImageBaseRotationAnimation_finalize(ImageBaseRotationAnimation* this);

static void ImageBaseRotationAnimation_initFields(ImageBaseRotationAnimation* this) {
    
    this->anchor = Anchor_TOP_LEFT;
}


void ImageBaseRotationAnimation_init(ImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(totalAngle / JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement)), animationBehavior);
        ImageBaseRotationAnimation_initFields(this);
        this->image = image;
}

ImageBaseRotationAnimation* ImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageBaseRotationAnimation* this = calloc(1, sizeof(ImageBaseRotationAnimation));
    ImageBaseRotationAnimation_init(this, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageBaseRotationAnimation_getAnimationSize(ImageBaseRotationAnimation* this) {
        return ImageBaseRotationAnimation_getSize(this);
}


void ImageBaseRotationAnimation_setSequence(ImageBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* ImageBaseRotationAnimation_getSequence(ImageBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageBaseRotationAnimation_paintXY(ImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->image, x, y, this->anchor);
}


Image* ImageBaseRotationAnimation_getImage(ImageBaseRotationAnimation* this) {
        return this->image;
}


int32_t ImageBaseRotationAnimation_getWidth(ImageBaseRotationAnimation* this) {
        return Image_getWidth(this->image);
}


int32_t ImageBaseRotationAnimation_getHeight(ImageBaseRotationAnimation* this) {
        return Image_getHeight(this->image);
}


// throws Exception
void ImageBaseRotationAnimation_close(ImageBaseRotationAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void ImageBaseRotationAnimation_finalize(ImageBaseRotationAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

