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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/media/image/ImageRotationUtil.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

typedef struct AllBinaryJ2SEImageRotationAnimation AllBinaryJ2SEImageRotationAnimation;
struct AllBinaryJ2SEImageRotationAnimation {
    ImageBaseRotationAnimation base;
    ImageRotationUtil* imageRotationUtil;
    ImageModifierUtil* imageModifierUtil;
    Image* realOriginalImage;
    Image** originalImageArray;
    Image** twoImages;
    Image* imageToShow;
    int32_t bufferedImageIndex;
    float lastScaleX;
    float lastScaleY;
    float scaleX;
    float scaleY;
    float maxScaleX;
    float maxScaleY;
    ModifierBaseProcessor* alphaProcessor;
    ModifierBaseProcessor* setColorProcessor;
    ModifierBaseProcessor* changeColorProcessor;
    ScaleBaseProcessor* scaleProcessor;
};


AllBinaryJ2SEImageRotationAnimation* AllBinaryJ2SEImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void AllBinaryJ2SEImageRotationAnimation_init(AllBinaryJ2SEImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
void AllBinaryJ2SEImageRotationAnimation_setBasicColorP(AllBinaryJ2SEImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryJ2SEImageRotationAnimation_changeBasicColor(AllBinaryJ2SEImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryJ2SEImageRotationAnimation_setAlpha(AllBinaryJ2SEImageRotationAnimation* this, int32_t alpha);
void AllBinaryJ2SEImageRotationAnimation_setScale(AllBinaryJ2SEImageRotationAnimation* this, float scaleX, float scaleY);
void AllBinaryJ2SEImageRotationAnimation_setMaxScale(AllBinaryJ2SEImageRotationAnimation* this, float maxScaleX, float maxScaleY);
void AllBinaryJ2SEImageRotationAnimation_nextRotation(AllBinaryJ2SEImageRotationAnimation* this);
void AllBinaryJ2SEImageRotationAnimation_previousRotation(AllBinaryJ2SEImageRotationAnimation* this);
static void AllBinaryJ2SEImageRotationAnimation_updateImage(AllBinaryJ2SEImageRotationAnimation* this);
void AllBinaryJ2SEImageRotationAnimation_setFrame(AllBinaryJ2SEImageRotationAnimation* this, int32_t index);
void AllBinaryJ2SEImageRotationAnimation_swap(AllBinaryJ2SEImageRotationAnimation* this);
void AllBinaryJ2SEImageRotationAnimation_paintXY(AllBinaryJ2SEImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void AllBinaryJ2SEImageRotationAnimation_close(AllBinaryJ2SEImageRotationAnimation* this);
void AllBinaryJ2SEImageRotationAnimation_finalize(AllBinaryJ2SEImageRotationAnimation* this);

static void AllBinaryJ2SEImageRotationAnimation_initFields(AllBinaryJ2SEImageRotationAnimation* this) {
    this->imageRotationUtil = ImageRotationUtil_getInstance();
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    
    this->originalImageArray = ((Image**) java_array_new(sizeof(Image*), 1));
    this->twoImages = ((Image**) java_array_new(sizeof(Image*), 2));
    
    this->bufferedImageIndex = 0;
    this->lastScaleX = 1.0f;
    this->lastScaleY = 1.0f;
    this->scaleX = 1.0f;
    this->scaleY = 1.0f;
    this->maxScaleX = 0.0f;
    this->maxScaleY = 0.0f;
    this->alphaProcessor = ModifierBaseProcessor_getInstance();
    this->setColorProcessor = ModifierBaseProcessor_getInstance();
    this->changeColorProcessor = ModifierBaseProcessor_getInstance();
    this->scaleProcessor = ScaleProcessor_getInstance();
}


void AllBinaryJ2SEImageRotationAnimation_init(AllBinaryJ2SEImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryJ2SEImageRotationAnimation_initFields(this);
        this->realOriginalImage = originalImage;
        this->originalImageArray[0] = originalImage;
        this->imageToShow = image;
        this->twoImages[0] = image;
        this->twoImages[1] = ImageCopyUtil_createImageForRotation(ImageCopyUtil_getInstance(), image);
}

AllBinaryJ2SEImageRotationAnimation* AllBinaryJ2SEImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    AllBinaryJ2SEImageRotationAnimation* this = calloc(1, sizeof(AllBinaryJ2SEImageRotationAnimation));
    AllBinaryJ2SEImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


void AllBinaryJ2SEImageRotationAnimation_setBasicColorP(AllBinaryJ2SEImageRotationAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (AllBinaryJ2SEImageRotationAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(AllBinaryJ2SEImageRotationAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        ImageBaseRotationAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            this->setColorProcessor = SetColorProcessor_getInstance();
            AllBinaryJ2SEImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryJ2SEImageRotationAnimation_changeBasicColor(AllBinaryJ2SEImageRotationAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (AllBinaryJ2SEImageRotationAnimation_getChangeBasicColor(this) == nullptr || JAVA_CALL(AllBinaryJ2SEImageRotationAnimation_getChangeBasicColor(this), intValue) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        ImageBaseRotationAnimation_changeBasicColor((&this->base), basicColor);
        if (changed) {
            this->changeColorProcessor = ChangeColorProcessor_getInstance();
            AllBinaryJ2SEImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryJ2SEImageRotationAnimation_setAlpha(AllBinaryJ2SEImageRotationAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        ImageBaseRotationAnimation_setAlpha((&this->base), alpha);
        if (changed) {
            this->alphaProcessor = AlphaProcessor_getInstance();
            AllBinaryJ2SEImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryJ2SEImageRotationAnimation_setScale(AllBinaryJ2SEImageRotationAnimation* this, float scaleX, float scaleY) {
        this->scaleX = scaleX;
        this->scaleY = scaleY;
        if (this->scaleX != this->lastScaleX || this->scaleY != this->lastScaleY) {
            ScaleBaseProcessor_update(this->scaleProcessor, this->realOriginalImage, this->originalImageArray, this->twoImages, this->bufferedImageIndex, this->scaleX, this->scaleY, this->maxScaleX, this->maxScaleY);
            AllBinaryJ2SEImageRotationAnimation_updateImage(this);
        }
        this->lastScaleX = this->scaleX;
        this->lastScaleY = this->scaleY;
}


void AllBinaryJ2SEImageRotationAnimation_setMaxScale(AllBinaryJ2SEImageRotationAnimation* this, float maxScaleX, float maxScaleY) {
        this->maxScaleX = maxScaleX;
        this->maxScaleY = maxScaleY;
        ScaleBaseProcessor_update(this->scaleProcessor, this->realOriginalImage, this->originalImageArray, this->twoImages, this->bufferedImageIndex, this->scaleX, this->scaleY, this->maxScaleX, this->maxScaleY);
        AllBinaryJ2SEImageRotationAnimation_updateImage(this);
}


void AllBinaryJ2SEImageRotationAnimation_nextRotation(AllBinaryJ2SEImageRotationAnimation* this) {
        ImageBaseRotationAnimation_nextRotation((&this->base));
        AllBinaryJ2SEImageRotationAnimation_updateImage(this);
}


void AllBinaryJ2SEImageRotationAnimation_previousRotation(AllBinaryJ2SEImageRotationAnimation* this) {
        ImageBaseRotationAnimation_previousRotation((&this->base));
        AllBinaryJ2SEImageRotationAnimation_updateImage(this);
}


static void AllBinaryJ2SEImageRotationAnimation_updateImage(AllBinaryJ2SEImageRotationAnimation* this) {
        ImageRotationUtil_rotateImage(this->imageRotationUtil, this->originalImageArray[0], this->twoImages[this->bufferedImageIndex], AngleInfo_getAngle(this->angleInfo) + 90);
        ModifierBaseProcessor_updateAlpha(this->alphaProcessor, this->imageModifierUtil, NullImage_NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->alphaP);
        ModifierBaseProcessor_updateColor(this->setColorProcessor, this->imageModifierUtil, NullImage_NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->basicColor);
        ModifierBaseProcessor_updateColor(this->changeColorProcessor, this->imageModifierUtil, NullImage_NULL_IMAGE, this->twoImages[this->bufferedImageIndex], 0, this->changeBasicColorP);
        AllBinaryJ2SEImageRotationAnimation_swap(this);
}


void AllBinaryJ2SEImageRotationAnimation_setFrame(AllBinaryJ2SEImageRotationAnimation* this, int32_t index) {
        ImageBaseRotationAnimation_setFrame((&this->base), index);
        AllBinaryJ2SEImageRotationAnimation_updateImage(this);
}


void AllBinaryJ2SEImageRotationAnimation_swap(AllBinaryJ2SEImageRotationAnimation* this) {
        this->imageToShow = this->twoImages[this->bufferedImageIndex];
        if (this->bufferedImageIndex == 0) {
            this->bufferedImageIndex = 1;
        } else {
            this->bufferedImageIndex = 0;
        }
}


void AllBinaryJ2SEImageRotationAnimation_paintXY(AllBinaryJ2SEImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->imageToShow, x, y, this->anchor);
}


// throws Exception
void AllBinaryJ2SEImageRotationAnimation_close(AllBinaryJ2SEImageRotationAnimation* this) {
        ImageBaseRotationAnimation_close((&this->base));
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->twoImages);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->twoImages[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->realOriginalImage);
        DisposalUtil_disposeImage(disposalUtil, this->imageToShow);
}


// throws Throwable
void AllBinaryJ2SEImageRotationAnimation_finalize(AllBinaryJ2SEImageRotationAnimation* this) {
        ImageBaseRotationAnimation_finalize((&this->base));
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->twoImages);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->twoImages[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->realOriginalImage);
        DisposalUtil_disposeImage(disposalUtil, this->imageToShow);
}

