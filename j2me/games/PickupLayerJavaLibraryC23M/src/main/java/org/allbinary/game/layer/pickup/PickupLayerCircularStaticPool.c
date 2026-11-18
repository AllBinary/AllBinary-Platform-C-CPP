// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h"
#include "org/allbinary/game/layer/pickup/PickupLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"


static PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_SINGLETON;




void PickupLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PickupLayerCircularStaticPool_SINGLETON = PickupLayerCircularStaticPool_new();
}

void PickupLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickupLayerCircularStaticPool", "AllBinaryLayerCircularPool");
    java_register_method("PickupLayerCircularStaticPool", "getInstanceXYZ", (void*) PickupLayerCircularStaticPool_getInstanceXYZ);
}


void PickupLayerCircularStaticPool_init(PickupLayerCircularStaticPool* this) {
    PickupLayerCircularStaticPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
}

PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_new(void) {
    PickupLayerCircularStaticPool* this = java_object_alloc(sizeof(PickupLayerCircularStaticPool), "PickupLayerCircularStaticPool");
    PickupLayerCircularStaticPool_init(this);
    return this;
}


PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_getInstance(void) {
        return (PickupLayerCircularStaticPool_staticInit(), PickupLayerCircularStaticPool_SINGLETON);
}


// throws Exception
PickedUpLayerInterface* PickupLayerCircularStaticPool_getInstanceXYZ(PickupLayerCircularStaticPool* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z) {
        PickupLayer* pickupLayer = ((PickupLayer*) BaseCircularPool_getNextInstance(this));
        PickupLayer_initXYZ(pickupLayer, x, y, z);
        PickupLayer_initMethod(pickupLayer, pickedUpLayerInterfaceFactoryInterface, PickedUpLayerInterfaceFactoryInterface_getAnimationInterface(pickedUpLayerInterfaceFactoryInterface));
        return pickupLayer;
}

