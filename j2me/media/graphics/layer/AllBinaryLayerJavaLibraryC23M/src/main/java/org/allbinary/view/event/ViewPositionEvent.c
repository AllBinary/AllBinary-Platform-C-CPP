// Generated Code Do Not Modify
#include "org/allbinary/view/event/ViewPositionEvent.h"




void ViewPositionEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ViewPositionEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ViewPositionEvent", "AllBinaryEventObject");
}


void ViewPositionEvent_init(ViewPositionEvent* this, void* anyType) {
    ViewPositionEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
}

ViewPositionEvent* ViewPositionEvent_new(void* anyType) {
    ViewPositionEvent* this = java_object_alloc(sizeof(ViewPositionEvent), "ViewPositionEvent");
    ViewPositionEvent_init(this, anyType);
    return this;
}

