// Generated Code Do Not Modify
#include "org/allbinary/util/ABVector.h"



void ABVector_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABVector_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABVector", "Vector");
}

void ABVector_init(ABVector* this) {
    ABVector_register();
    Vector_init(&this->base);
}

ABVector* ABVector_new(void) {
    ABVector* this = java_object_alloc(sizeof(ABVector), "ABVector");
    ABVector_init(this);
    return this;
}

