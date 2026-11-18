// Generated Code Do Not Modify
#include "org/allbinary/game/collision/SourceCollisionHelper.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/CollisionHelper.h"





void SourceCollisionHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SourceCollisionHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SourceCollisionHelper", "CollisionHelper");
    java_register_method("SourceCollisionHelper", "isCollidable", (void*) SourceCollisionHelper_isCollidable);
}


void SourceCollisionHelper_init(SourceCollisionHelper* this, AllBinaryLayer* layerInterface) {
    SourceCollisionHelper_register();
        CollisionHelper_init(&this->base, layerInterface);
}

SourceCollisionHelper* SourceCollisionHelper_new(AllBinaryLayer* layerInterface) {
    SourceCollisionHelper* this = java_object_alloc(sizeof(SourceCollisionHelper), "SourceCollisionHelper");
    SourceCollisionHelper_init(this, layerInterface);
    return this;
}


bool SourceCollisionHelper_isCollidable(SourceCollisionHelper* this, CollidableCompositeLayer* layerInterface) {
        if (this->base.sourceLayerInterface != layerInterface) {
            return true;
        }
        return false;
}

