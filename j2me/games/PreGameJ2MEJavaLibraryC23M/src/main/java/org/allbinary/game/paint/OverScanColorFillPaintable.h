#ifndef ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H
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
typedef struct ColorFillPaintable ColorFillPaintable;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
#include "org/allbinary/game/paint/ColorFillPaintable.h"

typedef struct OverScanColorFillPaintable OverScanColorFillPaintable;
struct OverScanColorFillPaintable {
    ColorFillPaintable base;
};


OverScanColorFillPaintable* OverScanColorFillPaintable_new(BasicColor* basicColor);

void OverScanColorFillPaintable_init(OverScanColorFillPaintable* this, BasicColor* basicColor);

void OverScanColorFillPaintable_paint(OverScanColorFillPaintable* this, Graphics* graphics);
#define OverScanColorFillPaintable_new1 OverScanColorFillPaintable_new
#define OverScanColorFillPaintable_init1 OverScanColorFillPaintable_init
#ifndef OverScanColorFillPaintable_setBasicColorP
#define OverScanColorFillPaintable_setBasicColorP ColorFillBasePaintable_setBasicColorP
#endif
#ifndef OverScanColorFillPaintable_getBasicColorP
#define OverScanColorFillPaintable_getBasicColorP ColorFillBasePaintable_getBasicColorP
#endif
#ifndef OverScanColorFillPaintable_getColor
#define OverScanColorFillPaintable_getColor ColorFillBasePaintable_getColor
#endif
#ifndef OverScanColorFillPaintable_setColor
#define OverScanColorFillPaintable_setColor ColorFillBasePaintable_setColor
#endif
#ifndef OverScanColorFillPaintable_setBasicColorP
#define OverScanColorFillPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef OverScanColorFillPaintable_paintThreed
#define OverScanColorFillPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OverScanColorFillPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OverScanColorFillPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_OVERSCANCOLORFILLPAINTABLE_H
