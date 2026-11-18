// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"


static NullPaintable* NullPaintable_SINGLETON;



void NullPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullPaintable_SINGLETON = NullPaintable_new();
}

void NullPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullPaintable", "Paintable");
}


void NullPaintable_init(NullPaintable* this) {
    NullPaintable_register();
    Paintable_init(&this->base);
}

NullPaintable* NullPaintable_new(void) {
    NullPaintable* this = java_object_alloc(sizeof(NullPaintable), "NullPaintable");
    NullPaintable_init(this);
    return this;
}


Paintable* NullPaintable_getInstance(void) {
        return (NullPaintable_staticInit(), NullPaintable_SINGLETON);
}

