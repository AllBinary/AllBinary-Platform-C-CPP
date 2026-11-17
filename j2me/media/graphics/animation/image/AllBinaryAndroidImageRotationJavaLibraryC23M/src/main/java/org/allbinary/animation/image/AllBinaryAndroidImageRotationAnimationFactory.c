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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryAndroidImageRotationAnimationFactory AllBinaryAndroidImageRotationAnimationFactory;
struct AllBinaryAndroidImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    int16_t angleIncrement;
    bool resizeCanvasForRotation;
};


AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactory(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryA(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryU(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryDXYU(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);
void AllBinaryAndroidImageRotationAnimationFactory_init(AllBinaryAndroidImageRotationAnimationFactory* this, int32_t dx, int32_t dy);

void AllBinaryAndroidImageRotationAnimationFactory_init(AllBinaryAndroidImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);
static Image* AllBinaryAndroidImageRotationAnimationFactory_getCanvasImage(AllBinaryAndroidImageRotationAnimationFactory* this);
Animation* AllBinaryAndroidImageRotationAnimationFactory_getInstance(AllBinaryAndroidImageRotationAnimationFactory* this, int32_t instanceId);

static void AllBinaryAndroidImageRotationAnimationFactory_initFields(AllBinaryAndroidImageRotationAnimationFactory* this) {
    
    
}


// throws Exception
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactory(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        return AllBinaryAndroidImageRotationAnimationFactory_new(image, width, height, ((int16_t) (AngleFactory_getInstance()->TOTAL_ANGLE / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()))), animationBehaviorFactory, false);
}


// throws Exception
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryA(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
        return AllBinaryAndroidImageRotationAnimationFactory_new(image, width, height, angleIncrement, animationBehaviorFactory, false);
}


// throws Exception
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryU(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinaryAndroidImageRotationAnimationFactory* androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), ((int16_t) (AngleFactory_getInstance()->TOTAL_ANGLE / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()))), animationBehaviorFactory, false);
        AllBinaryAndroidImageRotationAnimationFactory_init(androidImageRotationAnimationFactory, -(Image_getWidth(image) >> 2), -(Image_getHeight(image) >> 2));
        return androidImageRotationAnimationFactory;
}


// throws Exception
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryDXYU(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinaryAndroidImageRotationAnimationFactory* androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), ((int16_t) (AngleFactory_getInstance()->TOTAL_ANGLE / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()))), animationBehaviorFactory, false);
        AllBinaryAndroidImageRotationAnimationFactory_init(androidImageRotationAnimationFactory, dx, dy);
        return androidImageRotationAnimationFactory;
}


// throws Exception
AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
        AllBinaryAndroidImageRotationAnimationFactory* androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory_new(image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
        AllBinaryAndroidImageRotationAnimationFactory_init(androidImageRotationAnimationFactory, dx, dy);
        return androidImageRotationAnimationFactory;
}


void AllBinaryAndroidImageRotationAnimationFactory_init(AllBinaryAndroidImageRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
        this->animationFactoryInitializationVisitor->originalDx = dx;
        this->animationFactoryInitializationVisitor->originalDy = dy;
}


void AllBinaryAndroidImageRotationAnimationFactory_init(AllBinaryAndroidImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        AllBinaryAndroidImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
        this->resizeCanvasForRotation = resizeCanvasForRotation;
}

AllBinaryAndroidImageRotationAnimationFactory* AllBinaryAndroidImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
    AllBinaryAndroidImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryAndroidImageRotationAnimationFactory));
    AllBinaryAndroidImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
    return this;
}


// throws Exception
static Image* AllBinaryAndroidImageRotationAnimationFactory_getCanvasImage(AllBinaryAndroidImageRotationAnimationFactory* this) {
        Features* features = Features_getInstance();
        if (this->resizeCanvasForRotation && !Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return ImageCopyUtil_createImageScale(ImageCopyUtil_getInstance(), AllBinaryAndroidImageRotationAnimationFactory_getImage(this), 1.44f, false);
        } else {
            return AllBinaryAndroidImageRotationAnimationFactory_getImage(this);
        }
}


// throws Exception
Animation* AllBinaryAndroidImageRotationAnimationFactory_getInstance(AllBinaryAndroidImageRotationAnimationFactory* this, int32_t instanceId) {
        Image* canvasImage = AllBinaryAndroidImageRotationAnimationFactory_getCanvasImage(this);
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, canvasImage, this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        Image* copyOfScaledImage = ImageCopyUtil_createImage(ImageCopyUtil_getInstance(), scaledImage);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AllBinaryAdjustedAndroidImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return AllBinaryFlickerAndroidImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}

