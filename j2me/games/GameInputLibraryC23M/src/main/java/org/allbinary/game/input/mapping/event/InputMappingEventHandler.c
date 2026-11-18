// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/event/InputMappingEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"


static InputMappingEventHandler* InputMappingEventHandler_gameKeyEventHandler;




void InputMappingEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputMappingEventHandler_gameKeyEventHandler = InputMappingEventHandler_new();
}

void InputMappingEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputMappingEventHandler", "BasicEventHandler");
    java_register_method("InputMappingEventHandler", "process", (void*) InputMappingEventHandler_process);
}


void InputMappingEventHandler_init(InputMappingEventHandler* this) {
    InputMappingEventHandler_register();
    BasicEventHandler_init(&this->base);
}

InputMappingEventHandler* InputMappingEventHandler_new(void) {
    InputMappingEventHandler* this = java_object_alloc(sizeof(InputMappingEventHandler), "InputMappingEventHandler");
    InputMappingEventHandler_init(this);
    return this;
}


InputMappingEventHandler* InputMappingEventHandler_getInstance(void) {
        return (InputMappingEventHandler_staticInit(), InputMappingEventHandler_gameKeyEventHandler);
}


// throws Exception
void InputMappingEventHandler_process(InputMappingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        InputMappingEventListenerInterface* inputMappingEventListenerInterface = ((InputMappingEventListenerInterface*) eventListenerInterface);
        InputMappingEventListenerInterface_onInputMappingEvent(inputMappingEventListenerInterface, ((InputMappingEvent*) eventObject));
}

