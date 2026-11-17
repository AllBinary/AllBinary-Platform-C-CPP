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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"

typedef struct GameCanvasPaintHelper GameCanvasPaintHelper;
struct GameCanvasPaintHelper {
    ProcessPaintable base;
    AllBinaryGameCanvas* gameCanvas;
};


GameCanvasPaintHelper* GameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas);

void GameCanvasPaintHelper_init(GameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas);
void GameCanvasPaintHelper_process(GameCanvasPaintHelper* this);
void GameCanvasPaintHelper_paint(GameCanvasPaintHelper* this, Graphics* graphics);

static void GameCanvasPaintHelper_initFields(GameCanvasPaintHelper* this) {
    
}


void GameCanvasPaintHelper_init(GameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas) {
    ProcessPaintable_init(&this->base);
    GameCanvasPaintHelper_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameCanvasPaintHelper* GameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas) {
    GameCanvasPaintHelper* this = calloc(1, sizeof(GameCanvasPaintHelper));
    GameCanvasPaintHelper_init(this, gameCanvas);
    return this;
}


void GameCanvasPaintHelper_process(GameCanvasPaintHelper* this) {
}


void GameCanvasPaintHelper_paint(GameCanvasPaintHelper* this, Graphics* graphics) {
        AllBinaryGameCanvas_draw(this->gameCanvas, graphics);
}

