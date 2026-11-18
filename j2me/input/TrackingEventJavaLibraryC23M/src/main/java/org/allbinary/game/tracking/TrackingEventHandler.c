// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"


static TrackingEventHandler* TrackingEventHandler_instance;




void TrackingEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TrackingEventHandler_instance = TrackingEventHandler_new();
}

void TrackingEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrackingEventHandler", "BasicEventHandler");
    java_register_method("TrackingEventHandler", "process", (void*) TrackingEventHandler_process);
}


TrackingEventHandler* TrackingEventHandler_getInstance(void) {
        return (TrackingEventHandler_staticInit(), TrackingEventHandler_instance);
}


void TrackingEventHandler_init(TrackingEventHandler* this) {
    TrackingEventHandler_register();
    BasicEventHandler_init(&this->base);
}

TrackingEventHandler* TrackingEventHandler_new(void) {
    TrackingEventHandler* this = java_object_alloc(sizeof(TrackingEventHandler), "TrackingEventHandler");
    TrackingEventHandler_init(this);
    return this;
}


// throws Exception
void TrackingEventHandler_process(TrackingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        TrackingEventListenerInterface* trackingEventListenerInterface = ((TrackingEventListenerInterface*) eventListenerInterface);
        TrackingEventListenerInterface_onMovement(trackingEventListenerInterface, ((TrackingEvent*) eventObject));
}

