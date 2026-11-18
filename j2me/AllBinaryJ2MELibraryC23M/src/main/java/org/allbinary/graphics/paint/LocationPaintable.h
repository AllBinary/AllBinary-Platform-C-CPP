#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_H
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
typedef struct LocationPaintableInterface LocationPaintableInterface;
typedef struct Graphics Graphics;
#include "org/allbinary/graphics/paint/LocationPaintableInterface.h"

typedef struct LocationPaintable LocationPaintable;
struct LocationPaintable {
    LocationPaintableInterface LocationPaintableInterface_interface;
};


LocationPaintable* LocationPaintable_new(void);
void LocationPaintable_init(LocationPaintable* this);

LocationPaintable* LocationPaintable_getInstance(void);

void LocationPaintable_paintXY(LocationPaintable* this, Graphics* graphics, int32_t x, int32_t y);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LocationPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LocationPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_LOCATIONPAINTABLE_H
