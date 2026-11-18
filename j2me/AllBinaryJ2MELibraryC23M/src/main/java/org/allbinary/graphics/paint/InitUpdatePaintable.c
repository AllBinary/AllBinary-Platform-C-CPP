// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintableInterface.h"






void InitUpdatePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InitUpdatePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InitUpdatePaintable", "Paintable");
    java_register_method("InitUpdatePaintable", "init", (void*) InitUpdatePaintable_initMethod);
    java_register_method("InitUpdatePaintable", "update", (void*) InitUpdatePaintable_update);
}


void InitUpdatePaintable_init(InitUpdatePaintable* this) {
    InitUpdatePaintable_register();
    Paintable_init(&this->base);
}

InitUpdatePaintable* InitUpdatePaintable_new(void) {
    InitUpdatePaintable* this = java_object_alloc(sizeof(InitUpdatePaintable), "InitUpdatePaintable");
    InitUpdatePaintable_init(this);
    return this;
}


// throws Exception
void InitUpdatePaintable_initMethod(InitUpdatePaintable* this) {
}


void InitUpdatePaintable_update(InitUpdatePaintable* this) {
}

