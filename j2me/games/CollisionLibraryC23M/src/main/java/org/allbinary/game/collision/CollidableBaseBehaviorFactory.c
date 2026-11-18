// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactoryInterface.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"




void CollidableBaseBehaviorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableBaseBehaviorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableBaseBehaviorFactory", nullptr);
    java_register_method("CollidableBaseBehaviorFactory", "createBehavior", (void*) CollidableBaseBehaviorFactory_createBehavior);
}

void CollidableBaseBehaviorFactory_init(CollidableBaseBehaviorFactory* this) {
    CollidableBaseBehaviorFactory_register();
}

CollidableBaseBehaviorFactory* CollidableBaseBehaviorFactory_new(void) {
    CollidableBaseBehaviorFactory* this = java_object_alloc(sizeof(CollidableBaseBehaviorFactory), "CollidableBaseBehaviorFactory");
    CollidableBaseBehaviorFactory_init(this);
    return this;
}


CollidableBaseBehavior* CollidableBaseBehaviorFactory_createBehavior(CollidableBaseBehaviorFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

