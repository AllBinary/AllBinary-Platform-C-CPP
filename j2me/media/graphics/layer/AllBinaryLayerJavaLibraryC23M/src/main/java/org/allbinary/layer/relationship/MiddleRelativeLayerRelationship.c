// Generated Code Do Not Modify
#include "org/allbinary/layer/relationship/MiddleRelativeLayerRelationship.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif




void MiddleRelativeLayerRelationship_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MiddleRelativeLayerRelationship_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MiddleRelativeLayerRelationship", "RelativeLayerRelationship");
}


void MiddleRelativeLayerRelationship_init(MiddleRelativeLayerRelationship* this, AllBinaryLayer* layer) {
    MiddleRelativeLayerRelationship_register();
        RelativeLayerRelationship_init(&this->base, layer, PointFactory_createXY(PointFactory_getInstance(), AllBinaryLayer_getHalfWidth(layer), AllBinaryLayer_getHalfHeight(layer)), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
}

MiddleRelativeLayerRelationship* MiddleRelativeLayerRelationship_new(AllBinaryLayer* layer) {
    MiddleRelativeLayerRelationship* this = java_object_alloc(sizeof(MiddleRelativeLayerRelationship), "MiddleRelativeLayerRelationship");
    MiddleRelativeLayerRelationship_init(this, layer);
    return this;
}

