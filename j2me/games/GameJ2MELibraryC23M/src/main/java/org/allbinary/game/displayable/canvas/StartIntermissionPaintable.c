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
// package org.allbinary.game.displayable.canvas

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
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct StartIntermissionPaintable StartIntermissionPaintable;
struct StartIntermissionPaintable {
    InitUpdatePaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    FontDebugFactory* fontDebugFactory;
    BasicColorSetUtil* basicSetColorUtil;
    AllBinaryGameCanvas* gameCanvas;
    const char** stringArray;
    int32_t fontSize;
    Font* font;
    int32_t* lastWidth;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    BasicColor* basicColor;
    int32_t color;
    int32_t* lineYOffsetArray;
    bool hasChanged;
    int32_t anchor;
    int32_t fontHeightP;
    const char* BEGIN_LEVEL;
    const char* EMPTY_STRING;
};


StartIntermissionPaintable* StartIntermissionPaintable_new(AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font);

void StartIntermissionPaintable_init(StartIntermissionPaintable* this, AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font);
void StartIntermissionPaintable_updateMeasurement(StartIntermissionPaintable* this, Graphics* graphics);
void StartIntermissionPaintable_paint(StartIntermissionPaintable* this, Graphics* graphics);
void StartIntermissionPaintable_update(StartIntermissionPaintable* this);
void StartIntermissionPaintable_setBasicColorP(StartIntermissionPaintable* this, BasicColor* basicColor);
BasicColor* StartIntermissionPaintable_getBasicColorP(StartIntermissionPaintable* this);

static void StartIntermissionPaintable_initFields(StartIntermissionPaintable* this) {
    this->fontDebugFactory = FontDebugFactory_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    
    
    
    
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->lineYOffsetArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->hasChanged = true;
    this->anchor = Anchor_TOP_LEFT;
    this->fontHeightP = 0;
    this->BEGIN_LEVEL = "Begin Level ";
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
}


void StartIntermissionPaintable_init(StartIntermissionPaintable* this, AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font) {
    InitUpdatePaintable_init(&this->base);
    StartIntermissionPaintable_initFields(this);
        this->gameCanvas = gameCanvas;
        this->stringArray = stringArray;
        this->lastWidth = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->stringArray)));
        StartIntermissionPaintable_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
        this->fontSize = Font_getSize(font);
        this->font = font;
}

StartIntermissionPaintable* StartIntermissionPaintable_new(AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font) {
    StartIntermissionPaintable* this = calloc(1, sizeof(StartIntermissionPaintable));
    StartIntermissionPaintable_init(this, gameCanvas, stringArray, basicColor, font);
    return this;
}


void StartIntermissionPaintable_updateMeasurement(StartIntermissionPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeightP = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void StartIntermissionPaintable_paint(StartIntermissionPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Font* existingFont = Graphics_getFont(graphics);
        FontDebugFactory_setFont(this->fontDebugFactory, this->font, graphics);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, this->basicColor, this->color);
        int32_t beginWidth = 0;
        for (int32_t index = java_array_length(this->lineYOffsetArray) - 1; index >= 0; index--) {
            if (this->hasChanged) {
                this->lastWidth[index] = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->stringArray[index]) >> 1);
            }
            beginWidth = this->lastWidth[index];
            Graphics_drawString(graphics, this->stringArray[index], DisplayInfoSingleton_getLastHalfWidth(displayInfo) - beginWidth, DisplayInfoSingleton_getLastHalfHeight(displayInfo) - this->lineYOffsetArray[index], this->anchor);
        }
        this->hasChanged = false;
        FontDebugFactory_setFont(this->fontDebugFactory, existingFont, graphics);
}


void StartIntermissionPaintable_update(StartIntermissionPaintable* this) {
        int32_t level = JAVA_CALL(JAVA_CALL(AllBinaryGameCanvas_getLayerManager(this->gameCanvas), getGameInfo), getCurrentLevel);
        this->stringArray[0] = JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->BEGIN_LEVEL), appendint, level), toString);
        for (int32_t index = java_array_length(this->stringArray) - 1; index >= 1; index--) {
            this->stringArray[index] = this->EMPTY_STRING;
        }
}


void StartIntermissionPaintable_setBasicColorP(StartIntermissionPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* StartIntermissionPaintable_getBasicColorP(StartIntermissionPaintable* this) {
        return this->basicColor;
}

