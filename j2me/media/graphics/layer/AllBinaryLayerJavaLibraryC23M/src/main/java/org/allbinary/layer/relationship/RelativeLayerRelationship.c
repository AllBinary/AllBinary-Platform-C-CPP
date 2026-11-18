// Generated Code Do Not Modify
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/BasicArrayList.h"







void RelativeLayerRelationship_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RelativeLayerRelationship_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RelativeLayerRelationship", "RelativeRelationship");
    java_register_method("RelativeLayerRelationship", "getX", (void*) RelativeLayerRelationship_getX);
    java_register_method("RelativeLayerRelationship", "getY", (void*) RelativeLayerRelationship_getY);
    java_register_method("RelativeLayerRelationship", "getZ", (void*) RelativeLayerRelationship_getZ);
}

static void RelativeLayerRelationship_initFields(RelativeLayerRelationship* this) {
    this->layer = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
}


void RelativeLayerRelationship_init(RelativeLayerRelationship* this, AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeLayerRelationship_register();
        RelativeRelationship_init(&this->base, point, typesAllowedList);
        RelativeLayerRelationship_initFields(this);
        this->layer = layer;
}

RelativeLayerRelationship* RelativeLayerRelationship_new(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeLayerRelationship* this = java_object_alloc(sizeof(RelativeLayerRelationship), "RelativeLayerRelationship");
    RelativeLayerRelationship_init(this, layer, point, typesAllowedList);
    return this;
}


int32_t RelativeLayerRelationship_getX(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getXP(this->layer) + RelativeRelationship_getX((&this->base));
}


int32_t RelativeLayerRelationship_getY(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getYP(this->layer) + RelativeRelationship_getY((&this->base));
}


int32_t RelativeLayerRelationship_getZ(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getZP(this->layer) + RelativeRelationship_getZ((&this->base));
}

