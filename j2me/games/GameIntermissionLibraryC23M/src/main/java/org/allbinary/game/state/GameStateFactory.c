// Generated Code Do Not Modify
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/state/GameState.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* GameStateFactory_instance;




void GameStateFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameStateFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void GameStateFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameStateFactory", nullptr);
    java_register_method("GameStateFactory", "createGameState", (void*) GameStateFactory_createGameState);
}

static void GameStateFactory_initFields(GameStateFactory* this) {
    this->index = 0;
    this->NO_GAME_STATE = GameStateFactory_createGameState(this, "NO_GAME_STATE");
    this->PLAYING_GAME_STATE = GameStateFactory_createGameState(this, "PLAYING_GAME_STATE");
    this->SHOW_END_RESULT_GAME_STATE = GameStateFactory_createGameState(this, "SHOW_END_RESULT_GAME_STATE");
    this->SHOW_HIGH_SCORE_GAME_STATE = GameStateFactory_createGameState(this, "SHOW_HIGH_SCORE_GAME_STATE");
}


GameStateFactory* GameStateFactory_getInstance(void) {
        if ((GameStateFactory_staticInit(), GameStateFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            GameStateFactory_instance = GameStateFactory_new();
        }
        return ((GameStateFactory*) (GameStateFactory_staticInit(), GameStateFactory_instance));
}


void GameStateFactory_init(GameStateFactory* this) {
    GameStateFactory_register();
    GameStateFactory_initFields(this);
}

GameStateFactory* GameStateFactory_new(void) {
    GameStateFactory* this = java_object_alloc(sizeof(GameStateFactory), "GameStateFactory");
    GameStateFactory_init(this);
    return this;
}


GameState* GameStateFactory_createGameState(GameStateFactory* this, const char* name) {
        return GameState_new(name, this->index++);
}

