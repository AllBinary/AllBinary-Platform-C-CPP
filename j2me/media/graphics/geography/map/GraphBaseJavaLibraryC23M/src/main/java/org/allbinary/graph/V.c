// Generated Code Do Not Modify
#include "org/allbinary/graph/V.h"




void V_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void V_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("V", nullptr);
    java_register_method("V", "getId", (void*) V_getId);
}

void V_init(V* this) {
    V_register();
}

V* V_new(void) {
    V* this = java_object_alloc(sizeof(V), "V");
    V_init(this);
    return this;
}


int32_t V_getId(V* this) {
        return 0;
}

