#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_STRINGLOCATIONPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_STRINGLOCATIONPAINTABLE_H
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
typedef struct LocationPaintable LocationPaintable;
typedef struct Graphics Graphics;
#include "org/allbinary/graphics/paint/LocationPaintable.h"

typedef struct StringLocationPaintable StringLocationPaintable;
struct StringLocationPaintable {
    LocationPaintable base;
    const char* value;
};


StringLocationPaintable* StringLocationPaintable_new(const char* value);

void StringLocationPaintable_init(StringLocationPaintable* this, const char* value);

void StringLocationPaintable_paintXY(StringLocationPaintable* this, Graphics* graphics, int32_t x, int32_t y);
#define StringLocationPaintable_new1 StringLocationPaintable_new
#define StringLocationPaintable_init1 StringLocationPaintable_init
#ifndef StringLocationPaintable_getInstance
#define StringLocationPaintable_getInstance LocationPaintable_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StringLocationPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StringLocationPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_STRINGLOCATIONPAINTABLE_H
