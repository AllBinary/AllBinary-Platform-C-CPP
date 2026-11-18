// Generated Code Do Not Modify
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/debug/DebugInterface.h"


static DebugInterface* NoDebug_SINGLETON;







void NoDebug_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoDebug_SINGLETON = NoDebug_new();
}

void NoDebug_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoDebug", nullptr);
    java_register_method("NoDebug", "start", (void*) NoDebug_start);
    java_register_method("NoDebug", "stop", (void*) NoDebug_stop);
    java_register_method("NoDebug", "getMaxTime", (void*) NoDebug_getMaxTime);
    java_register_method("NoDebug", "getStartTime", (void*) NoDebug_getStartTime);
    java_register_method("NoDebug", "isRunning", (void*) NoDebug_isRunning);
}

void NoDebug_init(NoDebug* this) {
    NoDebug_register();
}

NoDebug* NoDebug_new(void) {
    NoDebug* this = java_object_alloc(sizeof(NoDebug), "NoDebug");
    NoDebug_init(this);
    return this;
}


DebugInterface* NoDebug_getInstance(void) {
        return (NoDebug_staticInit(), NoDebug_SINGLETON);
}


void NoDebug_start(NoDebug* this) {
}


void NoDebug_stop(NoDebug* this) {
}


int64_t NoDebug_getMaxTime(NoDebug* this) {
        return 10000LL;
}


int64_t NoDebug_getStartTime(NoDebug* this) {
        return 0LL;
}


bool NoDebug_isRunning(NoDebug* this) {
        return false;
}

