// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/AllAnalogControllerVisitor.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#if __has_include("org/allbinary/game/input/analog/AnalogLocationInputFactory.h")
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#endif




void AllAnalogControllerVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllAnalogControllerVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllAnalogControllerVisitor", "AnalogControllerVisitor");
    java_register_method("AllAnalogControllerVisitor", "process", (void*) AllAnalogControllerVisitor_process);
}

void AllAnalogControllerVisitor_init(AllAnalogControllerVisitor* this) {
    AllAnalogControllerVisitor_register();
    AnalogControllerVisitor_init(&this->base);
}

AllAnalogControllerVisitor* AllAnalogControllerVisitor_new(void) {
    AllAnalogControllerVisitor* this = java_object_alloc(sizeof(AllAnalogControllerVisitor), "AllAnalogControllerVisitor");
    AllAnalogControllerVisitor_init(this);
    return this;
}


void AllAnalogControllerVisitor_process(AllAnalogControllerVisitor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) {
        BasicArrayList* analogLocationInputList = AnalogLocationInputFactory_getList(AnalogLocationInputFactory_getInstance());
        AnalogLocationInput* analogLocationInput = nullptr;
        for (int32_t index = BasicArrayList_size(analogLocationInputList) - 1; index >= 0; index--) {
            analogLocationInput = ((AnalogLocationInput*) BasicArrayList_get(analogLocationInputList, index));
            AnalogLocationInputProcessor_process(analogLocationInputProcessor, allbinaryLayerManager, analogLocationInput);
        }
}

