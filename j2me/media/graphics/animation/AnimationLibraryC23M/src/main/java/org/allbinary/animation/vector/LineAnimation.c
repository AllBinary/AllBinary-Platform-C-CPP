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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/layer/PositionInterface.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct LineAnimation LineAnimation;
struct LineAnimation {
    Animation base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    PositionInterface PositionInterface_interface;
    int32_t** newLine;
    int32_t** tempLine;
    int32_t** line;
};


LineAnimation* LineAnimation_new(BasicColor* basicColor);

void LineAnimation_init(LineAnimation* this, BasicColor* basicColor);
void LineAnimation_init(LineAnimation* this, int32_t x, int32_t y);
void LineAnimation_setPosition(LineAnimation* this, int32_t x, int32_t y, int32_t z);
void LineAnimation_paintXY(LineAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void LineAnimation_nextFrame(LineAnimation* this);
BasicColor* LineAnimation_getBasicColorP(LineAnimation* this);
void LineAnimation_setBasicColorP(LineAnimation* this, BasicColor* basicColor);

static void LineAnimation_initFields(LineAnimation* this) {
    this->newLine = ((int32_t**) java_array_new2(sizeof(int32_t), 2, 2));
    this->tempLine = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->line = ((int32_t**) java_array_new2(sizeof(int32_t), 2, 2));
}


void LineAnimation_init(LineAnimation* this, BasicColor* basicColor) {
    Animation_init(&this->base);
    LineAnimation_initFields(this);
        LineAnimation_setBasicColorP(this, basicColor);
}

LineAnimation* LineAnimation_new(BasicColor* basicColor) {
    LineAnimation* this = calloc(1, sizeof(LineAnimation));
    LineAnimation_init(this, basicColor);
    return this;
}


void LineAnimation_init(LineAnimation* this, int32_t x, int32_t y) {
        this->newLine[0][0] = x;
        this->newLine[0][1] = y;
        this->newLine[1][0] = x;
        this->newLine[1][1] = y;
        this->tempLine = this->line;
        this->line = this->newLine;
        this->newLine = this->tempLine;
}


void LineAnimation_setPosition(LineAnimation* this, int32_t x, int32_t y, int32_t z) {
        this->newLine[0][0] = this->line[1][0];
        this->newLine[0][1] = this->line[1][1];
        this->newLine[1][0] = x;
        this->newLine[1][1] = y;
        this->tempLine = this->line;
        this->line = this->newLine;
        this->newLine = this->tempLine;
}


void LineAnimation_paintXY(LineAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t** currentLine = this->line;
        JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, LineAnimation_getBasicColorP(this), LineAnimation_getColor(this));
        Graphics_drawLine(graphics, currentLine[0][0], currentLine[0][1], currentLine[1][0], currentLine[1][1]);
}


void LineAnimation_nextFrame(LineAnimation* this) {
}


BasicColor* LineAnimation_getBasicColorP(LineAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void LineAnimation_setBasicColorP(LineAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

