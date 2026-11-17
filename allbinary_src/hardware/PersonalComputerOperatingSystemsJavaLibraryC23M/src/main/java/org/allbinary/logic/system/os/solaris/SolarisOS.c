// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/solaris/SolarisOS.h"





void SolarisOS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SolarisOS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SolarisOS", "GenericOperatingSystem");
    java_register_method("SolarisOS", "isAutoHide", (void*) SolarisOS_isAutoHide);
}


void SolarisOS_init(SolarisOS* this) {
    SolarisOS_register();
    GenericOperatingSystem_init(&this->base);
        this->base.scalable = true;
}

SolarisOS* SolarisOS_new(void) {
    SolarisOS* this = java_object_alloc(sizeof(SolarisOS), "SolarisOS");
    SolarisOS_init(this);
    return this;
}


bool SolarisOS_isAutoHide(SolarisOS* this) {
        return true;
}

