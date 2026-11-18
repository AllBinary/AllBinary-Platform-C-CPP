// Generated Code Do Not Modify
#include "org/allbinary/math/LayerDistanceUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/MathUtil.h"


static LayerDistanceUtil* LayerDistanceUtil_instance;





void LayerDistanceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerDistanceUtil_instance = LayerDistanceUtil_new();
}

void LayerDistanceUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerDistanceUtil", nullptr);
    java_register_method("LayerDistanceUtil", "getDistance", (void*) LayerDistanceUtil_getDistance);
    java_register_method("LayerDistanceUtil", "getDistance3D", (void*) LayerDistanceUtil_getDistance3D);
    java_register_method("LayerDistanceUtil", "getDistanceAt", (void*) LayerDistanceUtil_getDistanceAt);
}

static void LayerDistanceUtil_initFields(LayerDistanceUtil* this) {
    this->mathUtil = MathUtil_getInstance();
}

void LayerDistanceUtil_init(LayerDistanceUtil* this) {
    LayerDistanceUtil_register();
    LayerDistanceUtil_initFields(this);
}

LayerDistanceUtil* LayerDistanceUtil_new(void) {
    LayerDistanceUtil* this = java_object_alloc(sizeof(LayerDistanceUtil), "LayerDistanceUtil");
    LayerDistanceUtil_init(this);
    return this;
}


LayerDistanceUtil* LayerDistanceUtil_getInstance(void) {
        return (LayerDistanceUtil_staticInit(), LayerDistanceUtil_instance);
}


int32_t LayerDistanceUtil_getDistance(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) {
        int32_t dx = (AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getHalfWidth(layerInterface)) - (AllBinaryLayer_getXP(layerInterface2) + AllBinaryLayer_getHalfWidth(layerInterface2));
        int32_t dy = (AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHalfHeight(layerInterface)) - (AllBinaryLayer_getYP(layerInterface2) + AllBinaryLayer_getHalfHeight(layerInterface2));
        return MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy));
}


int32_t LayerDistanceUtil_getDistance3D(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) {
        int32_t dx = (AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getHalfWidth(layerInterface)) - (AllBinaryLayer_getXP(layerInterface2) + AllBinaryLayer_getHalfWidth(layerInterface2));
        int32_t dy = (AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHalfHeight(layerInterface)) - (AllBinaryLayer_getYP(layerInterface2) + AllBinaryLayer_getHalfHeight(layerInterface2));
        int32_t dz = (AllBinaryLayer_getZP(layerInterface) + AllBinaryLayer_getHalfDepth(layerInterface)) - (AllBinaryLayer_getZP(layerInterface2) + AllBinaryLayer_getHalfDepth(layerInterface2));
        return MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy) + (dz * dz));
}


int32_t LayerDistanceUtil_getDistanceAt(LayerDistanceUtil* this, AllBinaryLayer* layerInterface, GPoint* point) {
        int32_t dx = AllBinaryLayer_getXP(layerInterface) - GPoint_getX(point);
        int32_t dy = AllBinaryLayer_getYP(layerInterface) - GPoint_getY(point);
        return MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy));
}

