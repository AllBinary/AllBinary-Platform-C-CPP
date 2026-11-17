// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/linux/LinuxOS.h"





void LinuxOS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LinuxOS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LinuxOS", "GenericOperatingSystem");
    java_register_method("LinuxOS", "isAutoHide", (void*) LinuxOS_isAutoHide);
}


void LinuxOS_init(LinuxOS* this) {
    LinuxOS_register();
    GenericOperatingSystem_init(&this->base);
        this->base.scalable = true;
}

LinuxOS* LinuxOS_new(void) {
    LinuxOS* this = java_object_alloc(sizeof(LinuxOS), "LinuxOS");
    LinuxOS_init(this);
    return this;
}


bool LinuxOS_isAutoHide(LinuxOS* this) {
        return true;
}

