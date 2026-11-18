// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/LocationPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/LocationPaintableInterface.h"


static LocationPaintable* LocationPaintable_instance;



void LocationPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LocationPaintable_instance = LocationPaintable_new();
}

void LocationPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LocationPaintable", nullptr);
    java_register_method("LocationPaintable", "paintXY", (void*) LocationPaintable_paintXY);
}

void LocationPaintable_init(LocationPaintable* this) {
    LocationPaintable_register();
}

LocationPaintable* LocationPaintable_new(void) {
    LocationPaintable* this = java_object_alloc(sizeof(LocationPaintable), "LocationPaintable");
    LocationPaintable_init(this);
    return this;
}


LocationPaintable* LocationPaintable_getInstance(void) {
        return (LocationPaintable_staticInit(), LocationPaintable_instance);
}


void LocationPaintable_paintXY(LocationPaintable* this, Graphics* graphics, int32_t x, int32_t y) {
}

