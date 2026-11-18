// Generated Code Do Not Modify
#include "org/allbinary/game/paint/PressStartMenuPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchScreenFactory.h")
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif






static void PressStartMenuPaintable_setFlash(PressStartMenuPaintable* this, bool flash);

static bool PressStartMenuPaintable_isFlash(PressStartMenuPaintable* this);

void PressStartMenuPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PressStartMenuPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PressStartMenuPaintable", "Paintable");
    java_register_method("PressStartMenuPaintable", "updateMeasurement", (void*) PressStartMenuPaintable_updateMeasurement);
    java_register_method("PressStartMenuPaintable", "paint", (void*) PressStartMenuPaintable_paint);
    java_register_method("PressStartMenuPaintable", "setFlash", (void*) PressStartMenuPaintable_setFlash);
    java_register_method("PressStartMenuPaintable", "isFlash", (void*) PressStartMenuPaintable_isFlash);
}

static void PressStartMenuPaintable_initFields(PressStartMenuPaintable* this) {
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->PRESS_START = "Press Screen To Start";
    this->KEY_START = "Press or Click F2 To Begin";
    this->MENU_START = "Press Start From The Menu To Begin";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->startString = StringUtil_getInstance()->EMPTY_STRING;
    this->timeDelayHelper = TimeDelayHelper_new(1100);
    this->flash = false;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->beginWidth = 0;
    this->line = 0;
}


void PressStartMenuPaintable_init(PressStartMenuPaintable* this) {
    PressStartMenuPaintable_register();
    Paintable_init(&this->base);
    PressStartMenuPaintable_initFields(this);
        if (TouchScreenFactory_isTouch(TouchScreenFactory_getInstance())) {
            this->startString = this->PRESS_START;
        } else if (AppletUtil_isAppletLoader(this)) {
            this->startString = this->KEY_START;
        } else {
            this->startString = this->MENU_START;
        }
}

PressStartMenuPaintable* PressStartMenuPaintable_new(void) {
    PressStartMenuPaintable* this = java_object_alloc(sizeof(PressStartMenuPaintable), "PressStartMenuPaintable");
    PressStartMenuPaintable_init(this);
    return this;
}


void PressStartMenuPaintable_updateMeasurement(PressStartMenuPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->beginWidth = (Font_stringWidth(Graphics_getFont(graphics), this->startString) >> 1);
        this->line = (4 * MyFontProcessor_defaultCharWidth(font)) + (Font_getHeight(font) >> 1);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void PressStartMenuPaintable_paint(PressStartMenuPaintable* this, Graphics* graphics) {
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            if (PressStartMenuPaintable_isFlash(this)) {
                PressStartMenuPaintable_setFlash(this, false);
            } else {
                PressStartMenuPaintable_setFlash(this, true);
            }
        }
        if (PressStartMenuPaintable_isFlash(this)) {
            MyFontProcessor_process(this->myFontProcessor, graphics);
            Graphics_drawString(graphics, this->startString, DisplayInfoSingleton_getLastHalfWidth(this->displayInfo) - this->beginWidth, DisplayInfoSingleton_getLastHeight(this->displayInfo) - this->line, this->anchor);
        }
}


static void PressStartMenuPaintable_setFlash(PressStartMenuPaintable* this, bool flash) {
        this->flash = flash;
}


static bool PressStartMenuPaintable_isFlash(PressStartMenuPaintable* this) {
        return this->flash;
}

