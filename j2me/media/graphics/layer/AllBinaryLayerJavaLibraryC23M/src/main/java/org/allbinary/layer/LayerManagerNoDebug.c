// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#include "org/allbinary/layer/LayerManagerLoggingBase.h"


static LayerManagerNoDebug* LayerManagerNoDebug_instance;


void LayerManagerNoDebug_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerManagerNoDebug_instance = LayerManagerNoDebug_new();
}

void LayerManagerNoDebug_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerNoDebug", "LayerManagerLoggingBase");
}

void LayerManagerNoDebug_init(LayerManagerNoDebug* this) {
    LayerManagerNoDebug_register();
    LayerManagerLoggingBase_init(&this->base);
}

LayerManagerNoDebug* LayerManagerNoDebug_new(void) {
    LayerManagerNoDebug* this = java_object_alloc(sizeof(LayerManagerNoDebug), "LayerManagerNoDebug");
    LayerManagerNoDebug_init(this);
    return this;
}


LayerManagerNoDebug* LayerManagerNoDebug_getInstance(void) {
        return (LayerManagerNoDebug_staticInit(), LayerManagerNoDebug_instance);
}

