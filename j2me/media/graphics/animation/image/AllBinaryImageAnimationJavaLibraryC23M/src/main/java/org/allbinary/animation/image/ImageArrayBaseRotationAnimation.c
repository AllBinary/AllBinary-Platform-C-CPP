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
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct ImageArrayBaseRotationAnimation ImageArrayBaseRotationAnimation;
struct ImageArrayBaseRotationAnimation {
    RotationAnimation base;
    ImageModifierUtil* imageModifierUtil;
    Image** originalImageArray;
    Image** imageArray;
    Image* currentImage;
    int32_t totalFrames;
    int32_t anchor;
};


ImageArrayBaseRotationAnimation* ImageArrayBaseRotationAnimation_new(Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);

void ImageArrayBaseRotationAnimation_init(ImageArrayBaseRotationAnimation* this, Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);
int32_t ImageArrayBaseRotationAnimation_getAnimationSize(ImageArrayBaseRotationAnimation* this);
void ImageArrayBaseRotationAnimation_setAlpha(ImageArrayBaseRotationAnimation* this, int32_t alpha);
void ImageArrayBaseRotationAnimation_nextRotation(ImageArrayBaseRotationAnimation* this);
void ImageArrayBaseRotationAnimation_previousRotation(ImageArrayBaseRotationAnimation* this);
void ImageArrayBaseRotationAnimation_setFrame(ImageArrayBaseRotationAnimation* this, int32_t index2);
void ImageArrayBaseRotationAnimation_setSequence(ImageArrayBaseRotationAnimation* this, int32_t* sequence);
int32_t* ImageArrayBaseRotationAnimation_getSequence(ImageArrayBaseRotationAnimation* this);
void ImageArrayBaseRotationAnimation_setImageArray(ImageArrayBaseRotationAnimation* this, Image** imageArray);
void ImageArrayBaseRotationAnimation_paintXY(ImageArrayBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void ImageArrayBaseRotationAnimation_close(ImageArrayBaseRotationAnimation* this);
void ImageArrayBaseRotationAnimation_finalize(ImageArrayBaseRotationAnimation* this);

static void ImageArrayBaseRotationAnimation_initFields(ImageArrayBaseRotationAnimation* this) {
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    
    this->imageArray = NullImage_NULL_IMAGE_ARRAY;
    
    this->totalFrames = 0;
    this->anchor = Anchor_TOP_LEFT;
}


void ImageArrayBaseRotationAnimation_init(ImageArrayBaseRotationAnimation* this, Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement)), animationBehavior);
        ImageArrayBaseRotationAnimation_initFields(this);
        this->originalImageArray = originalImageArray;
        ImageArrayBaseRotationAnimation_setImageArray(this, ImageModifierUtil_getImageArray(this->imageModifierUtil, originalImageArray));
        this->currentImage = this->imageArray[JAVA_CALL(this->circularIndexUtil, getIndex)];
}

ImageArrayBaseRotationAnimation* ImageArrayBaseRotationAnimation_new(Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    ImageArrayBaseRotationAnimation* this = calloc(1, sizeof(ImageArrayBaseRotationAnimation));
    ImageArrayBaseRotationAnimation_init(this, originalImageArray, angleInfo, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageArrayBaseRotationAnimation_getAnimationSize(ImageArrayBaseRotationAnimation* this) {
        return ImageArrayBaseRotationAnimation_getSize(this);
}


void ImageArrayBaseRotationAnimation_setAlpha(ImageArrayBaseRotationAnimation* this, int32_t alpha) {
        if (this->alphaP != alpha) {
            RotationAnimation_setAlpha((&this->base), alpha);
            ImageModifierUtil_reset(this->imageModifierUtil);
            int32_t index = JAVA_CALL(this->circularIndexUtil, getIndex);
            ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
        }
}


void ImageArrayBaseRotationAnimation_nextRotation(ImageArrayBaseRotationAnimation* this) {
        RotationAnimation_nextRotation((&this->base));
        int32_t index = JAVA_CALL(this->circularIndexUtil, getIndex);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_previousRotation(ImageArrayBaseRotationAnimation* this) {
        RotationAnimation_previousRotation((&this->base));
        int32_t index = JAVA_CALL(this->circularIndexUtil, getIndex);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_setFrame(ImageArrayBaseRotationAnimation* this, int32_t index2) {
        RotationAnimation_setFrame((&this->base), index2);
        int32_t index = JAVA_CALL(this->circularIndexUtil, getIndex);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_setSequence(ImageArrayBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* ImageArrayBaseRotationAnimation_getSequence(ImageArrayBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageArrayBaseRotationAnimation_setImageArray(ImageArrayBaseRotationAnimation* this, Image** imageArray) {
        this->imageArray = imageArray;
        this->totalFrames = java_array_length(imageArray);
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}


void ImageArrayBaseRotationAnimation_paintXY(ImageArrayBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->currentImage, x, y, this->anchor);
}


// throws Exception
void ImageArrayBaseRotationAnimation_close(ImageArrayBaseRotationAnimation* this) {
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->imageArray);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->imageArray[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->currentImage);
}


// throws Throwable
void ImageArrayBaseRotationAnimation_finalize(ImageArrayBaseRotationAnimation* this) {
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->imageArray);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->imageArray[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->currentImage);
}

