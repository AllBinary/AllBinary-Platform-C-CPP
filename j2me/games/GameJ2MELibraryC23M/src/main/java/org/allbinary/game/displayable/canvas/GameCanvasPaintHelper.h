#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAINTHELPER_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAINTHELPER_H
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
typedef struct ProcessPaintable ProcessPaintable;
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct GameCanvasPaintHelper GameCanvasPaintHelper;
struct GameCanvasPaintHelper {
    ProcessPaintable base;
    AllBinaryGameCanvas* gameCanvas;
};


GameCanvasPaintHelper* GameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas);

void GameCanvasPaintHelper_init(GameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas);

void GameCanvasPaintHelper_process(GameCanvasPaintHelper* this);

void GameCanvasPaintHelper_paint(GameCanvasPaintHelper* this, Graphics* graphics);
#define GameCanvasPaintHelper_new1 GameCanvasPaintHelper_new
#define GameCanvasPaintHelper_init1 GameCanvasPaintHelper_init
#ifndef GameCanvasPaintHelper_setBasicColorP
#define GameCanvasPaintHelper_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef GameCanvasPaintHelper_paintThreed
#define GameCanvasPaintHelper_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCanvasPaintHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCanvasPaintHelper_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAINTHELPER_H
