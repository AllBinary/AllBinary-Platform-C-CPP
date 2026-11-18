// Generated Code Do Not Modify
#include "org/allbinary/layer/SingleLayerLayerProcessor.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/SingleLayerLayerManager.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"





void SingleLayerLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingleLayerLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingleLayerLayerProcessor", "LayerProcessor");
    java_register_method("SingleLayerLayerProcessor", "process", (void*) SingleLayerLayerProcessor_process);
}


void SingleLayerLayerProcessor_init(SingleLayerLayerProcessor* this) {
    SingleLayerLayerProcessor_register();
        LayerProcessor_init(&this->base, SingleLayerLayerManager_new());
}

SingleLayerLayerProcessor* SingleLayerLayerProcessor_new(void) {
    SingleLayerLayerProcessor* this = java_object_alloc(sizeof(SingleLayerLayerProcessor), "SingleLayerLayerProcessor");
    SingleLayerLayerProcessor_init(this);
    return this;
}


// throws Exception
void SingleLayerLayerProcessor_process(SingleLayerLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerManager* layerManager = LayerProcessor_getLayerManager(this);
        LayerProcessor_processAt(this, allBinaryLayerManager, ((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, 0)), 0);
}

