// Generated Code Do Not Modify
#include "org/allbinary/logic/math/ScaleFactorFactory.h"


static ScaleFactorFactory* ScaleFactorFactory_instance;


void ScaleFactorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScaleFactorFactory_instance = ScaleFactorFactory_new();
}

void ScaleFactorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScaleFactorFactory", nullptr);
}

static void ScaleFactorFactory_initFields(ScaleFactorFactory* this) {
    this->DEFAULT_SCALE_FACTOR = 10;
    this->DEFAULT_SCALE_VALUE = 1024;
}

void ScaleFactorFactory_init(ScaleFactorFactory* this) {
    ScaleFactorFactory_register();
    ScaleFactorFactory_initFields(this);
}

ScaleFactorFactory* ScaleFactorFactory_new(void) {
    ScaleFactorFactory* this = java_object_alloc(sizeof(ScaleFactorFactory), "ScaleFactorFactory");
    ScaleFactorFactory_init(this);
    return this;
}


ScaleFactorFactory* ScaleFactorFactory_getInstance(void) {
        return (ScaleFactorFactory_staticInit(), ScaleFactorFactory_instance);
}

