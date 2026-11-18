// Generated Code Do Not Modify
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/debug/DebugInterface.h"




void DebugFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DebugFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DebugFactory", nullptr);
}

void DebugFactory_init(DebugFactory* this) {
    DebugFactory_register();
}

DebugFactory* DebugFactory_new(void) {
    DebugFactory* this = java_object_alloc(sizeof(DebugFactory), "DebugFactory");
    DebugFactory_init(this);
    return this;
}


DebugInterface* DebugFactory_getInstance(void) {
        return NoDebug_getInstance();
}

