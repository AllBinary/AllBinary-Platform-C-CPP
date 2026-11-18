// Generated Code Do Not Modify
#include "org/allbinary/game/paint/OwnershipPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif









void OwnershipPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OwnershipPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OwnershipPaintable", "Paintable");
    java_register_method("OwnershipPaintable", "updateMeasurement", (void*) OwnershipPaintable_updateMeasurement);
    java_register_method("OwnershipPaintable", "setBasicColorP", (void*) OwnershipPaintable_setBasicColorP);
    java_register_method("OwnershipPaintable", "getBasicColorP", (void*) OwnershipPaintable_getBasicColorP);
    java_register_method("OwnershipPaintable", "paint", (void*) OwnershipPaintable_paint);
}

static void OwnershipPaintable_initFields(OwnershipPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->COPYRIGHT = "AllBinary Copyright (c) 2011";
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->color = BasicColor_intValue(this->basicColor);
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->COPYRIGHT_Y = 0;
    this->beginWidth = 0;
}


OwnershipPaintable* OwnershipPaintable_getInstance(void) {
        return OwnershipPaintable_new();
}


void OwnershipPaintable_init(OwnershipPaintable* this) {
    OwnershipPaintable_register();
    Paintable_init(&this->base);
    OwnershipPaintable_initFields(this);
}

OwnershipPaintable* OwnershipPaintable_new(void) {
    OwnershipPaintable* this = java_object_alloc(sizeof(OwnershipPaintable), "OwnershipPaintable");
    OwnershipPaintable_init(this);
    return this;
}


void OwnershipPaintable_updateMeasurement(OwnershipPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->COPYRIGHT_Y = 2 * Font_getHeight(font);
        this->beginWidth = (Font_stringWidth(font, this->COPYRIGHT) >> 1);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void OwnershipPaintable_setBasicColorP(OwnershipPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        this->color = BasicColor_intValue(basicColor);
}


BasicColor* OwnershipPaintable_getBasicColorP(OwnershipPaintable* this) {
        return this->basicColor;
}


void OwnershipPaintable_paint(OwnershipPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, this->color);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfo);
        int32_t height = DisplayInfoSingleton_getLastHeight(this->displayInfo);
        Graphics_drawString(graphics, this->COPYRIGHT, halfWidth - this->beginWidth, height - this->COPYRIGHT_Y, this->anchor);
}

