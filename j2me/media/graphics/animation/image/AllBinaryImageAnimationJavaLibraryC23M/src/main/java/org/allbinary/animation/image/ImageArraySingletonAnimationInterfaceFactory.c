// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArraySingletonAnimationInterfaceFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/ImageArrayAnimation.h"




void ImageArraySingletonAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArraySingletonAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArraySingletonAnimationInterfaceFactory", "SingletonAnimationInterfaceFactory");
}


void ImageArraySingletonAnimationInterfaceFactory_init(ImageArraySingletonAnimationInterfaceFactory* this, Image** imageArray) {
    ImageArraySingletonAnimationInterfaceFactory_register();
        SingletonAnimationInterfaceFactory_init(&this->base, ImageArrayAnimation_new(imageArray, AnimationBehavior_getInstance()));
}

ImageArraySingletonAnimationInterfaceFactory* ImageArraySingletonAnimationInterfaceFactory_new(Image** imageArray) {
    ImageArraySingletonAnimationInterfaceFactory* this = java_object_alloc(sizeof(ImageArraySingletonAnimationInterfaceFactory), "ImageArraySingletonAnimationInterfaceFactory");
    ImageArraySingletonAnimationInterfaceFactory_init(this, imageArray);
    return this;
}

