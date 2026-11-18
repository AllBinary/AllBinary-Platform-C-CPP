// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/FallingPickupLayer.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/view/ViewPosition.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif


static const char* FallingPickupLayer_NAME = "FallingPickupLayer";




void FallingPickupLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FallingPickupLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FallingPickupLayer", "PickupLayer");
    java_register_method("FallingPickupLayer", "processTick", (void*) FallingPickupLayer_processTick);
    java_register_method("FallingPickupLayer", "implmentsTickableInterface", (void*) FallingPickupLayer_implmentsTickableInterface);
}


void FallingPickupLayer_init(FallingPickupLayer* this, RemoteInfo* remoteInfo) {
    FallingPickupLayer_register();
        PickupLayer_init(&this->base, FallingPickupLayer_NAME, remoteInfo, 0, (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY), NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0), Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

FallingPickupLayer* FallingPickupLayer_new(RemoteInfo* remoteInfo) {
    FallingPickupLayer* this = java_object_alloc(sizeof(FallingPickupLayer), "FallingPickupLayer");
    FallingPickupLayer_init(this, remoteInfo);
    return this;
}


void FallingPickupLayer_processTick(FallingPickupLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer_setPosition(this, this->base.base.base.base.base.base.base.x, this->base.base.base.base.base.base.base.y + 1, this->base.base.base.base.base.base.base.z);
}


bool FallingPickupLayer_implmentsTickableInterface(FallingPickupLayer* this) {
        return true;
}

