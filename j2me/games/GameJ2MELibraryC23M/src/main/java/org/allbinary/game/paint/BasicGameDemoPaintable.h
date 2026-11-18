#ifndef ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H
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
typedef struct NullPaintable NullPaintable;
typedef struct Paintable Paintable;
typedef struct StatePaintable StatePaintable;
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif
#include "org/allbinary/graphics/paint/StatePaintable.h"

typedef struct BasicGameDemoPaintable BasicGameDemoPaintable;
struct BasicGameDemoPaintable {
    StatePaintable base;
    Paintable* mainDemoStatePaintable;
    Paintable* ownershipPaintable;
    Paintable* helpPaintableInterface;
    Paintable* currentStatePaintable;
};


BasicGameDemoPaintable* BasicGameDemoPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface);

void BasicGameDemoPaintable_init(BasicGameDemoPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface);

void BasicGameDemoPaintable_setState(BasicGameDemoPaintable* this, int32_t state);

void BasicGameDemoPaintable_paint(BasicGameDemoPaintable* this, Graphics* graphics);

Paintable* BasicGameDemoPaintable_getHelpPaintableInterface(BasicGameDemoPaintable* this);

void BasicGameDemoPaintable_setCurrentStatePaintable(BasicGameDemoPaintable* this, Paintable* currentStatePaintable);

Paintable* BasicGameDemoPaintable_getCurrentStatePaintable(BasicGameDemoPaintable* this);

Paintable* BasicGameDemoPaintable_getMainDemoStatePaintable(BasicGameDemoPaintable* this);
#define BasicGameDemoPaintable_new3 BasicGameDemoPaintable_new
#define BasicGameDemoPaintable_init3 BasicGameDemoPaintable_init
#ifndef BasicGameDemoPaintable_setBasicColorP
#define BasicGameDemoPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef BasicGameDemoPaintable_paintThreed
#define BasicGameDemoPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGameDemoPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGameDemoPaintable_register(void);

#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

#endif // ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H
