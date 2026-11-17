// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/http/HttpData.h"
#include "org/allbinary/string/CommonSeps.h"


static HttpData* HttpData_instance;



void HttpData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HttpData_instance = HttpData_new();
}

void HttpData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HttpData", nullptr);
}

static void HttpData_initFields(HttpData* this) {
    
    
    
    this->URL_LABEL = "Url: ";
}


HttpData* HttpData_getInstance(void) {
        return (HttpData_staticInit(), HttpData_instance);
}


void HttpData_init(HttpData* this) {
    HttpData_register();
    HttpData_initFields(this);
        CommonSeps* commonSeps = CommonSeps_getInstance();
        this->EQUALS = commonSeps->EQUALS;
        this->PARAM_SEP = commonSeps->AMPERSAND;
        this->URL_PARAM_SEP = commonSeps->QUESTION;
}

HttpData* HttpData_new(void) {
    HttpData* this = java_object_alloc(sizeof(HttpData), "HttpData");
    HttpData_init(this);
    return this;
}

