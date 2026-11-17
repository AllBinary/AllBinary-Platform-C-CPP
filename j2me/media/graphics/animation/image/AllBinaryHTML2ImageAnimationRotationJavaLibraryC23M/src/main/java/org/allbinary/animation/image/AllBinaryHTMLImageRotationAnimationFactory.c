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
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryHTMLImageRotationAnimationFactory AllBinaryHTMLImageRotationAnimationFactory;
struct AllBinaryHTMLImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    int16_t angleIncrement;
};


AllBinaryHTMLImageRotationAnimationFactory* AllBinaryHTMLImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryHTMLImageRotationAnimationFactory* AllBinaryHTMLImageRotationAnimationFactory_createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinaryHTMLImageRotationAnimationFactory_init(AllBinaryHTMLImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
void AllBinaryHTMLImageRotationAnimationFactory_init(AllBinaryHTMLImageRotationAnimationFactory* this, int32_t dx, int32_t dy);
Animation* AllBinaryHTMLImageRotationAnimationFactory_getInstance(AllBinaryHTMLImageRotationAnimationFactory* this, int32_t instanceId);
int16_t AllBinaryHTMLImageRotationAnimationFactory_getAngleIncrement(AllBinaryHTMLImageRotationAnimationFactory* this);

static void AllBinaryHTMLImageRotationAnimationFactory_initFields(AllBinaryHTMLImageRotationAnimationFactory* this) {
    
}


// throws Exception
AllBinaryHTMLImageRotationAnimationFactory* AllBinaryHTMLImageRotationAnimationFactory_createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinaryHTMLImageRotationAnimationFactory* htmlImageRotationAnimationFactory = AllBinaryHTMLImageRotationAnimationFactory_new(image, width, height, angleIncrement, animationBehaviorFactory);
        AllBinaryHTMLImageRotationAnimationFactory_init(htmlImageRotationAnimationFactory, dx, dy);
        return htmlImageRotationAnimationFactory;
}


void AllBinaryHTMLImageRotationAnimationFactory_init(AllBinaryHTMLImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        AllBinaryHTMLImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
}

AllBinaryHTMLImageRotationAnimationFactory* AllBinaryHTMLImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryHTMLImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryHTMLImageRotationAnimationFactory));
    AllBinaryHTMLImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory);
    return this;
}


void AllBinaryHTMLImageRotationAnimationFactory_init(AllBinaryHTMLImageRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
        this->animationFactoryInitializationVisitor->originalDx = dx;
        this->animationFactoryInitializationVisitor->originalDy = dy;
}


// throws Exception
Animation* AllBinaryHTMLImageRotationAnimationFactory_getInstance(AllBinaryHTMLImageRotationAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, AllBinaryHTMLImageRotationAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        Image* copyOfScaledImage = ImageCopyUtil_createImage(ImageCopyUtil_getInstance(), scaledImage);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AllBinaryAdjustedHTMLImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(AllBinaryHTMLImageRotationAnimationFactory_getAngleIncrement(this)), AngleFactory_getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return AllBinaryHTMLImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


int16_t AllBinaryHTMLImageRotationAnimationFactory_getAngleIncrement(AllBinaryHTMLImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}

