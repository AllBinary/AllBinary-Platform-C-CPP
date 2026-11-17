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
#include "org/allbinary/game/paint/ColorFillPaintable.h"

typedef struct OverScanColorFillPaintable OverScanColorFillPaintable;
struct OverScanColorFillPaintable {
    ColorFillPaintable base;
};


OverScanColorFillPaintable* OverScanColorFillPaintable_new(BasicColor* basicColor);

void OverScanColorFillPaintable_init(OverScanColorFillPaintable* this, BasicColor* basicColor);
void OverScanColorFillPaintable_paint(OverScanColorFillPaintable* this, Graphics* graphics);


void OverScanColorFillPaintable_init(OverScanColorFillPaintable* this, BasicColor* basicColor) {
        ColorFillPaintable_init(&this->base, basicColor);
}

OverScanColorFillPaintable* OverScanColorFillPaintable_new(BasicColor* basicColor) {
    OverScanColorFillPaintable* this = calloc(1, sizeof(OverScanColorFillPaintable));
    OverScanColorFillPaintable_init(this, basicColor);
    return this;
}


void OverScanColorFillPaintable_paint(OverScanColorFillPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->colorP);
        Graphics_fillRect(graphics, -Graphics_getClipX(graphics), -Graphics_getClipY(graphics), JAVA_CALL(this->displayInfoSingleton, getLastWidth) + (Graphics_getClipX(graphics) * 2), JAVA_CALL(this->displayInfoSingleton, getLastHeight) + (Graphics_getClipY(graphics) * 2));
}

