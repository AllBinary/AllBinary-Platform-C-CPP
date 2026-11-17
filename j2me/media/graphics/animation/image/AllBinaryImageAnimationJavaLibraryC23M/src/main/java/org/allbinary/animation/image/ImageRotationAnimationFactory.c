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
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct ImageRotationAnimationFactory ImageRotationAnimationFactory;
struct ImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    int16_t angleIncrement;
};


ImageRotationAnimationFactory* ImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

void ImageRotationAnimationFactory_init(ImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* ImageRotationAnimationFactory_getInstance(ImageRotationAnimationFactory* this, int32_t instanceId);
int16_t ImageRotationAnimationFactory_getAngleIncrementP(ImageRotationAnimationFactory* this);

static void ImageRotationAnimationFactory_initFields(ImageRotationAnimationFactory* this) {
    
}


void ImageRotationAnimationFactory_init(ImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        ImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
}

ImageRotationAnimationFactory* ImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageRotationAnimationFactory* this = calloc(1, sizeof(ImageRotationAnimationFactory));
    ImageRotationAnimationFactory_init(this, image, width, height, dx, dy, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageRotationAnimationFactory_getInstance(ImageRotationAnimationFactory* this, int32_t instanceId) {
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AdjustedImageBaseRotationAnimation_new(ImageRotationAnimationFactory_getImage(this), AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return ImageBaseRotationAnimation_new(ImageRotationAnimationFactory_getImage(this), AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


int16_t ImageRotationAnimationFactory_getAngleIncrementP(ImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}

