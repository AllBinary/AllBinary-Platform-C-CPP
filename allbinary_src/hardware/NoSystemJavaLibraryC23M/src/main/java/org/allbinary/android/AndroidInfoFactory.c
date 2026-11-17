// Generated Code Do Not Modify
#include "org/allbinary/android/AndroidInfoFactory.h"


static AndroidInfoFactory* AndroidInfoFactory_instance;



void AndroidInfoFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AndroidInfoFactory_instance = AndroidInfoFactory_new();
}

void AndroidInfoFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AndroidInfoFactory", nullptr);
    java_register_method("AndroidInfoFactory", "getVersion", (void*) AndroidInfoFactory_getVersion);
}

static void AndroidInfoFactory_initFields(AndroidInfoFactory* this) {
    this->version = 8;
}

void AndroidInfoFactory_init(AndroidInfoFactory* this) {
    AndroidInfoFactory_register();
    AndroidInfoFactory_initFields(this);
}

AndroidInfoFactory* AndroidInfoFactory_new(void) {
    AndroidInfoFactory* this = java_object_alloc(sizeof(AndroidInfoFactory), "AndroidInfoFactory");
    AndroidInfoFactory_init(this);
    return this;
}


AndroidInfoFactory* AndroidInfoFactory_getInstance(void) {
        return (AndroidInfoFactory_staticInit(), AndroidInfoFactory_instance);
}


int32_t AndroidInfoFactory_getVersion(AndroidInfoFactory* this) {
        return this->version;
}

