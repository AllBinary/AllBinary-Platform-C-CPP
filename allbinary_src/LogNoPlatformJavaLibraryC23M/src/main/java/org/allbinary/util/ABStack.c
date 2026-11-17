// Generated Code Do Not Modify
#include "org/allbinary/util/ABStack.h"



void ABStack_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABStack_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABStack", "Stack");
}

void ABStack_init(ABStack* this) {
    ABStack_register();
    Stack_init(&this->base);
}

ABStack* ABStack_new(void) {
    ABStack* this = java_object_alloc(sizeof(ABStack), "ABStack");
    ABStack_init(this);
    return this;
}

