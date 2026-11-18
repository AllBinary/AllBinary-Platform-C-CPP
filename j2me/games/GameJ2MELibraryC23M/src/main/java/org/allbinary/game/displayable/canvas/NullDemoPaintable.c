// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/NullDemoPaintable.h"
#include "org/allbinary/game/displayable/canvas/DemoPaintableInterface.h"


NullDemoPaintable* NullDemoPaintable_NULL_DEMO_PAINTABLE;


void NullDemoPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullDemoPaintable_NULL_DEMO_PAINTABLE = NullDemoPaintable_new();
}

void NullDemoPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullDemoPaintable", nullptr);
    java_register_method("NullDemoPaintable", "showGamePaintable", (void*) NullDemoPaintable_showGamePaintable);
}

void NullDemoPaintable_init(NullDemoPaintable* this) {
    NullDemoPaintable_register();
}

NullDemoPaintable* NullDemoPaintable_new(void) {
    NullDemoPaintable* this = java_object_alloc(sizeof(NullDemoPaintable), "NullDemoPaintable");
    NullDemoPaintable_init(this);
    return this;
}


void NullDemoPaintable_showGamePaintable(NullDemoPaintable* this) {
}

