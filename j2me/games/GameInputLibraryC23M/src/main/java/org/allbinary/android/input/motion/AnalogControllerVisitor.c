// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"




void AnalogControllerVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnalogControllerVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogControllerVisitor", nullptr);
    java_register_method("AnalogControllerVisitor", "process", (void*) AnalogControllerVisitor_process);
}

void AnalogControllerVisitor_init(AnalogControllerVisitor* this) {
    AnalogControllerVisitor_register();
}

AnalogControllerVisitor* AnalogControllerVisitor_new(void) {
    AnalogControllerVisitor* this = java_object_alloc(sizeof(AnalogControllerVisitor), "AnalogControllerVisitor");
    AnalogControllerVisitor_init(this);
    return this;
}


void AnalogControllerVisitor_process(AnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) {
}

