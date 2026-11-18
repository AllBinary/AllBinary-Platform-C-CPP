// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/GameDifficultyFactory.h"


static GameDifficultyFactory* GameDifficultyFactory_instance;




void GameDifficultyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameDifficultyFactory_instance = GameDifficultyFactory_new();
}

void GameDifficultyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameDifficultyFactory", nullptr);
    java_register_method("GameDifficultyFactory", "setLevel", (void*) GameDifficultyFactory_setLevel);
    java_register_method("GameDifficultyFactory", "getLevel", (void*) GameDifficultyFactory_getLevel);
}

static void GameDifficultyFactory_initFields(GameDifficultyFactory* this) {
    this->level = 0;
}

void GameDifficultyFactory_init(GameDifficultyFactory* this) {
    GameDifficultyFactory_register();
    GameDifficultyFactory_initFields(this);
}

GameDifficultyFactory* GameDifficultyFactory_new(void) {
    GameDifficultyFactory* this = java_object_alloc(sizeof(GameDifficultyFactory), "GameDifficultyFactory");
    GameDifficultyFactory_init(this);
    return this;
}


GameDifficultyFactory* GameDifficultyFactory_getInstance(void) {
        return (GameDifficultyFactory_staticInit(), GameDifficultyFactory_instance);
}


void GameDifficultyFactory_setLevel(GameDifficultyFactory* this, int32_t level) {
        this->level = level;
}


int32_t GameDifficultyFactory_getLevel(GameDifficultyFactory* this) {
        return this->level;
}

