// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"


static MovedMotionGesturesHandler* MovedMotionGesturesHandler_SINGLETON;




void MovedMotionGesturesHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MovedMotionGesturesHandler_SINGLETON = MovedMotionGesturesHandler_new();
}

void MovedMotionGesturesHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MovedMotionGesturesHandler", "BasicEventHandler");
    java_register_method("MovedMotionGesturesHandler", "process", (void*) MovedMotionGesturesHandler_process);
}


MovedMotionGesturesHandler* MovedMotionGesturesHandler_getInstance(void) {
        return (MovedMotionGesturesHandler_staticInit(), MovedMotionGesturesHandler_SINGLETON);
}


void MovedMotionGesturesHandler_init(MovedMotionGesturesHandler* this) {
    MovedMotionGesturesHandler_register();
    BasicEventHandler_init(&this->base);
}

MovedMotionGesturesHandler* MovedMotionGesturesHandler_new(void) {
    MovedMotionGesturesHandler* this = java_object_alloc(sizeof(MovedMotionGesturesHandler), "MovedMotionGesturesHandler");
    MovedMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void MovedMotionGesturesHandler_process(MovedMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

