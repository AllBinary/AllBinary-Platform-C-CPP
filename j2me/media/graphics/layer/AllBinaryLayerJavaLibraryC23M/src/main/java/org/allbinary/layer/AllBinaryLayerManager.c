// Generated Code Do Not Modify
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#include "org/allbinary/layer/AllBinaryLayer.h"









static void AllBinaryLayerManager_appendProcessors(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface);




void AllBinaryLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryLayerManager", "LayerManager");
    java_register_method("AllBinaryLayerManager", "getLayerProcessorArray", (void*) AllBinaryLayerManager_getLayerProcessorArray);
    java_register_method("AllBinaryLayerManager", "setLayerProcessorArray", (void*) AllBinaryLayerManager_setLayerProcessorArray);
    java_register_method("AllBinaryLayerManager", "log", (void*) AllBinaryLayerManager_log);
    java_register_method("AllBinaryLayerManager", "append", (void*) AllBinaryLayerManager_append);
    java_register_method("AllBinaryLayerManager", "appendAt", (void*) AllBinaryLayerManager_appendAt);
    java_register_method("AllBinaryLayerManager", "appendProcessors", (void*) AllBinaryLayerManager_appendProcessors);
    java_register_method("AllBinaryLayerManager", "remove", (void*) AllBinaryLayerManager_remove);
    java_register_method("AllBinaryLayerManager", "process", (void*) AllBinaryLayerManager_process);
    java_register_method("AllBinaryLayerManager", "cleanup", (void*) AllBinaryLayerManager_cleanup);
}

static void AllBinaryLayerManager_initFields(AllBinaryLayerManager* this) {
    this->layerManagerEventHandler = LayerManagerEventHandler_getInstance();
    this->createLayerManagerEvent = LayerManagerEvent_new(this, this->layerManagerEventHandler->CREATE);
    this->deleteLayerManagerEvent = LayerManagerEvent_new(this, this->layerManagerEventHandler->DELETE);
    this->basicLayerProcessorArray = ((LayerProcessor**) java_array_new(sizeof(LayerProcessor*), 0));
}


void AllBinaryLayerManager_init(AllBinaryLayerManager* this) {
    AllBinaryLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
        AllBinaryLayerManager_initFields(this);
}

AllBinaryLayerManager* AllBinaryLayerManager_new(void) {
    AllBinaryLayerManager* this = java_object_alloc(sizeof(AllBinaryLayerManager), "AllBinaryLayerManager");
    AllBinaryLayerManager_init(this);
    return this;
}


LayerProcessor** AllBinaryLayerManager_getLayerProcessorArray(AllBinaryLayerManager* this) {
        return this->basicLayerProcessorArray;
}


void AllBinaryLayerManager_setLayerProcessorArray(AllBinaryLayerManager* this, LayerProcessor** layerProcessorArray) {
        this->basicLayerProcessorArray = layerProcessorArray;
}


void AllBinaryLayerManager_log(AllBinaryLayerManager* this) {
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            LayerProcessor* layerProcessorInterface = this->basicLayerProcessorArray[index];
        }
}


// throws Exception
void AllBinaryLayerManager_append(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        if (!LayerManager_contains(this, layerInterface)) {
            AllBinaryLayerManager_appendProcessors(this, layerInterface);
            LayerManager_append((&this->base), layerInterface);
        }
}


// throws Exception
void AllBinaryLayerManager_appendAt(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface, int32_t index) {
        if (!LayerManager_contains(this, layerInterface)) {
            AllBinaryLayerManager_appendProcessors(this, layerInterface);
            LayerManager_appendAt((&this->base), layerInterface, index);
        }
}


// throws Exception
static void AllBinaryLayerManager_appendProcessors(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        LayerManagerEvent_setLayerInterface(this->createLayerManagerEvent, layerInterface);
        LayerManagerEventHandler_fireEvent(this->layerManagerEventHandler, this->createLayerManagerEvent);
        LayerProcessor* layerProcessorInterface = nullptr;
        for (int32_t index = java_array_length(this->basicLayerProcessorArray); --index >= 0; ) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            if (LayerProcessor_isProcessorLayer(layerProcessorInterface, layerInterface)) {
                LayerManager_append(LayerProcessor_getLayerManager(layerProcessorInterface), layerInterface);
            }
        }
}


// throws Exception
// synchronized
void AllBinaryLayerManager_remove(AllBinaryLayerManager* this, AllBinaryLayer* layerInterface) {
        LayerManagerEvent_setLayerInterface(this->deleteLayerManagerEvent, layerInterface);
        LayerManagerEventHandler_fireDeleteEvent(this->layerManagerEventHandler, this->deleteLayerManagerEvent);
        LayerProcessor* layerProcessorInterface = nullptr;
        for (int32_t index = java_array_length(this->basicLayerProcessorArray); --index >= 0; ) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            LayerManager_remove(LayerProcessor_getLayerManager(layerProcessorInterface), layerInterface);
        }
        LayerManager_remove((&this->base), layerInterface);
}


// throws Exception
void AllBinaryLayerManager_process(AllBinaryLayerManager* this) {
        LayerProcessor* layerProcessorInterface = nullptr;
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            LayerProcessor_process(layerProcessorInterface, this);
        }
}


// throws Exception
void AllBinaryLayerManager_cleanup(AllBinaryLayerManager* this) {
        LayerProcessor* layerProcessorInterface = nullptr;
        int32_t size = java_array_length(this->basicLayerProcessorArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterface = this->basicLayerProcessorArray[index];
            LayerManager_cleanup(LayerProcessor_getLayerManager(layerProcessorInterface));
        }
        LayerManager_cleanup((&this->base));
}

