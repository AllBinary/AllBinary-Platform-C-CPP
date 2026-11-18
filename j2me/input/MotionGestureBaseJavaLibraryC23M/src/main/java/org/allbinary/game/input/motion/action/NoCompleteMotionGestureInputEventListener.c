// Generated Code Do Not Modify
#include "org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_instance;





void NoCompleteMotionGestureInputEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoCompleteMotionGestureInputEventListener_instance = NoCompleteMotionGestureInputEventListener_new();
}

void NoCompleteMotionGestureInputEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoCompleteMotionGestureInputEventListener", "CompleteMotionGestureInputEventListener");
    java_register_method("NoCompleteMotionGestureInputEventListener", "onEvent", (void*) NoCompleteMotionGestureInputEventListener_onEvent);
    java_register_method("NoCompleteMotionGestureInputEventListener", "onCompleteMotionGestureInputEvent", (void*) NoCompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent);
}


void NoCompleteMotionGestureInputEventListener_init(NoCompleteMotionGestureInputEventListener* this) {
    NoCompleteMotionGestureInputEventListener_register();
    CompleteMotionGestureInputEventListener_init(&this->base);
}

NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_new(void) {
    NoCompleteMotionGestureInputEventListener* this = java_object_alloc(sizeof(NoCompleteMotionGestureInputEventListener), "NoCompleteMotionGestureInputEventListener");
    NoCompleteMotionGestureInputEventListener_init(this);
    return this;
}


void NoCompleteMotionGestureInputEventListener_onEvent(NoCompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void NoCompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(NoCompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
}


NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_getInstance(void) {
        return (NoCompleteMotionGestureInputEventListener_staticInit(), NoCompleteMotionGestureInputEventListener_instance);
}

