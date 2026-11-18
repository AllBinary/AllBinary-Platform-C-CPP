#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Graphics Graphics;
typedef struct Paintable Paintable;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct EndGamePaintable EndGamePaintable;
struct EndGamePaintable {
    Paintable base;
    AllBinaryGameCanvas* gameCanvas;
};


EndGamePaintable* EndGamePaintable_new(AllBinaryGameCanvas* gameCanvas);

void EndGamePaintable_init(EndGamePaintable* this, AllBinaryGameCanvas* gameCanvas);

void EndGamePaintable_paint(EndGamePaintable* this, Graphics* graphics);
#define EndGamePaintable_new1 EndGamePaintable_new
#define EndGamePaintable_init1 EndGamePaintable_init
#ifndef EndGamePaintable_setBasicColorP
#define EndGamePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef EndGamePaintable_paintThreed
#define EndGamePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EndGamePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EndGamePaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_H
