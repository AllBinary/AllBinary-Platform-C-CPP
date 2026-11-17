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
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct AllBinaryFlickerAndroidImageRotationAnimationFactory AllBinaryFlickerAndroidImageRotationAnimationFactory;
struct AllBinaryFlickerAndroidImageRotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    Image* image;
    int16_t angleIncrement;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


AllBinaryFlickerAndroidImageRotationAnimationFactory* AllBinaryFlickerAndroidImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinaryFlickerAndroidImageRotationAnimationFactory_init(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* AllBinaryFlickerAndroidImageRotationAnimationFactory_getInstance(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, int32_t instanceId);
int16_t AllBinaryFlickerAndroidImageRotationAnimationFactory_getAngleIncrement(AllBinaryFlickerAndroidImageRotationAnimationFactory* this);
void AllBinaryFlickerAndroidImageRotationAnimationFactory_setImage(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, Image* image);
Image* AllBinaryFlickerAndroidImageRotationAnimationFactory_getImage(AllBinaryFlickerAndroidImageRotationAnimationFactory* this);
void AllBinaryFlickerAndroidImageRotationAnimationFactory_setInitialScale(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, ScaleProperties* scaleProperties);

static void AllBinaryFlickerAndroidImageRotationAnimationFactory_initFields(AllBinaryFlickerAndroidImageRotationAnimationFactory* this) {
    this->image = NullImage_NULL_IMAGE;
    
    
}


void AllBinaryFlickerAndroidImageRotationAnimationFactory_init(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryFlickerAndroidImageRotationAnimationFactory_initFields(this);
        AllBinaryFlickerAndroidImageRotationAnimationFactory_setImage(this, image);
        this->angleIncrement = angleIncrement;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

AllBinaryFlickerAndroidImageRotationAnimationFactory* AllBinaryFlickerAndroidImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryFlickerAndroidImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryFlickerAndroidImageRotationAnimationFactory));
    AllBinaryFlickerAndroidImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* AllBinaryFlickerAndroidImageRotationAnimationFactory_getInstance(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, int32_t instanceId) {
        Image* image = ImageCopyUtil_createImage(ImageCopyUtil_getInstance(), AllBinaryFlickerAndroidImageRotationAnimationFactory_getImage(this));
        return AllBinaryFlickerAndroidImageRotationAnimation_new(AllBinaryFlickerAndroidImageRotationAnimationFactory_getImage(this), image, AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


int16_t AllBinaryFlickerAndroidImageRotationAnimationFactory_getAngleIncrement(AllBinaryFlickerAndroidImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}


void AllBinaryFlickerAndroidImageRotationAnimationFactory_setImage(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, Image* image) {
        this->image = image;
}


Image* AllBinaryFlickerAndroidImageRotationAnimationFactory_getImage(AllBinaryFlickerAndroidImageRotationAnimationFactory* this) {
        return this->image;
}


void AllBinaryFlickerAndroidImageRotationAnimationFactory_setInitialScale(AllBinaryFlickerAndroidImageRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

