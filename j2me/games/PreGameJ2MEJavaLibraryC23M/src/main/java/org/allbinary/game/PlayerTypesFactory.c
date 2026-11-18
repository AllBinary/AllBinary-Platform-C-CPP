// Generated Code Do Not Modify
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/PlayerType.h"


static PlayerTypesFactory* PlayerTypesFactory_SINGLETON;


void PlayerTypesFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlayerTypesFactory_SINGLETON = PlayerTypesFactory_new();
}

void PlayerTypesFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlayerTypesFactory", nullptr);
}

static void PlayerTypesFactory_initFields(PlayerTypesFactory* this) {
    this->PLAYER_TYPE_ONE = PlayerType_new("Player Type One", 0);
    this->PLAYER_TYPE_TWO = PlayerType_new("Player Type Two", 1);
    this->PLAYER_TYPE_THREE = PlayerType_new("Player Type Three", 2);
}

void PlayerTypesFactory_init(PlayerTypesFactory* this) {
    PlayerTypesFactory_register();
    PlayerTypesFactory_initFields(this);
}

PlayerTypesFactory* PlayerTypesFactory_new(void) {
    PlayerTypesFactory* this = java_object_alloc(sizeof(PlayerTypesFactory), "PlayerTypesFactory");
    PlayerTypesFactory_init(this);
    return this;
}


PlayerTypesFactory* PlayerTypesFactory_getInstance(void) {
        return (PlayerTypesFactory_staticInit(), PlayerTypesFactory_SINGLETON);
}

