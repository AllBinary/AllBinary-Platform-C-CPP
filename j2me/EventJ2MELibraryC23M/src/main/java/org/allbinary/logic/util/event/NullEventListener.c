// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/NullEventListener.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"


NullEventListener* NullEventListener_NULL_EVENT_LISTENER;


void NullEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullEventListener_NULL_EVENT_LISTENER = NullEventListener_new();
}

void NullEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullEventListener", nullptr);
    java_register_method("NullEventListener", "onEvent", (void*) NullEventListener_onEvent);
}

void NullEventListener_init(NullEventListener* this) {
    NullEventListener_register();
}

NullEventListener* NullEventListener_new(void) {
    NullEventListener* this = java_object_alloc(sizeof(NullEventListener), "NullEventListener");
    NullEventListener_init(this);
    return this;
}


void NullEventListener_onEvent(NullEventListener* this, AllBinaryEventObject* eventObject) {
}

