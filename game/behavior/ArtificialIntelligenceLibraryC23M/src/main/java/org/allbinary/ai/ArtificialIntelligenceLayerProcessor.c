// Generated Code Do Not Modify
#include "org/allbinary/ai/ArtificialIntelligenceLayerProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/ai/ArtificialIntelligenceLayerManager.h"
#include "org/allbinary/ai/ArtificialIntelligenceCompositeInterface.h"
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
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






void ArtificialIntelligenceLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ArtificialIntelligenceLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArtificialIntelligenceLayerProcessor", "LayerProcessor");
    java_register_method("ArtificialIntelligenceLayerProcessor", "processAt", (void*) ArtificialIntelligenceLayerProcessor_processAt);
    java_register_method("ArtificialIntelligenceLayerProcessor", "isProcessorLayer", (void*) ArtificialIntelligenceLayerProcessor_isProcessorLayer);
}


void ArtificialIntelligenceLayerProcessor_init(ArtificialIntelligenceLayerProcessor* this) {
    ArtificialIntelligenceLayerProcessor_register();
        LayerProcessor_init(&this->base, ArtificialIntelligenceLayerManager_new());
}

ArtificialIntelligenceLayerProcessor* ArtificialIntelligenceLayerProcessor_new(void) {
    ArtificialIntelligenceLayerProcessor* this = java_object_alloc(sizeof(ArtificialIntelligenceLayerProcessor), "ArtificialIntelligenceLayerProcessor");
    ArtificialIntelligenceLayerProcessor_init(this);
    return this;
}


// throws Exception
void ArtificialIntelligenceLayerProcessor_processAt(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        ArtificialIntelligenceCompositeInterface* artificialIntelligenceCompositeInterface = ((ArtificialIntelligenceCompositeInterface*) layerInterface);
        ArtificialIntelligenceInterface_processAI(ArtificialIntelligenceCompositeInterface_getArtificialIntelligenceInterface(artificialIntelligenceCompositeInterface), allBinaryLayerManager);
}


// throws Exception
bool ArtificialIntelligenceLayerProcessor_isProcessorLayer(ArtificialIntelligenceLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

