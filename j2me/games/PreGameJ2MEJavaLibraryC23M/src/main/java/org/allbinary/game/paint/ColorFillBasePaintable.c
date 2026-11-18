// Generated Code Do Not Modify
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif









void ColorFillBasePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ColorFillBasePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorFillBasePaintable", "Paintable");
    java_register_method("ColorFillBasePaintable", "setBasicColorP", (void*) ColorFillBasePaintable_setBasicColorP);
    java_register_method("ColorFillBasePaintable", "getBasicColorP", (void*) ColorFillBasePaintable_getBasicColorP);
    java_register_method("ColorFillBasePaintable", "getColor", (void*) ColorFillBasePaintable_getColor);
    java_register_method("ColorFillBasePaintable", "setColor", (void*) ColorFillBasePaintable_setColor);
    java_register_method("ColorFillBasePaintable", "paint", (void*) ColorFillBasePaintable_paint);
}

static void ColorFillBasePaintable_initFields(ColorFillBasePaintable* this) {
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->colorP = 0;
}


void ColorFillBasePaintable_init(ColorFillBasePaintable* this, BasicColor* basicColor) {
    ColorFillBasePaintable_register();
    Paintable_init(&this->base);
    ColorFillBasePaintable_initFields(this);
        ColorFillBasePaintable_setBasicColorP(this, basicColor);
}

ColorFillBasePaintable* ColorFillBasePaintable_new(BasicColor* basicColor) {
    ColorFillBasePaintable* this = java_object_alloc(sizeof(ColorFillBasePaintable), "ColorFillBasePaintable");
    ColorFillBasePaintable_init(this, basicColor);
    return this;
}


void ColorFillBasePaintable_setBasicColorP(ColorFillBasePaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        ColorFillBasePaintable_setColor(this, BasicColor_intValue(ColorFillBasePaintable_getBasicColorP(this)));
}


BasicColor* ColorFillBasePaintable_getBasicColorP(ColorFillBasePaintable* this) {
        return this->basicColor;
}


int32_t ColorFillBasePaintable_getColor(ColorFillBasePaintable* this) {
        return this->colorP;
}


void ColorFillBasePaintable_setColor(ColorFillBasePaintable* this, int32_t color) {
        this->colorP = color;
}


void ColorFillBasePaintable_paint(ColorFillBasePaintable* this, Graphics* graphics) {
}

