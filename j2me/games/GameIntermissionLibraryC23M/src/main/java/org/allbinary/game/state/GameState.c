// Generated Code Do Not Modify
#include "org/allbinary/game/state/GameState.h"





void GameState_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameState_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameState", nullptr);
    java_register_method("GameState", "toString", (void*) GameState_toString);
}

static void GameState_initFields(GameState* this) {
    
}


void GameState_init(GameState* this, const char* name, int32_t state) {
    GameState_register();
    GameState_initFields(this);
        this->name = name;
}

GameState* GameState_new(const char* name, int32_t state) {
    GameState* this = java_object_alloc(sizeof(GameState), "GameState");
    GameState_init(this, name, state);
    return this;
}


const char* GameState_toString(GameState* this) {
        return this->name;
}

