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

typedef struct EndGamePaintable EndGamePaintable;
struct EndGamePaintable {
    Paintable base;
    AllBinaryGameCanvas* gameCanvas;
};


EndGamePaintable* EndGamePaintable_new(AllBinaryGameCanvas* gameCanvas);

void EndGamePaintable_init(EndGamePaintable* this, AllBinaryGameCanvas* gameCanvas);
void EndGamePaintable_paint(EndGamePaintable* this, Graphics* graphics);

static void EndGamePaintable_initFields(EndGamePaintable* this) {
    
}


void EndGamePaintable_init(EndGamePaintable* this, AllBinaryGameCanvas* gameCanvas) {
    Paintable_init(&this->base);
    EndGamePaintable_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndGamePaintable* EndGamePaintable_new(AllBinaryGameCanvas* gameCanvas) {
    EndGamePaintable* this = calloc(1, sizeof(EndGamePaintable));
    EndGamePaintable_init(this, gameCanvas);
    return this;
}


void EndGamePaintable_paint(EndGamePaintable* this, Graphics* graphics) {
        AllBinaryGameCanvas_paintGameOver(this->gameCanvas, graphics);
}

