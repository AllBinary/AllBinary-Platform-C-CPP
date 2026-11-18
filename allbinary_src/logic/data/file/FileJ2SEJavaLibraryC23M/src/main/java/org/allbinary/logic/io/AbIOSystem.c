// Generated Code Do Not Modify
#include "org/allbinary/logic/io/AbIOSystem.h"


static AbIOSystem* AbIOSystem_instance;




void AbIOSystem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbIOSystem_instance = AbIOSystem_new();
}

void AbIOSystem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbIOSystem", nullptr);
    java_register_method("AbIOSystem", "getType", (void*) AbIOSystem_getType);
    java_register_method("AbIOSystem", "isType", (void*) AbIOSystem_isType);
}

static void AbIOSystem_initFields(AbIOSystem* this) {
    this->type = "java.io";
}

void AbIOSystem_init(AbIOSystem* this) {
    AbIOSystem_register();
    AbIOSystem_initFields(this);
}

AbIOSystem* AbIOSystem_new(void) {
    AbIOSystem* this = java_object_alloc(sizeof(AbIOSystem), "AbIOSystem");
    AbIOSystem_init(this);
    return this;
}


AbIOSystem* AbIOSystem_getInstance(void) {
        return (AbIOSystem_staticInit(), AbIOSystem_instance);
}


const char* AbIOSystem_getType(AbIOSystem* this) {
        return this->type;
}


bool AbIOSystem_isType(AbIOSystem* this, const char* type) {
        if (strcmp(this->type, type) == 0) {
            return true;
        } else {
            return false;
        }
}

