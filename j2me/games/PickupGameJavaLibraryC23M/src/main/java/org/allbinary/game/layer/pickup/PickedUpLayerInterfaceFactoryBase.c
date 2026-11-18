// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"


PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase_NULL_PICKED_UP_LAYER_FACTORY_BASE;




void PickedUpLayerInterfaceFactoryBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PickedUpLayerInterfaceFactoryBase_NULL_PICKED_UP_LAYER_FACTORY_BASE = PickedUpLayerInterfaceFactoryBase_new();
}

void PickedUpLayerInterfaceFactoryBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickedUpLayerInterfaceFactoryBase", nullptr);
    java_register_method("PickedUpLayerInterfaceFactoryBase", "getIconLayer", (void*) PickedUpLayerInterfaceFactoryBase_getIconLayer);
    java_register_method("PickedUpLayerInterfaceFactoryBase", "getAnimationInterface", (void*) PickedUpLayerInterfaceFactoryBase_getAnimationInterface);
    java_register_method("PickedUpLayerInterfaceFactoryBase", "getPickedUpLayerType", (void*) PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType);
}

void PickedUpLayerInterfaceFactoryBase_init(PickedUpLayerInterfaceFactoryBase* this) {
    PickedUpLayerInterfaceFactoryBase_register();
}

PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase_new(void) {
    PickedUpLayerInterfaceFactoryBase* this = java_object_alloc(sizeof(PickedUpLayerInterfaceFactoryBase), "PickedUpLayerInterfaceFactoryBase");
    PickedUpLayerInterfaceFactoryBase_init(this);
    return this;
}


AllBinaryLayer* PickedUpLayerInterfaceFactoryBase_getIconLayer(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Animation* PickedUpLayerInterfaceFactoryBase_getAnimationInterface(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PickedUpLayerType* PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

