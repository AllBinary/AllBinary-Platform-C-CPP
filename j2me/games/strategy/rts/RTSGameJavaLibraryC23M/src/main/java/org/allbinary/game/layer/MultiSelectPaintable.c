/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"

typedef struct MultiSelectPaintable MultiSelectPaintable;
struct MultiSelectPaintable {
    SelectionHudPaintable base;
    BasicArrayList* rootNameList;
    uint16_t* totalCharArray;
    const char* rootNamesString;
    const char* TOTAL;
    int32_t backgroundColor;
    int32_t totalWidth;
    int32_t textLine2Y;
};


MultiSelectPaintable* MultiSelectPaintable_new(void);

void MultiSelectPaintable_init(MultiSelectPaintable* this);
void MultiSelectPaintable_updateMeasurement(MultiSelectPaintable* this, Graphics* graphics);
void MultiSelectPaintable_update(MultiSelectPaintable* this, BasicArrayList* list);
static void MultiSelectPaintable_clear(MultiSelectPaintable* this);
void MultiSelectPaintable_paint(MultiSelectPaintable* this, Graphics* graphics);

static void MultiSelectPaintable_initFields(MultiSelectPaintable* this) {
    this->rootNameList = BasicArrayListD_new();
    this->totalCharArray = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->rootNamesString = StringUtil_getInstance()->EMPTY_STRING;
    this->TOTAL = "Total Selected: ";
    this->backgroundColor = JAVA_CALL(BasicColorFactory_getInstance()->GREY, intValue);
    this->totalWidth = 0;
    this->textLine2Y = 0;
}


void MultiSelectPaintable_init(MultiSelectPaintable* this) {
    SelectionHudPaintable_init(&this->base);
    MultiSelectPaintable_initFields(this);
}

MultiSelectPaintable* MultiSelectPaintable_new(void) {
    MultiSelectPaintable* this = calloc(1, sizeof(MultiSelectPaintable));
    MultiSelectPaintable_init(this);
    return this;
}


void MultiSelectPaintable_updateMeasurement(MultiSelectPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_updateMeasurement((&this->base), graphics);
        Font* font = Graphics_getFont(graphics);
        this->totalWidth = Font_stringWidth(font, this->TOTAL);
        this->textLine2Y = (this->y + Font_getHeight(font));
}


void MultiSelectPaintable_update(MultiSelectPaintable* this, BasicArrayList* list) {
        MultiSelectPaintable_clear(this);
        int32_t size = BasicArrayList_size(list);
        this->totalCharArray = JAVA_CALL(MultiSelectPaintable_getPrimitiveLongUtil(this), getCharArray, size);
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            RTSLayer* rtsLayer = ((RTSLayer*) BasicArrayList_get(list, index));
            if (!BasicArrayList_contains(this->rootNameList, RTSLayer_getRootName(rtsLayer))) {
                BasicArrayList_add(this->rootNameList, RTSLayer_getRootName(rtsLayer));
            }
        }
        const char* COMMA_SEP = CommonSeps_getInstance()->COMMA_SEP;
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = BasicArrayList_size(this->rootNameList) - 1; index >= 0; index--) {
            const char* rootName = ((const char*) BasicArrayList_get(this->rootNameList, index));
            StringMaker_append(stringBuffer, rootName);
            if (index != 0) {
                StringMaker_append(stringBuffer, COMMA_SEP);
            }
        }
        this->rootNamesString = StringMaker_toString(stringBuffer);
}


static void MultiSelectPaintable_clear(MultiSelectPaintable* this) {
        BasicArrayList_clear(this->rootNameList);
}


void MultiSelectPaintable_paint(MultiSelectPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->backgroundColor);
        Graphics_drawRect(graphics, MultiSelectPaintable_getX(this), this->y, MultiSelectPaintable_getWidth(this), MultiSelectPaintable_getHeight(this));
        Graphics_setColor(graphics, MultiSelectPaintable_getColor(this));
        Graphics_drawString(graphics, this->TOTAL, this->textX, this->y, 0);
        Graphics_drawChars(graphics, this->totalCharArray, 0, JAVA_CALL(MultiSelectPaintable_getPrimitiveLongUtil(this), getCurrentTotalDigits), this->textX + this->totalWidth, this->y, 0);
        Graphics_drawString(graphics, this->rootNamesString, this->textX, this->textLine2Y, 0);
}

