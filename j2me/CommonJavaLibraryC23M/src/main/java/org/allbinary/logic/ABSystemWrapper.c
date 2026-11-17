// Generated Code Do Not Modify
#include "org/allbinary/logic/ABSystemWrapper.h"


static ABSystemWrapper* ABSystemWrapper_instance;




void ABSystemWrapper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABSystemWrapper_instance = ABSystemWrapper_new();
}

void ABSystemWrapper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABSystemWrapper", nullptr);
    java_register_method("ABSystemWrapper", "arraycopy", (void*) ABSystemWrapper_arraycopy);
    java_register_method("ABSystemWrapper", "currentTimeMillis", (void*) ABSystemWrapper_currentTimeMillis);
}

void ABSystemWrapper_init(ABSystemWrapper* this) {
    ABSystemWrapper_register();
}

ABSystemWrapper* ABSystemWrapper_new(void) {
    ABSystemWrapper* this = java_object_alloc(sizeof(ABSystemWrapper), "ABSystemWrapper");
    ABSystemWrapper_init(this);
    return this;
}


ABSystemWrapper* ABSystemWrapper_getInstance(void) {
        return (ABSystemWrapper_staticInit(), ABSystemWrapper_instance);
}


void ABSystemWrapper_arraycopy(ABSystemWrapper* this, void* src, int32_t srcPos, void* dest, int32_t destPos, int32_t length) {
        java_array_copy(src, srcPos, dest, destPos, length);
}


int64_t ABSystemWrapper_currentTimeMillis(ABSystemWrapper* this) {
        return java_current_time_millis();
}

