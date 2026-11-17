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
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct GameMidletStateFactory GameMidletStateFactory;
struct GameMidletStateFactory {
    LogUtil* logUtil;
    GameState* currentGameState;
};

static GameMidletStateFactory* GameMidletStateFactory_INSTANCE;

GameMidletStateFactory* GameMidletStateFactory_new(void);

void GameMidletStateFactory_init(GameMidletStateFactory* this);
GameMidletStateFactory* GameMidletStateFactory_getInstance(void);
GameState* GameMidletStateFactory_getCurrentGameState(GameMidletStateFactory* this);
void GameMidletStateFactory_setCurrentGameState(GameMidletStateFactory* this, GameState* currentGameState);

// Static fields with runtime initializers: call this once at startup
void GameMidletStateFactory_staticInit(void) {
    GameMidletStateFactory_INSTANCE = GameMidletStateFactory_new();
}

static void GameMidletStateFactory_initFields(GameMidletStateFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->currentGameState = GameStateFactory_getInstance()->NO_GAME_STATE;
}


void GameMidletStateFactory_init(GameMidletStateFactory* this) {
    GameMidletStateFactory_initFields(this);
}

GameMidletStateFactory* GameMidletStateFactory_new(void) {
    GameMidletStateFactory* this = calloc(1, sizeof(GameMidletStateFactory));
    GameMidletStateFactory_init(this);
    return this;
}


GameMidletStateFactory* GameMidletStateFactory_getInstance(void) {
        return GameMidletStateFactory_INSTANCE;
}


GameState* GameMidletStateFactory_getCurrentGameState(GameMidletStateFactory* this) {
        return this->currentGameState;
}


void GameMidletStateFactory_setCurrentGameState(GameMidletStateFactory* this, GameState* currentGameState) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->CURRENT), append, " GameState: "), append, StringUtil_toString(StringUtil_getInstance(), currentGameState)), toString), this, "setCurrentGameState");
        this->currentGameState = currentGameState;
}

