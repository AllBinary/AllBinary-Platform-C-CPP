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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct ImageAnimationFactory ImageAnimationFactory;
struct ImageAnimationFactory {
    BaseImageAnimationFactory base;
};


ImageAnimationFactory* ImageAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
ImageAnimationFactory* ImageAnimationFactory_createFactory(Image* image);

void ImageAnimationFactory_init(ImageAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* ImageAnimationFactory_getInstance(ImageAnimationFactory* this, int32_t instanceId);


// throws Exception
ImageAnimationFactory* ImageAnimationFactory_createFactory(Image* image) {
        return ImageAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), 0, 0, AnimationBehaviorFactory_getInstance());
}


void ImageAnimationFactory_init(ImageAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
}

ImageAnimationFactory* ImageAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageAnimationFactory* this = calloc(1, sizeof(ImageAnimationFactory));
    ImageAnimationFactory_init(this, image, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageAnimationFactory_getInstance(ImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = JAVA_CALL(this->animationFactoryImageScaleUtil, createImage, ImageAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        OpenGLUtil* openGLUtil = OpenGLUtil_getInstance();
        scaledImage = OpenGLUtil_addImage(openGLUtil, scaledImage);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            JAVA_CALL(this->animationFactoryImageScaleUtil, processAdjust, this);
            return AdjustedImageAnimation_new(scaledImage, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return ImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}

