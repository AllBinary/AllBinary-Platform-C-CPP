// Generated Code Do Not Modify
#include "org/allbinary/thread/SynchObject.h"



void SynchObject_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SynchObject_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SynchObject", nullptr);
}

void SynchObject_init(SynchObject* this) {
    SynchObject_register();
}

SynchObject* SynchObject_new(void) {
    SynchObject* this = java_object_alloc(sizeof(SynchObject), "SynchObject");
    SynchObject_init(this);
    return this;
}

