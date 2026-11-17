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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"

//TWB - Adjustments should be done in the resource creation and not at the animation level
typedef struct PooledImageArrayRotationAnimationFactory PooledImageArrayRotationAnimationFactory;
struct PooledImageArrayRotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    Any* allBinaryImageRotationAnimationInfo;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void PooledImageArrayRotationAnimationFactory_init(PooledImageArrayRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* PooledImageArrayRotationAnimationFactory_getInstance(PooledImageArrayRotationAnimationFactory* this, int32_t instanceId);
void PooledImageArrayRotationAnimationFactory_setInitialScale(PooledImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties);

static void PooledImageArrayRotationAnimationFactory_initFields(PooledImageArrayRotationAnimationFactory* this) {
    this->allBinaryImageRotationAnimationInfo = NullUtil_getInstance()->NULL_OBJECT;
    
}


// throws Exception
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        int32_t angleIncrement = (totalAngle / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()));
        return PooledImageArrayRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), -(Image_getWidth(image) >> 2), -(Image_getHeight(image) >> 2), angleIncrement, animationBehaviorFactory);
}


// throws Exception
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        int32_t angleIncrement = (totalAngle / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()));
        return PooledImageArrayRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), dx, dy, angleIncrement, animationBehaviorFactory);
}


void PooledImageArrayRotationAnimationFactory_init(PooledImageArrayRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    PooledImageArrayRotationAnimationFactory_initFields(this);
        this->animationBehaviorFactory = animationBehaviorFactory;
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        Image** imageArray = ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), image, angleIncrement, totalAngle);
        this->allBinaryImageRotationAnimationInfo = ImageArrayRotationAnimationInfo_new(imageArray, angleIncrement, totalAngle, dx, dy);
}

PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    PooledImageArrayRotationAnimationFactory* this = calloc(1, sizeof(PooledImageArrayRotationAnimationFactory));
    PooledImageArrayRotationAnimationFactory_init(this, image, width, height, dx, dy, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* PooledImageArrayRotationAnimationFactory_getInstance(PooledImageArrayRotationAnimationFactory* this, int32_t instanceId) {
        return AdjustedImageArrayRotationAnimation_createAdjustedImageArrayRotationAnimationInfo(this->allBinaryImageRotationAnimationInfo, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void PooledImageArrayRotationAnimationFactory_setInitialScale(PooledImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

