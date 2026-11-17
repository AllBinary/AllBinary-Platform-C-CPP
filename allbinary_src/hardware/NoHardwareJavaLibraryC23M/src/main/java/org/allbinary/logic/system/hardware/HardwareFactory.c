// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/HardwareFactory.h"
#include "org/allbinary/logic/system/os/OperatingSystemInterface.h"
#include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"


static HardwareFactory* HardwareFactory_instance;




void HardwareFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HardwareFactory_instance = HardwareFactory_new();
}

void HardwareFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HardwareFactory", nullptr);
}

static void HardwareFactory_initFields(HardwareFactory* this) {
    this->SINGLETON = NoHardware_getInstance();
}


HardwareFactory* HardwareFactory_getInstance0(void) {
        return (HardwareFactory_staticInit(), HardwareFactory_instance);
}


void HardwareFactory_init(HardwareFactory* this) {
    HardwareFactory_register();
    HardwareFactory_initFields(this);
}

HardwareFactory* HardwareFactory_new(void) {
    HardwareFactory* this = java_object_alloc(sizeof(HardwareFactory), "HardwareFactory");
    HardwareFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
HardwareInterface* HardwareFactory_getInstance2(HardwareFactory* this, OperatingSystemInterface* os) {
        JAVA_TRY {
            return this->SINGLETON;
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

