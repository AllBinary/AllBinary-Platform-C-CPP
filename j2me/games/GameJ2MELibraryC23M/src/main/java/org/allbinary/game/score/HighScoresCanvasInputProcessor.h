#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H
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
typedef struct Graphics Graphics;
typedef struct PlayerGameInput PlayerGameInput;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct HighScoresCanvas HighScoresCanvas;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/game/input/PlayerGameInput.h"
#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif
// #include "org/allbinary/util/BasicArrayList.h"

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
#define HighScoresCanvasInputProcessor_new1 HighScoresCanvasInputProcessor_new
#define HighScoresCanvasInputProcessor_init1 HighScoresCanvasInputProcessor_init
#ifndef HighScoresCanvasInputProcessor_onDownKeyEvent
#define HighScoresCanvasInputProcessor_onDownKeyEvent PlayerGameInput_onDownKeyEvent
#endif
#ifndef HighScoresCanvasInputProcessor_onDownKey
#define HighScoresCanvasInputProcessor_onDownKey PlayerGameInput_onDownKey
#endif
#ifndef HighScoresCanvasInputProcessor_onUpKeyEvent
#define HighScoresCanvasInputProcessor_onUpKeyEvent PlayerGameInput_onUpKeyEvent
#endif
#ifndef HighScoresCanvasInputProcessor_onEvent
#define HighScoresCanvasInputProcessor_onEvent PlayerGameInput_onEvent
#endif
#ifndef HighScoresCanvasInputProcessor_getPlayerInputId
#define HighScoresCanvasInputProcessor_getPlayerInputId PlayerGameInput_getPlayerInputId
#endif
#ifndef HighScoresCanvasInputProcessor_add
#define HighScoresCanvasInputProcessor_add GameInput_add
#endif
#ifndef HighScoresCanvasInputProcessor_addForRemoval
#define HighScoresCanvasInputProcessor_addForRemoval GameInput_addForRemoval
#endif
#ifndef HighScoresCanvasInputProcessor_isForRemoval
#define HighScoresCanvasInputProcessor_isForRemoval GameInput_isForRemoval
#endif
#ifndef HighScoresCanvasInputProcessor_clear
#define HighScoresCanvasInputProcessor_clear GameInput_clear
#endif
#ifndef HighScoresCanvasInputProcessor_removeNonAIInputGameKeyEvents
#define HighScoresCanvasInputProcessor_removeNonAIInputGameKeyEvents GameInput_removeNonAIInputGameKeyEvents
#endif
#ifndef HighScoresCanvasInputProcessor_update
#define HighScoresCanvasInputProcessor_update GameInput_update
#endif
#ifndef HighScoresCanvasInputProcessor_getRemovalGameKeyEventList
#define HighScoresCanvasInputProcessor_getRemovalGameKeyEventList GameInput_getRemovalGameKeyEventList
#endif
#ifndef HighScoresCanvasInputProcessor_getGameKeyEventList
#define HighScoresCanvasInputProcessor_getGameKeyEventList GameInput_getGameKeyEventList
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoresCanvasInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoresCanvasInputProcessor_register(void);

#if __has_include("org/allbinary/game/score/displayable/HighScoresCanvas.h")
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#endif

#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H
