// Generated Code Do Not Modify
#include "org/allbinary/AndroidUtil.h"






void AndroidUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AndroidUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AndroidUtil", nullptr);
}


void AndroidUtil_init(AndroidUtil* this) {
    AndroidUtil_register();
}

AndroidUtil* AndroidUtil_new(void) {
    AndroidUtil* this = java_object_alloc(sizeof(AndroidUtil), "AndroidUtil");
    AndroidUtil_init(this);
    return this;
}


bool AndroidUtil_isMemoryRestrictive(void) {
        return false;
}


bool AndroidUtil_isAndroid(void) {
        return false;
}

