// Generated Code Do Not Modify
#include "org/allbinary/game/IntermissionFactory.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif
#if __has_include("org/allbinary/game/state/GameStateFactory.h")
#include "org/allbinary/game/state/GameStateFactory.h"
#endif


static IntermissionFactory* IntermissionFactory_instance;


void IntermissionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    IntermissionFactory_instance = IntermissionFactory_new();
}

void IntermissionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IntermissionFactory", nullptr);
}

static void IntermissionFactory_initFields(IntermissionFactory* this) {
    this->START_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "START_LEVEL_INTERMISSION_GAME_STATE");
    this->WAIT_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "WAIT_LEVEL_INTERMISSION_GAME_STATE");
    this->SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE");
    this->SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE");
}

void IntermissionFactory_init(IntermissionFactory* this) {
    IntermissionFactory_register();
    IntermissionFactory_initFields(this);
}

IntermissionFactory* IntermissionFactory_new(void) {
    IntermissionFactory* this = java_object_alloc(sizeof(IntermissionFactory), "IntermissionFactory");
    IntermissionFactory_init(this);
    return this;
}


IntermissionFactory* IntermissionFactory_getInstance(void) {
        return (IntermissionFactory_staticInit(), IntermissionFactory_instance);
}

