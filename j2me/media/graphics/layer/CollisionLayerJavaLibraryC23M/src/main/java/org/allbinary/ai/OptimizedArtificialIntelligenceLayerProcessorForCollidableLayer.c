// Generated Code Do Not Modify
#include "org/allbinary/ai/OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/ai/OptimizedArtificialIntelligenceLayerManager.h"
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/ArtificialIntelligenceInterface.h")
#include "org/allbinary/game/layer/ArtificialIntelligenceInterface.h"
#endif
#if __has_include("org/allbinary/layer/ArtificialIntelligenceInterface.h")
#include "org/allbinary/layer/ArtificialIntelligenceInterface.h"
#endif
#if __has_include("org/allbinary/layer/ArtificialIntelligenceInterface.h")
#include "org/allbinary/layer/ArtificialIntelligenceInterface.h"
#endif
#if __has_include("org/allbinary/layer/ArtificialIntelligenceInterface.h")
#include "org/allbinary/layer/ArtificialIntelligenceInterface.h"
#endif






void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer", "LayerProcessor");
    java_register_method("OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer", "processAt", (void*) OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_processAt);
    java_register_method("OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer", "isProcessorLayer", (void*) OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_isProcessorLayer);
}


void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this) {
    OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_register();
        LayerProcessor_init(&this->base, OptimizedArtificialIntelligenceLayerManager_new());
}

OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_new(void) {
    OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this = java_object_alloc(sizeof(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer), "OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer");
    OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_processAt(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        CollidableCompositeLayer* artificialIntelligenceCompositeInterface = ((CollidableCompositeLayer*) layerInterface);
        ArtificialIntelligenceInterface_processAI(CollidableCompositeLayer_getArtificialIntelligenceInterface(artificialIntelligenceCompositeInterface), allBinaryLayerManager);
}


// throws Exception
bool OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

