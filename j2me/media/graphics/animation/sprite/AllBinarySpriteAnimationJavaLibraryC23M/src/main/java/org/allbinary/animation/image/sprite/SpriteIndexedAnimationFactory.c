// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#include "org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorUtil.h")
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorUtil.h")
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#endif







static void SpriteIndexedAnimationFactory_initHWH(SpriteIndexedAnimationFactory* this);



void SpriteIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpriteIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpriteIndexedAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("SpriteIndexedAnimationFactory", "initHWH", (void*) SpriteIndexedAnimationFactory_initHWH);
    java_register_method("SpriteIndexedAnimationFactory", "getInstance", (void*) SpriteIndexedAnimationFactory_getInstance);
    java_register_method("SpriteIndexedAnimationFactory", "getInstanceAnimation", (void*) SpriteIndexedAnimationFactory_getInstanceAnimation);
}

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
    SpriteIndexedAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        SpriteIndexedAnimationFactory_initFields(this);
        this->basicColorArray = basicColorArray;
}

SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    SpriteIndexedAnimationFactory* this = java_object_alloc(sizeof(SpriteIndexedAnimationFactory), "SpriteIndexedAnimationFactory");
    SpriteIndexedAnimationFactory_init(this, image, basicColorArray, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


static void SpriteIndexedAnimationFactory_initHWH(SpriteIndexedAnimationFactory* this) {
        this->base.animationFactoryInitializationVisitor->dx = -(this->base.animationFactoryInitializationVisitor->width >> 2);
        this->base.animationFactoryInitializationVisitor->dy = -(this->base.animationFactoryInitializationVisitor->height >> 2);
        if (AndroidUtil_isAndroid()) {
            this->base.animationFactoryInitializationVisitor->dx += 3;
        }
}


// throws Exception
Animation* SpriteIndexedAnimationFactory_getInstance(SpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedSpriteIndexedAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), this->basicColorArray, this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return SpriteIndexedAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), this->basicColorArray, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}


// throws Exception
Animation* SpriteIndexedAnimationFactory_getInstanceAnimation(SpriteIndexedAnimationFactory* this, Animation* animationInterface) {
        return SpriteIndexedAnimationFactory_getInstance(this, 0);
}

