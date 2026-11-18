// Generated Code Do Not Modify
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif







void LayerManagerEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerManagerEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerEvent", "AllBinaryEventObject");
    java_register_method("LayerManagerEvent", "getLayerInterface", (void*) LayerManagerEvent_getLayerInterface);
    java_register_method("LayerManagerEvent", "setLayerInterface", (void*) LayerManagerEvent_setLayerInterface);
    java_register_method("LayerManagerEvent", "toString", (void*) LayerManagerEvent_toString);
}

static void LayerManagerEvent_initFields(LayerManagerEvent* this) {
    this->layerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
    
}


void LayerManagerEvent_init(LayerManagerEvent* this, LayerManager* layerManager, const char* crud) {
    LayerManagerEvent_register();
        AllBinaryEventObject_init(&this->base, layerManager);
        LayerManagerEvent_initFields(this);
        this->crud = crud;
}

LayerManagerEvent* LayerManagerEvent_new(LayerManager* layerManager, const char* crud) {
    LayerManagerEvent* this = java_object_alloc(sizeof(LayerManagerEvent), "LayerManagerEvent");
    LayerManagerEvent_init(this, layerManager, crud);
    return this;
}


AllBinaryLayer* LayerManagerEvent_getLayerInterface(LayerManagerEvent* this) {
        return this->layerInterface;
}


void LayerManagerEvent_setLayerInterface(LayerManagerEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


const char* LayerManagerEvent_toString(LayerManagerEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "LayerManagerEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, java_string_of(LayerManagerEvent_getLayerInterface(this)));
        StringMaker_append(stringBuffer, "\nCRUD: ");
        StringMaker_append(stringBuffer, this->crud);
        return java_string_of(stringBuffer);
}

