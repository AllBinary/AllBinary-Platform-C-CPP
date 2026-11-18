// Generated Code Do Not Modify
#include "org/allbinary/game/tick/TickableLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void TickableLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TickableLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TickableLayerManager", "LayerManager");
}


void TickableLayerManager_init(TickableLayerManager* this) {
    TickableLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

TickableLayerManager* TickableLayerManager_new(void) {
    TickableLayerManager* this = java_object_alloc(sizeof(TickableLayerManager), "TickableLayerManager");
    TickableLayerManager_init(this);
    return this;
}

