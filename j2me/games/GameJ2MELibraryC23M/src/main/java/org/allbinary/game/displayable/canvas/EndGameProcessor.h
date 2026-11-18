#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_H
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
typedef struct Processor Processor;
typedef struct HighScores HighScores;
typedef struct HighScoresHelperBase HighScoresHelperBase;
typedef struct NullHighScoresSingletonFactory NullHighScoresSingletonFactory;
typedef struct GameStateFactory GameStateFactory;
typedef struct NullPaintable NullPaintable;
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct EndGameProcessor EndGameProcessor;
struct EndGameProcessor {
    Processor base;
    GameStateFactory* gameStateFactory;
    AllBinaryGameCanvas* gameCanvas;
    int64_t WAIT;
};


EndGameProcessor* EndGameProcessor_new(AllBinaryGameCanvas* gameCanvas);

void EndGameProcessor_init(EndGameProcessor* this, AllBinaryGameCanvas* gameCanvas);

void EndGameProcessor_process(EndGameProcessor* this);
#define EndGameProcessor_new1 EndGameProcessor_new
#define EndGameProcessor_init1 EndGameProcessor_init
#ifndef EndGameProcessor_getInstance
#define EndGameProcessor_getInstance Processor_getInstance
#endif
#ifndef EndGameProcessor_processt
#define EndGameProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EndGameProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EndGameProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPROCESSOR_H
