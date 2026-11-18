// Generated Code Do Not Modify
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListener.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"





void CompleteMotionGestureInputEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompleteMotionGestureInputEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompleteMotionGestureInputEventListener", nullptr);
    java_register_method("CompleteMotionGestureInputEventListener", "onEvent", (void*) CompleteMotionGestureInputEventListener_onEvent);
    java_register_method("CompleteMotionGestureInputEventListener", "onCompleteMotionGestureInputEvent", (void*) CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent);
}

void CompleteMotionGestureInputEventListener_init(CompleteMotionGestureInputEventListener* this) {
    CompleteMotionGestureInputEventListener_register();
}

CompleteMotionGestureInputEventListener* CompleteMotionGestureInputEventListener_new(void) {
    CompleteMotionGestureInputEventListener* this = java_object_alloc(sizeof(CompleteMotionGestureInputEventListener), "CompleteMotionGestureInputEventListener");
    CompleteMotionGestureInputEventListener_init(this);
    return this;
}


void CompleteMotionGestureInputEventListener_onEvent(CompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject) {
}


void CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
}

