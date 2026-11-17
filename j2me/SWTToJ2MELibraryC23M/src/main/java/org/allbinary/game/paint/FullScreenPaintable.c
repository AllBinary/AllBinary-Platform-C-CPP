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
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"

//SwtToJ2ME
typedef struct FullScreenPaintable FullScreenPaintable;
struct FullScreenPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* myFontProcessor;
    const char* FULLSCREEN_TEXT;
    int32_t anchor;
    int32_t Y;
    int32_t beginWidth;
};


FullScreenPaintable* FullScreenPaintable_new(void);
FullScreenPaintable* FullScreenPaintable_getInstance(void);

void FullScreenPaintable_init(FullScreenPaintable* this);
void FullScreenPaintable_updateMeasurement(FullScreenPaintable* this, Graphics* graphics);
void FullScreenPaintable_paint(FullScreenPaintable* this, Graphics* graphics);

static void FullScreenPaintable_initFields(FullScreenPaintable* this) {
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->FULLSCREEN_TEXT = "F11 - Toggle Fullscreen";
    this->anchor = Anchor_TOP_LEFT;
    this->Y = 0;
    this->beginWidth = 0;
}


FullScreenPaintable* FullScreenPaintable_getInstance(void) {
        return FullScreenPaintable_new();
}


void FullScreenPaintable_init(FullScreenPaintable* this) {
    Paintable_init(&this->base);
    FullScreenPaintable_initFields(this);
}

FullScreenPaintable* FullScreenPaintable_new(void) {
    FullScreenPaintable* this = calloc(1, sizeof(FullScreenPaintable));
    FullScreenPaintable_init(this);
    return this;
}


void FullScreenPaintable_updateMeasurement(FullScreenPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->Y = 4 * Font_getHeight(font);
        this->beginWidth = (Font_stringWidth(font, this->FULLSCREEN_TEXT) >> 1);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void FullScreenPaintable_paint(FullScreenPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfo);
        int32_t height = DisplayInfoSingleton_getLastHeight(this->displayInfo);
        Graphics_drawString(graphics, this->FULLSCREEN_TEXT, halfWidth - this->beginWidth, height - this->Y, this->anchor);
}

