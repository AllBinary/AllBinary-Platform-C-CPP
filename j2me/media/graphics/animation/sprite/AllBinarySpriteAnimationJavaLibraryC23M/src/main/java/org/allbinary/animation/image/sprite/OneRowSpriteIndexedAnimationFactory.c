// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
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











void OneRowSpriteIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OneRowSpriteIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OneRowSpriteIndexedAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("OneRowSpriteIndexedAnimationFactory", "init", (void*) OneRowSpriteIndexedAnimationFactory_initMethod);
    java_register_method("OneRowSpriteIndexedAnimationFactory", "initW", (void*) OneRowSpriteIndexedAnimationFactory_initW);
    java_register_method("OneRowSpriteIndexedAnimationFactory", "getInstance", (void*) OneRowSpriteIndexedAnimationFactory_getInstance);
}

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
        OneRowSpriteIndexedAnimationFactory_initMethod(oneRowSpriteIndexedAnimationFactory, dx, dy);
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
    OneRowSpriteIndexedAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        OneRowSpriteIndexedAnimationFactory_initFields(this);
}

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    OneRowSpriteIndexedAnimationFactory* this = java_object_alloc(sizeof(OneRowSpriteIndexedAnimationFactory), "OneRowSpriteIndexedAnimationFactory");
    OneRowSpriteIndexedAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


void OneRowSpriteIndexedAnimationFactory_initMethod(OneRowSpriteIndexedAnimationFactory* this, int32_t dx, int32_t dy) {
        this->base.animationFactoryInitializationVisitor->dx = dx;
        this->base.animationFactoryInitializationVisitor->dy = dy;
}


void OneRowSpriteIndexedAnimationFactory_initW(OneRowSpriteIndexedAnimationFactory* this, int32_t dx) {
        OneRowSpriteIndexedAnimationFactory_initMethod(this, dx, 0);
        this->base.animationFactoryInitializationVisitor->dx += -(this->base.animationFactoryInitializationVisitor->width >> 2);
}


// throws Exception
Animation* OneRowSpriteIndexedAnimationFactory_getInstance(OneRowSpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedSpriteIndexedAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), BasicColorUtil_getInstance()->ZERO_ARRAY, this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return SpriteIndexedAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), BasicColorUtil_getInstance()->ZERO_ARRAY, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}

