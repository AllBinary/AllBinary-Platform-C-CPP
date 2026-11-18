// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullDisplayable.h"
#include "javax/microedition/lcdui/Graphics.h"


static NullDisplayable* NullDisplayable_SINGLETON;




void NullDisplayable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullDisplayable_SINGLETON = NullDisplayable_new();
}

void NullDisplayable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullDisplayable", "Canvas");
    java_register_method("NullDisplayable", "paint", (void*) NullDisplayable_paint);
}


NullDisplayable* NullDisplayable_getInstance(void) {
        return (NullDisplayable_staticInit(), NullDisplayable_SINGLETON);
}


void NullDisplayable_init(NullDisplayable* this) {
    NullDisplayable_register();
    Canvas_init(&this->base);
}

NullDisplayable* NullDisplayable_new(void) {
    NullDisplayable* this = java_object_alloc(sizeof(NullDisplayable), "NullDisplayable");
    NullDisplayable_init(this);
    return this;
}


void NullDisplayable_paint(NullDisplayable* this, Graphics* graphics) {
}

