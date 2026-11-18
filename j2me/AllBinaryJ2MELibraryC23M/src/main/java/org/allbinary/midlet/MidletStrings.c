// Generated Code Do Not Modify
#include "org/allbinary/midlet/MidletStrings.h"


static MidletStrings* MidletStrings_instance;


void MidletStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MidletStrings_instance = MidletStrings_new();
}

void MidletStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MidletStrings", nullptr);
}

static void MidletStrings_initFields(MidletStrings* this) {
    this->COMMAND_ACTION = "commandAction";
}

void MidletStrings_init(MidletStrings* this) {
    MidletStrings_register();
    MidletStrings_initFields(this);
}

MidletStrings* MidletStrings_new(void) {
    MidletStrings* this = java_object_alloc(sizeof(MidletStrings), "MidletStrings");
    MidletStrings_init(this);
    return this;
}


MidletStrings* MidletStrings_getInstance(void) {
        return (MidletStrings_staticInit(), MidletStrings_instance);
}

