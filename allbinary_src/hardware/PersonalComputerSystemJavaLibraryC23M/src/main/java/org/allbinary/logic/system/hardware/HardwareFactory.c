// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/HardwareFactory.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/hardware/linux/LinuxHardware.h"
#include "org/allbinary/logic/system/hardware/windows/WindowsHardware.h"
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


HardwareFactory* HardwareFactory_getInstance0(void) {
        return (HardwareFactory_staticInit(), HardwareFactory_instance);
}


void HardwareFactory_init(HardwareFactory* this) {
    HardwareFactory_register();
}

HardwareFactory* HardwareFactory_new(void) {
    HardwareFactory* this = java_object_alloc(sizeof(HardwareFactory), "HardwareFactory");
    HardwareFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
HardwareInterface* HardwareFactory_getInstance1(GenericOperatingSystem* os) {
        JAVA_TRY {
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            if (JAVA_CALL(GenericOperatingSystem_getName(os), compareTo, operatingSystems->LINUX) == 0) {
                return ((HardwareInterface*) LinuxHardware_new());
            } else if (JAVA_CALL(GenericOperatingSystem_getName(os), indexOf, operatingSystems->WINDOWS) >= 0) {
                return ((HardwareInterface*) WindowsHardware_new());
            }
            java_throw(java_exception_new("Exception", java_concat("No Hardware Imp for: ", GenericOperatingSystem_getName(os))));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

