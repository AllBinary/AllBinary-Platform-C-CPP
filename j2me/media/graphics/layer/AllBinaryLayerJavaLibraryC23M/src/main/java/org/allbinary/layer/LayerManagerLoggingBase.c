// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"








void LayerManagerLoggingBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerManagerLoggingBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerLoggingBase", nullptr);
    java_register_method("LayerManagerLoggingBase", "append", (void*) LayerManagerLoggingBase_append);
    java_register_method("LayerManagerLoggingBase", "appendAt", (void*) LayerManagerLoggingBase_appendAt);
    java_register_method("LayerManagerLoggingBase", "remove", (void*) LayerManagerLoggingBase_remove);
    java_register_method("LayerManagerLoggingBase", "removeResult", (void*) LayerManagerLoggingBase_removeResult);
    java_register_method("LayerManagerLoggingBase", "clear", (void*) LayerManagerLoggingBase_clear);
}

void LayerManagerLoggingBase_init(LayerManagerLoggingBase* this) {
    LayerManagerLoggingBase_register();
}

LayerManagerLoggingBase* LayerManagerLoggingBase_new(void) {
    LayerManagerLoggingBase* this = java_object_alloc(sizeof(LayerManagerLoggingBase), "LayerManagerLoggingBase");
    LayerManagerLoggingBase_init(this);
    return this;
}


// throws Exception
void LayerManagerLoggingBase_append(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface) {
}


void LayerManagerLoggingBase_appendAt(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface, int32_t index) {
}


void LayerManagerLoggingBase_remove(LayerManagerLoggingBase* this, AllBinaryLayer* layerInterface) {
}


void LayerManagerLoggingBase_removeResult(LayerManagerLoggingBase* this, LayerManager* layerManager, AllBinaryLayer* layerInterface, bool result) {
}


void LayerManagerLoggingBase_clear(LayerManagerLoggingBase* this) {
}

