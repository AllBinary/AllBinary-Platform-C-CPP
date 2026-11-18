// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/PointsResources.h"


static PointsResources* PointsResources_SINGLETON;



void PointsResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PointsResources_SINGLETON = PointsResources_new();
}

void PointsResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointsResources", nullptr);
}

static void PointsResources_initFields(PointsResources* this) {
    this->RESOURCE = "points_drop_20_by_20.png";
    this->RESOURCE_2 = "points_2_drop_20_by_20.png";
    this->RESOURCE_3 = "points_3_drop_20_by_20.png";
    this->RESOURCE_4 = "points_4_drop_20_by_20.png";
}


void PointsResources_init(PointsResources* this) {
    PointsResources_register();
    PointsResources_initFields(this);
}

PointsResources* PointsResources_new(void) {
    PointsResources* this = java_object_alloc(sizeof(PointsResources), "PointsResources");
    PointsResources_init(this);
    return this;
}


PointsResources* PointsResources_getInstance(void) {
        return (PointsResources_staticInit(), PointsResources_SINGLETON);
}

