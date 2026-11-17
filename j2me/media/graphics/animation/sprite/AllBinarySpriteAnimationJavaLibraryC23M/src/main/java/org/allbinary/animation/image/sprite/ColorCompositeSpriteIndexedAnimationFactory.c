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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"

typedef struct ColorCompositeSpriteIndexedAnimationFactory ColorCompositeSpriteIndexedAnimationFactory;
struct ColorCompositeSpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
    BasicColor** basicColorArray;
};


ColorCompositeSpriteIndexedAnimationFactory* ColorCompositeSpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void ColorCompositeSpriteIndexedAnimationFactory_init(ColorCompositeSpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstance(ColorCompositeSpriteIndexedAnimationFactory* this, int32_t instanceId);
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstanceAnimation(ColorCompositeSpriteIndexedAnimationFactory* this, Animation* animationInterface);

static void ColorCompositeSpriteIndexedAnimationFactory_initFields(ColorCompositeSpriteIndexedAnimationFactory* this) {
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
    
}


void ColorCompositeSpriteIndexedAnimationFactory_init(ColorCompositeSpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        ColorCompositeSpriteIndexedAnimationFactory_initFields(this);
        this->basicColorArray = basicColorArray;
}

ColorCompositeSpriteIndexedAnimationFactory* ColorCompositeSpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
    ColorCompositeSpriteIndexedAnimationFactory* this = calloc(1, sizeof(ColorCompositeSpriteIndexedAnimationFactory));
    ColorCompositeSpriteIndexedAnimationFactory_init(this, image, basicColorArray, width, height, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstance(ColorCompositeSpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, ColorCompositeSpriteIndexedAnimationFactory_getImage(this), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        return SpriteIndexedAnimation_new(sprite, ColorCompositeSpriteIndexedAnimationFactory_getImage(this), this->basicColorArray, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


// throws Exception
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstanceAnimation(ColorCompositeSpriteIndexedAnimationFactory* this, Animation* animationInterface) {
        return ColorCompositeSpriteIndexedAnimationFactory_getInstance(this, 0);
}

