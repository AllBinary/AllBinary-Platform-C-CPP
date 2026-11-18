// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"


static DisplayChangeEventHandler* DisplayChangeEventHandler_SINGLETON;




void DisplayChangeEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DisplayChangeEventHandler_SINGLETON = DisplayChangeEventHandler_new();
}

void DisplayChangeEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DisplayChangeEventHandler", "BasicEventHandler");
    java_register_method("DisplayChangeEventHandler", "process", (void*) DisplayChangeEventHandler_process);
}


DisplayChangeEventHandler* DisplayChangeEventHandler_getInstance(void) {
        return (DisplayChangeEventHandler_staticInit(), DisplayChangeEventHandler_SINGLETON);
}


void DisplayChangeEventHandler_init(DisplayChangeEventHandler* this) {
    DisplayChangeEventHandler_register();
    BasicEventHandler_init(&this->base);
}

DisplayChangeEventHandler* DisplayChangeEventHandler_new(void) {
    DisplayChangeEventHandler* this = java_object_alloc(sizeof(DisplayChangeEventHandler), "DisplayChangeEventHandler");
    DisplayChangeEventHandler_init(this);
    return this;
}


// throws Exception
void DisplayChangeEventHandler_process(DisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DisplayChangeEventListener* displayChangeEventListener = (((DisplayChangeEventListener*) eventListenerInterface));
        DisplayChangeEventListener_onDisplayChangeEvent(displayChangeEventListener, ((DisplayChangeEvent*) eventObject));
}

