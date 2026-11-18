// Generated Code Do Not Modify
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/image/ImageCache.h"


static ImageCache* ImageCacheFactory_IMAGE_CACHE;



void ImageCacheFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageCacheFactory_IMAGE_CACHE = ImageCache_new();
}

void ImageCacheFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCacheFactory", nullptr);
}

void ImageCacheFactory_init(ImageCacheFactory* this) {
    ImageCacheFactory_register();
}

ImageCacheFactory* ImageCacheFactory_new(void) {
    ImageCacheFactory* this = java_object_alloc(sizeof(ImageCacheFactory), "ImageCacheFactory");
    ImageCacheFactory_init(this);
    return this;
}


ImageCache* ImageCacheFactory_getInstance(void) {
        return (ImageCacheFactory_staticInit(), ImageCacheFactory_IMAGE_CACHE);
}


void ImageCacheFactory_initMethod(void) {
}

