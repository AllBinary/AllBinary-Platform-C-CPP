// Generated Code Do Not Modify
#include "org/allbinary/game/tick/OptimizedTickableLayerProcessor.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/tick/OptimizedTickableLayerManager.h"






void OptimizedTickableLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedTickableLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedTickableLayerProcessor", "LayerProcessor");
    java_register_method("OptimizedTickableLayerProcessor", "processAt", (void*) OptimizedTickableLayerProcessor_processAt);
    java_register_method("OptimizedTickableLayerProcessor", "isProcessorLayer", (void*) OptimizedTickableLayerProcessor_isProcessorLayer);
}


void OptimizedTickableLayerProcessor_init(OptimizedTickableLayerProcessor* this) {
    OptimizedTickableLayerProcessor_register();
        LayerProcessor_init(&this->base, OptimizedTickableLayerManager_new());
}

OptimizedTickableLayerProcessor* OptimizedTickableLayerProcessor_new(void) {
    OptimizedTickableLayerProcessor* this = java_object_alloc(sizeof(OptimizedTickableLayerProcessor), "OptimizedTickableLayerProcessor");
    OptimizedTickableLayerProcessor_init(this);
    return this;
}


// throws Exception
void OptimizedTickableLayerProcessor_processAt(OptimizedTickableLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        AllBinaryGameLayer* tickableInterface = ((AllBinaryGameLayer*) layerInterface);
        AllBinaryGameLayer_processTick(tickableInterface, allBinaryLayerManager);
}


bool OptimizedTickableLayerProcessor_isProcessorLayer(OptimizedTickableLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsTickableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

