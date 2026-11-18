// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"


static GamePersistanceStrings* GamePersistanceStrings_instance;


void GamePersistanceStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GamePersistanceStrings_instance = GamePersistanceStrings_new();
}

void GamePersistanceStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GamePersistanceStrings", nullptr);
}

static void GamePersistanceStrings_initFields(GamePersistanceStrings* this) {
    this->SAVED_GAME_RECORD_ID = "_SG";
    this->SAVED_GAME_CONFIGURATION_RECORD_ID = "_SGC";
    this->DEFAULT_INPUT_MAPPING_RECORD_ID = "_DIM";
    this->SAVED_INPUT_CONFIGURATION_RECORD_ID = "_SIC";
}

void GamePersistanceStrings_init(GamePersistanceStrings* this) {
    GamePersistanceStrings_register();
    GamePersistanceStrings_initFields(this);
}

GamePersistanceStrings* GamePersistanceStrings_new(void) {
    GamePersistanceStrings* this = java_object_alloc(sizeof(GamePersistanceStrings), "GamePersistanceStrings");
    GamePersistanceStrings_init(this);
    return this;
}


GamePersistanceStrings* GamePersistanceStrings_getInstance(void) {
        return (GamePersistanceStrings_staticInit(), GamePersistanceStrings_instance);
}

