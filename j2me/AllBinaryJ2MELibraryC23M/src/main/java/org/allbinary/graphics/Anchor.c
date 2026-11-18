// Generated Code Do Not Modify
#include "org/allbinary/graphics/Anchor.h"
#include "javax/microedition/lcdui/Graphics.h"


int32_t Anchor_TOP_LEFT;

void Anchor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Anchor_TOP_LEFT = (Graphics_staticInit(), Graphics_TOP) & (Graphics_staticInit(), Graphics_LEFT);
}

void Anchor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Anchor", nullptr);
}

void Anchor_init(Anchor* this) {
    Anchor_register();
}

Anchor* Anchor_new(void) {
    Anchor* this = java_object_alloc(sizeof(Anchor), "Anchor");
    Anchor_init(this);
    return this;
}

