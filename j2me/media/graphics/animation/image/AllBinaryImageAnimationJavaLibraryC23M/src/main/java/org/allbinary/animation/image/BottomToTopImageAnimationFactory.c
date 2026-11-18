// Generated Code Do Not Modify
#include "org/allbinary/animation/image/BottomToTopImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/BottomToTopImageAnimation.h"





void BottomToTopImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BottomToTopImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BottomToTopImageAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("BottomToTopImageAnimationFactory", "getInstance", (void*) BottomToTopImageAnimationFactory_getInstance);
}


void BottomToTopImageAnimationFactory_init(BottomToTopImageAnimationFactory* this, Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
    BottomToTopImageAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), Image_getWidth(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}

BottomToTopImageAnimationFactory* BottomToTopImageAnimationFactory_new(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
    BottomToTopImageAnimationFactory* this = java_object_alloc(sizeof(BottomToTopImageAnimationFactory), "BottomToTopImageAnimationFactory");
    BottomToTopImageAnimationFactory_init(this, image, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* BottomToTopImageAnimationFactory_getInstance(BottomToTopImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        return BottomToTopImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

