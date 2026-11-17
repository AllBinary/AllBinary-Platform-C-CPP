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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct ImageArrayAnimationFactory ImageArrayAnimationFactory;
struct ImageArrayAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t dx;
    int32_t dy;
    Image** imageArray;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


ImageArrayAnimationFactory* ImageArrayAnimationFactory_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void ImageArrayAnimationFactory_init(ImageArrayAnimationFactory* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* ImageArrayAnimationFactory_getInstance(ImageArrayAnimationFactory* this, int32_t instanceId);
void ImageArrayAnimationFactory_setInitialScale(ImageArrayAnimationFactory* this, ScaleProperties* scaleProperties);

static void ImageArrayAnimationFactory_initFields(ImageArrayAnimationFactory* this) {
    this->dx = 0;
    this->dy = 0;
    
    
}


void ImageArrayAnimationFactory_init(ImageArrayAnimationFactory* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageArrayAnimationFactory_initFields(this);
        this->imageArray = imageArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
        this->dx = dx;
        this->dy = dy;
}

ImageArrayAnimationFactory* ImageArrayAnimationFactory_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageArrayAnimationFactory* this = calloc(1, sizeof(ImageArrayAnimationFactory));
    ImageArrayAnimationFactory_init(this, imageArray, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageArrayAnimationFactory_getInstance(ImageArrayAnimationFactory* this, int32_t instanceId) {
        if (this->dx != 0 || this->dy != 0) {
            return AdjustedImageArrayAnimation_new(this->imageArray, this->dx, this->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return ImageArrayAnimation_new(this->imageArray, AnimationBehavior_getInstance());
        }
}


void ImageArrayAnimationFactory_setInitialScale(ImageArrayAnimationFactory* this, ScaleProperties* scaleProperties) {
}

