// Generated Code Do Not Modify
#include "org/allbinary/game/collision/OptimizedAllBinaryCollisionLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void OptimizedAllBinaryCollisionLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedAllBinaryCollisionLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedAllBinaryCollisionLayerManager", "LayerManager");
}


void OptimizedAllBinaryCollisionLayerManager_init(OptimizedAllBinaryCollisionLayerManager* this) {
    OptimizedAllBinaryCollisionLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedAllBinaryCollisionLayerManager* OptimizedAllBinaryCollisionLayerManager_new(void) {
    OptimizedAllBinaryCollisionLayerManager* this = java_object_alloc(sizeof(OptimizedAllBinaryCollisionLayerManager), "OptimizedAllBinaryCollisionLayerManager");
    OptimizedAllBinaryCollisionLayerManager_init(this);
    return this;
}

