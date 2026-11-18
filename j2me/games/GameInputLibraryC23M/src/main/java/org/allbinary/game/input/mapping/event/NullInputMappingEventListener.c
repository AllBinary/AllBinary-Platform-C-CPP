// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"


NullInputMappingEventListener* NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER;



void NullInputMappingEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER = NullInputMappingEventListener_new();
}

void NullInputMappingEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullInputMappingEventListener", nullptr);
    java_register_method("NullInputMappingEventListener", "onInputMappingEvent", (void*) NullInputMappingEventListener_onInputMappingEvent);
    java_register_method("NullInputMappingEventListener", "onEvent", (void*) NullInputMappingEventListener_onEvent);
}

void NullInputMappingEventListener_init(NullInputMappingEventListener* this) {
    NullInputMappingEventListener_register();
}

NullInputMappingEventListener* NullInputMappingEventListener_new(void) {
    NullInputMappingEventListener* this = java_object_alloc(sizeof(NullInputMappingEventListener), "NullInputMappingEventListener");
    NullInputMappingEventListener_init(this);
    return this;
}


// throws Exception
void NullInputMappingEventListener_onInputMappingEvent(NullInputMappingEventListener* this, InputMappingEvent* inputMappingEvent) {
}


void NullInputMappingEventListener_onEvent(NullInputMappingEventListener* this, AllBinaryEventObject* eventObject) {
}

