#ifndef ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_H
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
typedef struct ColorFillBasePaintable ColorFillBasePaintable;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"

typedef struct ColorFillPaintable ColorFillPaintable;
struct ColorFillPaintable {
    ColorFillBasePaintable base;
    DisplayInfoSingleton* displayInfoSingleton;
};


ColorFillPaintable* ColorFillPaintable_new(BasicColor* basicColor);

void ColorFillPaintable_init(ColorFillPaintable* this, BasicColor* basicColor);

void ColorFillPaintable_paint(ColorFillPaintable* this, Graphics* graphics);
#define ColorFillPaintable_new1 ColorFillPaintable_new
#define ColorFillPaintable_init1 ColorFillPaintable_init
#ifndef ColorFillPaintable_setBasicColorP
#define ColorFillPaintable_setBasicColorP ColorFillBasePaintable_setBasicColorP
#endif
#ifndef ColorFillPaintable_getBasicColorP
#define ColorFillPaintable_getBasicColorP ColorFillBasePaintable_getBasicColorP
#endif
#ifndef ColorFillPaintable_getColor
#define ColorFillPaintable_getColor ColorFillBasePaintable_getColor
#endif
#ifndef ColorFillPaintable_setColor
#define ColorFillPaintable_setColor ColorFillBasePaintable_setColor
#endif
#ifndef ColorFillPaintable_setBasicColorP
#define ColorFillPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef ColorFillPaintable_paintThreed
#define ColorFillPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorFillPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorFillPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_COLORFILLPAINTABLE_H
