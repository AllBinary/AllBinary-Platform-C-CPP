// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/shake/ShakeEventFactory.h"
#include "org/allbinary/animation/transition/shake/ShakeEvent.h"


static ShakeEventFactory* ShakeEventFactory_instance;



void ShakeEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ShakeEventFactory_instance = ShakeEventFactory_new();
}

void ShakeEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShakeEventFactory", nullptr);
    java_register_method("ShakeEventFactory", "init", (void*) ShakeEventFactory_initMethod);
}

static void ShakeEventFactory_initFields(ShakeEventFactory* this) {
    this->MICRO = ShakeEvent_new();
    this->SMALL = ShakeEvent_new();
    this->MEDIUM = ShakeEvent_new();
    this->LARGE = ShakeEvent_new();
}

void ShakeEventFactory_init(ShakeEventFactory* this) {
    ShakeEventFactory_register();
    ShakeEventFactory_initFields(this);
}

ShakeEventFactory* ShakeEventFactory_new(void) {
    ShakeEventFactory* this = java_object_alloc(sizeof(ShakeEventFactory), "ShakeEventFactory");
    ShakeEventFactory_init(this);
    return this;
}


ShakeEventFactory* ShakeEventFactory_getInstance(void) {
        return (ShakeEventFactory_staticInit(), ShakeEventFactory_instance);
}


void ShakeEventFactory_initMethod(ShakeEventFactory* this) {
}

