// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"




void AnalogControllerConfigurationEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnalogControllerConfigurationEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogControllerConfigurationEvent", "AllBinaryEventObject");
}


void AnalogControllerConfigurationEvent_init(AnalogControllerConfigurationEvent* this, void* anyType) {
    AnalogControllerConfigurationEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
}

AnalogControllerConfigurationEvent* AnalogControllerConfigurationEvent_new(void* anyType) {
    AnalogControllerConfigurationEvent* this = java_object_alloc(sizeof(AnalogControllerConfigurationEvent), "AnalogControllerConfigurationEvent");
    AnalogControllerConfigurationEvent_init(this, anyType);
    return this;
}

