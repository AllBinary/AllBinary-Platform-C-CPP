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
#include "org/allbinary/graphics/paint/LocationPaintableInterface.h"

typedef struct LocationPaintable LocationPaintable;
struct LocationPaintable {
    LocationPaintableInterface LocationPaintableInterface_interface;
};

static LocationPaintable* LocationPaintable_instance;

LocationPaintable* LocationPaintable_new(void);
LocationPaintable* LocationPaintable_getInstance(void);
void LocationPaintable_paintXY(LocationPaintable* this, Graphics* graphics, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void LocationPaintable_staticInit(void) {
    LocationPaintable_instance = LocationPaintable_new();
}

void LocationPaintable_init(LocationPaintable* this) {
}

LocationPaintable* LocationPaintable_new(void) {
    LocationPaintable* this = calloc(1, sizeof(LocationPaintable));
    LocationPaintable_init(this);
    return this;
}


LocationPaintable* LocationPaintable_getInstance(void) {
        return LocationPaintable_instance;
}


void LocationPaintable_paintXY(LocationPaintable* this, Graphics* graphics, int32_t x, int32_t y) {
}

