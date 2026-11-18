// Generated Code Do Not Modify
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/image/ImageCache.h"






void GameFeatureImageCacheFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFeatureImageCacheFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureImageCacheFactory", nullptr);
}

void GameFeatureImageCacheFactory_init(GameFeatureImageCacheFactory* this) {
    GameFeatureImageCacheFactory_register();
}

GameFeatureImageCacheFactory* GameFeatureImageCacheFactory_new(void) {
    GameFeatureImageCacheFactory* this = java_object_alloc(sizeof(GameFeatureImageCacheFactory), "GameFeatureImageCacheFactory");
    GameFeatureImageCacheFactory_init(this);
    return this;
}


ImageCache* GameFeatureImageCacheFactory_getInstance(void) {
        return ImageCacheFactory_getInstance();
}


void GameFeatureImageCacheFactory_initMethod(void) {
        ImageCacheFactory_initMethod();
}


void GameFeatureImageCacheFactory_releaseAll(void) {
        ImageCacheBase_releaseAll(ImageCacheFactory_getInstance());
}

