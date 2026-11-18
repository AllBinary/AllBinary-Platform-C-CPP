#ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
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
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ColorCompositeInterface ColorCompositeInterface;
typedef struct Paintable Paintable;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
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
#define ColorFillBasePaintable_new1 ColorFillBasePaintable_new
#define ColorFillBasePaintable_init1 ColorFillBasePaintable_init
#ifndef ColorFillBasePaintable_paintThreed
#define ColorFillBasePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorFillBasePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorFillBasePaintable_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_PAINT_COLORFILLBASEPAINTABLE_H
