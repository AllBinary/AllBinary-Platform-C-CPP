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
#include "android/graphics/Matrix.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/image/AndroidImageUtil.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

typedef struct AllBinaryNoFlickerAndroidImageRotationAnimation AllBinaryNoFlickerAndroidImageRotationAnimation;
struct AllBinaryNoFlickerAndroidImageRotationAnimation {
    ImageBaseRotationAnimation base;
    ImageModifierUtil* imageModifierUtil;
    AndroidImageUtil* androidImageUtil;
    Matrix* matrix;
    int32_t halfWidth;
    int32_t halfHeight;
    int16_t increment;
    Image* originalImage;
    Image** twoImages;
    Image* imageToShow;
    int32_t bufferedImageIndex;
};


AllBinaryNoFlickerAndroidImageRotationAnimation* AllBinaryNoFlickerAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void AllBinaryNoFlickerAndroidImageRotationAnimation_init(AllBinaryNoFlickerAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
void AllBinaryNoFlickerAndroidImageRotationAnimation_setBasicColorP(AllBinaryNoFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryNoFlickerAndroidImageRotationAnimation_changeBasicColor(AllBinaryNoFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryNoFlickerAndroidImageRotationAnimation_setAlpha(AllBinaryNoFlickerAndroidImageRotationAnimation* this, int32_t alpha);
void AllBinaryNoFlickerAndroidImageRotationAnimation_nextRotation(AllBinaryNoFlickerAndroidImageRotationAnimation* this);
void AllBinaryNoFlickerAndroidImageRotationAnimation_previousRotation(AllBinaryNoFlickerAndroidImageRotationAnimation* this);
static void AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(AllBinaryNoFlickerAndroidImageRotationAnimation* this);
void AllBinaryNoFlickerAndroidImageRotationAnimation_setFrame(AllBinaryNoFlickerAndroidImageRotationAnimation* this, int32_t index);
void AllBinaryNoFlickerAndroidImageRotationAnimation_swap(AllBinaryNoFlickerAndroidImageRotationAnimation* this);
void AllBinaryNoFlickerAndroidImageRotationAnimation_paintXY(AllBinaryNoFlickerAndroidImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void AllBinaryNoFlickerAndroidImageRotationAnimation_initFields(AllBinaryNoFlickerAndroidImageRotationAnimation* this) {
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    this->androidImageUtil = AndroidImageUtil_getInstance();
    this->matrix = Matrix_new();
    
    
    
    
    this->twoImages = ((Image**) java_array_new(sizeof(Image*), 2));
    
    this->bufferedImageIndex = 0;
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_init(AllBinaryNoFlickerAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryNoFlickerAndroidImageRotationAnimation_initFields(this);
        this->originalImage = originalImage;
        this->halfWidth = (Image_getWidth(image) >> 1);
        this->halfHeight = (Image_getHeight(image) >> 1);
        this->increment = ((int16_t) (JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getAngleIncrement)));
        this->imageToShow = image;
        this->twoImages[0] = image;
        this->twoImages[1] = ImageCopyUtil_createImage(ImageCopyUtil_getInstance(), image);
}

AllBinaryNoFlickerAndroidImageRotationAnimation* AllBinaryNoFlickerAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    AllBinaryNoFlickerAndroidImageRotationAnimation* this = calloc(1, sizeof(AllBinaryNoFlickerAndroidImageRotationAnimation));
    AllBinaryNoFlickerAndroidImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_setBasicColorP(AllBinaryNoFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (AllBinaryNoFlickerAndroidImageRotationAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(AllBinaryNoFlickerAndroidImageRotationAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            ImageModifierUtil_setColor(this->imageModifierUtil, this->originalImage, this->imageToShow, 0, basicColor);
            changed = true;
        }
        ImageBaseRotationAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            Matrix_setRotate(this->matrix, 0.0f, ((float) this->halfWidth), ((float) this->halfHeight));
            AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_changeBasicColor(AllBinaryNoFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor) {
        AllBinaryNoFlickerAndroidImageRotationAnimation_setBasicColorP(this, basicColor);
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_setAlpha(AllBinaryNoFlickerAndroidImageRotationAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        ImageBaseRotationAnimation_setAlpha((&this->base), alpha);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImage, this->imageToShow, 0, this->alphaP);
        if (changed) {
            Matrix_setRotate(this->matrix, 0.0f, ((float) this->halfWidth), ((float) this->halfHeight));
            AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_nextRotation(AllBinaryNoFlickerAndroidImageRotationAnimation* this) {
        ImageBaseRotationAnimation_nextRotation((&this->base));
        Matrix_setRotate(this->matrix, ((float) this->increment), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(this);
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_previousRotation(AllBinaryNoFlickerAndroidImageRotationAnimation* this) {
        ImageBaseRotationAnimation_previousRotation((&this->base));
        Matrix_setRotate(this->matrix, ((float) (-this->increment)), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(this);
}


static void AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(AllBinaryNoFlickerAndroidImageRotationAnimation* this) {
        AndroidImageUtil_rotate(this->androidImageUtil, this->twoImages[this->bufferedImageIndex], this->originalImage, this->matrix, this->imageModifierUtil->paint);
        AllBinaryNoFlickerAndroidImageRotationAnimation_swap(this);
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_setFrame(AllBinaryNoFlickerAndroidImageRotationAnimation* this, int32_t index) {
        int32_t currentFrame = JAVA_CALL(this->circularIndexUtil, getIndex);
        JAVA_CALL(this->circularIndexUtil, setIndex, index);
        int32_t newFrame = JAVA_CALL(this->circularIndexUtil, getIndex);
        AngleInfo_adjustAngle(this->angleInfo, newFrame);
        Matrix_setRotate(this->matrix, ((float) (newFrame - currentFrame)) * ((float) this->increment), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryNoFlickerAndroidImageRotationAnimation_updateImage(this);
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_swap(AllBinaryNoFlickerAndroidImageRotationAnimation* this) {
        this->imageToShow = this->twoImages[this->bufferedImageIndex];
        if (this->bufferedImageIndex == 0) {
            this->bufferedImageIndex = 1;
        } else {
            this->bufferedImageIndex = 0;
        }
}


void AllBinaryNoFlickerAndroidImageRotationAnimation_paintXY(AllBinaryNoFlickerAndroidImageRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->imageToShow, x, y, this->anchor);
}

