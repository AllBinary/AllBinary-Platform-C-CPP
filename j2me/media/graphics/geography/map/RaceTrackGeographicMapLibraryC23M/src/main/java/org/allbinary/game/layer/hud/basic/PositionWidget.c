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
#include "org/allbinary/graphics/color/BasicColor.h"

//super.paint(graphics, positionString, currentPostString, offset2, offset);
typedef struct PositionWidget PositionWidget;
struct PositionWidget {
    BasicHud base;
    int32_t position;
    const char* positionString;
};


PositionWidget* PositionWidget_new(int32_t position, int32_t location, int32_t direction, BasicColor* basicColor);

void PositionWidget_init(PositionWidget* this, int32_t position, int32_t location, int32_t direction, BasicColor* basicColor);
int32_t PositionWidget_get(PositionWidget* this);
void PositionWidget_set(PositionWidget* this, int32_t position);
void PositionWidget_paint(PositionWidget* this, Graphics* graphics);
const char* PositionWidget_toString(int32_t position);

static void PositionWidget_initFields(PositionWidget* this) {
    this->position = 0;
    this->positionString = StringUtil_getInstance()->EMPTY_STRING;
}


void PositionWidget_init(PositionWidget* this, int32_t position, int32_t location, int32_t direction, BasicColor* basicColor) {
        BasicHud_init(&this->base, location, direction, 2, basicColor);
        PositionWidget_initFields(this);
        this->updateMaxHeight = 10;
        this->updateMaxWidth = 40;
}

PositionWidget* PositionWidget_new(int32_t position, int32_t location, int32_t direction, BasicColor* basicColor) {
    PositionWidget* this = calloc(1, sizeof(PositionWidget));
    PositionWidget_init(this, position, location, direction, basicColor);
    return this;
}


int32_t PositionWidget_get(PositionWidget* this) {
        return this->position;
}


void PositionWidget_set(PositionWidget* this, int32_t position) {
        this->position = position;
        this->positionString = PositionWidget_toString(PositionWidget_get(this));
}


void PositionWidget_paint(PositionWidget* this, Graphics* graphics) {
        BasicHud_paintString((&this->base), graphics, this->positionString);
}


const char* PositionWidget_toString(int32_t position) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_string_of(position));
        if (position == 1) {
            StringMaker_append(stringBuffer, "st");
        } else if (position == 2) {
            StringMaker_append(stringBuffer, "nd");
        } else if (position == 3) {
            StringMaker_append(stringBuffer, "rd");
        } else {
            StringMaker_append(stringBuffer, "th");
        }
        return StringMaker_toString(stringBuffer);
}

