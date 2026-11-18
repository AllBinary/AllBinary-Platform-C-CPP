#ifndef ORG_ALLBINARY_GAME_LAYER_SWTBLACKPAINTABLE_H
#define ORG_ALLBINARY_GAME_LAYER_SWTBLACKPAINTABLE_H
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
// package org.allbinary.game.layer

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
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct Paintable Paintable;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct SWTBlackPaintable SWTBlackPaintable;
struct SWTBlackPaintable {
    Paintable base;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* BLACK;
};


SWTBlackPaintable* SWTBlackPaintable_new(void);
void SWTBlackPaintable_init(SWTBlackPaintable* this);

void SWTBlackPaintable_paint(SWTBlackPaintable* this, Graphics* graphics);
#ifndef SWTBlackPaintable_setBasicColorP
#define SWTBlackPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef SWTBlackPaintable_paintThreed
#define SWTBlackPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTBlackPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTBlackPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_SWTBLACKPAINTABLE_H
