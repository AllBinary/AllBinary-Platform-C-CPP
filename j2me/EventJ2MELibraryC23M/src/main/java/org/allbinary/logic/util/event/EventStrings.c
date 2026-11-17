// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/EventStrings.h"


static EventStrings* EventStrings_instance;


void EventStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    EventStrings_instance = EventStrings_new();
}

void EventStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EventStrings", nullptr);
}

static void EventStrings_initFields(EventStrings* this) {
    this->PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";
    this->TOTAL_LISTENERS = "Total Listeners: ";
    this->LISTENER_LABEL = " Listener: ";
    this->FIRE_EVENT = "fireEvent";
}

void EventStrings_init(EventStrings* this) {
    EventStrings_register();
    EventStrings_initFields(this);
}

EventStrings* EventStrings_new(void) {
    EventStrings* this = java_object_alloc(sizeof(EventStrings), "EventStrings");
    EventStrings_init(this);
    return this;
}


EventStrings* EventStrings_getInstance(void) {
        return (EventStrings_staticInit(), EventStrings_instance);
}

