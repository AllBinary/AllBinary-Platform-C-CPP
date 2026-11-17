// Generated Code Do Not Modify
#include "org/allbinary/util/ABHashSet.h"



void ABHashSet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABHashSet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABHashSet", "HashSet");
}

void ABHashSet_init(ABHashSet* this) {
    ABHashSet_register();
    HashSet_init(&this->base);
}

ABHashSet* ABHashSet_new(void) {
    ABHashSet* this = java_object_alloc(sizeof(ABHashSet), "ABHashSet");
    ABHashSet_init(this);
    return this;
}

