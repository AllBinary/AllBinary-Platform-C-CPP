// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/communication/log/LogFactory.h"
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
    java_register_method("LogUtil", "putL", (void*) LogUtil_putL);
    java_register_method("LogUtil", "putF", (void*) LogUtil_putF);
    java_register_method("LogUtil", "putFS", (void*) LogUtil_putFS);
    java_register_method("LogUtil", "put", (void*) LogUtil_put);
}

static void LogUtil_initFields(LogUtil* this) {
    this->logFormatUtil = LogFormatUtil_getInstance();
    this->LOG_SUCCESS = "org.allbinary: ";
}


LogUtil* LogUtil_getInstance(void) {
        return (LogUtil_staticInit(), LogUtil_instance);
}


void LogUtil_init(LogUtil* this) {
    LogUtil_register();
    LogUtil_initFields(this);
}

LogUtil* LogUtil_new(void) {
    LogUtil* this = java_object_alloc(sizeof(LogUtil), "LogUtil");
    LogUtil_init(this);
    return this;
}


void LogUtil_putL(LogUtil* this, Log* log) {
        if (log == (LogFactory_staticInit(), LogFactory_LOG)) {
            return;
        }
        void* exception = Log_getThrowable(log);
        if (exception == nullptr) {
            return;
        }
        const char* specialMessage = Log_getSpecialMessage(log);
        void* anyType = Log_getObject(log);
        const char* functionName = Log_getFunctionName(log);
        LogUtil_put(this, specialMessage, anyType, functionName, exception);
}


void LogUtil_putF(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName) {
}


void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName) {
}


void LogUtil_put(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName, void* exception) {
        const char* className = CommonStrings_getInstance()->EMPTY;
        if (java_class_of(anyType) != nullptr) {
            className = java_string_new(java_class_of(anyType));
        }
        const char* message = LogFormatUtil_get(this->logFormatUtil, className, functionName, specialMessage, exception);
        fputs(java_string_of(this->LOG_SUCCESS), stdout);
        puts(java_string_of(message));
}

