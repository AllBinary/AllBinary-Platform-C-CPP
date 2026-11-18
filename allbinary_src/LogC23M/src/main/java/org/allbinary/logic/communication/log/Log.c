// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/Log.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif









void Log_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Log_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Log", nullptr);
    java_register_method("Log", "getSpecialMessage", (void*) Log_getSpecialMessage);
    java_register_method("Log", "getObject", (void*) Log_getObject);
    java_register_method("Log", "getFunctionName", (void*) Log_getFunctionName);
    java_register_method("Log", "getThrowable", (void*) Log_getThrowable);
    java_register_method("Log", "toString", (void*) Log_toString);
}

static void Log_initFields(Log* this) {
    this->logFormatUtil = LogFormatUtil_getInstance();
    
    
    
    
}


void Log_init(Log* this, const char* specialMessage, void* anyType, const char* functionName, void* exception) {
    Log_register();
    Log_initFields(this);
        this->specialMessage = specialMessage;
        this->anyType = anyType;
        this->functionName = functionName;
        this->exception = exception;
}

Log* Log_new(const char* specialMessage, void* anyType, const char* functionName, void* exception) {
    Log* this = java_object_alloc(sizeof(Log), "Log");
    Log_init(this, specialMessage, anyType, functionName, exception);
    return this;
}


const char* Log_getSpecialMessage(Log* this) {
        return this->specialMessage;
}


void* Log_getObject(Log* this) {
        return this->anyType;
}


const char* Log_getFunctionName(Log* this) {
        return this->functionName;
}


void* Log_getThrowable(Log* this) {
        return this->exception;
}


const char* Log_toString(Log* this) {
        const char* className = CommonStrings_getInstance()->EMPTY;
        const char* clazz = java_class_of(this->anyType);
        if (Class_getName(clazz) != nullptr) {
            className = Class_getName(clazz);
        }
        return LogFormatUtil_get(this->logFormatUtil, className, this->functionName, this->specialMessage, this->exception);
}

