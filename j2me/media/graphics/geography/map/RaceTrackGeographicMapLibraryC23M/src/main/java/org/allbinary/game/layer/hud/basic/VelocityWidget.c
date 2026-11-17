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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"

typedef struct VelocityWidget VelocityWidget;
struct VelocityWidget {
    BasicHud base;
    uint16_t* KILOMETERS_PER_HOUR_STR;
    int32_t totalChars;
    int32_t velocity;
    int32_t maxVelocity;
    uint16_t* string;
    int32_t totalDigits;
    int32_t powerOfTenVelocity;
    PrimitiveLongUtil* primitiveLongUtil;
    int32_t offset;
    int32_t offset2;
};


VelocityWidget* VelocityWidget_new(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor);

void VelocityWidget_init(VelocityWidget* this, int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor);
void VelocityWidget_updateMeasurement(VelocityWidget* this, Graphics* graphics);
int32_t VelocityWidget_get(VelocityWidget* this);
void VelocityWidget_add(VelocityWidget* this, int32_t value);
void VelocityWidget_set(VelocityWidget* this, int32_t value);
void VelocityWidget_reduce(VelocityWidget* this, int32_t value);
void VelocityWidget_paint(VelocityWidget* this, Graphics* graphics);

static void VelocityWidget_initFields(VelocityWidget* this) {
    this->KILOMETERS_PER_HOUR_STR = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u' ', u'k', u'm', u'/', u'h' }) / sizeof(uint16_t), (uint16_t[]){ u' ', u'k', u'm', u'/', u'h' }));
    this->totalChars = java_array_length(this->KILOMETERS_PER_HOUR_STR);
    
    
    this->string = PrimitiveLongSingleton_getInstance()->ZERO;
    this->totalDigits = 1;
    
    
    this->offset = 0;
    this->offset2 = 0;
}


void VelocityWidget_init(VelocityWidget* this, int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor) {
        BasicHud_init(&this->base, location, direction, 2, basicColor);
        VelocityWidget_initFields(this);
        this->powerOfTenVelocity = powerOfTenVelocity;
        this->maxVelocity = powerOfTenVelocity;
        this->velocity = 0;
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(powerOfTenVelocity);
        this->updateMaxHeight = 14;
}

VelocityWidget* VelocityWidget_new(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor) {
    VelocityWidget* this = calloc(1, sizeof(VelocityWidget));
    VelocityWidget_init(this, powerOfTenVelocity, location, direction, basicColor);
    return this;
}


void VelocityWidget_updateMeasurement(VelocityWidget* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->updateMaxWidth = Font_getSize(font) * (5 + MathUtil_getTotalDigits(MathUtil_getInstance(), this->powerOfTenVelocity) + 1);
        BasicHud_updateMeasurement((&this->base), graphics);
        this->offset = MyFontProcessor_defaultStringWidth(font, PrimitiveLongUtil_getMaxDigits(this->primitiveLongUtil)) + MyFontProcessor_defaultStringWidth(font, 2);
        this->offset2 = this->offset - MyFontProcessor_defaultStringWidth(font, this->totalDigits) - MyFontProcessor_defaultStringWidth(font, 2);
}


int32_t VelocityWidget_get(VelocityWidget* this) {
        return this->velocity;
}


void VelocityWidget_add(VelocityWidget* this, int32_t value) {
        VelocityWidget_set(this, this->velocity + value);
}


void VelocityWidget_set(VelocityWidget* this, int32_t value) {
        int32_t lastVelocity = this->velocity;
        this->velocity = value;
        if (this->velocity > this->maxVelocity) {
            this->velocity = 0;
        }
        if (lastVelocity != this->velocity) {
            this->string = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->velocity * 18);
            if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
                this->totalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil) + 1;
            } else {
                this->totalDigits = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
            }
            this->myFontProcessor = this->updateMyFontProcessor;
        }
}


void VelocityWidget_reduce(VelocityWidget* this, int32_t value) {
        VelocityWidget_set(this, this->velocity - value);
}


void VelocityWidget_paint(VelocityWidget* this, Graphics* graphics) {
        BasicHud_paintDXY((&this->base), graphics, this->string, 0, this->totalDigits, this->KILOMETERS_PER_HOUR_STR, 0, this->totalChars, this->offset2, this->offset);
}

