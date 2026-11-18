// Generated Code Do Not Modify
#include "org/allbinary/device/NullGL10.h"


NullGL10* NullGL10_NULL_GL10;

void NullGL10_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullGL10_NULL_GL10 = NullGL10_new();
}

void NullGL10_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullGL10", nullptr);
}

void NullGL10_init(NullGL10* this) {
    NullGL10_register();
}

NullGL10* NullGL10_new(void) {
    NullGL10* this = java_object_alloc(sizeof(NullGL10), "NullGL10");
    NullGL10_init(this);
    return this;
}

