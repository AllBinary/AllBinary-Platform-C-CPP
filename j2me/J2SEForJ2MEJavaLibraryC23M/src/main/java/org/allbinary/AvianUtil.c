// Generated Code Do Not Modify
#include "org/allbinary/AvianUtil.h"




void AvianUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AvianUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AvianUtil", nullptr);
}

void AvianUtil_init(AvianUtil* this) {
    AvianUtil_register();
}

AvianUtil* AvianUtil_new(void) {
    AvianUtil* this = java_object_alloc(sizeof(AvianUtil), "AvianUtil");
    AvianUtil_init(this);
    return this;
}


bool AvianUtil_isAvian(void) {
        return false;
}

