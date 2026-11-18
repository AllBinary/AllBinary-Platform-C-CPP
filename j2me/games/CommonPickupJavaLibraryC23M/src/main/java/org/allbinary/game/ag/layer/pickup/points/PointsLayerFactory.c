// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayer.h"





void PointsLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PointsLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointsLayerFactory", nullptr);
    java_register_method("PointsLayerFactory", "getInstance", (void*) PointsLayerFactory_getInstance);
}

static void PointsLayerFactory_initFields(PointsLayerFactory* this) {
    
}


void PointsLayerFactory_init(PointsLayerFactory* this, int32_t points) {
    PointsLayerFactory_register();
    PointsLayerFactory_initFields(this);
        this->points = points;
}

PointsLayerFactory* PointsLayerFactory_new(int32_t points) {
    PointsLayerFactory* this = java_object_alloc(sizeof(PointsLayerFactory), "PointsLayerFactory");
    PointsLayerFactory_init(this, points);
    return this;
}


// throws Exception
AllBinaryLayer* PointsLayerFactory_getInstance(PointsLayerFactory* this) {
        return PointsLayer_new(this->points);
}

