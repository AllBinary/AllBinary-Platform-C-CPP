// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"


static CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_instanceC;



void CollidableNeverCollideBehaviorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollidableNeverCollideBehaviorFactory_instanceC = CollidableNeverCollideBehaviorFactory_new();
}

void CollidableNeverCollideBehaviorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableNeverCollideBehaviorFactory", "CollidableBaseBehaviorFactory");
    java_register_method("CollidableNeverCollideBehaviorFactory", "createBehavior", (void*) CollidableNeverCollideBehaviorFactory_createBehavior);
}

static void CollidableNeverCollideBehaviorFactory_initFields(CollidableNeverCollideBehaviorFactory* this) {
    this->instance = CollidableNeverCollideBehavior_new(false);
}

void CollidableNeverCollideBehaviorFactory_init(CollidableNeverCollideBehaviorFactory* this) {
    CollidableNeverCollideBehaviorFactory_register();
    CollidableBaseBehaviorFactory_init(&this->base);
    CollidableNeverCollideBehaviorFactory_initFields(this);
}

CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_new(void) {
    CollidableNeverCollideBehaviorFactory* this = java_object_alloc(sizeof(CollidableNeverCollideBehaviorFactory), "CollidableNeverCollideBehaviorFactory");
    CollidableNeverCollideBehaviorFactory_init(this);
    return this;
}


CollidableNeverCollideBehaviorFactory* CollidableNeverCollideBehaviorFactory_getInstance(void) {
        return (CollidableNeverCollideBehaviorFactory_staticInit(), CollidableNeverCollideBehaviorFactory_instanceC);
}


CollidableBaseBehavior* CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory* this) {
        return this->instance;
}

