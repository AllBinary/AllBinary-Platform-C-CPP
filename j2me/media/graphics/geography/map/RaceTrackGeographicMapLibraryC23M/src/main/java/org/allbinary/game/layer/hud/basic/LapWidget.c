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
// package org.allbinary.game.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/game/layer/hud/LapInfo.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct LapWidget LapWidget;
struct LapWidget {
    BasicHud base;
    const char* LAP_STR;
    const char* OF_STR;
    const char* string;
};


LapWidget* LapWidget_new(int32_t location, int32_t direction, BasicColor* basicColor);

void LapWidget_init(LapWidget* this, int32_t location, int32_t direction, BasicColor* basicColor);
void LapWidget_update(LapWidget* this, LapInfo* lapInfo);
void LapWidget_paint(LapWidget* this, Graphics* graphics);

static void LapWidget_initFields(LapWidget* this) {
    this->LAP_STR = "Lap ";
    this->OF_STR = " of ";
    this->string = StringUtil_getInstance()->EMPTY_STRING;
}


void LapWidget_init(LapWidget* this, int32_t location, int32_t direction, BasicColor* basicColor) {
        BasicHud_init(&this->base, location, direction, 2, basicColor);
        LapWidget_initFields(this);
        this->updateMaxHeight = 15;
        this->updateMaxWidth = 40;
}

LapWidget* LapWidget_new(int32_t location, int32_t direction, BasicColor* basicColor) {
    LapWidget* this = calloc(1, sizeof(LapWidget));
    LapWidget_init(this, location, direction, basicColor);
    return this;
}


void LapWidget_update(LapWidget* this, LapInfo* lapInfo) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->LAP_STR);
        StringMaker_appendint(stringBuffer, ((int32_t) LapInfo_getCurrentLap(lapInfo)));
        StringMaker_append(stringBuffer, this->OF_STR);
        StringMaker_appendint(stringBuffer, ((int32_t) LapInfo_getTotalLaps(lapInfo)));
        this->string = StringMaker_toString(stringBuffer);
}


void LapWidget_paint(LapWidget* this, Graphics* graphics) {
        BasicHud_paintString((&this->base), graphics, this->string);
}

