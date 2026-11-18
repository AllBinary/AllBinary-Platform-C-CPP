// Generated Code Do Not Modify
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"


static LogConfigTypeFactory* LogConfigTypeFactory_instance;



void LogConfigTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LogConfigTypeFactory_instance = LogConfigTypeFactory_new();
}

void LogConfigTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LogConfigTypeFactory", nullptr);
}

static void LogConfigTypeFactory_initFields(LogConfigTypeFactory* this) {
    this->NO_DESCRIPTION = "No Description";
    this->OS = LogConfigType_new("Operating System", this->NO_DESCRIPTION);
    this->FACTORYERROR = LogConfigType_new("Factory Error", this->NO_DESCRIPTION);
    this->FILE = LogConfigType_new("File", this->NO_DESCRIPTION);
    this->FILEERROR = LogConfigType_new("File Error", this->NO_DESCRIPTION);
    this->IDLOGGING = LogConfigType_new("ID Logging", this->NO_DESCRIPTION);
    this->REPLACE = LogConfigType_new("Replace", this->NO_DESCRIPTION);
    this->REPLACE_INFO = LogConfigType_new("Replace Info", this->NO_DESCRIPTION);
    this->REPLACEERROR = LogConfigType_new("Replace Error", this->NO_DESCRIPTION);
}


LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void) {
        return (LogConfigTypeFactory_staticInit(), LogConfigTypeFactory_instance);
}


void LogConfigTypeFactory_init(LogConfigTypeFactory* this) {
    LogConfigTypeFactory_register();
    LogConfigTypeFactory_initFields(this);
        BasicArrayList_add((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), this->OS);
        BasicArrayList_add((LogConfigTypes_staticInit(), LogConfigTypes_LOGGING), this->FACTORYERROR);
}

LogConfigTypeFactory* LogConfigTypeFactory_new(void) {
    LogConfigTypeFactory* this = java_object_alloc(sizeof(LogConfigTypeFactory), "LogConfigTypeFactory");
    LogConfigTypeFactory_init(this);
    return this;
}

