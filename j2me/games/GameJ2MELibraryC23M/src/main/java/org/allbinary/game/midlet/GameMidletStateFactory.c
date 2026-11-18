// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/GameMidletStateFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static GameMidletStateFactory* GameMidletStateFactory_INSTANCE;





void GameMidletStateFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameMidletStateFactory_INSTANCE = GameMidletStateFactory_new();
}

void GameMidletStateFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameMidletStateFactory", nullptr);
    java_register_method("GameMidletStateFactory", "getCurrentGameState", (void*) GameMidletStateFactory_getCurrentGameState);
    java_register_method("GameMidletStateFactory", "setCurrentGameState", (void*) GameMidletStateFactory_setCurrentGameState);
}

static void GameMidletStateFactory_initFields(GameMidletStateFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->currentGameState = GameStateFactory_getInstance()->NO_GAME_STATE;
}


void GameMidletStateFactory_init(GameMidletStateFactory* this) {
    GameMidletStateFactory_register();
    GameMidletStateFactory_initFields(this);
}

GameMidletStateFactory* GameMidletStateFactory_new(void) {
    GameMidletStateFactory* this = java_object_alloc(sizeof(GameMidletStateFactory), "GameMidletStateFactory");
    GameMidletStateFactory_init(this);
    return this;
}


GameMidletStateFactory* GameMidletStateFactory_getInstance(void) {
        return (GameMidletStateFactory_staticInit(), GameMidletStateFactory_INSTANCE);
}


GameState* GameMidletStateFactory_getCurrentGameState(GameMidletStateFactory* this) {
        return this->currentGameState;
}


void GameMidletStateFactory_setCurrentGameState(GameMidletStateFactory* this, GameState* currentGameState) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->CURRENT), " GameState: "), StringUtil_toString(StringUtil_getInstance(), currentGameState))), this, "setCurrentGameState");
        this->currentGameState = currentGameState;
}

