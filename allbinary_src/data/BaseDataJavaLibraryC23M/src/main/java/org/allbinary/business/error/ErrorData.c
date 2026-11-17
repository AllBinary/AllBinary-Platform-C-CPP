// Generated Code Do Not Modify
#include "org/allbinary/business/error/ErrorData.h"


static ErrorData* ErrorData_instance;



void ErrorData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ErrorData_instance = ErrorData_new();
}

void ErrorData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ErrorData", nullptr);
}

static void ErrorData_initFields(ErrorData* this) {
    this->NAME = "ERROR_NAME";
    this->TEXT = "ERROR_TEXT";
}


ErrorData* ErrorData_getInstance(void) {
        return (ErrorData_staticInit(), ErrorData_instance);
}


void ErrorData_init(ErrorData* this) {
    ErrorData_register();
    ErrorData_initFields(this);
}

ErrorData* ErrorData_new(void) {
    ErrorData* this = java_object_alloc(sizeof(ErrorData), "ErrorData");
    ErrorData_init(this);
    return this;
}

