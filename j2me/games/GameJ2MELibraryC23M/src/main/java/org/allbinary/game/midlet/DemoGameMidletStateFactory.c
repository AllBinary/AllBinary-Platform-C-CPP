// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
#include "org/allbinary/game/midlet/DemoGameMidletState.h"


static DemoGameMidletStateFactory* DemoGameMidletStateFactory_STATE;



void DemoGameMidletStateFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DemoGameMidletStateFactory_STATE = DemoGameMidletStateFactory_new();
}

void DemoGameMidletStateFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameMidletStateFactory", nullptr);
}

static void DemoGameMidletStateFactory_initFields(DemoGameMidletStateFactory* this) {
    this->NONE = DemoGameMidletState_new();
    this->START_DEMO = DemoGameMidletState_new();
    this->START_GAME = DemoGameMidletState_new();
    this->START_INPUT_MAPPING = DemoGameMidletState_new();
}


void DemoGameMidletStateFactory_init(DemoGameMidletStateFactory* this) {
    DemoGameMidletStateFactory_register();
    DemoGameMidletStateFactory_initFields(this);
}

DemoGameMidletStateFactory* DemoGameMidletStateFactory_new(void) {
    DemoGameMidletStateFactory* this = java_object_alloc(sizeof(DemoGameMidletStateFactory), "DemoGameMidletStateFactory");
    DemoGameMidletStateFactory_init(this);
    return this;
}


DemoGameMidletStateFactory* DemoGameMidletStateFactory_getInstance(void) {
        return (DemoGameMidletStateFactory_staticInit(), DemoGameMidletStateFactory_STATE);
}

