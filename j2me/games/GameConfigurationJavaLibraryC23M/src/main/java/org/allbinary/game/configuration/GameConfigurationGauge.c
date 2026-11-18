// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"




void GameConfigurationGauge_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameConfigurationGauge_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationGauge", "Gauge");
}


void GameConfigurationGauge_init(GameConfigurationGauge* this, GameConfiguration* gameConfiguration) {
    GameConfigurationGauge_register();
        Gauge_init(&this->base, GameConfiguration_getName(gameConfiguration), Boolean_booleanValue(GameConfiguration_isModifiable(gameConfiguration)), Integer_intValue(GameConfiguration_getMaxValue(gameConfiguration)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)), Integer_intValue(GameConfiguration_getValue(gameConfiguration)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
}

GameConfigurationGauge* GameConfigurationGauge_new(GameConfiguration* gameConfiguration) {
    GameConfigurationGauge* this = java_object_alloc(sizeof(GameConfigurationGauge), "GameConfigurationGauge");
    GameConfigurationGauge_init(this, gameConfiguration);
    return this;
}

