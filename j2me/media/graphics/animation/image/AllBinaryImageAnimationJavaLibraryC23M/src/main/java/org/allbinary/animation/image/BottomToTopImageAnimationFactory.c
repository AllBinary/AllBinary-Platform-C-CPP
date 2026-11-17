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
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct BottomToTopImageAnimationFactory BottomToTopImageAnimationFactory;
struct BottomToTopImageAnimationFactory {
    BaseImageAnimationFactory base;
};


BottomToTopImageAnimationFactory* BottomToTopImageAnimationFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void BottomToTopImageAnimationFactory_init(BottomToTopImageAnimationFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* BottomToTopImageAnimationFactory_getInstance(BottomToTopImageAnimationFactory* this, int32_t instanceId);


void BottomToTopImageAnimationFactory_init(BottomToTopImageAnimationFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), Image_getWidth(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}

BottomToTopImageAnimationFactory* BottomToTopImageAnimationFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
    BottomToTopImageAnimationFactory* this = calloc(1, sizeof(BottomToTopImageAnimationFactory));
    BottomToTopImageAnimationFactory_init(this, image, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* BottomToTopImageAnimationFactory_getInstance(BottomToTopImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, BottomToTopImageAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        return BottomToTopImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

