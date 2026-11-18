// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollisionThreedProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/CollisionProcessor.h"




void CollisionThreedProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollisionThreedProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollisionThreedProcessor", "CollisionProcessor");
    java_register_method("CollisionThreedProcessor", "isCollision", (void*) CollisionThreedProcessor_isCollision);
}

void CollisionThreedProcessor_init(CollisionThreedProcessor* this) {
    CollisionThreedProcessor_register();
    CollisionProcessor_init(&this->base);
}

CollisionThreedProcessor* CollisionThreedProcessor_new(void) {
    CollisionThreedProcessor* this = java_object_alloc(sizeof(CollisionThreedProcessor), "CollisionThreedProcessor");
    CollisionThreedProcessor_init(this);
    return this;
}


bool CollisionThreedProcessor_isCollision(CollisionThreedProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        if (AllBinaryLayer_getXP(myLayer2) >= AllBinaryLayer_getX2(myLayer) || AllBinaryLayer_getYP(myLayer2) >= AllBinaryLayer_getY2(myLayer) || AllBinaryLayer_getX2(myLayer2) <= AllBinaryLayer_getXP(myLayer) || AllBinaryLayer_getY2(myLayer2) <= AllBinaryLayer_getYP(myLayer) || AllBinaryLayer_getZP(myLayer2) < AllBinaryLayer_getZ2(myLayer) || AllBinaryLayer_getZ2(myLayer2) > AllBinaryLayer_getZP(myLayer)) {
            return false;
        } else {
            return true;
        }
}

