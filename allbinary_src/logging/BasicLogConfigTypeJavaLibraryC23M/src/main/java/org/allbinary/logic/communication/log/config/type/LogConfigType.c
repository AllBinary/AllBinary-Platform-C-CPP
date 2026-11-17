// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"








void LogConfigType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LogConfigType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogConfigType", nullptr);
    java_register_method("LogConfigType", "getName", (void*) LogConfigType_getName);
    java_register_method("LogConfigType", "getDescription", (void*) LogConfigType_getDescription);
    java_register_method("LogConfigType", "setName", (void*) LogConfigType_setName);
    java_register_method("LogConfigType", "setDescription", (void*) LogConfigType_setDescription);
}

static void LogConfigType_initFields(LogConfigType* this) {
    
    
}


void LogConfigType_init(LogConfigType* this, const char* name, const char* description) {
    LogConfigType_register();
    LogConfigType_initFields(this);
        this->name = name;
        this->description = description;
}

LogConfigType* LogConfigType_new(const char* name, const char* description) {
    LogConfigType* this = java_object_alloc(sizeof(LogConfigType), "LogConfigType");
    LogConfigType_init(this, name, description);
    return this;
}


const char* LogConfigType_getName(LogConfigType* this) {
        return this->name;
}


const char* LogConfigType_getDescription(LogConfigType* this) {
        return this->description;
}


void LogConfigType_setName(LogConfigType* this, const char* value) {
        this->name = value;
}


void LogConfigType_setDescription(LogConfigType* this, const char* value) {
        this->description = value;
}

