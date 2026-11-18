// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/StringLocationPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/LocationPaintable.h"





void StringLocationPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StringLocationPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StringLocationPaintable", "LocationPaintable");
    java_register_method("StringLocationPaintable", "paintXY", (void*) StringLocationPaintable_paintXY);
}

static void StringLocationPaintable_initFields(StringLocationPaintable* this) {
    
}


void StringLocationPaintable_init(StringLocationPaintable* this, const char* value) {
    StringLocationPaintable_register();
    LocationPaintable_init(&this->base);
    StringLocationPaintable_initFields(this);
        this->value = value;
}

StringLocationPaintable* StringLocationPaintable_new(const char* value) {
    StringLocationPaintable* this = java_object_alloc(sizeof(StringLocationPaintable), "StringLocationPaintable");
    StringLocationPaintable_init(this, value);
    return this;
}


void StringLocationPaintable_paintXY(StringLocationPaintable* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawString(graphics, this->value, x, y, 0);
}

