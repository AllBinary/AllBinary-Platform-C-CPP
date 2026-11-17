/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"

typedef struct NullGameCanvasRunnable NullGameCanvasRunnable;
struct NullGameCanvasRunnable {
    GameCanvasRunnableInterface GameCanvasRunnableInterface_interface;
    GameStateFactory* gameStateFactory;
};

NullGameCanvasRunnable* NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE;

NullGameCanvasRunnable* NullGameCanvasRunnable_new(void);
const char* NullGameCanvasRunnable_getTitle(NullGameCanvasRunnable* this);
bool NullGameCanvasRunnable_isInitialized(NullGameCanvasRunnable* this);
bool NullGameCanvasRunnable_isPaused(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_unPause(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_pause(NullGameCanvasRunnable* this);
bool NullGameCanvasRunnable_isHighScoreSubmitted(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_setHighScoreSubmitted(NullGameCanvasRunnable* this, bool highScoreSubmitted);
void NullGameCanvasRunnable_processGameOver(NullGameCanvasRunnable* this);
bool NullGameCanvasRunnable_isGameOver(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_initCommands(NullGameCanvasRunnable* this, CommandListener* cmdListener);
ABHashtable* NullGameCanvasRunnable_getCurrentStateHashtable(NullGameCanvasRunnable* this);
ABHashtable* NullGameCanvasRunnable_getLoadStateHashtable(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_setLoadStateHashtable(NullGameCanvasRunnable* this, ABHashtable* hashtable);
int32_t NullGameCanvasRunnable_getType(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_setGameState(NullGameCanvasRunnable* this, GameState* gameState);
GameState* NullGameCanvasRunnable_getGameState(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_itemStateChanged(NullGameCanvasRunnable* this, Item* item);
void NullGameCanvasRunnable_paint(NullGameCanvasRunnable* this, Graphics* graphics);
void NullGameCanvasRunnable_paintThreed(NullGameCanvasRunnable* this, Graphics* graphics);
bool NullGameCanvasRunnable_isRunning(NullGameCanvasRunnable* this);
void NullGameCanvasRunnable_setRunning(NullGameCanvasRunnable* this, bool isRunning);
void NullGameCanvasRunnable_setThread(NullGameCanvasRunnable* this, Thread* thread);
void NullGameCanvasRunnable_run(NullGameCanvasRunnable* this);

// Static fields with runtime initializers: call this once at startup
void NullGameCanvasRunnable_staticInit(void) {
    NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE = NullGameCanvasRunnable_new();
}

static void NullGameCanvasRunnable_initFields(NullGameCanvasRunnable* this) {
    this->gameStateFactory = GameStateFactory_getInstance();
}

void NullGameCanvasRunnable_init(NullGameCanvasRunnable* this) {
    NullGameCanvasRunnable_initFields(this);
}

NullGameCanvasRunnable* NullGameCanvasRunnable_new(void) {
    NullGameCanvasRunnable* this = calloc(1, sizeof(NullGameCanvasRunnable));
    NullGameCanvasRunnable_init(this);
    return this;
}


const char* NullGameCanvasRunnable_getTitle(NullGameCanvasRunnable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool NullGameCanvasRunnable_isInitialized(NullGameCanvasRunnable* this) {
        return false;
}


bool NullGameCanvasRunnable_isPaused(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_unPause(NullGameCanvasRunnable* this) {
}


void NullGameCanvasRunnable_pause(NullGameCanvasRunnable* this) {
}


bool NullGameCanvasRunnable_isHighScoreSubmitted(NullGameCanvasRunnable* this) {
        return false;
}


// throws Exception
void NullGameCanvasRunnable_setHighScoreSubmitted(NullGameCanvasRunnable* this, bool highScoreSubmitted) {
}


// throws Exception
void NullGameCanvasRunnable_processGameOver(NullGameCanvasRunnable* this) {
}


bool NullGameCanvasRunnable_isGameOver(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_initCommands(NullGameCanvasRunnable* this, CommandListener* cmdListener) {
}


// throws Exception
ABHashtable* NullGameCanvasRunnable_getCurrentStateHashtable(NullGameCanvasRunnable* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


// throws Exception
ABHashtable* NullGameCanvasRunnable_getLoadStateHashtable(NullGameCanvasRunnable* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


// throws Exception
void NullGameCanvasRunnable_setLoadStateHashtable(NullGameCanvasRunnable* this, ABHashtable* hashtable) {
}


int32_t NullGameCanvasRunnable_getType(NullGameCanvasRunnable* this) {
        return -1;
}


// throws Exception
void NullGameCanvasRunnable_setGameState(NullGameCanvasRunnable* this, GameState* gameState) {
}


GameState* NullGameCanvasRunnable_getGameState(NullGameCanvasRunnable* this) {
        return this->gameStateFactory->NO_GAME_STATE;
}


void NullGameCanvasRunnable_itemStateChanged(NullGameCanvasRunnable* this, Item* item) {
}


void NullGameCanvasRunnable_paint(NullGameCanvasRunnable* this, Graphics* graphics) {
}


void NullGameCanvasRunnable_paintThreed(NullGameCanvasRunnable* this, Graphics* graphics) {
}


bool NullGameCanvasRunnable_isRunning(NullGameCanvasRunnable* this) {
        return false;
}


void NullGameCanvasRunnable_setRunning(NullGameCanvasRunnable* this, bool isRunning) {
}


// throws Exception
void NullGameCanvasRunnable_setThread(NullGameCanvasRunnable* this, Thread* thread) {
}


void NullGameCanvasRunnable_run(NullGameCanvasRunnable* this) {
}

