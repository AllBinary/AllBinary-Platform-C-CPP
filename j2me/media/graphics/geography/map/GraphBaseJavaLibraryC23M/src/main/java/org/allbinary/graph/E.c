// Generated Code Do Not Modify
#include "org/allbinary/graph/E.h"


static E* E_e;


void E_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    E_e = E_new();
}

void E_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("E", nullptr);
    java_register_method("E", "newInstance", (void*) E_newInstance);
}

void E_init(E* this) {
    E_register();
}

E* E_new(void) {
    E* this = java_object_alloc(sizeof(E), "E");
    E_init(this);
    return this;
}


E* E_newInstance(E* this) {
        return (E_staticInit(), E_e);
}

