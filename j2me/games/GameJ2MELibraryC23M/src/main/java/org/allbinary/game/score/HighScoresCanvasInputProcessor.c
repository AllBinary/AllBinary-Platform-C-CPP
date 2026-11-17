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
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct HighScoresCanvasInputProcessor HighScoresCanvasInputProcessor;
struct HighScoresCanvasInputProcessor {
    PlayerGameInput base;
    HighScoresCanvas* highScoresCanvas;
};


HighScoresCanvasInputProcessor* HighScoresCanvasInputProcessor_new(HighScoresCanvas* highScoresCanvas);

void HighScoresCanvasInputProcessor_init(HighScoresCanvasInputProcessor* this, HighScoresCanvas* highScoresCanvas);
void HighScoresCanvasInputProcessor_open(HighScoresCanvasInputProcessor* this);
void HighScoresCanvasInputProcessor_close(HighScoresCanvasInputProcessor* this);
void HighScoresCanvasInputProcessor_onPressGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent);
void HighScoresCanvasInputProcessor_onDownGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent);
void HighScoresCanvasInputProcessor_onUpGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent);
void HighScoresCanvasInputProcessor_paint(HighScoresCanvasInputProcessor* this, Graphics* graphics);
HighScoresCanvas* HighScoresCanvasInputProcessor_getHighScoresCanvas(HighScoresCanvasInputProcessor* this);

static void HighScoresCanvasInputProcessor_initFields(HighScoresCanvasInputProcessor* this) {
    
}


void HighScoresCanvasInputProcessor_init(HighScoresCanvasInputProcessor* this, HighScoresCanvas* highScoresCanvas) {
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        HighScoresCanvasInputProcessor_initFields(this);
        this->highScoresCanvas = highScoresCanvas;
}

HighScoresCanvasInputProcessor* HighScoresCanvasInputProcessor_new(HighScoresCanvas* highScoresCanvas) {
    HighScoresCanvasInputProcessor* this = calloc(1, sizeof(HighScoresCanvasInputProcessor));
    HighScoresCanvasInputProcessor_init(this, highScoresCanvas);
    return this;
}


void HighScoresCanvasInputProcessor_open(HighScoresCanvasInputProcessor* this) {
}


void HighScoresCanvasInputProcessor_close(HighScoresCanvasInputProcessor* this) {
}


// synchronized
void HighScoresCanvasInputProcessor_onPressGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onPressGameKeyEvent((&this->base), gameKeyEvent);
        HighScoresCanvasInputProcessor_update(this);
}


// synchronized
void HighScoresCanvasInputProcessor_onDownGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onDownGameKeyEvent((&this->base), gameKeyEvent);
        HighScoresCanvasInputProcessor_update(this);
}


// synchronized
void HighScoresCanvasInputProcessor_onUpGameKeyEvent(HighScoresCanvasInputProcessor* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_onUpGameKeyEvent((&this->base), gameKeyEvent);
        HighScoresCanvasInputProcessor_update(this);
}


void HighScoresCanvasInputProcessor_paint(HighScoresCanvasInputProcessor* this, Graphics* graphics) {
}


HighScoresCanvas* HighScoresCanvasInputProcessor_getHighScoresCanvas(HighScoresCanvasInputProcessor* this) {
        return this->highScoresCanvas;
}

