// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/Tracking.h"
#include "javax/microedition/lcdui/Graphics.h"





void Tracking_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Tracking_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Tracking", nullptr);
    java_register_method("Tracking", "paint", (void*) Tracking_paint);
}


void Tracking_init(Tracking* this) {
    Tracking_register();
}

Tracking* Tracking_new(void) {
    Tracking* this = java_object_alloc(sizeof(Tracking), "Tracking");
    Tracking_init(this);
    return this;
}


void Tracking_paint(Tracking* this, Graphics* graphics) {
}

