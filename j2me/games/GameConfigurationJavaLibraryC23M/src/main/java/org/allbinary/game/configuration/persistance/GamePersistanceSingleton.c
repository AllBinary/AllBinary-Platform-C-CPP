// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"


static GamePersistanceSingleton* GamePersistanceSingleton_GAME_PERSISTANCE;



void GamePersistanceSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GamePersistanceSingleton_GAME_PERSISTANCE = GamePersistanceSingleton_new();
}

void GamePersistanceSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GamePersistanceSingleton", "KeyValuePersistance");
}


GamePersistanceSingleton* GamePersistanceSingleton_getInstance(void) {
        return (GamePersistanceSingleton_staticInit(), GamePersistanceSingleton_GAME_PERSISTANCE);
}


void GamePersistanceSingleton_init(GamePersistanceSingleton* this) {
    GamePersistanceSingleton_register();
        KeyValuePersistance_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_GAME_RECORD_ID);
}

GamePersistanceSingleton* GamePersistanceSingleton_new(void) {
    GamePersistanceSingleton* this = java_object_alloc(sizeof(GamePersistanceSingleton), "GamePersistanceSingleton");
    GamePersistanceSingleton_init(this);
    return this;
}

