// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/TimeStampUtil.h"
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static LogFormatUtil* LogFormatUtil_instance;





static StringMaker* LogFormatUtil_getF(LogFormatUtil* this, const char* className, const char* functionName);


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
    java_register_method("LogFormatUtil", "getF", (void*) LogFormatUtil_getF);
    java_register_method("LogFormatUtil", "getO", (void*) LogFormatUtil_getO);
}

static void LogFormatUtil_initFields(LogFormatUtil* this) {
    this->timeStampUtil = TimeStampUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->NONE = "None";
    this->LOG_ERROR = "\nLog-Error: ";
    this->EMPTY = "Empty";
    this->STACK_TRACE = "\nStack Trace: ";
    this->TIME = "Time: ";
    this->CLASS_NAME = this->commonSeps->SPACE;
    this->FUNCTION_CALL = CommonLabels_getInstance()->COLON_SEP;
    this->SPECIAL_MESSAGE = "> ";
    this->stringUtil = StringUtil_getInstance();
    this->exceptionUtil = ExceptionUtil_getInstance();
    this->nullUtil = NullUtil_getInstance();
}


LogFormatUtil* LogFormatUtil_getInstance(void) {
        return (LogFormatUtil_staticInit(), LogFormatUtil_instance);
}


void LogFormatUtil_init(LogFormatUtil* this) {
    LogFormatUtil_register();
    LogFormatUtil_initFields(this);
}

LogFormatUtil* LogFormatUtil_new(void) {
    LogFormatUtil* this = java_object_alloc(sizeof(LogFormatUtil), "LogFormatUtil");
    LogFormatUtil_init(this);
    return this;
}


const char* LogFormatUtil_get(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage, void* exception) {
        StringMaker* stringBuffer = LogFormatUtil_getF(this, className, functionName);
        StringMaker_append(stringBuffer, LogFormatUtil_getO(this, exception));
        StringMaker_append(stringBuffer, this->SPECIAL_MESSAGE);
        StringMaker_append(stringBuffer, specialMessage);
        StringMaker_append(stringBuffer, this->commonSeps->NEW_LINE);
        return java_string_of(stringBuffer);
}


const char* LogFormatUtil_getS(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage) {
        StringMaker* stringBuffer = LogFormatUtil_getF(this, className, functionName);
        StringMaker_append(stringBuffer, this->SPECIAL_MESSAGE);
        StringMaker_append(stringBuffer, specialMessage);
        StringMaker_append(stringBuffer, this->commonSeps->NEW_LINE);
        return java_string_of(stringBuffer);
}


static StringMaker* LogFormatUtil_getF(LogFormatUtil* this, const char* className, const char* functionName) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->TIME);
        StringMaker_append(stringBuffer, TimeStampUtil_getAsString(this->timeStampUtil));
        StringMaker_append(stringBuffer, this->CLASS_NAME);
        StringMaker_append(stringBuffer, className);
        StringMaker_append(stringBuffer, this->FUNCTION_CALL);
        StringMaker_append(stringBuffer, functionName);
        return stringBuffer;
}


const char* LogFormatUtil_getO(LogFormatUtil* this, void* exception) {
        if (exception != this->nullUtil->NULL_OBJECT) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->LOG_ERROR);
            const char* exceptionAsString = java_object_toString(exception);
            StringMaker_append(stringBuffer, exceptionAsString);
            StringMaker_append(stringBuffer, this->STACK_TRACE);
            if (exception != this->nullUtil->NULL_OBJECT) {
                StringMaker_append(stringBuffer, ExceptionUtil_getStackTrace(this->exceptionUtil, ((JavaException*) exception)));
            } else {
                StringMaker_append(stringBuffer, this->stringUtil->NULL_STRING);
            }
            return java_string_of(stringBuffer);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

