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
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct SpriteIndexedAnimationFactory SpriteIndexedAnimationFactory;
struct SpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
    BasicColor** basicColorArray;
};


SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWHDXY(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWH(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void SpriteIndexedAnimationFactory_init(SpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
static void SpriteIndexedAnimationFactory_initHWH(SpriteIndexedAnimationFactory* this);
Animation* SpriteIndexedAnimationFactory_getInstance(SpriteIndexedAnimationFactory* this, int32_t instanceId);
Animation* SpriteIndexedAnimationFactory_getInstanceAnimation(SpriteIndexedAnimationFactory* this, Animation* animationInterface);

static void SpriteIndexedAnimationFactory_initFields(SpriteIndexedAnimationFactory* this) {
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
    this->basicColorArray = BasicColorUtil_getInstance()->ZERO_ARRAY;
}


// throws Exception
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWHDXY(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        return SpriteIndexedAnimationFactory_new(image, basicColorArray, PrimitiveIntUtil_getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
}


// throws Exception
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWH(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        SpriteIndexedAnimationFactory* spriteIndexedAnimationFactory = SpriteIndexedAnimationFactory_new(image, basicColorArray, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        SpriteIndexedAnimationFactory_initHWH(spriteIndexedAnimationFactory);
        return spriteIndexedAnimationFactory;
}


// throws Exception
SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        return SpriteIndexedAnimationFactory_new(image, BasicColorUtil_getInstance()->ZERO_ARRAY, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
}


void SpriteIndexedAnimationFactory_init(SpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        SpriteIndexedAnimationFactory_initFields(this);
        this->basicColorArray = basicColorArray;
}

SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    SpriteIndexedAnimationFactory* this = calloc(1, sizeof(SpriteIndexedAnimationFactory));
    SpriteIndexedAnimationFactory_init(this, image, basicColorArray, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


static void SpriteIndexedAnimationFactory_initHWH(SpriteIndexedAnimationFactory* this) {
        this->animationFactoryInitializationVisitor->dx = -(this->animationFactoryInitializationVisitor->width >> 2);
        this->animationFactoryInitializationVisitor->dy = -(this->animationFactoryInitializationVisitor->height >> 2);
        if (AndroidUtil_isAndroid()) {
            this->animationFactoryInitializationVisitor->dx += 3;
        }
}


// throws Exception
Animation* SpriteIndexedAnimationFactory_getInstance(SpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, SpriteIndexedAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedSpriteIndexedAnimation_new(sprite, SpriteIndexedAnimationFactory_getImage(this), this->basicColorArray, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return SpriteIndexedAnimation_new(sprite, SpriteIndexedAnimationFactory_getImage(this), this->basicColorArray, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}


// throws Exception
Animation* SpriteIndexedAnimationFactory_getInstanceAnimation(SpriteIndexedAnimationFactory* this, Animation* animationInterface) {
        return SpriteIndexedAnimationFactory_getInstance(this, 0);
}

