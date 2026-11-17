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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

//J2MEForJ2ME
typedef struct OwnershipPaintable OwnershipPaintable;
struct OwnershipPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* myFontProcessor;
    const char* COPYRIGHT;
    BasicColor* basicColor;
    int32_t color;
    int32_t anchor;
    int32_t COPYRIGHT_Y;
    int32_t beginWidth;
};


OwnershipPaintable* OwnershipPaintable_new(void);
OwnershipPaintable* OwnershipPaintable_getInstance(void);

void OwnershipPaintable_init(OwnershipPaintable* this);
void OwnershipPaintable_updateMeasurement(OwnershipPaintable* this, Graphics* graphics);
void OwnershipPaintable_setBasicColorP(OwnershipPaintable* this, BasicColor* basicColor);
BasicColor* OwnershipPaintable_getBasicColorP(OwnershipPaintable* this);
void OwnershipPaintable_paint(OwnershipPaintable* this, Graphics* graphics);

static void OwnershipPaintable_initFields(OwnershipPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->COPYRIGHT = "AllBinary Copyright (c) 2011";
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->color = BasicColor_intValue(this->basicColor);
    this->anchor = Anchor_TOP_LEFT;
    this->COPYRIGHT_Y = 0;
    this->beginWidth = 0;
}


OwnershipPaintable* OwnershipPaintable_getInstance(void) {
        return OwnershipPaintable_new();
}


void OwnershipPaintable_init(OwnershipPaintable* this) {
    Paintable_init(&this->base);
    OwnershipPaintable_initFields(this);
}

OwnershipPaintable* OwnershipPaintable_new(void) {
    OwnershipPaintable* this = calloc(1, sizeof(OwnershipPaintable));
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

