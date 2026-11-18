// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"


static CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC;



void CollidableAlwaysPickupNeverCollideBehaviorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC = CollidableAlwaysPickupNeverCollideBehaviorFactory_new();
}

void CollidableAlwaysPickupNeverCollideBehaviorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableAlwaysPickupNeverCollideBehaviorFactory", "CollidableBaseBehaviorFactory");
    java_register_method("CollidableAlwaysPickupNeverCollideBehaviorFactory", "createBehavior", (void*) CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior);
}

static void CollidableAlwaysPickupNeverCollideBehaviorFactory_initFields(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
    this->instance = CollidableAlwaysPickupNeverCollideBehavior_new();
}

void CollidableAlwaysPickupNeverCollideBehaviorFactory_init(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
    CollidableAlwaysPickupNeverCollideBehaviorFactory_register();
    CollidableBaseBehaviorFactory_init(&this->base);
    CollidableAlwaysPickupNeverCollideBehaviorFactory_initFields(this);
}

CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_new(void) {
    CollidableAlwaysPickupNeverCollideBehaviorFactory* this = java_object_alloc(sizeof(CollidableAlwaysPickupNeverCollideBehaviorFactory), "CollidableAlwaysPickupNeverCollideBehaviorFactory");
    CollidableAlwaysPickupNeverCollideBehaviorFactory_init(this);
    return this;
}


CollidableAlwaysPickupNeverCollideBehaviorFactory* CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance(void) {
        return (CollidableAlwaysPickupNeverCollideBehaviorFactory_staticInit(), CollidableAlwaysPickupNeverCollideBehaviorFactory_instanceC);
}


CollidableBaseBehavior* CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory* this) {
        return this->instance;
}

