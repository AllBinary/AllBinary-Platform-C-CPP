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
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"
#include "org/allbinary/image/IndexedAnimationToImageArrayUtil.h"

typedef struct ImageArraySingletonAnimationInterfaceFactory ImageArraySingletonAnimationInterfaceFactory;
struct ImageArraySingletonAnimationInterfaceFactory {
    SingletonAnimationInterfaceFactory base;
};


ImageArraySingletonAnimationInterfaceFactory* ImageArraySingletonAnimationInterfaceFactory_new(Image** imageArray);

void ImageArraySingletonAnimationInterfaceFactory_init(ImageArraySingletonAnimationInterfaceFactory* this, Image** imageArray);


void ImageArraySingletonAnimationInterfaceFactory_init(ImageArraySingletonAnimationInterfaceFactory* this, Image** imageArray) {
        SingletonAnimationInterfaceFactory_init(&this->base, ImageArrayAnimation_new(imageArray, AnimationBehavior_getInstance()));
}

ImageArraySingletonAnimationInterfaceFactory* ImageArraySingletonAnimationInterfaceFactory_new(Image** imageArray) {
    ImageArraySingletonAnimationInterfaceFactory* this = calloc(1, sizeof(ImageArraySingletonAnimationInterfaceFactory));
    ImageArraySingletonAnimationInterfaceFactory_init(this, imageArray);
    return this;
}

