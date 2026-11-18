// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/layer/LayerProcessorInterface.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"








void LayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerProcessor", nullptr);
    java_register_method("LayerProcessor", "processAt", (void*) LayerProcessor_processAt);
    java_register_method("LayerProcessor", "isProcessorLayer", (void*) LayerProcessor_isProcessorLayer);
    java_register_method("LayerProcessor", "getLayerManager", (void*) LayerProcessor_getLayerManager);
    java_register_method("LayerProcessor", "process", (void*) LayerProcessor_process);
}

static void LayerProcessor_initFields(LayerProcessor* this) {
    this->commonStrings = CommonStrings_getInstance();
    
}


void LayerProcessor_init(LayerProcessor* this, LayerManager* layerManager) {
    LayerProcessor_register();
    LayerProcessor_initFields(this);
        this->layerManager = layerManager;
}

LayerProcessor* LayerProcessor_new(LayerManager* layerManager) {
    LayerProcessor* this = java_object_alloc(sizeof(LayerProcessor), "LayerProcessor");
    LayerProcessor_init(this, layerManager);
    return this;
}


// throws Exception
void LayerProcessor_processAt(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool LayerProcessor_isProcessorLayer(LayerProcessor* this, AllBinaryLayer* layerInterface) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


LayerManager* LayerProcessor_getLayerManager(LayerProcessor* this) {
        return this->layerManager;
}


// throws Exception
void LayerProcessor_process(LayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerManager* layerManager = LayerProcessor_getLayerManager(this);
        int32_t size = LayerManager_getSize(layerManager);
        for (int32_t index = 0; index < size; index++) {
            LayerProcessor_processAt(this, allBinaryLayerManager, ((AllBinaryLayer*) LayerManager_getLayerAt(layerManager, index)), index);
        }
}

