// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"







void PickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactoryBase");
    java_register_method("PickedUpLayerInterfaceFactory", "getIconLayer", (void*) PickedUpLayerInterfaceFactory_getIconLayer);
    java_register_method("PickedUpLayerInterfaceFactory", "getAnimationInterface", (void*) PickedUpLayerInterfaceFactory_getAnimationInterface);
    java_register_method("PickedUpLayerInterfaceFactory", "getPickedUpLayerType", (void*) PickedUpLayerInterfaceFactory_getPickedUpLayerType);
}

static void PickedUpLayerInterfaceFactory_initFields(PickedUpLayerInterfaceFactory* this) {
    
    
    
}


void PickedUpLayerInterfaceFactory_init(PickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    PickedUpLayerInterfaceFactory_register();
    PickedUpLayerInterfaceFactoryBase_init(&this->base);
    PickedUpLayerInterfaceFactory_initFields(this);
        this->pickedUpLayerType = pickeUpLayerType;
        this->animationInterface = animationInterface;
        this->iconLayer = iconLayer;
}

PickedUpLayerInterfaceFactory* PickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    PickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(PickedUpLayerInterfaceFactory), "PickedUpLayerInterfaceFactory");
    PickedUpLayerInterfaceFactory_init(this, pickeUpLayerType, iconLayer, animationInterface);
    return this;
}


AllBinaryLayer* PickedUpLayerInterfaceFactory_getIconLayer(PickedUpLayerInterfaceFactory* this) {
        return this->iconLayer;
}


Animation* PickedUpLayerInterfaceFactory_getAnimationInterface(PickedUpLayerInterfaceFactory* this) {
        return this->animationInterface;
}


PickedUpLayerType* PickedUpLayerInterfaceFactory_getPickedUpLayerType(PickedUpLayerInterfaceFactory* this) {
        return this->pickedUpLayerType;
}

