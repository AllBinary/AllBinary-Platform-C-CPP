// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbDataOutputStream.h"




void AbDataOutputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbDataOutputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbDataOutputStream", "DataOutputStream");
}


void AbDataOutputStream_init(AbDataOutputStream* this, OutputStream* out) {
    AbDataOutputStream_register();
        DataOutputStream_init(&this->base, out);
}

AbDataOutputStream* AbDataOutputStream_new(OutputStream* out) {
    AbDataOutputStream* this = java_object_alloc(sizeof(AbDataOutputStream), "AbDataOutputStream");
    AbDataOutputStream_init(this, out);
    return this;
}

