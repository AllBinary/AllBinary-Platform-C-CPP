// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
#include "org/allbinary/image/ImageCache.h"


static ImageCache* OpenGLImageCacheFactory_IMAGE_CACHE;



void OpenGLImageCacheFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLImageCacheFactory_IMAGE_CACHE = (ImageCache_staticInit(), ImageCache_NULL_IMAGE_CACHE);
}

void OpenGLImageCacheFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLImageCacheFactory", nullptr);
}

void OpenGLImageCacheFactory_init(OpenGLImageCacheFactory* this) {
    OpenGLImageCacheFactory_register();
}

OpenGLImageCacheFactory* OpenGLImageCacheFactory_new(void) {
    OpenGLImageCacheFactory* this = java_object_alloc(sizeof(OpenGLImageCacheFactory), "OpenGLImageCacheFactory");
    OpenGLImageCacheFactory_init(this);
    return this;
}


ImageCache* OpenGLImageCacheFactory_getInstance(void) {
        return (OpenGLImageCacheFactory_staticInit(), OpenGLImageCacheFactory_IMAGE_CACHE);
}


void OpenGLImageCacheFactory_initMethod(void) {
        if ((OpenGLImageCacheFactory_staticInit(), OpenGLImageCacheFactory_IMAGE_CACHE) == nullptr) {
        }
}

