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
// package org.allbinary.game.ag.layer.hud.basic.time

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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"

typedef struct TimeHudWidget TimeHudWidget;
struct TimeHudWidget {
    BasicHud base;
    const char* TIME_STRING;
    uint16_t* TIME_CHAR_ARRAY;
    int32_t offset;
    uint16_t* string;
    int32_t totalDigits;
    HudTimer* timer;
};


TimeHudWidget* TimeHudWidget_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer);
TimeHudWidget* TimeHudWidget_getInstance(int32_t location, int32_t direction, BasicColor* basicColor, HudTimer* timer);

void TimeHudWidget_init(TimeHudWidget* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer);
void TimeHudWidget_updateMeasurement(TimeHudWidget* this, Graphics* graphics);
void TimeHudWidget_update(TimeHudWidget* this);
static void TimeHudWidget_set(TimeHudWidget* this);
HudTimer* TimeHudWidget_getTimer(TimeHudWidget* this);
void TimeHudWidget_paint(TimeHudWidget* this, Graphics* graphics);

static void TimeHudWidget_initFields(TimeHudWidget* this) {
    this->TIME_STRING = "Time ";
    this->TIME_CHAR_ARRAY = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'T', u'i', u'm', u'e', u' ' }) / sizeof(uint16_t), (uint16_t[]){ u'T', u'i', u'm', u'e', u' ' }));
    this->offset = 0;
    this->string = PrimitiveLongSingleton_getInstance()->ZERO;
    this->totalDigits = 1;
    
}


// throws Exception
TimeHudWidget* TimeHudWidget_getInstance(int32_t location, int32_t direction, BasicColor* basicColor, HudTimer* timer) {
        return TimeHudWidget_new(location, direction, 2, basicColor, timer);
}


void TimeHudWidget_init(TimeHudWidget* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer) {
        BasicHud_init(&this->base, location, direction, bufferZone, basicColor);
        TimeHudWidget_initFields(this);
        this->timer = timer;
        TimeHudWidget_set(this);
        this->updateMaxHeight = 14;
}

TimeHudWidget* TimeHudWidget_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor, HudTimer* timer) {
    TimeHudWidget* this = calloc(1, sizeof(TimeHudWidget));
    TimeHudWidget_init(this, location, direction, bufferZone, basicColor, timer);
    return this;
}


void TimeHudWidget_updateMeasurement(TimeHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->updateMaxWidth = Font_getSize(font) * 5;
        this->offset = Font_stringWidth(font, this->TIME_STRING) + MyFontProcessor_defaultStringWidth(font, 3);
        BasicHud_updateMeasurement((&this->base), graphics);
}


void TimeHudWidget_update(TimeHudWidget* this) {
        HudTimer_update(this->timer);
        TimeHudWidget_set(this);
}


static void TimeHudWidget_set(TimeHudWidget* this) {
        this->string = HudTimer_getTimeChars(this->timer);
        this->totalDigits = HudTimer_getCurrentTotalDigits(this->timer);
}


HudTimer* TimeHudWidget_getTimer(TimeHudWidget* this) {
        return this->timer;
}


void TimeHudWidget_paint(TimeHudWidget* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->TIME_CHAR_ARRAY, 0, java_array_length(this->TIME_CHAR_ARRAY), this->string, 0, this->totalDigits, this->offset);
}

