// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"





void WeaponLayerCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void WeaponLayerCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WeaponLayerCircularPool", "AllBinaryLayerCircularPool");
    java_register_method("WeaponLayerCircularPool", "getInstanceWeaponLayer", (void*) WeaponLayerCircularPool_getInstanceWeaponLayer);
}


void WeaponLayerCircularPool_init(WeaponLayerCircularPool* this) {
    WeaponLayerCircularPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
}

WeaponLayerCircularPool* WeaponLayerCircularPool_new(void) {
    WeaponLayerCircularPool* this = java_object_alloc(sizeof(WeaponLayerCircularPool), "WeaponLayerCircularPool");
    WeaponLayerCircularPool_init(this);
    return this;
}


// throws Exception
WeaponLayer* WeaponLayerCircularPool_getInstanceWeaponLayer(WeaponLayerCircularPool* this, AllBinaryLayer* sourceLayerInterface, int32_t x, int32_t y, int32_t z, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) {
        WeaponLayer* weaponLayer = ((WeaponLayer*) BaseCircularPool_getNextInstance((&this->base)));
        WeaponLayer_initXYZ(weaponLayer, x, y, z);
        WeaponLayer_initMethod(weaponLayer, sourceLayerInterface, angle, otherAngle, weaponProperties, scoreable);
        return weaponLayer;
}

