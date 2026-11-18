// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/ProcessPaintableSingletonFactory.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"


static ProcessPaintable* ProcessPaintableSingletonFactory_SINGLETON;



void ProcessPaintableSingletonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ProcessPaintableSingletonFactory_SINGLETON = ProcessPaintable_new();
}

void ProcessPaintableSingletonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProcessPaintableSingletonFactory", nullptr);
}


void ProcessPaintableSingletonFactory_init(ProcessPaintableSingletonFactory* this) {
    ProcessPaintableSingletonFactory_register();
}

ProcessPaintableSingletonFactory* ProcessPaintableSingletonFactory_new(void) {
    ProcessPaintableSingletonFactory* this = java_object_alloc(sizeof(ProcessPaintableSingletonFactory), "ProcessPaintableSingletonFactory");
    ProcessPaintableSingletonFactory_init(this);
    return this;
}


ProcessPaintable* ProcessPaintableSingletonFactory_getInstance(void) {
        return (ProcessPaintableSingletonFactory_staticInit(), ProcessPaintableSingletonFactory_SINGLETON);
}

