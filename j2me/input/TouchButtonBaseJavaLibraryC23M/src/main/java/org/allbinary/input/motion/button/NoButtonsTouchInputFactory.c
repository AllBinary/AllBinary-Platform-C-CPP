// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"


static BaseTouchInput* NoButtonsTouchInputFactory_instance;


void NoButtonsTouchInputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoButtonsTouchInputFactory_instance = BaseTouchInput_new();
}

void NoButtonsTouchInputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoButtonsTouchInputFactory", nullptr);
}

void NoButtonsTouchInputFactory_init(NoButtonsTouchInputFactory* this) {
    NoButtonsTouchInputFactory_register();
}

NoButtonsTouchInputFactory* NoButtonsTouchInputFactory_new(void) {
    NoButtonsTouchInputFactory* this = java_object_alloc(sizeof(NoButtonsTouchInputFactory), "NoButtonsTouchInputFactory");
    NoButtonsTouchInputFactory_init(this);
    return this;
}


BaseTouchInput* NoButtonsTouchInputFactory_getInstance(void) {
        return (NoButtonsTouchInputFactory_staticInit(), NoButtonsTouchInputFactory_instance);
}

