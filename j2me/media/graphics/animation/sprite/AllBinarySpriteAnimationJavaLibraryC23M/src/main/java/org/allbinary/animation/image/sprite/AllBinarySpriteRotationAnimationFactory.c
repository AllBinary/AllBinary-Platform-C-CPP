// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"
#include "org/allbinary/animation/image/sprite/AllBinaryAdjustedSpriteRotationAnimation.h"











static void AllBinarySpriteRotationAnimationFactory_initWH(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy);



void AllBinarySpriteRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinarySpriteRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinarySpriteRotationAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("AllBinarySpriteRotationAnimationFactory", "init", (void*) AllBinarySpriteRotationAnimationFactory_initMethod);
    java_register_method("AllBinarySpriteRotationAnimationFactory", "initWH", (void*) AllBinarySpriteRotationAnimationFactory_initWH);
    java_register_method("AllBinarySpriteRotationAnimationFactory", "getInstance", (void*) AllBinarySpriteRotationAnimationFactory_getInstance);
    java_register_method("AllBinarySpriteRotationAnimationFactory", "getInstanceAnimation", (void*) AllBinarySpriteRotationAnimationFactory_getInstanceAnimation);
}

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
        AllBinarySpriteRotationAnimationFactory_initMethod(spriteRotationAnimationFactory, dx, dy);
        return spriteRotationAnimationFactory;
}


// throws Exception
AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXYQ(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        AllBinarySpriteRotationAnimationFactory* spriteRotationAnimationFactory = AllBinarySpriteRotationAnimationFactory_new(image, PrimitiveIntUtil_getArrayInstance(), (Image_getHeight(image) >> 2), (Image_getHeight(image) >> 2), 0, 0, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_initMethod(spriteRotationAnimationFactory, dx, dy);
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
    AllBinarySpriteRotationAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
        AllBinarySpriteRotationAnimationFactory_initFields(this);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinarySpriteRotationAnimationFactory* this = java_object_alloc(sizeof(AllBinarySpriteRotationAnimationFactory), "AllBinarySpriteRotationAnimationFactory");
    AllBinarySpriteRotationAnimationFactory_init(this, image, sequenceArray, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


void AllBinarySpriteRotationAnimationFactory_initMethod(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->base.animationFactoryInitializationVisitor->dx = dx;
        this->base.animationFactoryInitializationVisitor->dy = dy;
}


static void AllBinarySpriteRotationAnimationFactory_initWH(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        AllBinarySpriteRotationAnimationFactory_initMethod(this, dx, dy);
        this->base.animationFactoryInitializationVisitor->dx += -this->base.animationFactoryInitializationVisitor->width / 5;
        this->base.animationFactoryInitializationVisitor->dy += -this->base.animationFactoryInitializationVisitor->height / 5;
}


// throws Exception
Animation* AllBinarySpriteRotationAnimationFactory_getInstance(AllBinarySpriteRotationAnimationFactory* this, int32_t instanceId) {
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            return AllBinaryAdjustedSpriteRotationAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return AllBinarySpriteRotationAnimation_new(sprite, BaseImageAnimationFactory_getImage(this), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}


// throws Exception
Animation* AllBinarySpriteRotationAnimationFactory_getInstanceAnimation(AllBinarySpriteRotationAnimationFactory* this, Animation* animationInterface) {
        return AllBinarySpriteRotationAnimationFactory_getInstance(this, 0);
}

