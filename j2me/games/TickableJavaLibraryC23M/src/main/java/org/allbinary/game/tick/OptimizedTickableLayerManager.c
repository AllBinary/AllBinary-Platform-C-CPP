// Generated Code Do Not Modify
#include "org/allbinary/game/tick/OptimizedTickableLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void OptimizedTickableLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedTickableLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedTickableLayerManager", "LayerManager");
}


void OptimizedTickableLayerManager_init(OptimizedTickableLayerManager* this) {
    OptimizedTickableLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedTickableLayerManager* OptimizedTickableLayerManager_new(void) {
    OptimizedTickableLayerManager* this = java_object_alloc(sizeof(OptimizedTickableLayerManager), "OptimizedTickableLayerManager");
    OptimizedTickableLayerManager_init(this);
    return this;
}

