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
// package org.allbinary.graphics.paint

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

typedef struct SimpleTextPaintable SimpleTextPaintable;
struct SimpleTextPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    const char* text;
    BasicColor* basicColor;
    int32_t topScoresWidth;
    int32_t fontHeight;
    int32_t anchor;
};


SimpleTextPaintable* SimpleTextPaintable_new(const char* text, BasicColor* basicColor);

void SimpleTextPaintable_init(SimpleTextPaintable* this, const char* text, BasicColor* basicColor);
void SimpleTextPaintable_updateMeasurement(SimpleTextPaintable* this, Graphics* graphics);
void SimpleTextPaintable_paint(SimpleTextPaintable* this, Graphics* graphics);
void SimpleTextPaintable_setBasicColorP(SimpleTextPaintable* this, BasicColor* basicColor);
static BasicColor* SimpleTextPaintable_getBasicColorP(SimpleTextPaintable* this);
void SimpleTextPaintable_setText(SimpleTextPaintable* this, const char* text);
const char* SimpleTextPaintable_getText(SimpleTextPaintable* this);

static void SimpleTextPaintable_initFields(SimpleTextPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    
    
    this->topScoresWidth = 0;
    this->fontHeight = 0;
    this->anchor = Anchor_TOP_LEFT;
}


void SimpleTextPaintable_init(SimpleTextPaintable* this, const char* text, BasicColor* basicColor) {
    Paintable_init(&this->base);
    SimpleTextPaintable_initFields(this);
        this->text = text;
        this->basicColor = basicColor;
}

SimpleTextPaintable* SimpleTextPaintable_new(const char* text, BasicColor* basicColor) {
    SimpleTextPaintable* this = calloc(1, sizeof(SimpleTextPaintable));
    SimpleTextPaintable_init(this, text, basicColor);
    return this;
}


void SimpleTextPaintable_updateMeasurement(SimpleTextPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->topScoresWidth = (Font_stringWidth(font, this->text) >> 1);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void SimpleTextPaintable_paint(SimpleTextPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        int32_t width = DisplayInfoSingleton_getLast(this->displayInfoSingleton)[this->displayInfoSingleton->WIDTH];
        Graphics_setColor(graphics, JAVA_CALL(SimpleTextPaintable_getBasicColorP(this), intValue));
        Graphics_drawString(graphics, this->text, (width >> 1) - this->topScoresWidth, this->fontHeight, this->anchor);
}


void SimpleTextPaintable_setBasicColorP(SimpleTextPaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


static BasicColor* SimpleTextPaintable_getBasicColorP(SimpleTextPaintable* this) {
        return this->basicColor;
}


void SimpleTextPaintable_setText(SimpleTextPaintable* this, const char* text) {
        this->text = text;
        this->myFontProcessor = this->updateMyFontProcessor;
}


const char* SimpleTextPaintable_getText(SimpleTextPaintable* this) {
        return this->text;
}

