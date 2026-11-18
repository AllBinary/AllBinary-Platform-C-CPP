// Generated Code Do Not Modify
#include "java/lang/Deprecated.h"



void Deprecated_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Deprecated_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Deprecated", nullptr);
}

void Deprecated_init(Deprecated* this) {
    Deprecated_register();
}

Deprecated* Deprecated_new(void) {
    Deprecated* this = java_object_alloc(sizeof(Deprecated), "Deprecated");
    Deprecated_init(this);
    return this;
}

