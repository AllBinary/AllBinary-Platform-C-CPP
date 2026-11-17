// Generated Code Do Not Modify
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListS.h"




void BasicArrayListD_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListD_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListD", "BasicArrayListS");
}


void BasicArrayListD_init(BasicArrayListD* this) {
    BasicArrayListD_register();
        BasicArrayListS_init(&this->base, 7);
}

BasicArrayListD* BasicArrayListD_new(void) {
    BasicArrayListD* this = java_object_alloc(sizeof(BasicArrayListD), "BasicArrayListD");
    BasicArrayListD_init(this);
    return this;
}

