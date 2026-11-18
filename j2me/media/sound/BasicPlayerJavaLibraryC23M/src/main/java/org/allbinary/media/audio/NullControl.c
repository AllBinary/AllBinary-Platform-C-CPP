// Generated Code Do Not Modify
#include "org/allbinary/media/audio/NullControl.h"



void NullControl_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullControl_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullControl", nullptr);
}

void NullControl_init(NullControl* this) {
    NullControl_register();
}

NullControl* NullControl_new(void) {
    NullControl* this = java_object_alloc(sizeof(NullControl), "NullControl");
    NullControl_init(this);
    return this;
}

