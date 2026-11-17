// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"


GenericOperatingSystem* NoOperatingSystem_NO_OPERATING_SYSTEM;


void NoOperatingSystem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoOperatingSystem_NO_OPERATING_SYSTEM = GenericOperatingSystem_new();
}

void NoOperatingSystem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoOperatingSystem", "GenericOperatingSystem");
}


void NoOperatingSystem_init(NoOperatingSystem* this) {
    NoOperatingSystem_register();
    GenericOperatingSystem_init(&this->base);
}

NoOperatingSystem* NoOperatingSystem_new(void) {
    NoOperatingSystem* this = java_object_alloc(sizeof(NoOperatingSystem), "NoOperatingSystem");
    NoOperatingSystem_init(this);
    return this;
}

