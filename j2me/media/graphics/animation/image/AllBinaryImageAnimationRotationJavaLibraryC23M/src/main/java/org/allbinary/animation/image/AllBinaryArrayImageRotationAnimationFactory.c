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
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryArrayImageRotationAnimationFactory AllBinaryArrayImageRotationAnimationFactory;
struct AllBinaryArrayImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    Image** imageArray;
    int32_t angleIncrement;
};


AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactory(Image* image, int32_t dx, int32_t dy);
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement);

void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
static void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this);
static void AllBinaryArrayImageRotationAnimationFactory_initDXY(AllBinaryArrayImageRotationAnimationFactory* this, int32_t dx, int32_t dy);
Animation* AllBinaryArrayImageRotationAnimationFactory_getInstance(AllBinaryArrayImageRotationAnimationFactory* this, int32_t instanceId);
void AllBinaryArrayImageRotationAnimationFactory_setImageArray(AllBinaryArrayImageRotationAnimationFactory* this, Image** imageArray);
int32_t AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(AllBinaryArrayImageRotationAnimationFactory* this);

static void AllBinaryArrayImageRotationAnimationFactory_initFields(AllBinaryArrayImageRotationAnimationFactory* this) {
    this->imageArray = NullImage_NULL_IMAGE_ARRAY;
    
}


// throws Exception
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactory(Image* image, int32_t dx, int32_t dy) {
        AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), AngleFactory_getInstance()->TOTAL_ANGLE / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()), AnimationBehaviorFactory_getInstance());
        AllBinaryArrayImageRotationAnimationFactory_initDXY(arrayImageRotationAnimationFactory, dx, dy);
        return arrayImageRotationAnimationFactory;
}


// throws Exception
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement) {
        AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), angleIncrement, AnimationBehaviorFactory_getInstance());
        AllBinaryArrayImageRotationAnimationFactory_initDXY(arrayImageRotationAnimationFactory, dx, dy);
        return arrayImageRotationAnimationFactory;
}


void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        AllBinaryArrayImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
        AllBinaryArrayImageRotationAnimationFactory_init(this);
}

AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryArrayImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryArrayImageRotationAnimationFactory));
    AllBinaryArrayImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
static void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this) {
        AllBinaryArrayImageRotationAnimationFactory_setImageArray(this, ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), AllBinaryArrayImageRotationAnimationFactory_getImage(this), AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE)));
}


static void AllBinaryArrayImageRotationAnimationFactory_initDXY(AllBinaryArrayImageRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
        this->animationFactoryInitializationVisitor->originalDx = dx;
        this->animationFactoryInitializationVisitor->originalDy = dy;
}


// throws Exception
Animation* AllBinaryArrayImageRotationAnimationFactory_getInstance(AllBinaryArrayImageRotationAnimationFactory* this, int32_t instanceId) {
        Image** scaledImageArray = ((Image**) java_array_new(sizeof(Image*), java_array_length(this->imageArray)));
        int32_t size = java_array_length(scaledImageArray);
        Image* image = AllBinaryArrayImageRotationAnimationFactory_getImage(this);
        for (int32_t index = 0; index < size; index++) {
            scaledImageArray[index] = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, image, Image_getWidth(image), Image_getHeight(image), this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        }
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AdjustedImageArrayRotationAnimation_new(scaledImageArray, AngleInfo_getInstance(((int16_t) AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return ImageArrayRotationAnimation_new(scaledImageArray, AngleInfo_getInstance(((int16_t) AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


void AllBinaryArrayImageRotationAnimationFactory_setImageArray(AllBinaryArrayImageRotationAnimationFactory* this, Image** imageArray) {
        this->imageArray = imageArray;
}


int32_t AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(AllBinaryArrayImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}

