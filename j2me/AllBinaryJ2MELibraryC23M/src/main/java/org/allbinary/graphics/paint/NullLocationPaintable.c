// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/NullLocationPaintable.h"
#include "org/allbinary/graphics/paint/LocationPaintable.h"


static NullLocationPaintable* NullLocationPaintable_instanceC;


void NullLocationPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullLocationPaintable_instanceC = NullLocationPaintable_new();
}

void NullLocationPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullLocationPaintable", "LocationPaintable");
}

void NullLocationPaintable_init(NullLocationPaintable* this) {
    NullLocationPaintable_register();
    LocationPaintable_init(&this->base);
}

NullLocationPaintable* NullLocationPaintable_new(void) {
    NullLocationPaintable* this = java_object_alloc(sizeof(NullLocationPaintable), "NullLocationPaintable");
    NullLocationPaintable_init(this);
    return this;
}


NullLocationPaintable* NullLocationPaintable_getInstance(void) {
        return (NullLocationPaintable_staticInit(), NullLocationPaintable_instanceC);
}

