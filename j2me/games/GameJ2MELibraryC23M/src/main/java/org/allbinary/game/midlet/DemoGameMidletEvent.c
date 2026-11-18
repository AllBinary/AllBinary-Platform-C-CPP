// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#include "org/allbinary/game/midlet/DemoGameMidletState.h"







void DemoGameMidletEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoGameMidletEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameMidletEvent", "AllBinaryEventObject");
    java_register_method("DemoGameMidletEvent", "init", (void*) DemoGameMidletEvent_initMethod);
    java_register_method("DemoGameMidletEvent", "setDemoGameMidletState", (void*) DemoGameMidletEvent_setDemoGameMidletState);
    java_register_method("DemoGameMidletEvent", "getDemoGameMidletState", (void*) DemoGameMidletEvent_getDemoGameMidletState);
}

static void DemoGameMidletEvent_initFields(DemoGameMidletEvent* this) {
    
}


void DemoGameMidletEvent_init(DemoGameMidletEvent* this, void* anyType, DemoGameMidletState* demoGameMidletState) {
    DemoGameMidletEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        DemoGameMidletEvent_initFields(this);
        this->demoGameMidletState = demoGameMidletState;
}

DemoGameMidletEvent* DemoGameMidletEvent_new(void* anyType, DemoGameMidletState* demoGameMidletState) {
    DemoGameMidletEvent* this = java_object_alloc(sizeof(DemoGameMidletEvent), "DemoGameMidletEvent");
    DemoGameMidletEvent_init(this, anyType, demoGameMidletState);
    return this;
}


void DemoGameMidletEvent_initMethod(DemoGameMidletEvent* this, void* anyType) {
        AllBinaryEventObject_setSource(this, anyType);
}


void DemoGameMidletEvent_setDemoGameMidletState(DemoGameMidletEvent* this, DemoGameMidletState* demoGameMidletState) {
        this->demoGameMidletState = demoGameMidletState;
}


DemoGameMidletState* DemoGameMidletEvent_getDemoGameMidletState(DemoGameMidletEvent* this) {
        return this->demoGameMidletState;
}

