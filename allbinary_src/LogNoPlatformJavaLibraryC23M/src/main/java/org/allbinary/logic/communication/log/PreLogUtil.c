// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/NullUtil.h"







void PreLogUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PreLogUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PreLogUtil", nullptr);
}


void PreLogUtil_init(PreLogUtil* this) {
    PreLogUtil_register();
}

PreLogUtil* PreLogUtil_new(void) {
    PreLogUtil* this = java_object_alloc(sizeof(PreLogUtil), "PreLogUtil");
    PreLogUtil_init(this);
    return this;
}


void PreLogUtil_put(const char* specialMessage, void* anyType, const char* functionName) {
        PreLogUtil_putOE(specialMessage, anyType, functionName, NullUtil_getInstance()->NULL_OBJECT);
}


void PreLogUtil_putOE(const char* specialMessage, void* anyType, const char* functionName, void* exception) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, void* exception) {
        java_throw(java_exception_new("RuntimeException", ""));
}

