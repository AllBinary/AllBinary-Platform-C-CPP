// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"


static NoHardwareComponent* NoHardwareComponent_instance;




void NoHardwareComponent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoHardwareComponent_instance = NoHardwareComponent_new();
}

void NoHardwareComponent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoHardwareComponent", nullptr);
    java_register_method("NoHardwareComponent", "compareTo", (void*) NoHardwareComponent_compareTo);
    java_register_method("NoHardwareComponent", "toString", (void*) NoHardwareComponent_toString);
}

void NoHardwareComponent_init(NoHardwareComponent* this) {
    NoHardwareComponent_register();
}

NoHardwareComponent* NoHardwareComponent_new(void) {
    NoHardwareComponent* this = java_object_alloc(sizeof(NoHardwareComponent), "NoHardwareComponent");
    NoHardwareComponent_init(this);
    return this;
}


NoHardwareComponent* NoHardwareComponent_getInstance(void) {
        return (NoHardwareComponent_staticInit(), NoHardwareComponent_instance);
}


bool NoHardwareComponent_compareTo(NoHardwareComponent* this, HardwareComponentInterface* componentInterface) {
        if (this == componentInterface) {
            return true;
        }
        return false;
}


const char* NoHardwareComponent_toString(NoHardwareComponent* this) {
        return StringUtil_getInstance()->NULL_STRING;
}

