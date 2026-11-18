// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/health/HealLayerFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/health/HealLayer.h"




void HealLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealLayerFactory", nullptr);
    java_register_method("HealLayerFactory", "getInstance", (void*) HealLayerFactory_getInstance);
}

void HealLayerFactory_init(HealLayerFactory* this) {
    HealLayerFactory_register();
}

HealLayerFactory* HealLayerFactory_new(void) {
    HealLayerFactory* this = java_object_alloc(sizeof(HealLayerFactory), "HealLayerFactory");
    HealLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* HealLayerFactory_getInstance(HealLayerFactory* this) {
        return HealLayer_new();
}

