// Generated Code Do Not Modify
#include "org/allbinary/ai/OptimizedArtificialIntelligenceLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void OptimizedArtificialIntelligenceLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedArtificialIntelligenceLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedArtificialIntelligenceLayerManager", "LayerManager");
}


void OptimizedArtificialIntelligenceLayerManager_init(OptimizedArtificialIntelligenceLayerManager* this) {
    OptimizedArtificialIntelligenceLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedArtificialIntelligenceLayerManager* OptimizedArtificialIntelligenceLayerManager_new(void) {
    OptimizedArtificialIntelligenceLayerManager* this = java_object_alloc(sizeof(OptimizedArtificialIntelligenceLayerManager), "OptimizedArtificialIntelligenceLayerManager");
    OptimizedArtificialIntelligenceLayerManager_init(this);
    return this;
}

