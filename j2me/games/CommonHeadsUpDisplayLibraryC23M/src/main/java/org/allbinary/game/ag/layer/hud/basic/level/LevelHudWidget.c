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
// package org.allbinary.game.ag.layer.hud.basic.level

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
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"

typedef struct LevelHudWidget LevelHudWidget;
struct LevelHudWidget {
    BasicHud base;
    PaintableInterface PaintableInterface_interface;
    int32_t level;
    int32_t maxlevel;
    uint16_t* levelString;
    uint16_t* levelNumberCharArray;
    int32_t levelNumberTotalDigits;
    int32_t offset;
    PrimitiveLongUtil* primitiveLongUtil;
};


LevelHudWidget* LevelHudWidget_new(int32_t maxlevel, int32_t location, int32_t direction);
LevelHudWidget* LevelHudWidget_createHud(int32_t maxlevel, int32_t location, int32_t direction);

void LevelHudWidget_init(LevelHudWidget* this, int32_t maxlevel, int32_t location, int32_t direction);
void LevelHudWidget_updateMeasurement(LevelHudWidget* this, Graphics* graphics);
static void LevelHudWidget_update(LevelHudWidget* this);
void LevelHudWidget_setLevel(LevelHudWidget* this, int32_t level);
void LevelHudWidget_nextLevel(LevelHudWidget* this);
void LevelHudWidget_previousLevel(LevelHudWidget* this);
bool LevelHudWidget_isComplete(LevelHudWidget* this);
void LevelHudWidget_paint(LevelHudWidget* this, Graphics* graphics);
void LevelHudWidget_paintThreed(LevelHudWidget* this, Graphics* graphics);

static void LevelHudWidget_initFields(LevelHudWidget* this) {
    
    
    
    this->levelNumberCharArray = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->levelNumberTotalDigits = 0;
    this->offset = 0;
    
}


// throws Exception
LevelHudWidget* LevelHudWidget_createHud(int32_t maxlevel, int32_t location, int32_t direction) {
        return LevelHudWidget_new(maxlevel, location, direction);
}


void LevelHudWidget_init(LevelHudWidget* this, int32_t maxlevel, int32_t location, int32_t direction) {
        BasicHud_init(&this->base, location, direction, 2, BasicColorFactory_getInstance()->GREY);
        LevelHudWidget_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(1000);
        const char* LEVEL = "Lv ";
        this->levelString = java_string_toCharArray(LEVEL);
        this->maxlevel = maxlevel;
        this->level = maxlevel;
        LevelHudWidget_update(this);
        this->updateMaxHeight = 14;
}

LevelHudWidget* LevelHudWidget_new(int32_t maxlevel, int32_t location, int32_t direction) {
    LevelHudWidget* this = calloc(1, sizeof(LevelHudWidget));
    LevelHudWidget_init(this, maxlevel, location, direction);
    return this;
}


void LevelHudWidget_updateMeasurement(LevelHudWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->updateMaxWidth = Font_getSize(font) * 4;
        this->offset = Font_charsWidth(font, this->levelString, 0, java_array_length(this->levelString)) + Font_getSize(font);
        BasicHud_updateMeasurement((&this->base), graphics);
}


static void LevelHudWidget_update(LevelHudWidget* this) {
        this->levelNumberCharArray = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->level);
        this->levelNumberTotalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
}


void LevelHudWidget_setLevel(LevelHudWidget* this, int32_t level) {
        this->level = level;
        LevelHudWidget_update(this);
}


void LevelHudWidget_nextLevel(LevelHudWidget* this) {
        this->level++;
        LevelHudWidget_update(this);
}


void LevelHudWidget_previousLevel(LevelHudWidget* this) {
        this->level--;
        if (this->level < 0) {
            this->level = 0;
        }
        LevelHudWidget_update(this);
}


bool LevelHudWidget_isComplete(LevelHudWidget* this) {
        if (this->level <= this->maxlevel) {
            return false;
        } else {
            return true;
        }
}


void LevelHudWidget_paint(LevelHudWidget* this, Graphics* graphics) {
        BasicHud_paintDX((&this->base), graphics, this->levelString, 0, java_array_length(this->levelString), this->levelNumberCharArray, 0, this->levelNumberTotalDigits, this->offset);
}


void LevelHudWidget_paintThreed(LevelHudWidget* this, Graphics* graphics) {
}

