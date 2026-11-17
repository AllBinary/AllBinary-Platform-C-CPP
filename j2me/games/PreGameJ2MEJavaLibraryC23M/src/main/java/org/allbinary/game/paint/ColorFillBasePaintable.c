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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct ColorFillBasePaintable ColorFillBasePaintable;
struct ColorFillBasePaintable {
    Paintable base;
    ColorCompositeInterface ColorCompositeInterface_interface;
    BasicColor* basicColor;
    int32_t colorP;
};


ColorFillBasePaintable* ColorFillBasePaintable_new(BasicColor* basicColor);

void ColorFillBasePaintable_init(ColorFillBasePaintable* this, BasicColor* basicColor);
void ColorFillBasePaintable_setBasicColorP(ColorFillBasePaintable* this, BasicColor* basicColor);
BasicColor* ColorFillBasePaintable_getBasicColorP(ColorFillBasePaintable* this);
int32_t ColorFillBasePaintable_getColor(ColorFillBasePaintable* this);
void ColorFillBasePaintable_setColor(ColorFillBasePaintable* this, int32_t color);
void ColorFillBasePaintable_paint(ColorFillBasePaintable* this, Graphics* graphics);

static void ColorFillBasePaintable_initFields(ColorFillBasePaintable* this) {
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->colorP = 0;
}


void ColorFillBasePaintable_init(ColorFillBasePaintable* this, BasicColor* basicColor) {
    Paintable_init(&this->base);
    ColorFillBasePaintable_initFields(this);
        ColorFillBasePaintable_setBasicColorP(this, basicColor);
}

ColorFillBasePaintable* ColorFillBasePaintable_new(BasicColor* basicColor) {
    ColorFillBasePaintable* this = calloc(1, sizeof(ColorFillBasePaintable));
    ColorFillBasePaintable_init(this, basicColor);
    return this;
}


void ColorFillBasePaintable_setBasicColorP(ColorFillBasePaintable* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        ColorFillBasePaintable_setColor(this, JAVA_CALL(ColorFillBasePaintable_getBasicColorP(this), intValue));
}


BasicColor* ColorFillBasePaintable_getBasicColorP(ColorFillBasePaintable* this) {
        return this->basicColor;
}


int32_t ColorFillBasePaintable_getColor(ColorFillBasePaintable* this) {
        return this->colorP;
}


void ColorFillBasePaintable_setColor(ColorFillBasePaintable* this, int32_t color) {
        this->colorP = color;
}


void ColorFillBasePaintable_paint(ColorFillBasePaintable* this, Graphics* graphics) {
}

