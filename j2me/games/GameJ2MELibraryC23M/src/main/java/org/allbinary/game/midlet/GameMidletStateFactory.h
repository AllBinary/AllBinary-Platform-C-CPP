#ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
#define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
// Generated Code Do Not Modify
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameState GameState;
typedef struct GameStateFactory GameStateFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct GameMidletStateFactory GameMidletStateFactory;
struct GameMidletStateFactory {
    LogUtil* logUtil;
    GameState* currentGameState;
};


GameMidletStateFactory* GameMidletStateFactory_new(void);

void GameMidletStateFactory_init(GameMidletStateFactory* this);

GameMidletStateFactory* GameMidletStateFactory_getInstance(void);

GameState* GameMidletStateFactory_getCurrentGameState(GameMidletStateFactory* this);

void GameMidletStateFactory_setCurrentGameState(GameMidletStateFactory* this, GameState* currentGameState);
#define GameMidletStateFactory_new0 GameMidletStateFactory_new
#define GameMidletStateFactory_init0 GameMidletStateFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameMidletStateFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameMidletStateFactory_register(void);

#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif

#endif // ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
