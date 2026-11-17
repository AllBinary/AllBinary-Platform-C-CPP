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
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct GameCanvasNonBotPaintable GameCanvasNonBotPaintable;
struct GameCanvasNonBotPaintable {
    Paintable base;
    AllBinaryGameCanvas* gameCanvas;
};


GameCanvasNonBotPaintable* GameCanvasNonBotPaintable_new(AllBinaryGameCanvas* gameCanvas);

void GameCanvasNonBotPaintable_init(GameCanvasNonBotPaintable* this, AllBinaryGameCanvas* gameCanvas);
void GameCanvasNonBotPaintable_paint(GameCanvasNonBotPaintable* this, Graphics* graphics);

static void GameCanvasNonBotPaintable_initFields(GameCanvasNonBotPaintable* this) {
    
}


void GameCanvasNonBotPaintable_init(GameCanvasNonBotPaintable* this, AllBinaryGameCanvas* gameCanvas) {
    Paintable_init(&this->base);
    GameCanvasNonBotPaintable_initFields(this);
        this->gameCanvas = gameCanvas;
}

GameCanvasNonBotPaintable* GameCanvasNonBotPaintable_new(AllBinaryGameCanvas* gameCanvas) {
    GameCanvasNonBotPaintable* this = calloc(1, sizeof(GameCanvasNonBotPaintable));
    GameCanvasNonBotPaintable_init(this, gameCanvas);
    return this;
}


void GameCanvasNonBotPaintable_paint(GameCanvasNonBotPaintable* this, Graphics* graphics) {
        AllBinaryGameCanvas_nonBotPaint(this->gameCanvas, graphics);
}

