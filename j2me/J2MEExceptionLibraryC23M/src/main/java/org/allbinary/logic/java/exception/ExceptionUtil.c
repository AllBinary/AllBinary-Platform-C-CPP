// Generated Code Do Not Modify
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"


static ExceptionUtil* ExceptionUtil_instance;




void ExceptionUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ExceptionUtil_instance = ExceptionUtil_new();
}

void ExceptionUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ExceptionUtil", nullptr);
    java_register_method("ExceptionUtil", "getStackTrace", (void*) ExceptionUtil_getStackTrace);
}

static void ExceptionUtil_initFields(ExceptionUtil* this) {
    this->PRETEND_EXCEPTION = java_exception_new("Exception", "Not Really An Exception");
    this->NONE = "No Stack Trace";
}


ExceptionUtil* ExceptionUtil_getInstance(void) {
        return (ExceptionUtil_staticInit(), ExceptionUtil_instance);
}


void ExceptionUtil_init(ExceptionUtil* this) {
    ExceptionUtil_register();
    ExceptionUtil_initFields(this);
}

ExceptionUtil* ExceptionUtil_new(void) {
    ExceptionUtil* this = java_object_alloc(sizeof(ExceptionUtil), "ExceptionUtil");
    ExceptionUtil_init(this);
    return this;
}


const char* ExceptionUtil_getStackTrace(ExceptionUtil* this, JavaException* e) {
        ByteArrayOutputStream* bs = ByteArrayOutputStream_new();
        java_print_exception(e);
        const char* output = java_string_of(bs);
        return java_string_new(output);
}

