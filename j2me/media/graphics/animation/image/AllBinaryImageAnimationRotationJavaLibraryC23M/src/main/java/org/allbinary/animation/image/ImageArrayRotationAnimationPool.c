// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayRotationAnimationPool.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheableInterfaceFactory.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"


static PoolInterface* ImageArrayRotationAnimationPool_IMAGE_ROTATION_ANIMATION_POOL;




void ImageArrayRotationAnimationPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageArrayRotationAnimationPool_IMAGE_ROTATION_ANIMATION_POOL = ImageArrayRotationAnimationPool_new(ImageArrayRotationAnimationCacheableInterfaceFactory_new());
}

void ImageArrayRotationAnimationPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayRotationAnimationPool", "BasicArrayListResetablePool");
    java_register_method("ImageArrayRotationAnimationPool", "remove", (void*) ImageArrayRotationAnimationPool_remove);
}


void ImageArrayRotationAnimationPool_init(ImageArrayRotationAnimationPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    ImageArrayRotationAnimationPool_register();
        BasicArrayListResetablePool_init(&this->base, cacheableInterfaceFactoryInterface);
}

ImageArrayRotationAnimationPool* ImageArrayRotationAnimationPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    ImageArrayRotationAnimationPool* this = java_object_alloc(sizeof(ImageArrayRotationAnimationPool), "ImageArrayRotationAnimationPool");
    ImageArrayRotationAnimationPool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


PoolInterface* ImageArrayRotationAnimationPool_getInstance(void) {
        return (ImageArrayRotationAnimationPool_staticInit(), ImageArrayRotationAnimationPool_IMAGE_ROTATION_ANIMATION_POOL);
}


// throws Exception
CacheableInterface* ImageArrayRotationAnimationPool_remove(ImageArrayRotationAnimationPool* this, void* key) {
        CacheableInterface* cacheableInterface = BasicArrayListResetablePool_remove((&this->base), key);
        ImageArrayRotationAnimationInfo* allBinaryImageRotationAnimationInfo = ((ImageArrayRotationAnimationInfo*) key);
        ImageArrayRotationAnimationCacheable* imageArrayRotationAnimationCacheable = (((ImageArrayRotationAnimationCacheable*) cacheableInterface));
        ImageArrayRotationAnimation_setImageArray(imageArrayRotationAnimationCacheable, ImageArrayRotationAnimationInfo_getImageArray(allBinaryImageRotationAnimationInfo));
        return cacheableInterface;
}

