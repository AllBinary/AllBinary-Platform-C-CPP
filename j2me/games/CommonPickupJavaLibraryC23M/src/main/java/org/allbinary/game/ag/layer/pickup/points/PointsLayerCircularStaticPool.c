// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayer.h"





void PointsLayerCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PointsLayerCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointsLayerCircularStaticPool", "AllBinaryLayerCircularPool");
    java_register_method("PointsLayerCircularStaticPool", "visit", (void*) PointsLayerCircularStaticPool_visit);
}


void PointsLayerCircularStaticPool_init(PointsLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    PointsLayerCircularStaticPool_register();
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

PointsLayerCircularStaticPool* PointsLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    PointsLayerCircularStaticPool* this = java_object_alloc(sizeof(PointsLayerCircularStaticPool), "PointsLayerCircularStaticPool");
    PointsLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void PointsLayerCircularStaticPool_visit(PointsLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        PointsLayer* pointsLayer = ((PointsLayer*) BaseCircularPool_getNextInstance(this));
        ScoreableInterface* scoreableInterface = ((ScoreableInterface*) sourceLayerInterface);
        PointsLayer_visit(pointsLayer, scoreableInterface);
}

