// Generated Code Do Not Modify
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"




void VirtualKeyboardEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VirtualKeyboardEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VirtualKeyboardEvent", "AllBinaryEventObject");
}


void VirtualKeyboardEvent_init(VirtualKeyboardEvent* this, void* anyType) {
    VirtualKeyboardEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
}

VirtualKeyboardEvent* VirtualKeyboardEvent_new(void* anyType) {
    VirtualKeyboardEvent* this = java_object_alloc(sizeof(VirtualKeyboardEvent), "VirtualKeyboardEvent");
    VirtualKeyboardEvent_init(this, anyType);
    return this;
}

