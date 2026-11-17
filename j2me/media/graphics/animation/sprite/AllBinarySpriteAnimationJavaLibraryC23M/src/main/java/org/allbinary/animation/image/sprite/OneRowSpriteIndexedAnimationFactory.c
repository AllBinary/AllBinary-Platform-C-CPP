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
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct OneRowSpriteIndexedAnimationFactory OneRowSpriteIndexedAnimationFactory;
struct OneRowSpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
};


OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDX(Image* image, int32_t dx, AnimationBehaviorFactory* animationBehaviorFactory);
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void OneRowSpriteIndexedAnimationFactory_init(OneRowSpriteIndexedAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);
void OneRowSpriteIndexedAnimationFactory_init(OneRowSpriteIndexedAnimationFactory* this, int32_t dx, int32_t dy);
void OneRowSpriteIndexedAnimationFactory_initW(OneRowSpriteIndexedAnimationFactory* this, int32_t dx);
Animation* OneRowSpriteIndexedAnimationFactory_getInstance(OneRowSpriteIndexedAnimationFactory* this, int32_t instanceId);

static void OneRowSpriteIndexedAnimationFactory_initFields(OneRowSpriteIndexedAnimationFactory* this) {
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
}


// throws Exception
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDX(Image* image, int32_t dx, AnimationBehaviorFactory* animationBehaviorFactory) {
        OneRowSpriteIndexedAnimationFactory* oneRowSpriteIndexedAnimationFactory = OneRowSpriteIndexedAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), Image_getHeight(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
        OneRowSpriteIndexedAnimationFactory_initW(oneRowSpriteIndexedAnimationFactory, dx);
        return oneRowSpriteIndexedAnimationFactory;
}


// throws Exception
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        OneRowSpriteIndexedAnimationFactory* oneRowSpriteIndexedAnimationFactory = OneRowSpriteIndexedAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), Image_getHeight(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
        OneRowSpriteIndexedAnimationFactory_init(oneRowSpriteIndexedAnimationFactory, dx, dy);
        return oneRowSpriteIndexedAnimationFactory;
}


// throws Exception
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        return OneRowSpriteIndexedAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
}


// throws Exception
OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        return OneRowSpriteIndexedAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), Image_getHeight(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}


void OneRowSpriteIndexedAnimationFactory_init(OneRowSpriteIndexedAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        OneRowSpriteIndexedAnimationFactory_initFields(this);
}

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    OneRowSpriteIndexedAnimationFactory* this = calloc(1, sizeof(OneRowSpriteIndexedAnimationFactory));
    OneRowSpriteIndexedAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


void OneRowSpriteIndexedAnimationFactory_init(OneRowSpriteIndexedAnimationFactory* this, int32_t dx, int32_t dy) {
        this->animationFactoryInitializationVisitor->dx = dx;
        this->animationFactoryInitializationVisitor->dy = dy;
}


void OneRowSpriteIndexedAnimationFactory_initW(OneRowSpriteIndexedAnimationFactory* this, int32_t dx) {
        OneRowSpriteIndexedAnimationFactory_init(this, dx, 0);
        this->animationFactoryInitializationVisitor->dx += -(this->animationFactoryInitializationVisitor->width >> 2);
}


// throws Exception
Animation* OneRowSpriteIndexedAnimationFactory_getInstance(OneRowSpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, OneRowSpriteIndexedAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        if (this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedSpriteIndexedAnimation_new(sprite, OneRowSpriteIndexedAnimationFactory_getImage(this), BasicColorUtil_getInstance()->ZERO_ARRAY, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return SpriteIndexedAnimation_new(sprite, OneRowSpriteIndexedAnimationFactory_getImage(this), BasicColorUtil_getInstance()->ZERO_ARRAY, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
}

