// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/Paintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"






void Paintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Paintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Paintable", nullptr);
    java_register_method("Paintable", "setBasicColorP", (void*) Paintable_setBasicColorP);
    java_register_method("Paintable", "paint", (void*) Paintable_paint);
    java_register_method("Paintable", "paintThreed", (void*) Paintable_paintThreed);
}

void Paintable_init(Paintable* this) {
    Paintable_register();
}

Paintable* Paintable_new(void) {
    Paintable* this = java_object_alloc(sizeof(Paintable), "Paintable");
    Paintable_init(this);
    return this;
}


void Paintable_setBasicColorP(Paintable* this, BasicColor* basicColor) {
}


void Paintable_paint(Paintable* this, Graphics* graphics) {
}


void Paintable_paintThreed(Paintable* this, Graphics* graphics) {
}

