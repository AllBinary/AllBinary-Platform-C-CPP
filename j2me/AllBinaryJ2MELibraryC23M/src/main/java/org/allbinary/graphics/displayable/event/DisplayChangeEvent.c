// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"




void DisplayChangeEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DisplayChangeEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DisplayChangeEvent", "AllBinaryEventObject");
}


void DisplayChangeEvent_init(DisplayChangeEvent* this, void* anyType) {
    DisplayChangeEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
}

DisplayChangeEvent* DisplayChangeEvent_new(void* anyType) {
    DisplayChangeEvent* this = java_object_alloc(sizeof(DisplayChangeEvent), "DisplayChangeEvent");
    DisplayChangeEvent_init(this, anyType);
    return this;
}

