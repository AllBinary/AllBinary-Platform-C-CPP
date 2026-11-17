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
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "org/allbinary/vector/VectorInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct VectorToImageArrayRotationAnimationFactory VectorToImageArrayRotationAnimationFactory;
struct VectorToImageArrayRotationAnimationFactory {
    BaseImageAnimationFactory base;
    Image** imageArray;
    int32_t angleIncrement;
};


VectorToImageArrayRotationAnimationFactory* VectorToImageArrayRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);
void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this);
Animation* VectorToImageArrayRotationAnimationFactory_getInstance(VectorToImageArrayRotationAnimationFactory* this, int32_t instanceId);
int32_t VectorToImageArrayRotationAnimationFactory_getAngleIncrement(VectorToImageArrayRotationAnimationFactory* this);
void VectorToImageArrayRotationAnimationFactory_setInitialScale(VectorToImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties);

static void VectorToImageArrayRotationAnimationFactory_initFields(VectorToImageArrayRotationAnimationFactory* this) {
    this->imageArray = NullImage_NULL_IMAGE_ARRAY;
    this->angleIncrement = 0;
}


void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil_getInstance(), VectorInfo_getWidth(vectorInfo), VectorInfo_getHeight(vectorInfo), VectorAnimation_createVectorAnimation(VectorInfo_getPoints(vectorInfo), basicColor, AnimationBehaviorFactory_getOrCreateInstance(animationBehaviorFactory))), PrimitiveIntUtil_getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory);
        VectorToImageArrayRotationAnimationFactory_initFields(this);
        VectorToImageArrayRotationAnimationFactory_init(this);
}

VectorToImageArrayRotationAnimationFactory* VectorToImageArrayRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorToImageArrayRotationAnimationFactory* this = calloc(1, sizeof(VectorToImageArrayRotationAnimationFactory));
    VectorToImageArrayRotationAnimationFactory_init(this, vectorInfo, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this) {
        AngleFactory* angleFactory = AngleFactory_getInstance();
        this->angleIncrement = angleFactory->TOTAL_ANGLE / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance());
        this->imageArray = ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), VectorToImageArrayRotationAnimationFactory_getImage(this), VectorToImageArrayRotationAnimationFactory_getAngleIncrement(this), ((int32_t) angleFactory->TOTAL_ANGLE));
}


// throws Exception
Animation* VectorToImageArrayRotationAnimationFactory_getInstance(VectorToImageArrayRotationAnimationFactory* this, int32_t instanceId) {
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedImageArrayRotationAnimation_new(this->imageArray, AngleInfo_getInstance(((int16_t) VectorToImageArrayRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return AdjustedImageArrayRotationAnimation_createAnimation(this->imageArray, AngleInfo_getInstance(((int16_t) this->angleIncrement)), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


int32_t VectorToImageArrayRotationAnimationFactory_getAngleIncrement(VectorToImageArrayRotationAnimationFactory* this) {
        return this->angleIncrement;
}


void VectorToImageArrayRotationAnimationFactory_setInitialScale(VectorToImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

