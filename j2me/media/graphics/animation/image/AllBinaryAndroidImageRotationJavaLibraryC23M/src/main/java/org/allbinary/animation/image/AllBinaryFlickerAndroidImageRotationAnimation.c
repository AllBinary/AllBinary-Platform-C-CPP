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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/AndroidImageUtil.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"

typedef struct AllBinaryFlickerAndroidImageRotationAnimation AllBinaryFlickerAndroidImageRotationAnimation;
struct AllBinaryFlickerAndroidImageRotationAnimation {
    ImageBaseRotationAnimation base;
    ImageModifierUtil* imageModifierUtil;
    AndroidImageUtil* androidImageUtil;
    Matrix* matrix;
    int32_t halfWidth;
    int32_t halfHeight;
    int16_t increment;
    Image* originalImage;
};


AllBinaryFlickerAndroidImageRotationAnimation* AllBinaryFlickerAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);

void AllBinaryFlickerAndroidImageRotationAnimation_init(AllBinaryFlickerAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
void AllBinaryFlickerAndroidImageRotationAnimation_setBasicColorP(AllBinaryFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryFlickerAndroidImageRotationAnimation_changeBasicColor(AllBinaryFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor);
void AllBinaryFlickerAndroidImageRotationAnimation_setAlpha(AllBinaryFlickerAndroidImageRotationAnimation* this, int32_t alpha);
void AllBinaryFlickerAndroidImageRotationAnimation_nextRotation(AllBinaryFlickerAndroidImageRotationAnimation* this);
void AllBinaryFlickerAndroidImageRotationAnimation_previousRotation(AllBinaryFlickerAndroidImageRotationAnimation* this);
static void AllBinaryFlickerAndroidImageRotationAnimation_updateImage(AllBinaryFlickerAndroidImageRotationAnimation* this);
void AllBinaryFlickerAndroidImageRotationAnimation_setFrame(AllBinaryFlickerAndroidImageRotationAnimation* this, int32_t index);

static void AllBinaryFlickerAndroidImageRotationAnimation_initFields(AllBinaryFlickerAndroidImageRotationAnimation* this) {
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    this->androidImageUtil = AndroidImageUtil_getInstance();
    this->matrix = Matrix_new();
    
    
    
    
}


void AllBinaryFlickerAndroidImageRotationAnimation_init(AllBinaryFlickerAndroidImageRotationAnimation* this, Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AllBinaryFlickerAndroidImageRotationAnimation_initFields(this);
        this->originalImage = originalImage;
        this->halfWidth = (Image_getWidth(image) >> 1);
        this->halfHeight = (Image_getHeight(image) >> 1);
        this->increment = ((int16_t) (JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getAngleIncrement)));
}

AllBinaryFlickerAndroidImageRotationAnimation* AllBinaryFlickerAndroidImageRotationAnimation_new(Image* originalImage, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    AllBinaryFlickerAndroidImageRotationAnimation* this = calloc(1, sizeof(AllBinaryFlickerAndroidImageRotationAnimation));
    AllBinaryFlickerAndroidImageRotationAnimation_init(this, originalImage, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


void AllBinaryFlickerAndroidImageRotationAnimation_setBasicColorP(AllBinaryFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (AllBinaryFlickerAndroidImageRotationAnimation_getBasicColorP(this) == nullptr || JAVA_CALL(AllBinaryFlickerAndroidImageRotationAnimation_getBasicColorP(this), intValue) != BasicColor_intValue(basicColor)) {
            ImageModifierUtil_setColor(this->imageModifierUtil, this->originalImage, AllBinaryFlickerAndroidImageRotationAnimation_getImage(this), 0, basicColor);
            changed = true;
        }
        ImageBaseRotationAnimation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            Matrix_setRotate(this->matrix, 0.0f, ((float) this->halfWidth), ((float) this->halfHeight));
            AllBinaryFlickerAndroidImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryFlickerAndroidImageRotationAnimation_changeBasicColor(AllBinaryFlickerAndroidImageRotationAnimation* this, BasicColor* basicColor) {
        AllBinaryFlickerAndroidImageRotationAnimation_setBasicColorP(this, basicColor);
}


void AllBinaryFlickerAndroidImageRotationAnimation_setAlpha(AllBinaryFlickerAndroidImageRotationAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->alphaP != alpha) {
            changed = true;
        }
        ImageBaseRotationAnimation_setAlpha((&this->base), alpha);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImage, AllBinaryFlickerAndroidImageRotationAnimation_getImage(this), 0, this->alphaP);
        if (changed) {
            Matrix_setRotate(this->matrix, 0.0f, ((float) this->halfWidth), ((float) this->halfHeight));
            AllBinaryFlickerAndroidImageRotationAnimation_updateImage(this);
        }
}


void AllBinaryFlickerAndroidImageRotationAnimation_nextRotation(AllBinaryFlickerAndroidImageRotationAnimation* this) {
        ImageBaseRotationAnimation_nextRotation((&this->base));
        Matrix_setRotate(this->matrix, ((float) this->increment), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryFlickerAndroidImageRotationAnimation_updateImage(this);
}


void AllBinaryFlickerAndroidImageRotationAnimation_previousRotation(AllBinaryFlickerAndroidImageRotationAnimation* this) {
        ImageBaseRotationAnimation_previousRotation((&this->base));
        Matrix_setRotate(this->matrix, ((float) (-this->increment)), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryFlickerAndroidImageRotationAnimation_updateImage(this);
}


static void AllBinaryFlickerAndroidImageRotationAnimation_updateImage(AllBinaryFlickerAndroidImageRotationAnimation* this) {
        AndroidImageUtil_rotate(this->androidImageUtil, AllBinaryFlickerAndroidImageRotationAnimation_getImage(this), this->originalImage, this->matrix, this->imageModifierUtil->paint);
}


void AllBinaryFlickerAndroidImageRotationAnimation_setFrame(AllBinaryFlickerAndroidImageRotationAnimation* this, int32_t index) {
        int32_t currentFrame = JAVA_CALL(this->circularIndexUtil, getIndex);
        JAVA_CALL(this->circularIndexUtil, setIndex, index);
        int32_t newFrame = JAVA_CALL(this->circularIndexUtil, getIndex);
        AngleInfo_adjustAngle(this->angleInfo, newFrame);
        Matrix_setRotate(this->matrix, ((float) (newFrame - currentFrame)) * ((float) this->increment), ((float) this->halfWidth), ((float) this->halfHeight));
        AllBinaryFlickerAndroidImageRotationAnimation_updateImage(this);
}

