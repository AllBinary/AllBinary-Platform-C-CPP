// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"




void IconLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IconLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IconLayerFactory", nullptr);
}

void IconLayerFactory_init(IconLayerFactory* this) {
    IconLayerFactory_register();
}

IconLayerFactory* IconLayerFactory_new(void) {
    IconLayerFactory* this = java_object_alloc(sizeof(IconLayerFactory), "IconLayerFactory");
    IconLayerFactory_init(this);
    return this;
}


// throws Exception
IconLayer* IconLayerFactory_getInstance(Animation* animationInterface, int32_t width, int32_t height) {
        return IconLayer_new(animationInterface, width, height);
}

