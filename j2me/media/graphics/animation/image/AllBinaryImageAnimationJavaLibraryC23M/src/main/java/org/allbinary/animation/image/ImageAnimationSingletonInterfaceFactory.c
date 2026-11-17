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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"
#include "org/allbinary/image/AnimationFrameToImageUtil.h"

typedef struct ImageAnimationSingletonInterfaceFactory ImageAnimationSingletonInterfaceFactory;
struct ImageAnimationSingletonInterfaceFactory {
    SingletonAnimationInterfaceFactory base;
};


ImageAnimationSingletonInterfaceFactory* ImageAnimationSingletonInterfaceFactory_new(Animation* animationInterface, int32_t width, int32_t height);

void ImageAnimationSingletonInterfaceFactory_init(ImageAnimationSingletonInterfaceFactory* this, Animation* animationInterface, int32_t width, int32_t height);


void ImageAnimationSingletonInterfaceFactory_init(ImageAnimationSingletonInterfaceFactory* this, Animation* animationInterface, int32_t width, int32_t height) {
        SingletonAnimationInterfaceFactory_init(&this->base, ImageAnimation_new(AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil_getInstance(), width, height, animationInterface), AnimationBehavior_getInstance()));
}

ImageAnimationSingletonInterfaceFactory* ImageAnimationSingletonInterfaceFactory_new(Animation* animationInterface, int32_t width, int32_t height) {
    ImageAnimationSingletonInterfaceFactory* this = calloc(1, sizeof(ImageAnimationSingletonInterfaceFactory));
    ImageAnimationSingletonInterfaceFactory_init(this, animationInterface, width, height);
    return this;
}

