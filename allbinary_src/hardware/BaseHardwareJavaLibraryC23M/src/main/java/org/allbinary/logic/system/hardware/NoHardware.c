// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/NoHardwareComponent.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static HardwareInterface* NoHardware_instance;






void NoHardware_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoHardware_instance = NoHardware_new();
}

void NoHardware_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoHardware", nullptr);
    java_register_method("NoHardware", "getComponent", (void*) NoHardware_getComponent);
    java_register_method("NoHardware", "toString", (void*) NoHardware_toString);
    java_register_method("NoHardware", "compareTo", (void*) NoHardware_compareTo);
    java_register_method("NoHardware", "difference", (void*) NoHardware_difference);
}

void NoHardware_init(NoHardware* this) {
    NoHardware_register();
}

NoHardware* NoHardware_new(void) {
    NoHardware* this = java_object_alloc(sizeof(NoHardware), "NoHardware");
    NoHardware_init(this);
    return this;
}


HardwareInterface* NoHardware_getInstance(void) {
        return (NoHardware_staticInit(), NoHardware_instance);
}


HardwareComponentInterface* NoHardware_getComponent(NoHardware* this, int32_t index) {
        return NoHardwareComponent_getInstance();
}


const char* NoHardware_toString(NoHardware* this) {
        return "No Hardware";
}


bool NoHardware_compareTo(NoHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* NoHardware_difference(NoHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}

