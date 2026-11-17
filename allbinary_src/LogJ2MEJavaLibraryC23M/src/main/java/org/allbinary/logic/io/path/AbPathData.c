// Generated Code Do Not Modify
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/string/CommonSeps.h"


static AbPathData* AbPathData_instance;



void AbPathData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbPathData_instance = AbPathData_new();
}

void AbPathData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbPathData", nullptr);
}

static void AbPathData_initFields(AbPathData* this) {
    this->EXTENSION_SEP = CommonSeps_getInstance()->PERIOD;
    this->SEPARATORCHAR = u'/';
    this->SEPARATOR = CommonSeps_getInstance()->FORWARD_SLASH;
}


AbPathData* AbPathData_getInstance(void) {
        return (AbPathData_staticInit(), AbPathData_instance);
}


void AbPathData_init(AbPathData* this) {
    AbPathData_register();
    AbPathData_initFields(this);
}

AbPathData* AbPathData_new(void) {
    AbPathData* this = java_object_alloc(sizeof(AbPathData), "AbPathData");
    AbPathData_init(this);
    return this;
}

