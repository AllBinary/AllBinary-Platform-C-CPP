// Generated Code Do Not Modify
#include "org/allbinary/game/tick/TickableLayerProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/tick/TickableLayerManager.h"
#include "org/allbinary/game/tick/TickableInterface.h"






void TickableLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TickableLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TickableLayerProcessor", "LayerProcessor");
    java_register_method("TickableLayerProcessor", "processAt", (void*) TickableLayerProcessor_processAt);
    java_register_method("TickableLayerProcessor", "isProcessorLayer", (void*) TickableLayerProcessor_isProcessorLayer);
}


void TickableLayerProcessor_init(TickableLayerProcessor* this) {
    TickableLayerProcessor_register();
        LayerProcessor_init(&this->base, TickableLayerManager_new());
}

TickableLayerProcessor* TickableLayerProcessor_new(void) {
    TickableLayerProcessor* this = java_object_alloc(sizeof(TickableLayerProcessor), "TickableLayerProcessor");
    TickableLayerProcessor_init(this);
    return this;
}


// throws Exception
void TickableLayerProcessor_processAt(TickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        TickableInterface* tickableInterface = ((TickableInterface*) layerInterface);
        TickableInterface_processTick(tickableInterface, allBinaryLayerManager);
}


bool TickableLayerProcessor_isProcessorLayer(TickableLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsTickableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

