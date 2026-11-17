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

typedef struct LeftToRightImageAnimationFactory LeftToRightImageAnimationFactory;
struct LeftToRightImageAnimationFactory {
    BaseImageAnimationFactory base;
};


LeftToRightImageAnimationFactory* LeftToRightImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void LeftToRightImageAnimationFactory_init(LeftToRightImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* LeftToRightImageAnimationFactory_getInstance(LeftToRightImageAnimationFactory* this, int32_t instanceId);


void LeftToRightImageAnimationFactory_init(LeftToRightImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, Image_getWidth(image), Image_getHeight(image), dx, dy, animationBehaviorFactory);
}

LeftToRightImageAnimationFactory* LeftToRightImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    LeftToRightImageAnimationFactory* this = calloc(1, sizeof(LeftToRightImageAnimationFactory));
    LeftToRightImageAnimationFactory_init(this, image, sequenceArray, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* LeftToRightImageAnimationFactory_getInstance(LeftToRightImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, LeftToRightImageAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AdjustedLeftToRightImageAnimation_new(scaledImage, LeftToRightImageAnimationFactory_getSequenceArray(this), this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return LeftToRightImageAnimation_new(scaledImage, LeftToRightImageAnimationFactory_getSequenceArray(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}

