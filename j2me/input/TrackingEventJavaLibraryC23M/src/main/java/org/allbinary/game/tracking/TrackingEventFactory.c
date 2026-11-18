// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/TrackingEventFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"





void TrackingEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TrackingEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrackingEventFactory", nullptr);
    java_register_method("TrackingEventFactory", "getInstance", (void*) TrackingEventFactory_getInstance);
}


void TrackingEventFactory_init(TrackingEventFactory* this) {
    TrackingEventFactory_register();
}

TrackingEventFactory* TrackingEventFactory_new(void) {
    TrackingEventFactory* this = java_object_alloc(sizeof(TrackingEventFactory), "TrackingEventFactory");
    TrackingEventFactory_init(this);
    return this;
}


AllBinaryEventObject* TrackingEventFactory_getInstance(TrackingEventFactory* this) {
        return TrackingEvent_new(TrackingEventHandler_getInstance());
}

