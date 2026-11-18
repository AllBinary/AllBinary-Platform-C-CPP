// Generated Code Do Not Modify
#include "org/allbinary/logic/io/path/AbPathUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"


static AbPathUtil* AbPathUtil_instance;


void AbPathUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbPathUtil_instance = AbPathUtil_new();
}

void AbPathUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbPathUtil", nullptr);
}

static void AbPathUtil_initFields(AbPathUtil* this) {
    this->NO_ABPATH = AbPath_createAbPath();
}

void AbPathUtil_init(AbPathUtil* this) {
    AbPathUtil_register();
    AbPathUtil_initFields(this);
}

AbPathUtil* AbPathUtil_new(void) {
    AbPathUtil* this = java_object_alloc(sizeof(AbPathUtil), "AbPathUtil");
    AbPathUtil_init(this);
    return this;
}


AbPathUtil* AbPathUtil_getInstance(void) {
        return (AbPathUtil_staticInit(), AbPathUtil_instance);
}

