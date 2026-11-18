// Generated Code Do Not Modify
#include "org/allbinary/game/layer/BasicLayerPlacement.h"
#include "org/allbinary/game/layer/LayerPlacementType.h"








void BasicLayerPlacement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicLayerPlacement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicLayerPlacement", nullptr);
    java_register_method("BasicLayerPlacement", "getWidth", (void*) BasicLayerPlacement_getWidth);
    java_register_method("BasicLayerPlacement", "getHeight", (void*) BasicLayerPlacement_getHeight);
    java_register_method("BasicLayerPlacement", "getLayerType", (void*) BasicLayerPlacement_getLayerType);
    java_register_method("BasicLayerPlacement", "setLayerType", (void*) BasicLayerPlacement_setLayerType);
}

static void BasicLayerPlacement_initFields(BasicLayerPlacement* this) {
    
    
    
}


void BasicLayerPlacement_init(BasicLayerPlacement* this, LayerPlacementType* layerType, int32_t width, int32_t height) {
    BasicLayerPlacement_register();
    BasicLayerPlacement_initFields(this);
        this->layerType = layerType;
        this->width = width;
        this->height = height;
}

BasicLayerPlacement* BasicLayerPlacement_new(LayerPlacementType* layerType, int32_t width, int32_t height) {
    BasicLayerPlacement* this = java_object_alloc(sizeof(BasicLayerPlacement), "BasicLayerPlacement");
    BasicLayerPlacement_init(this, layerType, width, height);
    return this;
}


int32_t BasicLayerPlacement_getWidth(BasicLayerPlacement* this) {
        return this->width;
}


int32_t BasicLayerPlacement_getHeight(BasicLayerPlacement* this) {
        return this->height;
}


LayerPlacementType* BasicLayerPlacement_getLayerType(BasicLayerPlacement* this) {
        return this->layerType;
}


void BasicLayerPlacement_setLayerType(BasicLayerPlacement* this, LayerPlacementType* layerType) {
        this->layerType = layerType;
}

