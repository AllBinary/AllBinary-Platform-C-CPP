// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"




void AnalogLocationInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnalogLocationInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogLocationInputProcessor", nullptr);
    java_register_method("AnalogLocationInputProcessor", "process", (void*) AnalogLocationInputProcessor_process);
}

void AnalogLocationInputProcessor_init(AnalogLocationInputProcessor* this) {
    AnalogLocationInputProcessor_register();
}

AnalogLocationInputProcessor* AnalogLocationInputProcessor_new(void) {
    AnalogLocationInputProcessor* this = java_object_alloc(sizeof(AnalogLocationInputProcessor), "AnalogLocationInputProcessor");
    AnalogLocationInputProcessor_init(this);
    return this;
}


void AnalogLocationInputProcessor_process(AnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput) {
}

