// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayerCircularStaticPool.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/view/ViewPositionFactoryInterface.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineCountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayerFactory.h"


static WeaponLayerCircularPool* MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL;



void MineLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL = WeaponLayerCircularPool_new();
}

void MineLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MineLayerCircularStaticPool", nullptr);
}

void MineLayerCircularStaticPool_init(MineLayerCircularStaticPool* this) {
    MineLayerCircularStaticPool_register();
}

MineLayerCircularStaticPool* MineLayerCircularStaticPool_new(void) {
    MineLayerCircularStaticPool* this = java_object_alloc(sizeof(MineLayerCircularStaticPool), "MineLayerCircularStaticPool");
    MineLayerCircularStaticPool_init(this);
    return this;
}


// throws Exception
void MineLayerCircularStaticPool_initMethod(ViewPositionFactoryInterface* viewPositionFactoryInterface) {
        MineCountedPickedUpLayerInterfaceFactory_initMethod();
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((MineLayerCircularStaticPool_staticInit(), MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL), MineLayerFactory_new(viewPositionFactoryInterface), 20);
}


WeaponLayerCircularPool* MineLayerCircularStaticPool_getInstance(void) {
        return (MineLayerCircularStaticPool_staticInit(), MineLayerCircularStaticPool_WEAPON_LAYER_CIRCULAR_STATIC_POOL);
}

