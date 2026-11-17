// Generated Code Do Not Modify
#include "org/allbinary/thread/NullThread.h"


Thread* NullThread_NULL_THREAD;

void NullThread_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullThread_NULL_THREAD = Thread_new();
}

void NullThread_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullThread", nullptr);
}

void NullThread_init(NullThread* this) {
    NullThread_register();
}

NullThread* NullThread_new(void) {
    NullThread* this = java_object_alloc(sizeof(NullThread), "NullThread");
    NullThread_init(this);
    return this;
}

