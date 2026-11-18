// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbDataInputStream.h"




void AbDataInputStream_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbDataInputStream_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbDataInputStream", "DataInputStream");
}


void AbDataInputStream_init(AbDataInputStream* this, InputStream* out) {
    AbDataInputStream_register();
        DataInputStream_init(&this->base, out);
}

AbDataInputStream* AbDataInputStream_new(InputStream* out) {
    AbDataInputStream* this = java_object_alloc(sizeof(AbDataInputStream), "AbDataInputStream");
    AbDataInputStream_init(this, out);
    return this;
}

