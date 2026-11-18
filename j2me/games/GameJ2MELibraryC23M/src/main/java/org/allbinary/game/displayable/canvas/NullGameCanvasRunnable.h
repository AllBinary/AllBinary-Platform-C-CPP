#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
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
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct CommandListener CommandListener;
typedef struct Graphics Graphics;
typedef struct Item Item;
typedef struct GameState GameState;
typedef struct GameStateFactory GameStateFactory;
typedef struct StdUtil StdUtil;
typedef struct StringUtil StringUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#include "java/lang/Thread.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"

typedef struct NullGameCanvasRunnable NullGameCanvasRunnable;
struct NullGameCanvasRunnable {
    GameCanvasRunnableInterface GameCanvasRunnableInterface_interface;
    GameStateFactory* gameStateFactory;
};

extern NullGameCanvasRunnable* NullGameCanvasRunnable_NULL_GAME_CANVAS_RUNNABLE;

NullGameCanvasRunnable* NullGameCanvasRunnable_new(void);
void NullGameCanvasRunnable_init(NullGameCanvasRunnable* this);

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
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullGameCanvasRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullGameCanvasRunnable_register(void);

#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLGAMECANVASRUNNABLE_H
