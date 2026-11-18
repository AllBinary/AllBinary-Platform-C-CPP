// Generated Code Do Not Modify
#include "org/allbinary/game/health/NullHealthListener.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"


NullHealthListener* NullHealthListener_NULL_HEALTH_LISTENER;


void NullHealthListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullHealthListener_NULL_HEALTH_LISTENER = NullHealthListener_new();
}

void NullHealthListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullHealthListener", nullptr);
    java_register_method("NullHealthListener", "onHealthChange", (void*) NullHealthListener_onHealthChange);
}

void NullHealthListener_init(NullHealthListener* this) {
    NullHealthListener_register();
}

NullHealthListener* NullHealthListener_new(void) {
    NullHealthListener* this = java_object_alloc(sizeof(NullHealthListener), "NullHealthListener");
    NullHealthListener_init(this);
    return this;
}


void NullHealthListener_onHealthChange(NullHealthListener* this) {
}

