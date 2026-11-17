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
// package org.allbinary.game.ag.layer.hud.basic

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
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"

typedef struct NumberStringHud NumberStringHud;
struct NumberStringHud {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    PrimitiveLongUtil* primitiveLongUtil;
    const char* prependString;
    uint16_t* PREPEND_STRING;
    int32_t value;
    int32_t max;
    int32_t offset;
    uint16_t* valueString;
    int32_t valueTotalDigits;
};


NumberStringHud* NumberStringHud_new(const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void NumberStringHud_init(NumberStringHud* this, const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void NumberStringHud_updateMeasurement(NumberStringHud* this, Graphics* graphics);
int32_t NumberStringHud_get(NumberStringHud* this);
void NumberStringHud_add(NumberStringHud* this, int32_t value);
void NumberStringHud_set(NumberStringHud* this, int32_t value);
void NumberStringHud_reduce(NumberStringHud* this, int32_t value);
void NumberStringHud_paint(NumberStringHud* this, Graphics* graphics);
void NumberStringHud_paintXY(NumberStringHud* this, Graphics* graphics, int32_t x, int32_t y);
void NumberStringHud_paintThreed(NumberStringHud* this, Graphics* graphics);

static void NumberStringHud_initFields(NumberStringHud* this) {
    
    
    
    
    
    this->offset = 0;
    
    this->valueTotalDigits = 0;
}


void NumberStringHud_init(NumberStringHud* this, const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        NumberStringHud_initFields(this);
        this->prependString = prependString;
        this->PREPEND_STRING = java_string_toCharArray(prependString);
        this->valueString = PrimitiveLongSingleton_getInstance()->NUMBER_CHAR_ARRAYS[0];
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(max + 1);
        this->max = max;
        this->value = 0;
        if (direction == 0) {
            java_throw(java_exception_new("RuntimeException", BasicHudFactory_getInstance()->DIRECTION_EXCEPTION));
        }
}

NumberStringHud* NumberStringHud_new(const char* prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    NumberStringHud* this = calloc(1, sizeof(NumberStringHud));
    NumberStringHud_init(this, prependString, max, location, direction, bufferZone, basicColor);
    return this;
}


void NumberStringHud_updateMeasurement(NumberStringHud* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->offset = Font_stringWidth(font, this->prependString) + MyFontProcessor_defaultCharWidth(font);
        BasicHud_updateMeasurement((&this->base), graphics);
}


int32_t NumberStringHud_get(NumberStringHud* this) {
        return this->value;
}


void NumberStringHud_add(NumberStringHud* this, int32_t value) {
        NumberStringHud_set(this, this->value + value);
}


void NumberStringHud_set(NumberStringHud* this, int32_t value) {
        this->value = value;
        if (this->value > this->max) {
            this->value = 0;
        }
        this->valueString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->value);
        this->valueTotalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
}


void NumberStringHud_reduce(NumberStringHud* this, int32_t value) {
        NumberStringHud_set(this, this->value - value);
}


void NumberStringHud_paint(NumberStringHud* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->PREPEND_STRING, 0, java_array_length(this->PREPEND_STRING), this->valueString, 0, this->valueTotalDigits, this->offset);
}


void NumberStringHud_paintXY(NumberStringHud* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        uint16_t* charArray = this->PREPEND_STRING;
        int32_t len = java_array_length(this->PREPEND_STRING);
        uint16_t* charArray2 = this->valueString;
        int32_t len2 = this->valueTotalDigits;
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP, graphics, NumberStringHud_getBasicColorP(this));
        Graphics_drawChars(graphics, charArray, 0, len, x, y, 0);
        Graphics_drawChars(graphics, charArray2, 0, len2, x - this->offset, y, 0);
}


void NumberStringHud_paintThreed(NumberStringHud* this, Graphics* graphics) {
}

