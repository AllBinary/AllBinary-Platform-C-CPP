// Generated Code Do Not Modify
#include "org/allbinary/game/layer/SWTUtil.h"


bool SWTUtil_isSWT = false;
const char* SWTUtil_SWT = "SWT";

void SWTUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SWTUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTUtil", nullptr);
}

void SWTUtil_init(SWTUtil* this) {
    SWTUtil_register();
}

SWTUtil* SWTUtil_new(void) {
    SWTUtil* this = java_object_alloc(sizeof(SWTUtil), "SWTUtil");
    SWTUtil_init(this);
    return this;
}

