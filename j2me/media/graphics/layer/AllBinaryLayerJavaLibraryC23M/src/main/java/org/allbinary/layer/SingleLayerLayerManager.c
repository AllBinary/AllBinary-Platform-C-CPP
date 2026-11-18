// Generated Code Do Not Modify
#include "org/allbinary/layer/SingleLayerLayerManager.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void SingleLayerLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingleLayerLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingleLayerLayerManager", "LayerManager");
}


void SingleLayerLayerManager_init(SingleLayerLayerManager* this) {
    SingleLayerLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

SingleLayerLayerManager* SingleLayerLayerManager_new(void) {
    SingleLayerLayerManager* this = java_object_alloc(sizeof(SingleLayerLayerManager), "SingleLayerLayerManager");
    SingleLayerLayerManager_init(this);
    return this;
}

