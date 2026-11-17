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
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"

typedef struct ColorFillPaintable ColorFillPaintable;
struct ColorFillPaintable {
    ColorFillBasePaintable base;
    DisplayInfoSingleton* displayInfoSingleton;
};


ColorFillPaintable* ColorFillPaintable_new(BasicColor* basicColor);

void ColorFillPaintable_init(ColorFillPaintable* this, BasicColor* basicColor);
void ColorFillPaintable_paint(ColorFillPaintable* this, Graphics* graphics);

static void ColorFillPaintable_initFields(ColorFillPaintable* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
}


void ColorFillPaintable_init(ColorFillPaintable* this, BasicColor* basicColor) {
        ColorFillBasePaintable_init(&this->base, basicColor);
        ColorFillPaintable_initFields(this);
}

ColorFillPaintable* ColorFillPaintable_new(BasicColor* basicColor) {
    ColorFillPaintable* this = calloc(1, sizeof(ColorFillPaintable));
    ColorFillPaintable_init(this, basicColor);
    return this;
}


void ColorFillPaintable_paint(ColorFillPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->colorP);
        Graphics_fillRect(graphics, 0, 0, DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton), DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton));
}

