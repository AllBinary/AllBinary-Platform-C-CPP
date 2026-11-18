// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/StatePaintableFactory.h"
#include "org/allbinary/graphics/paint/StatePaintable.h"


static StatePaintable* StatePaintableFactory_instance;


void StatePaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StatePaintableFactory_instance = StatePaintable_new();
}

void StatePaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StatePaintableFactory", nullptr);
}

void StatePaintableFactory_init(StatePaintableFactory* this) {
    StatePaintableFactory_register();
}

StatePaintableFactory* StatePaintableFactory_new(void) {
    StatePaintableFactory* this = java_object_alloc(sizeof(StatePaintableFactory), "StatePaintableFactory");
    StatePaintableFactory_init(this);
    return this;
}


StatePaintable* StatePaintableFactory_getInstance(void) {
        return (StatePaintableFactory_staticInit(), StatePaintableFactory_instance);
}

