// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/StatePaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"





void StatePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StatePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StatePaintable", "Paintable");
    java_register_method("StatePaintable", "setState", (void*) StatePaintable_setState);
}


void StatePaintable_init(StatePaintable* this) {
    StatePaintable_register();
    Paintable_init(&this->base);
}

StatePaintable* StatePaintable_new(void) {
    StatePaintable* this = java_object_alloc(sizeof(StatePaintable), "StatePaintable");
    StatePaintable_init(this);
    return this;
}


void StatePaintable_setState(StatePaintable* this, int32_t state) {
}

