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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/LocationPaintable.h"

typedef struct StringLocationPaintable StringLocationPaintable;
struct StringLocationPaintable {
    LocationPaintable base;
    const char* value;
};


StringLocationPaintable* StringLocationPaintable_new(const char* value);

void StringLocationPaintable_init(StringLocationPaintable* this, const char* value);
void StringLocationPaintable_paintXY(StringLocationPaintable* this, Graphics* graphics, int32_t x, int32_t y);

static void StringLocationPaintable_initFields(StringLocationPaintable* this) {
    
}


void StringLocationPaintable_init(StringLocationPaintable* this, const char* value) {
    LocationPaintable_init(&this->base);
    StringLocationPaintable_initFields(this);
        this->value = value;
}

StringLocationPaintable* StringLocationPaintable_new(const char* value) {
    StringLocationPaintable* this = calloc(1, sizeof(StringLocationPaintable));
    StringLocationPaintable_init(this, value);
    return this;
}


void StringLocationPaintable_paintXY(StringLocationPaintable* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawString(graphics, this->value, x, y, 0);
}

