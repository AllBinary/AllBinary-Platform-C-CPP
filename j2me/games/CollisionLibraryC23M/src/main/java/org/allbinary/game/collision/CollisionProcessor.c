// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollisionProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"




void CollisionProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollisionProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollisionProcessor", nullptr);
    java_register_method("CollisionProcessor", "isCollision", (void*) CollisionProcessor_isCollision);
}

void CollisionProcessor_init(CollisionProcessor* this) {
    CollisionProcessor_register();
}

CollisionProcessor* CollisionProcessor_new(void) {
    CollisionProcessor* this = java_object_alloc(sizeof(CollisionProcessor), "CollisionProcessor");
    CollisionProcessor_init(this);
    return this;
}


bool CollisionProcessor_isCollision(CollisionProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        return false;
}

