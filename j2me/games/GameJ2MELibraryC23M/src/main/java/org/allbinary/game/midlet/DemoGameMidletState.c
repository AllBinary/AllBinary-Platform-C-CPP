// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoGameMidletState.h"




void DemoGameMidletState_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoGameMidletState_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameMidletState", nullptr);
}


void DemoGameMidletState_init(DemoGameMidletState* this) {
    DemoGameMidletState_register();
}

DemoGameMidletState* DemoGameMidletState_new(void) {
    DemoGameMidletState* this = java_object_alloc(sizeof(DemoGameMidletState), "DemoGameMidletState");
    DemoGameMidletState_init(this);
    return this;
}

