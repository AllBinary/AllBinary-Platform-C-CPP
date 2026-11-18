// Generated Code Do Not Modify
#include "org/allbinary/game/collision/Collision2DProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/CollisionProcessor.h"




void Collision2DProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Collision2DProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Collision2DProcessor", "CollisionProcessor");
    java_register_method("Collision2DProcessor", "isCollision", (void*) Collision2DProcessor_isCollision);
}

void Collision2DProcessor_init(Collision2DProcessor* this) {
    Collision2DProcessor_register();
    CollisionProcessor_init(&this->base);
}

Collision2DProcessor* Collision2DProcessor_new(void) {
    Collision2DProcessor* this = java_object_alloc(sizeof(Collision2DProcessor), "Collision2DProcessor");
    Collision2DProcessor_init(this);
    return this;
}


bool Collision2DProcessor_isCollision(Collision2DProcessor* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        if (AllBinaryLayer_getXP(myLayer2) >= AllBinaryLayer_getX2(myLayer) || AllBinaryLayer_getYP(myLayer2) >= AllBinaryLayer_getY2(myLayer) || AllBinaryLayer_getX2(myLayer2) <= AllBinaryLayer_getXP(myLayer) || AllBinaryLayer_getY2(myLayer2) <= AllBinaryLayer_getYP(myLayer)) {
            return false;
        } else {
            return true;
        }
}

