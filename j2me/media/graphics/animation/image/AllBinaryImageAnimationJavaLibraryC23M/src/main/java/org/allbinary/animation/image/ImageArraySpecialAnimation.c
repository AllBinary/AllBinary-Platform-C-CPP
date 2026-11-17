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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/image/ImageArrayAnimation.h"

typedef struct ImageArraySpecialAnimation ImageArraySpecialAnimation;
struct ImageArraySpecialAnimation {
    ImageArrayAnimation base;
    SpecialAnimationInterface SpecialAnimationInterface_interface;
    TimeDelayHelper* timeDelayHelper;
    int32_t loopCount;
    int32_t loopCountTotal;
};


ImageArraySpecialAnimation* ImageArraySpecialAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior);

void ImageArraySpecialAnimation_init(ImageArraySpecialAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior);
int32_t ImageArraySpecialAnimation_getLoopCount(ImageArraySpecialAnimation* this);
void ImageArraySpecialAnimation_setLastFrame(ImageArraySpecialAnimation* this);
void ImageArraySpecialAnimation_reset(ImageArraySpecialAnimation* this);
void ImageArraySpecialAnimation_nextFrame(ImageArraySpecialAnimation* this);
bool ImageArraySpecialAnimation_isComplete(ImageArraySpecialAnimation* this);
void ImageArraySpecialAnimation_paintXY(ImageArraySpecialAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void ImageArraySpecialAnimation_initFields(ImageArraySpecialAnimation* this) {
    this->timeDelayHelper = TimeDelayHelper_new(270);
    this->loopCount = 0;
    this->loopCountTotal = 1;
}


void ImageArraySpecialAnimation_init(ImageArraySpecialAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior) {
        ImageArrayAnimation_init(&this->base, imageArray, animationBehavior);
        ImageArraySpecialAnimation_initFields(this);
        ImageArraySpecialAnimation_reset(this);
}

ImageArraySpecialAnimation* ImageArraySpecialAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArraySpecialAnimation* this = calloc(1, sizeof(ImageArraySpecialAnimation));
    ImageArraySpecialAnimation_init(this, imageArray, animationBehavior);
    return this;
}


int32_t ImageArraySpecialAnimation_getLoopCount(ImageArraySpecialAnimation* this) {
        return this->loopCount;
}


void ImageArraySpecialAnimation_setLastFrame(ImageArraySpecialAnimation* this) {
        JAVA_CALL(this->circularIndexUtil, setIndex, JAVA_CALL(this->circularIndexUtil, getSize) - 1);
}


void ImageArraySpecialAnimation_reset(ImageArraySpecialAnimation* this) {
        ImageArraySpecialAnimation_setFrame(this, ImageArraySpecialAnimation_getSize(this) - 1);
        this->loopCount = 0;
}


void ImageArraySpecialAnimation_nextFrame(ImageArraySpecialAnimation* this) {
        if (ImageArraySpecialAnimation_getFrame(this) > 0) {
            if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
                ImageArraySpecialAnimation_previousFrame(this);
                if (ImageArraySpecialAnimation_getFrame(this) == 0) {
                    this->loopCount++;
                }
            }
        }
}


bool ImageArraySpecialAnimation_isComplete(ImageArraySpecialAnimation* this) {
        if (this->loopCount < this->loopCountTotal || ImageArraySpecialAnimation_getFrame(this) != 0) {
            return false;
        } else {
            return true;
        }
}


void ImageArraySpecialAnimation_paintXY(ImageArraySpecialAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        x = DisplayInfoSingleton_getLastHalfWidth(DisplayInfoSingleton_getInstance()) - (JAVA_CALL(ImageArraySpecialAnimation_getImage(this, JAVA_CALL(this->circularIndexUtil, getIndex)), getWidth) >> 1);
        y = 5;
        ImageArrayAnimation_paintXY((&this->base), graphics, x, y);
}

