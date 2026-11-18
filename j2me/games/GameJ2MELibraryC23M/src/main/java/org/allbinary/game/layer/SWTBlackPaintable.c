// Generated Code Do Not Modify
#include "org/allbinary/game/layer/SWTBlackPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif




void SWTBlackPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SWTBlackPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTBlackPaintable", "Paintable");
    java_register_method("SWTBlackPaintable", "paint", (void*) SWTBlackPaintable_paint);
}

static void SWTBlackPaintable_initFields(SWTBlackPaintable* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->BLACK = BasicColorFactory_getInstance()->BLACK;
}

void SWTBlackPaintable_init(SWTBlackPaintable* this) {
    SWTBlackPaintable_register();
    Paintable_init(&this->base);
    SWTBlackPaintable_initFields(this);
}

SWTBlackPaintable* SWTBlackPaintable_new(void) {
    SWTBlackPaintable* this = java_object_alloc(sizeof(SWTBlackPaintable), "SWTBlackPaintable");
    SWTBlackPaintable_init(this);
    return this;
}


void SWTBlackPaintable_paint(SWTBlackPaintable* this, Graphics* graphics) {
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->BLACK);
}

