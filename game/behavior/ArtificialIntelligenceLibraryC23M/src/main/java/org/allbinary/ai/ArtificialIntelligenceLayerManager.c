// Generated Code Do Not Modify
#include "org/allbinary/ai/ArtificialIntelligenceLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void ArtificialIntelligenceLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ArtificialIntelligenceLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArtificialIntelligenceLayerManager", "LayerManager");
}


void ArtificialIntelligenceLayerManager_init(ArtificialIntelligenceLayerManager* this) {
    ArtificialIntelligenceLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

ArtificialIntelligenceLayerManager* ArtificialIntelligenceLayerManager_new(void) {
    ArtificialIntelligenceLayerManager* this = java_object_alloc(sizeof(ArtificialIntelligenceLayerManager), "ArtificialIntelligenceLayerManager");
    ArtificialIntelligenceLayerManager_init(this);
    return this;
}

