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
// package org.allbinary.game.paint.help

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
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct HelpPaintable HelpPaintable;
struct HelpPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t anchor;
    const char* title;
    const char** inputInfo;
    BasicColor* basicColor;
    int32_t titleBeginWidth;
    int32_t* beginWidthArray;
    int32_t charHeight;
};


HelpPaintable* HelpPaintable_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void HelpPaintable_init(HelpPaintable* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor);
void HelpPaintable_updateMeasurement(HelpPaintable* this, Graphics* graphics);
void HelpPaintable_setInputInfoP(HelpPaintable* this, const char** inputInfo);
void HelpPaintable_paint(HelpPaintable* this, Graphics* graphics);

static void HelpPaintable_initFields(HelpPaintable* this) {
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->anchor = Anchor_TOP_LEFT;
    
    this->inputInfo = StringUtil_getArrayInstance(StringUtil_getInstance());
    
    this->titleBeginWidth = 0;
    this->beginWidthArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->charHeight = 0;
}


void HelpPaintable_init(HelpPaintable* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    Paintable_init(&this->base);
    HelpPaintable_initFields(this);
        this->title = title;
        this->basicColor = basicColor;
}

HelpPaintable* HelpPaintable_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    HelpPaintable* this = calloc(1, sizeof(HelpPaintable));
    HelpPaintable_init(this, title, backgroundBasicColor, basicColor);
    return this;
}


void HelpPaintable_updateMeasurement(HelpPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->titleBeginWidth = (Font_stringWidth(font, this->title) >> 1);
        this->charHeight = Font_getHeight(font);
        int32_t size = java_array_length(this->inputInfo);
        for (int32_t index = 0; index < size; index++) {
            this->beginWidthArray[index] = (Font_stringWidth(font, this->inputInfo[index]) >> 1);
        }
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void HelpPaintable_setInputInfoP(HelpPaintable* this, const char** inputInfo) {
        this->inputInfo = inputInfo;
        this->beginWidthArray = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->inputInfo)));
        this->myFontProcessor = this->updateMyFontProcessor;
}


void HelpPaintable_paint(HelpPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfo);
        Graphics_setColor(graphics, BasicColor_intValue(this->basicColor));
        Graphics_drawString(graphics, this->title, halfWidth - this->titleBeginWidth, this->charHeight, this->anchor);
        int32_t size = java_array_length(this->inputInfo);
        for (int32_t index = 0; index < size; index++) {
            Graphics_drawString(graphics, this->inputInfo[index], halfWidth - this->beginWidthArray[index], (index + 3) * this->charHeight, this->anchor);
        }
}

