// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"





void PickedUpLayerType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PickedUpLayerType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickedUpLayerType", nullptr);
    java_register_method("PickedUpLayerType", "toString", (void*) PickedUpLayerType_toString);
}

static void PickedUpLayerType_initFields(PickedUpLayerType* this) {
    
}


void PickedUpLayerType_init(PickedUpLayerType* this, const char* name) {
    PickedUpLayerType_register();
    PickedUpLayerType_initFields(this);
        this->name = name;
}

PickedUpLayerType* PickedUpLayerType_new(const char* name) {
    PickedUpLayerType* this = java_object_alloc(sizeof(PickedUpLayerType), "PickedUpLayerType");
    PickedUpLayerType_init(this, name);
    return this;
}


const char* PickedUpLayerType_toString(PickedUpLayerType* this) {
        return this->name;
}

