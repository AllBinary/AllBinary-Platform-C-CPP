// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheableInterfaceFactory.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"




void ImageArrayRotationAnimationCacheableInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayRotationAnimationCacheableInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayRotationAnimationCacheableInterfaceFactory", nullptr);
    java_register_method("ImageArrayRotationAnimationCacheableInterfaceFactory", "getInstance", (void*) ImageArrayRotationAnimationCacheableInterfaceFactory_getInstance);
}

void ImageArrayRotationAnimationCacheableInterfaceFactory_init(ImageArrayRotationAnimationCacheableInterfaceFactory* this) {
    ImageArrayRotationAnimationCacheableInterfaceFactory_register();
}

ImageArrayRotationAnimationCacheableInterfaceFactory* ImageArrayRotationAnimationCacheableInterfaceFactory_new(void) {
    ImageArrayRotationAnimationCacheableInterfaceFactory* this = java_object_alloc(sizeof(ImageArrayRotationAnimationCacheableInterfaceFactory), "ImageArrayRotationAnimationCacheableInterfaceFactory");
    ImageArrayRotationAnimationCacheableInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* ImageArrayRotationAnimationCacheableInterfaceFactory_getInstance(ImageArrayRotationAnimationCacheableInterfaceFactory* this, void* key) {
        return ImageArrayRotationAnimationCacheable_new(key, AnimationBehavior_getInstance());
}

