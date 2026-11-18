// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/WeaponLayerArrayLayerCircularStaticPool.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"


static WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_instance;



static WeaponLayer*** WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size);


void WeaponLayerArrayLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    WeaponLayerArrayLayerCircularStaticPool_instance = WeaponLayerArrayLayerCircularStaticPool_new();
}

void WeaponLayerArrayLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WeaponLayerArrayLayerCircularStaticPool", nullptr);
    java_register_method("WeaponLayerArrayLayerCircularStaticPool", "init", (void*) WeaponLayerArrayLayerCircularStaticPool_initMethod);
    java_register_method("WeaponLayerArrayLayerCircularStaticPool", "getWeaponLayerArrays", (void*) WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays);
    java_register_method("WeaponLayerArrayLayerCircularStaticPool", "getInstanceArray", (void*) WeaponLayerArrayLayerCircularStaticPool_getInstanceArray);
}

static void WeaponLayerArrayLayerCircularStaticPool_initFields(WeaponLayerArrayLayerCircularStaticPool* this) {
    this->MAX = 5;
    this->circularIndexUtil = CircularIndexUtil_createInstance(this->MAX);
    this->WEAPONLAYER_ARRAY = nullptr;
    this->TWO_WEAPONLAYER_ARRAY = nullptr;
    this->THREE_WEAPONLAYER_ARRAY = nullptr;
}

void WeaponLayerArrayLayerCircularStaticPool_init(WeaponLayerArrayLayerCircularStaticPool* this) {
    WeaponLayerArrayLayerCircularStaticPool_register();
    WeaponLayerArrayLayerCircularStaticPool_initFields(this);
}

WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_new(void) {
    WeaponLayerArrayLayerCircularStaticPool* this = java_object_alloc(sizeof(WeaponLayerArrayLayerCircularStaticPool), "WeaponLayerArrayLayerCircularStaticPool");
    WeaponLayerArrayLayerCircularStaticPool_init(this);
    return this;
}


WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_getInstance(void) {
        return (WeaponLayerArrayLayerCircularStaticPool_staticInit(), WeaponLayerArrayLayerCircularStaticPool_instance);
}


void WeaponLayerArrayLayerCircularStaticPool_initMethod(WeaponLayerArrayLayerCircularStaticPool* this) {
        WeaponLayer*** WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX * 2));
        WeaponLayer*** TWO_WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX));
        WeaponLayer*** THREE_WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX));
        for (int32_t index = 0; index < this->MAX; index++) {
            WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 1));
            TWO_WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 2));
            THREE_WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 3));
        }
        this->WEAPONLAYER_ARRAY = WEAPONLAYER_ARRAY;
        this->TWO_WEAPONLAYER_ARRAY = TWO_WEAPONLAYER_ARRAY;
        this->THREE_WEAPONLAYER_ARRAY = THREE_WEAPONLAYER_ARRAY;
}


static WeaponLayer*** WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size) {
        if (size == 1) {
            return this->WEAPONLAYER_ARRAY;
        } else if (size == 2) {
            return this->TWO_WEAPONLAYER_ARRAY;
        } else if (size == 3) {
            return this->THREE_WEAPONLAYER_ARRAY;
        }
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
WeaponLayer** WeaponLayerArrayLayerCircularStaticPool_getInstanceArray(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size) {
        WeaponLayer** weaponLayerArray = WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(this, size)[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        CircularIndexUtil_next(this->circularIndexUtil);
        return weaponLayerArray;
}

