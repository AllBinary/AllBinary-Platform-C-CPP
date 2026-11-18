// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/SingleAnalogControllerVisitor.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#if __has_include("org/allbinary/game/input/analog/AnalogLocationInputFactory.h")
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#endif





void SingleAnalogControllerVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingleAnalogControllerVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingleAnalogControllerVisitor", "AnalogControllerVisitor");
    java_register_method("SingleAnalogControllerVisitor", "process", (void*) SingleAnalogControllerVisitor_process);
}

static void SingleAnalogControllerVisitor_initFields(SingleAnalogControllerVisitor* this) {
    
}


void SingleAnalogControllerVisitor_init(SingleAnalogControllerVisitor* this, int32_t playerInputId) {
    SingleAnalogControllerVisitor_register();
    AnalogControllerVisitor_init(&this->base);
    SingleAnalogControllerVisitor_initFields(this);
        this->playerInputId = playerInputId;
}

SingleAnalogControllerVisitor* SingleAnalogControllerVisitor_new(int32_t playerInputId) {
    SingleAnalogControllerVisitor* this = java_object_alloc(sizeof(SingleAnalogControllerVisitor), "SingleAnalogControllerVisitor");
    SingleAnalogControllerVisitor_init(this, playerInputId);
    return this;
}


void SingleAnalogControllerVisitor_process(SingleAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) {
        AnalogLocationInput* analogLocationInput = AnalogLocationInputFactory_getInstanceForPlayer(AnalogLocationInputFactory_getInstance(), this->playerInputId);
        AnalogLocationInputProcessor_process(analogLocationInputProcessor, allbinaryLayerManager, analogLocationInput);
}

