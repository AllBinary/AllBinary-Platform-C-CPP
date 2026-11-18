// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"






void InputMappingEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputMappingEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputMappingEvent", "AllBinaryEventObject");
    java_register_method("InputMappingEvent", "setInputToGameKeyMapping", (void*) InputMappingEvent_setInputToGameKeyMapping);
    java_register_method("InputMappingEvent", "getInputToGameKeyMapping", (void*) InputMappingEvent_getInputToGameKeyMapping);
}

static void InputMappingEvent_initFields(InputMappingEvent* this) {
    this->inputToGameKeyMapping = InputToGameKeyMapping_getNullInstance();
}


void InputMappingEvent_init(InputMappingEvent* this, void* anyType) {
    InputMappingEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        InputMappingEvent_initFields(this);
}

InputMappingEvent* InputMappingEvent_new(void* anyType) {
    InputMappingEvent* this = java_object_alloc(sizeof(InputMappingEvent), "InputMappingEvent");
    InputMappingEvent_init(this, anyType);
    return this;
}


void InputMappingEvent_setInputToGameKeyMapping(InputMappingEvent* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        this->inputToGameKeyMapping = inputToGameKeyMapping;
}


InputToGameKeyMapping* InputMappingEvent_getInputToGameKeyMapping(InputMappingEvent* this) {
        return this->inputToGameKeyMapping;
}

