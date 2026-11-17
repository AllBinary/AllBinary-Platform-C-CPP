// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"


static LogUtil* LogUtil_instance;







void LogUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LogUtil_instance = LogUtil_new();
}

void LogUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogUtil", nullptr);
    java_register_method("LogUtil", "putP", (void*) LogUtil_putP);
    java_register_method("LogUtil", "putF", (void*) LogUtil_putF);
    java_register_method("LogUtil", "putFS", (void*) LogUtil_putFS);
    java_register_method("LogUtil", "put", (void*) LogUtil_put);
}


LogUtil* LogUtil_getInstance(void) {
        return (LogUtil_staticInit(), LogUtil_instance);
}


void LogUtil_init(LogUtil* this) {
    LogUtil_register();
}

LogUtil* LogUtil_new(void) {
    LogUtil* this = java_object_alloc(sizeof(LogUtil), "LogUtil");
    LogUtil_init(this);
    return this;
}


void LogUtil_putP(LogUtil* this, Log* log) {
}


void LogUtil_putF(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName) {
}


void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName) {
}


void LogUtil_put(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName, void* exception) {
}

