// Generated Code Do Not Modify
#include "org/allbinary/game/collision/layer/CollidableInterfaceLayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"




void CollidableInterfaceLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableInterfaceLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableInterfaceLayerManager", "LayerManager");
}


void CollidableInterfaceLayerManager_init(CollidableInterfaceLayerManager* this) {
    CollidableInterfaceLayerManager_register();
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

CollidableInterfaceLayerManager* CollidableInterfaceLayerManager_new(void) {
    CollidableInterfaceLayerManager* this = java_object_alloc(sizeof(CollidableInterfaceLayerManager), "CollidableInterfaceLayerManager");
    CollidableInterfaceLayerManager_init(this);
    return this;
}

