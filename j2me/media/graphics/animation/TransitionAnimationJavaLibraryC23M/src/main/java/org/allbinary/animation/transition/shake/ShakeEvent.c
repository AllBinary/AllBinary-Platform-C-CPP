// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/shake/ShakeEvent.h"




void ShakeEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ShakeEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShakeEvent", nullptr);
}


void ShakeEvent_init(ShakeEvent* this) {
    ShakeEvent_register();
}

ShakeEvent* ShakeEvent_new(void) {
    ShakeEvent* this = java_object_alloc(sizeof(ShakeEvent), "ShakeEvent");
    ShakeEvent_init(this);
    return this;
}

