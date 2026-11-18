// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/ColorCompositeSpriteIndexedAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"






void ColorCompositeSpriteIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ColorCompositeSpriteIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorCompositeSpriteIndexedAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("ColorCompositeSpriteIndexedAnimationFactory", "getInstance", (void*) ColorCompositeSpriteIndexedAnimationFactory_getInstance);
    java_register_method("ColorCompositeSpriteIndexedAnimationFactory", "getInstanceAnimation", (void*) ColorCompositeSpriteIndexedAnimationFactory_getInstanceAnimation);
}

static void ColorCompositeSpriteIndexedAnimationFactory_initFields(ColorCompositeSpriteIndexedAnimationFactory* this) {
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
    
}


void ColorCompositeSpriteIndexedAnimationFactory_init(ColorCompositeSpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
    ColorCompositeSpriteIndexedAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        ColorCompositeSpriteIndexedAnimationFactory_initFields(this);
        this->basicColorArray = basicColorArray;
}

ColorCompositeSpriteIndexedAnimationFactory* ColorCompositeSpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) {
    ColorCompositeSpriteIndexedAnimationFactory* this = java_object_alloc(sizeof(ColorCompositeSpriteIndexedAnimationFactory), "ColorCompositeSpriteIndexedAnimationFactory");
    ColorCompositeSpriteIndexedAnimationFactory_init(this, image, basicColorArray, width, height, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstance(ColorCompositeSpriteIndexedAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        return SpriteIndexedAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), this->basicColorArray, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}


// throws Exception
Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstanceAnimation(ColorCompositeSpriteIndexedAnimationFactory* this, Animation* animationInterface) {
        return ColorCompositeSpriteIndexedAnimationFactory_getInstance(this, 0);
}

