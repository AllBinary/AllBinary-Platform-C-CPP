// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/health/HealLayerCircularStaticPool.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/HealthInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/game/ag/layer/pickup/health/HealLayer.h"





void HealLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealLayerCircularStaticPool", "AllBinaryLayerCircularPool");
    java_register_method("HealLayerCircularStaticPool", "visit", (void*) HealLayerCircularStaticPool_visit);
}


void HealLayerCircularStaticPool_init(HealLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    HealLayerCircularStaticPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

HealLayerCircularStaticPool* HealLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    HealLayerCircularStaticPool* this = java_object_alloc(sizeof(HealLayerCircularStaticPool), "HealLayerCircularStaticPool");
    HealLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void HealLayerCircularStaticPool_visit(HealLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        HealLayer* healLayer = ((HealLayer*) BaseCircularPool_getNextInstance(this));
        HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = ((HealthInterfaceCompositeInterface*) sourceLayerInterface);
        HealthInterface* healthInterface = HealthInterfaceCompositeInterface_getHealthInterface(healthInterfaceCompositeInterface);
        HealLayer_visit(healLayer, healthInterface);
}

