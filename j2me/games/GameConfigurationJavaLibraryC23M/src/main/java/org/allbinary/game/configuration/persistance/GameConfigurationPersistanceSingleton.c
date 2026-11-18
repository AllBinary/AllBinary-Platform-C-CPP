// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"


static GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_GAME_PERSISTANCE;



void GameConfigurationPersistanceSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfigurationPersistanceSingleton_GAME_PERSISTANCE = GameConfigurationPersistanceSingleton_new();
}

void GameConfigurationPersistanceSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationPersistanceSingleton", "KeyValuePersistance");
}


GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_getInstance(void) {
        return (GameConfigurationPersistanceSingleton_staticInit(), GameConfigurationPersistanceSingleton_GAME_PERSISTANCE);
}


void GameConfigurationPersistanceSingleton_init(GameConfigurationPersistanceSingleton* this) {
    GameConfigurationPersistanceSingleton_register();
        KeyValuePersistance_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_GAME_CONFIGURATION_RECORD_ID);
}

GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_new(void) {
    GameConfigurationPersistanceSingleton* this = java_object_alloc(sizeof(GameConfigurationPersistanceSingleton), "GameConfigurationPersistanceSingleton");
    GameConfigurationPersistanceSingleton_init(this);
    return this;
}

