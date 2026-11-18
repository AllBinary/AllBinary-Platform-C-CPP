// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"


static ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_SINGLETON;




void ScrolledMotionGesturesHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScrolledMotionGesturesHandler_SINGLETON = ScrolledMotionGesturesHandler_new();
}

void ScrolledMotionGesturesHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrolledMotionGesturesHandler", "BasicEventHandler");
    java_register_method("ScrolledMotionGesturesHandler", "process", (void*) ScrolledMotionGesturesHandler_process);
}


ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_getInstance(void) {
        return (ScrolledMotionGesturesHandler_staticInit(), ScrolledMotionGesturesHandler_SINGLETON);
}


void ScrolledMotionGesturesHandler_init(ScrolledMotionGesturesHandler* this) {
    ScrolledMotionGesturesHandler_register();
    BasicEventHandler_init(&this->base);
}

ScrolledMotionGesturesHandler* ScrolledMotionGesturesHandler_new(void) {
    ScrolledMotionGesturesHandler* this = java_object_alloc(sizeof(ScrolledMotionGesturesHandler), "ScrolledMotionGesturesHandler");
    ScrolledMotionGesturesHandler_init(this);
    return this;
}


// throws Exception
void ScrolledMotionGesturesHandler_process(ScrolledMotionGesturesHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BaseMotionGestureEventListener* baseMotionGestureEventListener = ((BaseMotionGestureEventListener*) eventListenerInterface);
        BaseMotionGestureEventListener_onScrolledMotionGestureEvent(baseMotionGestureEventListener, ((MotionGestureEvent*) eventObject));
}

