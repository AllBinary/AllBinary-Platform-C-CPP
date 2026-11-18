// Generated Code Do Not Modify
#include "org/allbinary/game/input/OptimizedGameInputLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void OptimizedGameInputLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedGameInputLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedGameInputLayerManager", "LayerManager");
}


void OptimizedGameInputLayerManager_init(OptimizedGameInputLayerManager* this) {
    OptimizedGameInputLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedGameInputLayerManager* OptimizedGameInputLayerManager_new(void) {
    OptimizedGameInputLayerManager* this = java_object_alloc(sizeof(OptimizedGameInputLayerManager), "OptimizedGameInputLayerManager");
    OptimizedGameInputLayerManager_init(this);
    return this;
}

