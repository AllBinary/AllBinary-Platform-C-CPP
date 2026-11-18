// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/game/ag/life/LifeInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayer.h"





void LifeLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LifeLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LifeLayerCircularStaticPool", "AllBinaryLayerCircularPool");
    java_register_method("LifeLayerCircularStaticPool", "visit", (void*) LifeLayerCircularStaticPool_visit);
}


void LifeLayerCircularStaticPool_init(LifeLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    LifeLayerCircularStaticPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

LifeLayerCircularStaticPool* LifeLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    LifeLayerCircularStaticPool* this = java_object_alloc(sizeof(LifeLayerCircularStaticPool), "LifeLayerCircularStaticPool");
    LifeLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void LifeLayerCircularStaticPool_visit(LifeLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        LifeLayer* lifeLayer = ((LifeLayer*) BaseCircularPool_getNextInstance(this));
        LifeInterfaceCompositeInterface* lifeInterfaceCompositeInterface = ((LifeInterfaceCompositeInterface*) sourceLayerInterface);
        Life* lifeInterface = LifeInterfaceCompositeInterface_getLifeInterface(lifeInterfaceCompositeInterface);
        LifeLayer_visit(lifeLayer, lifeInterface);
}

