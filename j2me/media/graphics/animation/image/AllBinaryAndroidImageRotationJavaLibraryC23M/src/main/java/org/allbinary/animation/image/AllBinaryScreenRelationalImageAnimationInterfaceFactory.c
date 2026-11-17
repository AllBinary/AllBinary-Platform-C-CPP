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
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/displayable/ScreenRelationalUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/media/image/ImageScaleUtil.h"
#include "org/microemu/android/device/AndroidImageInterface.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryScreenRelationalImageAnimationInterfaceFactory AllBinaryScreenRelationalImageAnimationInterfaceFactory;
struct AllBinaryScreenRelationalImageAnimationInterfaceFactory {
    BaseImageAnimationFactory base;
    Image* lastImage;
};


AllBinaryScreenRelationalImageAnimationInterfaceFactory* AllBinaryScreenRelationalImageAnimationInterfaceFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinaryScreenRelationalImageAnimationInterfaceFactory_init(AllBinaryScreenRelationalImageAnimationInterfaceFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* AllBinaryScreenRelationalImageAnimationInterfaceFactory_getInstance(AllBinaryScreenRelationalImageAnimationInterfaceFactory* this, int32_t instanceId);

static void AllBinaryScreenRelationalImageAnimationInterfaceFactory_initFields(AllBinaryScreenRelationalImageAnimationInterfaceFactory* this) {
    this->lastImage = NullImage_NULL_IMAGE;
}


void AllBinaryScreenRelationalImageAnimationInterfaceFactory_init(AllBinaryScreenRelationalImageAnimationInterfaceFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory);
        AllBinaryScreenRelationalImageAnimationInterfaceFactory_initFields(this);
        if (this->lastImage != NullImage_NULL_IMAGE) {
            AndroidImageInterface* androidImageInterface = ((AndroidImageInterface*) this->lastImage);
            JAVA_CALL(AndroidImageInterface_getBitmap(androidImageInterface), recycle);
        }
        float scale = ScreenRelationalUtil_getScaleImage(ScreenRelationalUtil_getInstance(), image);
        this->lastImage = ImageScaleUtil_createImage(ImageScaleUtil_getInstance(), GameFeatureImageCacheFactory_getInstance(), AllBinaryScreenRelationalImageAnimationInterfaceFactory_getImage(this), scale, scale, false);
}

AllBinaryScreenRelationalImageAnimationInterfaceFactory* AllBinaryScreenRelationalImageAnimationInterfaceFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryScreenRelationalImageAnimationInterfaceFactory* this = calloc(1, sizeof(AllBinaryScreenRelationalImageAnimationInterfaceFactory));
    AllBinaryScreenRelationalImageAnimationInterfaceFactory_init(this, image, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* AllBinaryScreenRelationalImageAnimationInterfaceFactory_getInstance(AllBinaryScreenRelationalImageAnimationInterfaceFactory* this, int32_t instanceId) {
        return ImageAnimation_new(this->lastImage, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

