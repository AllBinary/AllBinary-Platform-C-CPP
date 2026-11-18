// Generated Code Do Not Modify
#include "org/allbinary/game/input/InputProcessorFactory.h"
#include "org/allbinary/game/input/InputProcessor.h"


static InputProcessorFactory* InputProcessorFactory_instance;



void InputProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputProcessorFactory_instance = InputProcessorFactory_new();
}

void InputProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputProcessorFactory", nullptr);
    java_register_method("InputProcessorFactory", "getInputProcessor", (void*) InputProcessorFactory_getInputProcessor);
}

static void InputProcessorFactory_initFields(InputProcessorFactory* this) {
    this->inputProcessor = InputProcessor_new();
}

void InputProcessorFactory_init(InputProcessorFactory* this) {
    InputProcessorFactory_register();
    InputProcessorFactory_initFields(this);
}

InputProcessorFactory* InputProcessorFactory_new(void) {
    InputProcessorFactory* this = java_object_alloc(sizeof(InputProcessorFactory), "InputProcessorFactory");
    InputProcessorFactory_init(this);
    return this;
}


InputProcessorFactory* InputProcessorFactory_getInstance(void) {
        return (InputProcessorFactory_staticInit(), InputProcessorFactory_instance);
}


InputProcessor* InputProcessorFactory_getInputProcessor(InputProcessorFactory* this) {
        return this->inputProcessor;
}

