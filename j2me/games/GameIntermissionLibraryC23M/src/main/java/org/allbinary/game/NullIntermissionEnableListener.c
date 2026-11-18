// Generated Code Do Not Modify
#include "org/allbinary/game/NullIntermissionEnableListener.h"
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"


static IntermissionEnableListenerInterface* NullIntermissionEnableListener_SINGLETON;




void NullIntermissionEnableListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullIntermissionEnableListener_SINGLETON = NullIntermissionEnableListener_new();
}

void NullIntermissionEnableListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullIntermissionEnableListener", nullptr);
    java_register_method("NullIntermissionEnableListener", "notifyIntermission", (void*) NullIntermissionEnableListener_notifyIntermission);
}


IntermissionEnableListenerInterface* NullIntermissionEnableListener_getInstance(void) {
        return (NullIntermissionEnableListener_staticInit(), NullIntermissionEnableListener_SINGLETON);
}


void NullIntermissionEnableListener_init(NullIntermissionEnableListener* this) {
    NullIntermissionEnableListener_register();
}

NullIntermissionEnableListener* NullIntermissionEnableListener_new(void) {
    NullIntermissionEnableListener* this = java_object_alloc(sizeof(NullIntermissionEnableListener), "NullIntermissionEnableListener");
    NullIntermissionEnableListener_init(this);
    return this;
}


void NullIntermissionEnableListener_notifyIntermission(NullIntermissionEnableListener* this, bool enable) {
}

