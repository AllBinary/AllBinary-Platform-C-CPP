// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehavior.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/collision/CollisionType.h"





void CollidableAlwaysPickupNeverCollideBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableAlwaysPickupNeverCollideBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableAlwaysPickupNeverCollideBehavior", "CollidableNeverCollideBehavior");
    java_register_method("CollidableAlwaysPickupNeverCollideBehavior", "getCollisionTypeWith", (void*) CollidableAlwaysPickupNeverCollideBehavior_getCollisionTypeWith);
}


void CollidableAlwaysPickupNeverCollideBehavior_init(CollidableAlwaysPickupNeverCollideBehavior* this) {
    CollidableAlwaysPickupNeverCollideBehavior_register();
        CollidableNeverCollideBehavior_init(&this->base, true);
}

CollidableAlwaysPickupNeverCollideBehavior* CollidableAlwaysPickupNeverCollideBehavior_new(void) {
    CollidableAlwaysPickupNeverCollideBehavior* this = java_object_alloc(sizeof(CollidableAlwaysPickupNeverCollideBehavior), "CollidableAlwaysPickupNeverCollideBehavior");
    CollidableAlwaysPickupNeverCollideBehavior_init(this);
    return this;
}


CollisionType* CollidableAlwaysPickupNeverCollideBehavior_getCollisionTypeWith(CollidableAlwaysPickupNeverCollideBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->PICKUP;
}

