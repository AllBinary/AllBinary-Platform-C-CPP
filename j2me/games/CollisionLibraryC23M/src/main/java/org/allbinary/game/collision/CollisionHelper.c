// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollisionHelper.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"







void CollisionHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollisionHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollisionHelper", nullptr);
    java_register_method("CollisionHelper", "isCollidable", (void*) CollisionHelper_isCollidable);
    java_register_method("CollisionHelper", "getOwnerLayerInterface", (void*) CollisionHelper_getOwnerLayerInterface);
    java_register_method("CollisionHelper", "setOwnerLayerInterface", (void*) CollisionHelper_setOwnerLayerInterface);
}

static void CollisionHelper_initFields(CollisionHelper* this) {
    
}


void CollisionHelper_init(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface) {
    CollisionHelper_register();
    CollisionHelper_initFields(this);
        this->sourceLayerInterface = sourceLayerInterface;
}

CollisionHelper* CollisionHelper_new(AllBinaryLayer* sourceLayerInterface) {
    CollisionHelper* this = java_object_alloc(sizeof(CollisionHelper), "CollisionHelper");
    CollisionHelper_init(this, sourceLayerInterface);
    return this;
}


bool CollisionHelper_isCollidable(CollisionHelper* this, CollidableCompositeLayer* layerInterface) {
        return true;
}


AllBinaryLayer* CollisionHelper_getOwnerLayerInterface(CollisionHelper* this) {
        return this->sourceLayerInterface;
}


void CollisionHelper_setOwnerLayerInterface(CollisionHelper* this, AllBinaryLayer* sourceLayerInterface) {
        this->sourceLayerInterface = sourceLayerInterface;
}

