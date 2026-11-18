#ifndef ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H
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
typedef struct Paintable Paintable;
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct MainGameDemoStatePaintable MainGameDemoStatePaintable;
struct MainGameDemoStatePaintable {
    Paintable base;
    Paintable* ownershipPaintableInterface;
    Paintable* menuPaintableInterface;
};


MainGameDemoStatePaintable* MainGameDemoStatePaintable_new(Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface);

void MainGameDemoStatePaintable_init(MainGameDemoStatePaintable* this, Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface);

void MainGameDemoStatePaintable_paint(MainGameDemoStatePaintable* this, Graphics* graphics);

Paintable* MainGameDemoStatePaintable_getOwnershipPaintableInterface(MainGameDemoStatePaintable* this);

Paintable* MainGameDemoStatePaintable_getMenuPaintableInterface(MainGameDemoStatePaintable* this);
#define MainGameDemoStatePaintable_new2 MainGameDemoStatePaintable_new
#define MainGameDemoStatePaintable_init2 MainGameDemoStatePaintable_init
#ifndef MainGameDemoStatePaintable_setBasicColorP
#define MainGameDemoStatePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef MainGameDemoStatePaintable_paintThreed
#define MainGameDemoStatePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MainGameDemoStatePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MainGameDemoStatePaintable_register(void);

#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

#endif // ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_H
