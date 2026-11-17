/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct LazyImageRotationAnimationFactory LazyImageRotationAnimationFactory;
struct LazyImageRotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t layoutIndex;
    BaseImageAnimationFactory* animationInterfaceFactoryInterface;
    ScaleProperties* scaleProperties;
};


LazyImageRotationAnimationFactory* LazyImageRotationAnimationFactory_new(int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface);

void LazyImageRotationAnimationFactory_init(LazyImageRotationAnimationFactory* this, int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface);
Animation* LazyImageRotationAnimationFactory_getInstance(LazyImageRotationAnimationFactory* this, int32_t instanceId);
void LazyImageRotationAnimationFactory_setInitialScale(LazyImageRotationAnimationFactory* this, ScaleProperties* scaleProperties);

static void LazyImageRotationAnimationFactory_initFields(LazyImageRotationAnimationFactory* this) {
    
    
    this->scaleProperties = ScaleProperties_instance;
}


void LazyImageRotationAnimationFactory_init(LazyImageRotationAnimationFactory* this, int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface) {
    LazyImageRotationAnimationFactory_initFields(this);
        this->layoutIndex = layoutIndex;
        this->animationInterfaceFactoryInterface = animationInterfaceFactoryInterface;
        ImageCacheFactory_getInstance()->hasAnyLazyAnimationFactories = true;
        if (this->animationInterfaceFactoryInterface->animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

LazyImageRotationAnimationFactory* LazyImageRotationAnimationFactory_new(int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface) {
    LazyImageRotationAnimationFactory* this = calloc(1, sizeof(LazyImageRotationAnimationFactory));
    LazyImageRotationAnimationFactory_init(this, layoutIndex, associatedLazyAnimationId, animationInterfaceFactoryInterface);
    return this;
}


// throws Exception
Animation* LazyImageRotationAnimationFactory_getInstance(LazyImageRotationAnimationFactory* this, int32_t instanceId) {
        if (JAVA_CALL(BaseImageAnimationFactory_getImage(this->animationInterfaceFactoryInterface), isReady)) {
            BaseImageAnimationFactory_setInitialScale(this->animationInterfaceFactoryInterface, this->scaleProperties);
            return BaseImageAnimationFactory_getInstance(this->animationInterfaceFactoryInterface, instanceId);
        } else {
            return LazyImageRotationAnimation_new(this->layoutIndex, instanceId, this->scaleProperties, this->animationInterfaceFactoryInterface, JAVA_CALL(this->animationInterfaceFactoryInterface->animationBehaviorFactory, getOrCreateInstance));
        }
}


void LazyImageRotationAnimationFactory_setInitialScale(LazyImageRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
        this->scaleProperties = scaleProperties;
}

