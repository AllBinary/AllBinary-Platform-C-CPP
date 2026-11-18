// Generated Code Do Not Modify
#include "org/allbinary/midlet/MidletIcon.h"


const char* MidletIcon_RESOURCE = "icon";

void MidletIcon_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MidletIcon_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MidletIcon", nullptr);
}

void MidletIcon_init(MidletIcon* this) {
    MidletIcon_register();
}

MidletIcon* MidletIcon_new(void) {
    MidletIcon* this = java_object_alloc(sizeof(MidletIcon), "MidletIcon");
    MidletIcon_init(this);
    return this;
}

