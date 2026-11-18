// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/NoMovementFactory.h"
#include "org/allbinary/physics/movement/Movement.h"


static NoMovementFactory* NoMovementFactory_instance;



void NoMovementFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoMovementFactory_instance = NoMovementFactory_new();
}

void NoMovementFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoMovementFactory", nullptr);
    java_register_method("NoMovementFactory", "getMovmentInstance", (void*) NoMovementFactory_getMovmentInstance);
}

static void NoMovementFactory_initFields(NoMovementFactory* this) {
    this->movement = Movement_new();
}

void NoMovementFactory_init(NoMovementFactory* this) {
    NoMovementFactory_register();
    NoMovementFactory_initFields(this);
}

NoMovementFactory* NoMovementFactory_new(void) {
    NoMovementFactory* this = java_object_alloc(sizeof(NoMovementFactory), "NoMovementFactory");
    NoMovementFactory_init(this);
    return this;
}


NoMovementFactory* NoMovementFactory_getInstance(void) {
        return (NoMovementFactory_staticInit(), NoMovementFactory_instance);
}


Movement* NoMovementFactory_getMovmentInstance(NoMovementFactory* this) {
        return this->movement;
}

