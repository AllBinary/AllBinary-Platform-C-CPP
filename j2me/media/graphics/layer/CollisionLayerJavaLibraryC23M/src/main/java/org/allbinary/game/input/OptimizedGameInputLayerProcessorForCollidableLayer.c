// Generated Code Do Not Modify
#include "org/allbinary/game/input/OptimizedGameInputLayerProcessorForCollidableLayer.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/input/OptimizedGameInputLayerManager.h"






void OptimizedGameInputLayerProcessorForCollidableLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedGameInputLayerProcessorForCollidableLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedGameInputLayerProcessorForCollidableLayer", "LayerProcessor");
    java_register_method("OptimizedGameInputLayerProcessorForCollidableLayer", "processAt", (void*) OptimizedGameInputLayerProcessorForCollidableLayer_processAt);
    java_register_method("OptimizedGameInputLayerProcessorForCollidableLayer", "isProcessorLayer", (void*) OptimizedGameInputLayerProcessorForCollidableLayer_isProcessorLayer);
}


void OptimizedGameInputLayerProcessorForCollidableLayer_init(OptimizedGameInputLayerProcessorForCollidableLayer* this) {
    OptimizedGameInputLayerProcessorForCollidableLayer_register();
        LayerProcessor_init(&this->base, OptimizedGameInputLayerManager_new());
}

OptimizedGameInputLayerProcessorForCollidableLayer* OptimizedGameInputLayerProcessorForCollidableLayer_new(void) {
    OptimizedGameInputLayerProcessorForCollidableLayer* this = java_object_alloc(sizeof(OptimizedGameInputLayerProcessorForCollidableLayer), "OptimizedGameInputLayerProcessorForCollidableLayer");
    OptimizedGameInputLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedGameInputLayerProcessorForCollidableLayer_processAt(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        AllBinaryGameLayer* gameInputInterface = ((AllBinaryGameLayer*) layerInterface);
        AllBinaryGameLayer_processInput(gameInputInterface, allBinaryLayerManager);
}


bool OptimizedGameInputLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedGameInputLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsGameInputInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

