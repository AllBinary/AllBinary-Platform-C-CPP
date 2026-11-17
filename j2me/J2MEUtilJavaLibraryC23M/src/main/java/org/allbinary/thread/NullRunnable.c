// Generated Code Do Not Modify
#include "org/allbinary/thread/NullRunnable.h"
#include "org/allbinary/thread/ARunnable.h"


static NullRunnable* NullRunnable_instance;



void NullRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullRunnable_instance = NullRunnable_new();
}

void NullRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRunnable", "ARunnable");
}


NullRunnable* NullRunnable_getInstance(void) {
        return (NullRunnable_staticInit(), NullRunnable_instance);
}


void NullRunnable_init(NullRunnable* this) {
    NullRunnable_register();
    ARunnable_init(&this->base);
}

NullRunnable* NullRunnable_new(void) {
    NullRunnable* this = java_object_alloc(sizeof(NullRunnable), "NullRunnable");
    NullRunnable_init(this);
    return this;
}

