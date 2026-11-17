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
// package org.allbinary.graphics.draw

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
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"

typedef struct CanvasDrawLineString CanvasDrawLineString;
struct CanvasDrawLineString {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DrawStringUtil* drawStringUtil;
    MyFontProcessor* myFontProcessor;
    int32_t x;
    int32_t y;
    int32_t fontHeight;
};

CanvasDrawLineString* CanvasDrawLineString_NULL_CANVAS_DRAW_LINE_STRING;

CanvasDrawLineString* CanvasDrawLineString_new(int32_t x, int32_t y);

void CanvasDrawLineString_init(CanvasDrawLineString* this, int32_t x, int32_t y);
void CanvasDrawLineString_updateMeasurement(CanvasDrawLineString* this, Graphics* graphics);
void CanvasDrawLineString_paint(CanvasDrawLineString* this, Graphics* graphics, const char* string, int32_t line);

// Static fields with runtime initializers: call this once at startup
void CanvasDrawLineString_staticInit(void) {
    CanvasDrawLineString_NULL_CANVAS_DRAW_LINE_STRING = CanvasDrawLineString_new(0, 0);
}

static void CanvasDrawLineString_initFields(CanvasDrawLineString* this) {
    this->drawStringUtil = DrawStringUtil_getInstance();
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    
    this->fontHeight = 0;
}


void CanvasDrawLineString_init(CanvasDrawLineString* this, int32_t x, int32_t y) {
    CanvasDrawLineString_initFields(this);
        this->x = x;
        this->y = y;
}

CanvasDrawLineString* CanvasDrawLineString_new(int32_t x, int32_t y) {
    CanvasDrawLineString* this = calloc(1, sizeof(CanvasDrawLineString));
    CanvasDrawLineString_init(this, x, y);
    return this;
}


void CanvasDrawLineString_updateMeasurement(CanvasDrawLineString* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void CanvasDrawLineString_paint(CanvasDrawLineString* this, Graphics* graphics, const char* string, int32_t line) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        DrawStringUtil_drawCenterString(this->drawStringUtil, graphics, string, 0, ((int32_t) strlen(string)), this->x, this->y + (line * this->fontHeight));
}

