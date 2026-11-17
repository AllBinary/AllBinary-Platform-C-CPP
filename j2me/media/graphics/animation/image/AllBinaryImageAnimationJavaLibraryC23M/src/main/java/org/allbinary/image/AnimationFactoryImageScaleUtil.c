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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageJ2MEScaleUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AnimationFactoryImageScaleUtil AnimationFactoryImageScaleUtil;
struct AnimationFactoryImageScaleUtil {
    ImageJ2MEScaleUtil* imageScaleUtil;
};

static AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_instance;

AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_new(void);
AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_getInstance(void);
Image* AnimationFactoryImageScaleUtil_createImage(AnimationFactoryImageScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);
void AnimationFactoryImageScaleUtil_processAdjust(AnimationFactoryImageScaleUtil* this, BaseImageAnimationFactory* baseImageAnimationFactory);

// Static fields with runtime initializers: call this once at startup
void AnimationFactoryImageScaleUtil_staticInit(void) {
    AnimationFactoryImageScaleUtil_instance = AnimationFactoryImageScaleUtil_new();
}

static void AnimationFactoryImageScaleUtil_initFields(AnimationFactoryImageScaleUtil* this) {
    this->imageScaleUtil = ImageJ2MEScaleUtil_getInstance();
}

void AnimationFactoryImageScaleUtil_init(AnimationFactoryImageScaleUtil* this) {
    AnimationFactoryImageScaleUtil_initFields(this);
}

AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_new(void) {
    AnimationFactoryImageScaleUtil* this = calloc(1, sizeof(AnimationFactoryImageScaleUtil));
    AnimationFactoryImageScaleUtil_init(this);
    return this;
}


AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_getInstance(void) {
        return AnimationFactoryImageScaleUtil_instance;
}


// throws Exception
Image* AnimationFactoryImageScaleUtil_createImage(AnimationFactoryImageScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight) {
        Image* scaledImage = nullptr;
        if (scaleWidth != 0 && scaleHeight != 0) {
            float scaleX = (((float) scaleWidth)) / (((float) width));
            float scaleY = (((float) scaleHeight)) / (((float) height));
            if ((scaleX == 1.0f && scaleY == 1.0f) || (scaleX == 0.0f || scaleY == 0.0f)) {
                scaledImage = image;
            } else {
                int32_t scaledWidth = ((int32_t) (scaleX * ((float) width)));
                int32_t scaledHeight = ((int32_t) (scaleY * ((float) height)));
                scaledImage = ImageJ2MEScaleUtil_scale(this->imageScaleUtil, image, scaledWidth, scaledHeight);
            }
        } else {
            scaledImage = image;
        }
        return scaledImage;
}


// throws Exception
void AnimationFactoryImageScaleUtil_processAdjust(AnimationFactoryImageScaleUtil* this, BaseImageAnimationFactory* baseImageAnimationFactory) {
        ScaleProperties* scaleProperties = BaseImageAnimationFactory_getScalePropertiesP(baseImageAnimationFactory);
        if (scaleProperties->scaleWidth != 0 && scaleProperties->scaleHeight != 0) {
            AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor = BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP(baseImageAnimationFactory);
            float scaleX = (((float) scaleProperties->scaleWidth)) / (((float) animationFactoryInitializationVisitor->width));
            float scaleY = (((float) scaleProperties->scaleHeight)) / (((float) animationFactoryInitializationVisitor->height));
            if ((scaleX == 1.0f && scaleY == 1.0f) || (scaleX == 0.0f || scaleY == 0.0f)) {
            } else {
                animationFactoryInitializationVisitor->dx = ((int32_t) (animationFactoryInitializationVisitor->originalDx * scaleX));
                animationFactoryInitializationVisitor->dy = ((int32_t) (animationFactoryInitializationVisitor->originalDy * scaleY));
            }
        } else {
        }
}

