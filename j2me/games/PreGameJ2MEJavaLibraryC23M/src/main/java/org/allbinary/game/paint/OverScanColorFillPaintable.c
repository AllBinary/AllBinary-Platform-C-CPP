// Generated Code Do Not Modify
#include "org/allbinary/game/paint/OverScanColorFillPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/game/paint/ColorFillPaintable.h"





void OverScanColorFillPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OverScanColorFillPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OverScanColorFillPaintable", "ColorFillPaintable");
    java_register_method("OverScanColorFillPaintable", "paint", (void*) OverScanColorFillPaintable_paint);
}


void OverScanColorFillPaintable_init(OverScanColorFillPaintable* this, BasicColor* basicColor) {
    OverScanColorFillPaintable_register();
        ColorFillPaintable_init(&this->base, basicColor);
}

OverScanColorFillPaintable* OverScanColorFillPaintable_new(BasicColor* basicColor) {
    OverScanColorFillPaintable* this = java_object_alloc(sizeof(OverScanColorFillPaintable), "OverScanColorFillPaintable");
    OverScanColorFillPaintable_init(this, basicColor);
    return this;
}


void OverScanColorFillPaintable_paint(OverScanColorFillPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->base.base.colorP);
        Graphics_fillRect(graphics, -Graphics_getClipX(graphics), -Graphics_getClipY(graphics), DisplayInfoSingleton_getLastWidth(this->base.displayInfoSingleton) + (Graphics_getClipX(graphics) * 2), DisplayInfoSingleton_getLastHeight(this->base.displayInfoSingleton) + (Graphics_getClipY(graphics) * 2));
}

