// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayer.h"




void LifeLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LifeLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LifeLayerFactory", nullptr);
    java_register_method("LifeLayerFactory", "getInstance", (void*) LifeLayerFactory_getInstance);
}

void LifeLayerFactory_init(LifeLayerFactory* this) {
    LifeLayerFactory_register();
}

LifeLayerFactory* LifeLayerFactory_new(void) {
    LifeLayerFactory* this = java_object_alloc(sizeof(LifeLayerFactory), "LifeLayerFactory");
    LifeLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* LifeLayerFactory_getInstance(LifeLayerFactory* this) {
        return LifeLayer_new();
}

