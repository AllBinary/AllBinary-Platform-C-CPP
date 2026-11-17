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
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct TopToBottomImageAnimationFactory TopToBottomImageAnimationFactory;
struct TopToBottomImageAnimationFactory {
    BaseImageAnimationFactory base;
};


TopToBottomImageAnimationFactory* TopToBottomImageAnimationFactory_new(Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void TopToBottomImageAnimationFactory_init(TopToBottomImageAnimationFactory* this, Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* TopToBottomImageAnimationFactory_getInstance(TopToBottomImageAnimationFactory* this, int32_t instanceId);


void TopToBottomImageAnimationFactory_init(TopToBottomImageAnimationFactory* this, Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, Image_getWidth(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}

TopToBottomImageAnimationFactory* TopToBottomImageAnimationFactory_new(Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    TopToBottomImageAnimationFactory* this = calloc(1, sizeof(TopToBottomImageAnimationFactory));
    TopToBottomImageAnimationFactory_init(this, image, sequenceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* TopToBottomImageAnimationFactory_getInstance(TopToBottomImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, TopToBottomImageAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        return TopToBottomImageAnimation_new(scaledImage, TopToBottomImageAnimationFactory_getSequenceArray(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

