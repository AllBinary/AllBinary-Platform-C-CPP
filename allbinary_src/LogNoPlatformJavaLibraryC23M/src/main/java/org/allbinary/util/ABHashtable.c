// Generated Code Do Not Modify
#include "org/allbinary/util/ABHashtable.h"





void ABHashtable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABHashtable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABHashtable", "Hashtable");
}


void ABHashtable_init(ABHashtable* this, int32_t initialCapacity) {
    ABHashtable_register();
        Hashtable_init(&this->base, initialCapacity);
}

ABHashtable* ABHashtable_new(int32_t initialCapacity) {
    ABHashtable* this = java_object_alloc(sizeof(ABHashtable), "ABHashtable");
    ABHashtable_init(this, initialCapacity);
    return this;
}


void ABHashtable_init0(ABHashtable* this) {
    ABHashtable_register();
        Hashtable_init(&this->base);
}

ABHashtable* ABHashtable_new0(void) {
    ABHashtable* this = java_object_alloc(sizeof(ABHashtable), "ABHashtable");
    ABHashtable_init0(this);
    return this;
}

