// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/GameOptionsForm.h"
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"


static GameConfigurationUtil* GameConfigurationUtil_instance;








void GameConfigurationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GameConfigurationUtil_instance = GameConfigurationUtil_new();
}

void GameConfigurationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameConfigurationUtil", nullptr);
    java_register_method("GameConfigurationUtil", "change", (void*) GameConfigurationUtil_change);
    java_register_method("GameConfigurationUtil", "update", (void*) GameConfigurationUtil_update);
    java_register_method("GameConfigurationUtil", "setDefault", (void*) GameConfigurationUtil_setDefault);
    java_register_method("GameConfigurationUtil", "updateChallange", (void*) GameConfigurationUtil_updateChallange);
    java_register_method("GameConfigurationUtil", "updateCompetitionValue", (void*) GameConfigurationUtil_updateCompetitionValue);
    java_register_method("GameConfigurationUtil", "getCompetitionValue", (void*) GameConfigurationUtil_getCompetitionValue);
}

static void GameConfigurationUtil_initFields(GameConfigurationUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->GAUGE_UPDATE = "Gauge Update: ";
    this->FROM = " from: ";
    this->TO = " to: ";
    this->COMPETITION_VALUE = 1;
}

void GameConfigurationUtil_init(GameConfigurationUtil* this) {
    GameConfigurationUtil_register();
    GameConfigurationUtil_initFields(this);
}

GameConfigurationUtil* GameConfigurationUtil_new(void) {
    GameConfigurationUtil* this = java_object_alloc(sizeof(GameConfigurationUtil), "GameConfigurationUtil");
    GameConfigurationUtil_init(this);
    return this;
}


GameConfigurationUtil* GameConfigurationUtil_getInstance(void) {
        return (GameConfigurationUtil_staticInit(), GameConfigurationUtil_instance);
}


// throws Exception
void GameConfigurationUtil_change(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge) {
        GameConfigurationUtil_update(this, gauge);
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, Item_getLabel(gauge));
        GameConfigurationUtil_updateChallange(this, gameOptionsForm, gameConfiguration);
}


// throws Exception
void GameConfigurationUtil_update(GameConfigurationUtil* this, GameConfigurationGauge* gauge) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, Item_getLabel(gauge));
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t value = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Gauge_getValue(gauge) + Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->GAUGE_UPDATE);
        StringMaker_append(stringBuffer, GameConfiguration_getName(gameConfiguration));
        StringMaker_append(stringBuffer, this->FROM);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getValue(gameConfiguration))));
        StringMaker_append(stringBuffer, this->TO);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(value)));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, this->commonStrings->UPDATE);
        GameConfiguration_setValue(gameConfiguration, value);
}


// throws Exception
void GameConfigurationUtil_setDefault(GameConfigurationUtil* this, GameConfigurationGauge* gauge) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, Item_getLabel(gauge));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Gauge Default: ");
        StringMaker_append(stringBuffer, GameConfiguration_getName(gameConfiguration));
        StringMaker_append(stringBuffer, this->TO);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(GameConfiguration_getDefaultValue(gameConfiguration))));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "setDefault");
        Gauge_setValue(gauge, Integer_intValue(GameConfiguration_getDefaultValue(gameConfiguration)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
        GameConfiguration_setValue(gameConfiguration, GameConfiguration_getDefaultValue(gameConfiguration));
}


// throws Exception
void GameConfigurationUtil_updateChallange(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        if (gameConfiguration == gameConfigurationCentral->CHALLENGE_LEVEL) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateChallange");
            GameConfiguration_setValue(gameConfigurationCentral->COLLIDE_DAMAGE, GameConfiguration_getValue(gameConfiguration));
            GameConfiguration_setValue(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL, GameConfiguration_getValue(gameConfiguration));
            GameConfiguration_setValue(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL, GameConfiguration_getValue(gameConfiguration));
            GameConfiguration_setValue(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL, GameConfiguration_getValue(gameConfiguration));
            int32_t size = Form_size(gameOptionsForm);
            for (int32_t index = 0; index < size; index++) {
                Item* item = Form_get(gameOptionsForm, index);
                if (java_instanceof(item, "GameConfigurationGauge")) {
                    GameConfigurationGauge* gauge = ((GameConfigurationGauge*) item);
                    const char* name = Item_getLabel(item);
                    GameConfiguration* nextGameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, name);
                    if (nextGameConfiguration == gameConfigurationCentral->COLLIDE_DAMAGE) {
                        Gauge_setValue(gauge, Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->COLLIDE_DAMAGE)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
                    } else if (nextGameConfiguration == gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL) {
                        Gauge_setValue(gauge, Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
                    } else if (nextGameConfiguration == gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL) {
                        Gauge_setValue(gauge, Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
                    } else if (nextGameConfiguration == gameConfigurationCentral->SPEED_CHALLENGE_LEVEL) {
                        Gauge_setValue(gauge, Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL)) - Integer_intValue(GameConfiguration_getMinValue(gameConfiguration)));
                    }
                }
            }
        }
}


void GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateCompetitionValue");
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        this->COMPETITION_VALUE = Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->COLLIDE_DAMAGE)) + Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL)) + Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL)) + Integer_intValue(GameConfiguration_getValue(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL));
        this->COMPETITION_VALUE = (this->COMPETITION_VALUE >> 2);
}


int32_t GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil* this) {
        return this->COMPETITION_VALUE;
}

