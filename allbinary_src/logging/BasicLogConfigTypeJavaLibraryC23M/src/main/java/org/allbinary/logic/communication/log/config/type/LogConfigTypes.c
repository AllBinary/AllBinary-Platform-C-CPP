// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


BasicArrayList* LogConfigTypes_LOGGING;


void LogConfigTypes_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LogConfigTypes_LOGGING = BasicArrayListD_new();
}

void LogConfigTypes_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogConfigTypes", nullptr);
}


void LogConfigTypes_init(LogConfigTypes* this) {
    LogConfigTypes_register();
}

LogConfigTypes* LogConfigTypes_new(void) {
    LogConfigTypes* this = java_object_alloc(sizeof(LogConfigTypes), "LogConfigTypes");
    LogConfigTypes_init(this);
    return this;
}

