// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/NullInitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"


static NullInitUpdatePaintable* NullInitUpdatePaintable_SINGLETON;



void NullInitUpdatePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullInitUpdatePaintable_SINGLETON = NullInitUpdatePaintable_new();
}

void NullInitUpdatePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullInitUpdatePaintable", "InitUpdatePaintable");
}


void NullInitUpdatePaintable_init(NullInitUpdatePaintable* this) {
    NullInitUpdatePaintable_register();
    InitUpdatePaintable_init(&this->base);
}

NullInitUpdatePaintable* NullInitUpdatePaintable_new(void) {
    NullInitUpdatePaintable* this = java_object_alloc(sizeof(NullInitUpdatePaintable), "NullInitUpdatePaintable");
    NullInitUpdatePaintable_init(this);
    return this;
}


InitUpdatePaintable* NullInitUpdatePaintable_getInstance(void) {
        return (NullInitUpdatePaintable_staticInit(), NullInitUpdatePaintable_SINGLETON);
}

