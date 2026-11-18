// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/PaintableFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"




void PaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PaintableFactory", nullptr);
    java_register_method("PaintableFactory", "getInstance", (void*) PaintableFactory_getInstance);
}

void PaintableFactory_init(PaintableFactory* this) {
    PaintableFactory_register();
}

PaintableFactory* PaintableFactory_new(void) {
    PaintableFactory* this = java_object_alloc(sizeof(PaintableFactory), "PaintableFactory");
    PaintableFactory_init(this);
    return this;
}


Paintable* PaintableFactory_getInstance(PaintableFactory* this) {
        return NullPaintable_getInstance();
}

