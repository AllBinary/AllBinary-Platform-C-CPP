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
// package org.allbinary.animation.image.sprite

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct AllBinarySpriteRotationAnimationFactory AllBinarySpriteRotationAnimationFactory;
struct AllBinarySpriteRotationAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
};


AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHDY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWH(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXYQ(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createQ(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHF(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinarySpriteRotationAnimationFactory_init(AllBinarySpriteRotationAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
void AllBinarySpriteRotationAnimationFactory_init(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy);
static void AllBinarySpriteRotationAnimationFactory_initWH(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy);
Animation* AllBinarySpriteRotationAnimationFactory_getInstance(AllBinarySpriteRotationAnimationFactory* this, int32_t instanceId);
Animation* AllBinarySpriteRotationAnimationFactory_getInstanceAnimation(AllBinarySpriteRotationAnimationFactory* this, Animation* animationInterface);

static void AllBinarySpriteRotationAnimationFactory_initFields(AllBinarySpriteRotationAnimationFactory* this) {
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHDY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), (Image_getHeight(image) >> 2), (Image_getHeight(image) >> 2), 0, 0, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_initWH(spriteRotationAnimationFactory, dx, dy);
        return spriteRotationAnimationFactory;
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWH(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        return AllBinarySpriteRotationAnimationFactory_createWHDY(image, 0, 0, animationBehaviorFactory);
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), Image_getHeight(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_init(spriteRotationAnimationFactory, dx, dy);
        return spriteRotationAnimationFactory;
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXYQ(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), (Image_getHeight(image) >> 2), (Image_getHeight(image) >> 2), 0, 0, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_init(spriteRotationAnimationFactory, dx, dy);
        return spriteRotationAnimationFactory;
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createQ(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        return AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), (Image_getHeight(image) >> 2), (Image_getHeight(image) >> 2), 0, 0, animationBehaviorFactory);
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHF(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        return AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), Image_getHeight(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}


void AllBinarySpriteRotationAnimationFactory_init(AllBinarySpriteRotationAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_initFields(this);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinarySpriteRotationAnimationFactory* this = calloc(1, sizeof(AllBinarySpriteRotationAnimationFactory));
    AllBinarySpriteRotationAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


void AllBinarySpriteRotationAnimationFactory_init(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
}


static void AllBinarySpriteRotationAnimationFactory_initWH(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        AllBinarySpriteRotationAnimationFactory_init(this, dx, dy);
        this->animationFactoryInitializationVisitor->dx += -this->animationFactoryInitializationVisitor->width / 5;
        this->animationFactoryInitializationVisitor->dy += -this->animationFactoryInitializationVisitor->height / 5;
}


// throws Exception
Animation* AllBinarySpriteRotationAnimationFactory_getInstance(AllBinarySpriteRotationAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, AllBinarySpriteRotationAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            return AllBinaryAdjustedSpriteRotationAnimation_new(sprite, AllBinarySpriteRotationAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return AllBinarySpriteRotationAnimation_new(sprite, AllBinarySpriteRotationAnimationFactory_getImage(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


// throws Exception
Animation* AllBinarySpriteRotationAnimationFactory_getInstanceAnimation(AllBinarySpriteRotationAnimationFactory* this, Animation* animationInterface) {
        return AllBinarySpriteRotationAnimationFactory_getInstance(this, 0);
}

