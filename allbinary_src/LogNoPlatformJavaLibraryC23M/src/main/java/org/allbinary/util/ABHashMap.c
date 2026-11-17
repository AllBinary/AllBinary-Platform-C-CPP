// Generated Code Do Not Modify
#include "org/allbinary/util/ABHashMap.h"



void ABHashMap_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABHashMap_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABHashMap", "HashMap");
}

void ABHashMap_init(ABHashMap* this) {
    ABHashMap_register();
    HashMap_init(&this->base);
}

ABHashMap* ABHashMap_new(void) {
    ABHashMap* this = java_object_alloc(sizeof(ABHashMap), "ABHashMap");
    ABHashMap_init(this);
    return this;
}

