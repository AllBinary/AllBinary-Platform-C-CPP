// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageAnimationSingletonInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#if __has_include("org/allbinary/image/AnimationFrameToImageUtil.h")
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#endif




void ImageAnimationSingletonInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageAnimationSingletonInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageAnimationSingletonInterfaceFactory", "SingletonAnimationInterfaceFactory");
}


void ImageAnimationSingletonInterfaceFactory_init(ImageAnimationSingletonInterfaceFactory* this, Animation* animationInterface, int32_t width, int32_t height) {
    ImageAnimationSingletonInterfaceFactory_register();
        SingletonAnimationInterfaceFactory_init(&this->base, ImageAnimation_new(AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil_getInstance(), width, height, animationInterface), AnimationBehavior_getInstance()));
}

ImageAnimationSingletonInterfaceFactory* ImageAnimationSingletonInterfaceFactory_new(Animation* animationInterface, int32_t width, int32_t height) {
    ImageAnimationSingletonInterfaceFactory* this = java_object_alloc(sizeof(ImageAnimationSingletonInterfaceFactory), "ImageAnimationSingletonInterfaceFactory");
    ImageAnimationSingletonInterfaceFactory_init(this, animationInterface, width, height);
    return this;
}

