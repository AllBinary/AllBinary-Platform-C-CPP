// Generated Code Do Not Modify
#include "org/allbinary/layer/event/LayerManagerEventListener.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"






void LayerManagerEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerManagerEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerEventListener", nullptr);
    java_register_method("LayerManagerEventListener", "onEvent", (void*) LayerManagerEventListener_onEvent);
    java_register_method("LayerManagerEventListener", "onCreateLayerManagerEvent", (void*) LayerManagerEventListener_onCreateLayerManagerEvent);
    java_register_method("LayerManagerEventListener", "onDeleteLayerManagerEvent", (void*) LayerManagerEventListener_onDeleteLayerManagerEvent);
}

void LayerManagerEventListener_init(LayerManagerEventListener* this) {
    LayerManagerEventListener_register();
}

LayerManagerEventListener* LayerManagerEventListener_new(void) {
    LayerManagerEventListener* this = java_object_alloc(sizeof(LayerManagerEventListener), "LayerManagerEventListener");
    LayerManagerEventListener_init(this);
    return this;
}


void LayerManagerEventListener_onEvent(LayerManagerEventListener* this, AllBinaryEventObject* eventObject) {
}


// throws Exception
void LayerManagerEventListener_onCreateLayerManagerEvent(LayerManagerEventListener* this, LayerManagerEvent* layerManagerEvent) {
}


// throws Exception
void LayerManagerEventListener_onDeleteLayerManagerEvent(LayerManagerEventListener* this, LayerManagerEvent* layerManagerEvent) {
}

