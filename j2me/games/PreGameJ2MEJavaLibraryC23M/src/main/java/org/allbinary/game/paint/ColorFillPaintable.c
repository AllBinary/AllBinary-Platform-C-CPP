// Generated Code Do Not Modify
#include "org/allbinary/game/paint/ColorFillPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"





void ColorFillPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ColorFillPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorFillPaintable", "ColorFillBasePaintable");
    java_register_method("ColorFillPaintable", "paint", (void*) ColorFillPaintable_paint);
}

static void ColorFillPaintable_initFields(ColorFillPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
}


void ColorFillPaintable_init(ColorFillPaintable* this, BasicColor* basicColor) {
    ColorFillPaintable_register();
        ColorFillBasePaintable_init(&this->base, basicColor);
        ColorFillPaintable_initFields(this);
}

ColorFillPaintable* ColorFillPaintable_new(BasicColor* basicColor) {
    ColorFillPaintable* this = java_object_alloc(sizeof(ColorFillPaintable), "ColorFillPaintable");
    ColorFillPaintable_init(this, basicColor);
    return this;
}


void ColorFillPaintable_paint(ColorFillPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->base.colorP);
        Graphics_fillRect(graphics, 0, 0, DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton), DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton));
}

