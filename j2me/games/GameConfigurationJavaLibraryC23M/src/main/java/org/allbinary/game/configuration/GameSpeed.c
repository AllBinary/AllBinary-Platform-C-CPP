// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameSpeed.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"


static GameSpeed* GameSpeed_instance;




void GameSpeed_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameSpeed_instance = GameSpeed_new();
}

void GameSpeed_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameSpeed", nullptr);
    java_register_method("GameSpeed", "getSpeed", (void*) GameSpeed_getSpeed);
    java_register_method("GameSpeed", "getDelay", (void*) GameSpeed_getDelay);
}

void GameSpeed_init(GameSpeed* this) {
    GameSpeed_register();
}

GameSpeed* GameSpeed_new(void) {
    GameSpeed* this = java_object_alloc(sizeof(GameSpeed), "GameSpeed");
    GameSpeed_init(this);
    return this;
}


int32_t GameSpeed_getSpeed(GameSpeed* this) {
        GameConfiguration* speedGameConfiguration = GameConfigurationCentral_getInstance()->SPEED;
        return (Integer_intValue(GameConfiguration_getMaxValue(speedGameConfiguration)) - Integer_intValue(GameConfiguration_getValue(speedGameConfiguration)) + 1);
}


int32_t GameSpeed_getDelay(GameSpeed* this) {
        GameConfiguration* speedGameConfiguration = GameConfigurationCentral_getInstance()->SPEED;
        return 19 * (Integer_intValue(GameConfiguration_getMaxValue(speedGameConfiguration)) - Integer_intValue(GameConfiguration_getValue(speedGameConfiguration)));
}


GameSpeed* GameSpeed_getInstance(void) {
        return (GameSpeed_staticInit(), GameSpeed_instance);
}

