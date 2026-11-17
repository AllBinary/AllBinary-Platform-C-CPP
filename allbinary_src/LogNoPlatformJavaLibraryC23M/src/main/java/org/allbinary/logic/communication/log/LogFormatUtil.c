// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"


static LogFormatUtil* LogFormatUtil_instance;






void LogFormatUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LogFormatUtil_instance = LogFormatUtil_new();
}

void LogFormatUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogFormatUtil", nullptr);
    java_register_method("LogFormatUtil", "get", (void*) LogFormatUtil_get);
    java_register_method("LogFormatUtil", "getS", (void*) LogFormatUtil_getS);
    java_register_method("LogFormatUtil", "getO", (void*) LogFormatUtil_getO);
}


LogFormatUtil* LogFormatUtil_getInstance(void) {
        return (LogFormatUtil_staticInit(), LogFormatUtil_instance);
}


void LogFormatUtil_init(LogFormatUtil* this) {
    LogFormatUtil_register();
}

LogFormatUtil* LogFormatUtil_new(void) {
    LogFormatUtil* this = java_object_alloc(sizeof(LogFormatUtil), "LogFormatUtil");
    LogFormatUtil_init(this);
    return this;
}


const char* LogFormatUtil_get(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage, void* exception) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* LogFormatUtil_getS(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* LogFormatUtil_getO(LogFormatUtil* this, void* exception) {
        java_throw(java_exception_new("RuntimeException", ""));
}

