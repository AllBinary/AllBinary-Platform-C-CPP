/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/input/motion/button/TouchScreenFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct PressStartMenuPaintable PressStartMenuPaintable;
struct PressStartMenuPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfo;
    const char* PRESS_START;
    const char* KEY_START;
    const char* MENU_START;
    MyFontProcessor* myFontProcessor;
    const char* startString;
    TimeDelayHelper* timeDelayHelper;
    bool flash;
    int32_t anchor;
    int32_t beginWidth;
    int32_t line;
};


PressStartMenuPaintable* PressStartMenuPaintable_new(void);

void PressStartMenuPaintable_init(PressStartMenuPaintable* this);
void PressStartMenuPaintable_updateMeasurement(PressStartMenuPaintable* this, Graphics* graphics);
void PressStartMenuPaintable_paint(PressStartMenuPaintable* this, Graphics* graphics);
static void PressStartMenuPaintable_setFlash(PressStartMenuPaintable* this, bool flash);
static bool PressStartMenuPaintable_isFlash(PressStartMenuPaintable* this);

static void PressStartMenuPaintable_initFields(PressStartMenuPaintable* this) {
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->PRESS_START = "Press Screen To Start";
    this->KEY_START = "Press or Click F2 To Begin";
    this->MENU_START = "Press Start From The Menu To Begin";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->startString = StringUtil_getInstance()->EMPTY_STRING;
    this->timeDelayHelper = TimeDelayHelper_new(1100);
    this->flash = false;
    this->anchor = Anchor_TOP_LEFT;
    this->beginWidth = 0;
    this->line = 0;
}


void PressStartMenuPaintable_init(PressStartMenuPaintable* this) {
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
    PressStartMenuPaintable* this = calloc(1, sizeof(PressStartMenuPaintable));
    PressStartMenuPaintable_init(this);
    return this;
}


void PressStartMenuPaintable_updateMeasurement(PressStartMenuPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->beginWidth = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->startString) >> 1);
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

