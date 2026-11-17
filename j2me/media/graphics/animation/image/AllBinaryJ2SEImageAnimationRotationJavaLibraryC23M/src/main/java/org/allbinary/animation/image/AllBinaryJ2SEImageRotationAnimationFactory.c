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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageCopyUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryJ2SEImageRotationAnimationFactory AllBinaryJ2SEImageRotationAnimationFactory;
struct AllBinaryJ2SEImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    int16_t angleIncrementP;
    bool resizeCanvasForRotation;
};


AllBinaryJ2SEImageRotationAnimationFactory* AllBinaryJ2SEImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);
AllBinaryJ2SEImageRotationAnimationFactory* AllBinaryJ2SEImageRotationAnimationFactory_createDXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);

void AllBinaryJ2SEImageRotationAnimationFactory_init(AllBinaryJ2SEImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);
static Image* AllBinaryJ2SEImageRotationAnimationFactory_getCanvasImage(AllBinaryJ2SEImageRotationAnimationFactory* this);
Animation* AllBinaryJ2SEImageRotationAnimationFactory_getInstance(AllBinaryJ2SEImageRotationAnimationFactory* this, int32_t instanceId);
int16_t AllBinaryJ2SEImageRotationAnimationFactory_getAngleIncrement(AllBinaryJ2SEImageRotationAnimationFactory* this);

static void AllBinaryJ2SEImageRotationAnimationFactory_initFields(AllBinaryJ2SEImageRotationAnimationFactory* this) {
    
    
}


// throws Exception
AllBinaryJ2SEImageRotationAnimationFactory* AllBinaryJ2SEImageRotationAnimationFactory_createDXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
        AllBinaryJ2SEImageRotationAnimationFactory* imageRotationAnimationFactory = AllBinaryJ2SEImageRotationAnimationFactory_new(image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
        imageRotationAnimationFactory->animationFactoryInitializationVisitor->dx = dx;
        imageRotationAnimationFactory->animationFactoryInitializationVisitor->dy = dy;
        imageRotationAnimationFactory->animationFactoryInitializationVisitor->originalDx = dx;
        imageRotationAnimationFactory->animationFactoryInitializationVisitor->originalDy = dy;
        return imageRotationAnimationFactory;
}


void AllBinaryJ2SEImageRotationAnimationFactory_init(AllBinaryJ2SEImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        AllBinaryJ2SEImageRotationAnimationFactory_initFields(this);
        this->angleIncrementP = angleIncrement;
        this->resizeCanvasForRotation = resizeCanvasForRotation;
}

AllBinaryJ2SEImageRotationAnimationFactory* AllBinaryJ2SEImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
    AllBinaryJ2SEImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryJ2SEImageRotationAnimationFactory));
    AllBinaryJ2SEImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
    return this;
}


// throws Exception
static Image* AllBinaryJ2SEImageRotationAnimationFactory_getCanvasImage(AllBinaryJ2SEImageRotationAnimationFactory* this) {
        Features* features = Features_getInstance();
        if (this->resizeCanvasForRotation && !Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return ImageCopyUtil_createImageScale(ImageCopyUtil_getInstance(), AllBinaryJ2SEImageRotationAnimationFactory_getImage(this), 1.44f, false);
        } else {
            return AllBinaryJ2SEImageRotationAnimationFactory_getImage(this);
        }
}


// throws Exception
Animation* AllBinaryJ2SEImageRotationAnimationFactory_getInstance(AllBinaryJ2SEImageRotationAnimationFactory* this, int32_t instanceId) {
        ImageCopyUtil* imageCopyUtil = ImageCopyUtil_getInstance();
        Image* canvasImage = AllBinaryJ2SEImageRotationAnimationFactory_getCanvasImage(this);
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, canvasImage, this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        OpenGLUtil* openGLUtil = OpenGLUtil_getInstance();
        scaledImage = OpenGLUtil_addImage(openGLUtil, scaledImage);
        Image* copyOfScaledImage = ImageCopyUtil_createImageForRotation(imageCopyUtil, scaledImage);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AllBinaryAdjustedJ2SEImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(this->angleIncrementP), AngleFactory_getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return AllBinaryJ2SEImageRotationAnimation_new(scaledImage, copyOfScaledImage, AngleInfo_getInstance(this->angleIncrementP), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


int16_t AllBinaryJ2SEImageRotationAnimationFactory_getAngleIncrement(AllBinaryJ2SEImageRotationAnimationFactory* this) {
        return this->angleIncrementP;
}

