#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASNONBOTPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASNONBOTPAINTABLE_H
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

typedef struct GameCanvasNonBotPaintable GameCanvasNonBotPaintable;
struct GameCanvasNonBotPaintable {
    Paintable base;
    AllBinaryGameCanvas* gameCanvas;
};


GameCanvasNonBotPaintable* GameCanvasNonBotPaintable_new(AllBinaryGameCanvas* gameCanvas);

void GameCanvasNonBotPaintable_init(GameCanvasNonBotPaintable* this, AllBinaryGameCanvas* gameCanvas);

void GameCanvasNonBotPaintable_paint(GameCanvasNonBotPaintable* this, Graphics* graphics);
#define GameCanvasNonBotPaintable_new1 GameCanvasNonBotPaintable_new
#define GameCanvasNonBotPaintable_init1 GameCanvasNonBotPaintable_init
#ifndef GameCanvasNonBotPaintable_setBasicColorP
#define GameCanvasNonBotPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef GameCanvasNonBotPaintable_paintThreed
#define GameCanvasNonBotPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCanvasNonBotPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCanvasNonBotPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASNONBOTPAINTABLE_H
