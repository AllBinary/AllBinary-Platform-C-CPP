// Generated Code Do Not Modify
#include "org/allbinary/game/layer/LayerPlacementType.h"






void LayerPlacementType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerPlacementType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerPlacementType", nullptr);
    java_register_method("LayerPlacementType", "getType", (void*) LayerPlacementType_getType);
    java_register_method("LayerPlacementType", "setType", (void*) LayerPlacementType_setType);
}

static void LayerPlacementType_initFields(LayerPlacementType* this) {
    
}


void LayerPlacementType_init(LayerPlacementType* this, int32_t type) {
    LayerPlacementType_register();
    LayerPlacementType_initFields(this);
        this->type = type;
}

LayerPlacementType* LayerPlacementType_new(int32_t type) {
    LayerPlacementType* this = java_object_alloc(sizeof(LayerPlacementType), "LayerPlacementType");
    LayerPlacementType_init(this, type);
    return this;
}


int32_t LayerPlacementType_getType(LayerPlacementType* this) {
        return this->type;
}


void LayerPlacementType_setType(LayerPlacementType* this, int32_t type) {
        this->type = type;
}

