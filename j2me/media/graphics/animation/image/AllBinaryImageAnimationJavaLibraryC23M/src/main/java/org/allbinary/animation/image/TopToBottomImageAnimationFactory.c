// Generated Code Do Not Modify
#include "org/allbinary/animation/image/TopToBottomImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/TopToBottomImageAnimation.h"





void TopToBottomImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TopToBottomImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TopToBottomImageAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("TopToBottomImageAnimationFactory", "getInstance", (void*) TopToBottomImageAnimationFactory_getInstance);
}


void TopToBottomImageAnimationFactory_init(TopToBottomImageAnimationFactory* this, Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    TopToBottomImageAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, Image_getWidth(image), Image_getHeight(image), 0, 0, animationBehaviorFactory);
}

TopToBottomImageAnimationFactory* TopToBottomImageAnimationFactory_new(Image* image, int32_t* sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    TopToBottomImageAnimationFactory* this = java_object_alloc(sizeof(TopToBottomImageAnimationFactory), "TopToBottomImageAnimationFactory");
    TopToBottomImageAnimationFactory_init(this, image, sequenceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* TopToBottomImageAnimationFactory_getInstance(TopToBottomImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        return TopToBottomImageAnimation_new(scaledImage, BaseImageAnimationFactory_getSequenceArray(this), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

