// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"


static LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_SINGLETON;




void LastDisplayChangeEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LastDisplayChangeEventHandler_SINGLETON = LastDisplayChangeEventHandler_new();
}

void LastDisplayChangeEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LastDisplayChangeEventHandler", "BasicEventHandler");
    java_register_method("LastDisplayChangeEventHandler", "process", (void*) LastDisplayChangeEventHandler_process);
}


LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_getInstance(void) {
        return (LastDisplayChangeEventHandler_staticInit(), LastDisplayChangeEventHandler_SINGLETON);
}


void LastDisplayChangeEventHandler_init(LastDisplayChangeEventHandler* this) {
    LastDisplayChangeEventHandler_register();
    BasicEventHandler_init(&this->base);
}

LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_new(void) {
    LastDisplayChangeEventHandler* this = java_object_alloc(sizeof(LastDisplayChangeEventHandler), "LastDisplayChangeEventHandler");
    LastDisplayChangeEventHandler_init(this);
    return this;
}


// throws Exception
void LastDisplayChangeEventHandler_process(LastDisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DisplayChangeEventListener* displayChangeEventListener = (((DisplayChangeEventListener*) eventListenerInterface));
        DisplayChangeEventListener_onDisplayChangeEvent(displayChangeEventListener, ((DisplayChangeEvent*) eventObject));
}

