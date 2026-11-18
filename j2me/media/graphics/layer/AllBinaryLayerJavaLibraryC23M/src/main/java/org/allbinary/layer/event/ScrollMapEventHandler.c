// Generated Code Do Not Modify
#include "org/allbinary/layer/event/ScrollMapEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/layer/event/ScrollMapEventListenerInterface.h"
#include "org/allbinary/layer/event/ScrollMapEvent.h"


static ScrollMapEventHandler* ScrollMapEventHandler_SINGLETON;




void ScrollMapEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScrollMapEventHandler_SINGLETON = ScrollMapEventHandler_new();
}

void ScrollMapEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollMapEventHandler", "BasicEventHandler");
    java_register_method("ScrollMapEventHandler", "process", (void*) ScrollMapEventHandler_process);
}


void ScrollMapEventHandler_init(ScrollMapEventHandler* this) {
    ScrollMapEventHandler_register();
    BasicEventHandler_init(&this->base);
}

ScrollMapEventHandler* ScrollMapEventHandler_new(void) {
    ScrollMapEventHandler* this = java_object_alloc(sizeof(ScrollMapEventHandler), "ScrollMapEventHandler");
    ScrollMapEventHandler_init(this);
    return this;
}


ScrollMapEventHandler* ScrollMapEventHandler_getInstance(void) {
        return (ScrollMapEventHandler_staticInit(), ScrollMapEventHandler_SINGLETON);
}


// throws Exception
void ScrollMapEventHandler_process(ScrollMapEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        ScrollMapEventListenerInterface* scrollMapEventListenerInterface = (((ScrollMapEventListenerInterface*) eventListenerInterface));
        ScrollMapEventListenerInterface_onMoveEvent(scrollMapEventListenerInterface, ((ScrollMapEvent*) eventObject));
}

