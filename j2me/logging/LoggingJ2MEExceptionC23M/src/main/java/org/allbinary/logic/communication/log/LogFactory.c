// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/LogFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/log/Log.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


Log* LogFactory_LOG;




void LogFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LogFactory_LOG = Log_new(StringUtil_getInstance()->EMPTY_STRING, NullUtil_getInstance()->NULL_OBJECT, StringUtil_getInstance()->EMPTY_STRING, NullUtil_getInstance()->NULL_OBJECT);
}

void LogFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogFactory", nullptr);
}

void LogFactory_init(LogFactory* this) {
    LogFactory_register();
}

LogFactory* LogFactory_new(void) {
    LogFactory* this = java_object_alloc(sizeof(LogFactory), "LogFactory");
    LogFactory_init(this);
    return this;
}


Log* LogFactory_getInstanceD(void) {
        StringUtil* stringUtil = StringUtil_getInstance();
        NullUtil* nullUtil = NullUtil_getInstance();
        return Log_new(stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT, stringUtil->EMPTY_STRING, nullUtil->NULL_OBJECT);
}


Log* LogFactory_getInstance(const char* specialMessage, void* anyType, const char* functionName, void* exception) {
        return Log_new(specialMessage, anyType, functionName, exception);
}


Log* LogFactory_getInstanceF(const char* specialMessage, void* anyType, const char* functionName) {
        return (LogFactory_staticInit(), LogFactory_LOG);
}

