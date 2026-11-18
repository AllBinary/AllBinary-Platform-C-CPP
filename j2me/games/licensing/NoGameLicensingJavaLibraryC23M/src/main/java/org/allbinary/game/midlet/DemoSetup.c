// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoSetup.h"
#include "org/allbinary/game/midlet/GameMidlet.h"




void DemoSetup_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoSetup_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoSetup", nullptr);
    java_register_method("DemoSetup", "init", (void*) DemoSetup_initMethod);
}

void DemoSetup_init(DemoSetup* this) {
    DemoSetup_register();
}

DemoSetup* DemoSetup_new(void) {
    DemoSetup* this = java_object_alloc(sizeof(DemoSetup), "DemoSetup");
    DemoSetup_init(this);
    return this;
}


void DemoSetup_initMethod(DemoSetup* this, GameMidlet* gameMidlet) {
}

