/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Item.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct GameConfigurationUtil GameConfigurationUtil;
struct GameConfigurationUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* GAUGE_UPDATE;
    const char* FROM;
    const char* TO;
    int32_t COMPETITION_VALUE;
};

static GameConfigurationUtil* GameConfigurationUtil_instance;

GameConfigurationUtil* GameConfigurationUtil_new(void);
GameConfigurationUtil* GameConfigurationUtil_getInstance(void);
void GameConfigurationUtil_change(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge);
void GameConfigurationUtil_update(GameConfigurationUtil* this, GameConfigurationGauge* gauge);
void GameConfigurationUtil_setDefault(GameConfigurationUtil* this, GameConfigurationGauge* gauge);
void GameConfigurationUtil_updateChallange(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration);
void GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil* this);
int32_t GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil* this);

// Static fields with runtime initializers: call this once at startup
void GameConfigurationUtil_staticInit(void) {
    GameConfigurationUtil_instance = GameConfigurationUtil_new();
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
    GameConfigurationUtil_initFields(this);
}

GameConfigurationUtil* GameConfigurationUtil_new(void) {
    GameConfigurationUtil* this = calloc(1, sizeof(GameConfigurationUtil));
    GameConfigurationUtil_init(this);
    return this;
}


GameConfigurationUtil* GameConfigurationUtil_getInstance(void) {
        return GameConfigurationUtil_instance;
}


// throws Exception
void GameConfigurationUtil_change(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge) {
        GameConfigurationUtil_update(this, gauge);
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, GameConfigurationGauge_getLabel(gauge));
        GameConfigurationUtil_updateChallange(this, gameOptionsForm, gameConfiguration);
}


// throws Exception
void GameConfigurationUtil_update(GameConfigurationUtil* this, GameConfigurationGauge* gauge) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, GameConfigurationGauge_getLabel(gauge));
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t value = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, GameConfigurationGauge_getValue(gauge) + JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->GAUGE_UPDATE);
        StringMaker_append(stringBuffer, GameConfiguration_getName(gameConfiguration));
        StringMaker_append(stringBuffer, this->FROM);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(gameConfiguration), intValue)));
        StringMaker_append(stringBuffer, this->TO);
        StringMaker_appendint(stringBuffer, ((int32_t) Integer_intValue(value)));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->UPDATE);
        GameConfiguration_setValue(gameConfiguration, value);
}


// throws Exception
void GameConfigurationUtil_setDefault(GameConfigurationUtil* this, GameConfigurationGauge* gauge) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfiguration* gameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, GameConfigurationGauge_getLabel(gauge));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Gauge Default: ");
        StringMaker_append(stringBuffer, GameConfiguration_getName(gameConfiguration));
        StringMaker_append(stringBuffer, this->TO);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getDefaultValue(gameConfiguration), intValue)));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "setDefault");
        GameConfigurationGauge_setValue(gauge, JAVA_CALL(GameConfiguration_getDefaultValue(gameConfiguration), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
        GameConfiguration_setValue(gameConfiguration, GameConfiguration_getDefaultValue(gameConfiguration));
}


// throws Exception
void GameConfigurationUtil_updateChallange(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration) {
        GameConfigurationSingleton* gameConfigurationSingleton = GameConfigurationSingleton_getInstance();
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        if (gameConfiguration == gameConfigurationCentral->CHALLENGE_LEVEL) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateChallange");
            JAVA_CALL(gameConfigurationCentral->COLLIDE_DAMAGE, setValue, GameConfiguration_getValue(gameConfiguration));
            JAVA_CALL(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL, setValue, GameConfiguration_getValue(gameConfiguration));
            JAVA_CALL(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL, setValue, GameConfiguration_getValue(gameConfiguration));
            JAVA_CALL(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL, setValue, GameConfiguration_getValue(gameConfiguration));
            int32_t size = GameOptionsForm_size(gameOptionsForm);
            for (int32_t index = 0; index < size; index++) {
                Item* item = GameOptionsForm_get(gameOptionsForm, index);
                if (java_instanceof(item, "GameConfigurationGauge")) {
                    GameConfigurationGauge* gauge = ((GameConfigurationGauge*) item);
                    const char* name = Item_getLabel(item);
                    GameConfiguration* nextGameConfiguration = GameConfigurationSingleton_getInstanceByName(gameConfigurationSingleton, name);
                    if (nextGameConfiguration == gameConfigurationCentral->COLLIDE_DAMAGE) {
                        GameConfigurationGauge_setValue(gauge, JAVA_CALL(JAVA_CALL(gameConfigurationCentral->COLLIDE_DAMAGE, getValue), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
                    } else if (nextGameConfiguration == gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL) {
                        GameConfigurationGauge_setValue(gauge, JAVA_CALL(JAVA_CALL(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL, getValue), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
                    } else if (nextGameConfiguration == gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL) {
                        GameConfigurationGauge_setValue(gauge, JAVA_CALL(JAVA_CALL(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL, getValue), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
                    } else if (nextGameConfiguration == gameConfigurationCentral->SPEED_CHALLENGE_LEVEL) {
                        GameConfigurationGauge_setValue(gauge, JAVA_CALL(JAVA_CALL(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL, getValue), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
                    }
                }
            }
        }
}


void GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateCompetitionValue");
        GameConfigurationCentral* gameConfigurationCentral = GameConfigurationCentral_getInstance();
        this->COMPETITION_VALUE = JAVA_CALL(JAVA_CALL(gameConfigurationCentral->COLLIDE_DAMAGE, getValue), intValue) + JAVA_CALL(JAVA_CALL(gameConfigurationCentral->ATTACK_CHALLENGE_LEVEL, getValue), intValue) + JAVA_CALL(JAVA_CALL(gameConfigurationCentral->DURABILITY_CHALLENGE_LEVEL, getValue), intValue) + JAVA_CALL(JAVA_CALL(gameConfigurationCentral->SPEED_CHALLENGE_LEVEL, getValue), intValue);
        this->COMPETITION_VALUE = (this->COMPETITION_VALUE >> 2);
}


int32_t GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil* this) {
        return this->COMPETITION_VALUE;
}

