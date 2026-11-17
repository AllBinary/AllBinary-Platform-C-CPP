// Generated Code Do Not Modify
#include "org/allbinary/thread/NullABRunnable.h"
#include "org/allbinary/thread/ABRunnable.h"


static NullABRunnable* NullABRunnable_instance;



void NullABRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullABRunnable_instance = NullABRunnable_new();
}

void NullABRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullABRunnable", "ABRunnable");
    java_register_method("NullABRunnable", "isRunning", (void*) NullABRunnable_isRunning);
}

void NullABRunnable_init(NullABRunnable* this) {
    NullABRunnable_register();
    ABRunnable_init(&this->base);
}

NullABRunnable* NullABRunnable_new(void) {
    NullABRunnable* this = java_object_alloc(sizeof(NullABRunnable), "NullABRunnable");
    NullABRunnable_init(this);
    return this;
}


NullABRunnable* NullABRunnable_getInstance(void) {
        return (NullABRunnable_staticInit(), NullABRunnable_instance);
}


// synchronized
bool NullABRunnable_isRunning(NullABRunnable* this) {
        return false;
}

