// Generated Code Do Not Modify
#include "org/allbinary/AppletUtil.h"





void AppletUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AppletUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AppletUtil", nullptr);
}


void AppletUtil_init(AppletUtil* this) {
    AppletUtil_register();
}

AppletUtil* AppletUtil_new(void) {
    AppletUtil* this = java_object_alloc(sizeof(AppletUtil), "AppletUtil");
    AppletUtil_init(this);
    return this;
}


bool AppletUtil_isAppletLoader(void* anyType) {
        return false;
}

