// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/MotionInputMappingEventListener.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEvent.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif





void MotionInputMappingEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionInputMappingEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionInputMappingEventListener", nullptr);
    java_register_method("MotionInputMappingEventListener", "onEvent", (void*) MotionInputMappingEventListener_onEvent);
    java_register_method("MotionInputMappingEventListener", "onInputMappingEvent", (void*) MotionInputMappingEventListener_onInputMappingEvent);
}

void MotionInputMappingEventListener_init(MotionInputMappingEventListener* this) {
    MotionInputMappingEventListener_register();
}

MotionInputMappingEventListener* MotionInputMappingEventListener_new(void) {
    MotionInputMappingEventListener* this = java_object_alloc(sizeof(MotionInputMappingEventListener), "MotionInputMappingEventListener");
    MotionInputMappingEventListener_init(this);
    return this;
}


void MotionInputMappingEventListener_onEvent(MotionInputMappingEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void MotionInputMappingEventListener_onInputMappingEvent(MotionInputMappingEventListener* this, InputMappingEvent* inputMappingEvent) {
}

