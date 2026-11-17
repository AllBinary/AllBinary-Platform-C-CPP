// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/windows/WindowsOS.h"





void WindowsOS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void WindowsOS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WindowsOS", "GenericOperatingSystem");
    java_register_method("WindowsOS", "isAutoHide", (void*) WindowsOS_isAutoHide);
}


void WindowsOS_init(WindowsOS* this) {
    WindowsOS_register();
    GenericOperatingSystem_init(&this->base);
        this->base.scalable = true;
}

WindowsOS* WindowsOS_new(void) {
    WindowsOS* this = java_object_alloc(sizeof(WindowsOS), "WindowsOS");
    WindowsOS_init(this);
    return this;
}


bool WindowsOS_isAutoHide(WindowsOS* this) {
        return true;
}

