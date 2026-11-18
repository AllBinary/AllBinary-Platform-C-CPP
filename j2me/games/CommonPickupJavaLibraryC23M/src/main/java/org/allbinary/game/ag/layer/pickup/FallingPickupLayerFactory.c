// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/FallingPickupLayerFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/FallingPickupLayer.h"




void FallingPickupLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FallingPickupLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FallingPickupLayerFactory", nullptr);
    java_register_method("FallingPickupLayerFactory", "getInstance", (void*) FallingPickupLayerFactory_getInstance);
}

void FallingPickupLayerFactory_init(FallingPickupLayerFactory* this) {
    FallingPickupLayerFactory_register();
}

FallingPickupLayerFactory* FallingPickupLayerFactory_new(void) {
    FallingPickupLayerFactory* this = java_object_alloc(sizeof(FallingPickupLayerFactory), "FallingPickupLayerFactory");
    FallingPickupLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* FallingPickupLayerFactory_getInstance(FallingPickupLayerFactory* this) {
        return FallingPickupLayer_new((RemoteInfo_staticInit(), RemoteInfo_REMOTE_INFO));
}

