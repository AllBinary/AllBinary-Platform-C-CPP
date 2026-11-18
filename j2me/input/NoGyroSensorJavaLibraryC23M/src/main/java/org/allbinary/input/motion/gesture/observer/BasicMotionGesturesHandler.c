// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"


static BasicMotionGesturesHandler* BasicMotionGesturesHandler_SINGLETON;




void BasicMotionGesturesHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicMotionGesturesHandler_SINGLETON = BasicMotionGesturesHandler_new();
}

void BasicMotionGesturesHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicMotionGesturesHandler", "BasicEventHandler");
    java_register_method("BasicMotionGesturesHandler", "process", (void*) BasicMotionGesturesHandler_process);
}


BasicMotionGesturesHandler* BasicMotionGesturesHandler_getInstance(void) {
        return (BasicMotionGesturesHandler_staticInit(), BasicMotionGesturesHandler_SINGLETON);
}


void BasicMotionGesturesHandler_init(BasicMotionGesturesHandler* this) {
    BasicMotionGesturesHandler_register();
    BasicEventHandler_init(&this->base);
}

BasicMotionGesturesHandler* BasicMotionGesturesHandler_new(void) {
    BasicMotionGesturesHandler* this = java_object_alloc(sizeof(BasicMotionGesturesHandler), "BasicMotionGesturesHandler");
    BasicMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void BasicMotionGesturesHandler_process(BasicMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

