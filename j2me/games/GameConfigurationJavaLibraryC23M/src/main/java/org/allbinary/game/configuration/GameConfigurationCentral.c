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
#include "org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GameConfigurationCentral GameConfigurationCentral;
struct GameConfigurationCentral {
    LogUtil* logUtil;
    GameConfiguration* SCALE;
    GameConfiguration* ORIENTATION;
    GameConfiguration* SENSOR_UPDATE_RATE;
    GameConfiguration* VIBRATION;
    GameConfiguration* CHALLENGE_LEVEL;
    GameConfiguration* COLLIDE_DAMAGE;
    GameConfiguration* DURABILITY_CHALLENGE_LEVEL;
    GameConfiguration* SPEED_CHALLENGE_LEVEL;
    GameConfiguration* ATTACK_CHALLENGE_LEVEL;
    GameConfiguration* CONTROL_LEVEL;
    GameConfiguration* PLAYER_INPUT_WAIT;
    GameConfiguration* SPEED;
    GameConfiguration* SOUND_VOLUME;
    GameConfiguration* MAX_GAME_OBJECTS;
    GameConfiguration* MAX_LAYERS;
    int32_t gameControlFidelity;
};

static Any* GameConfigurationCentral_SINGLETON;

GameConfigurationCentral* GameConfigurationCentral_new(void);
GameConfigurationCentral* GameConfigurationCentral_getInstance(void);

void GameConfigurationCentral_init(GameConfigurationCentral* this);
void GameConfigurationCentral_load(GameConfigurationCentral* this, AbeClientInformationInterface* abeClientInformation);
void GameConfigurationCentral_setGameControlFidelity(GameConfigurationCentral* this, int32_t gameControlFidelity);
int32_t GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral* this);
const char* GameConfigurationCentral_toString(GameConfigurationCentral* this);

// Static fields with runtime initializers: call this once at startup
void GameConfigurationCentral_staticInit(void) {
    GameConfigurationCentral_SINGLETON = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameConfigurationCentral_initFields(GameConfigurationCentral* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->gameControlFidelity = 36;
}


GameConfigurationCentral* GameConfigurationCentral_getInstance(void) {
        if (GameConfigurationCentral_SINGLETON == NullUtil_getInstance()->NULL_OBJECT) {
            GameConfigurationCentral_SINGLETON = GameConfigurationCentral_new();
        }
        return ((GameConfigurationCentral*) GameConfigurationCentral_SINGLETON);
}


void GameConfigurationCentral_init(GameConfigurationCentral* this) {
    GameConfigurationCentral_initFields(this);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        this->SCALE = GameConfiguration_new("Scale", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 2), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->ORIENTATION = GameConfiguration_new("Orientation", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 8));
        this->SENSOR_UPDATE_RATE = GameConfiguration_new("Sensor Update Rate", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->VIBRATION = GameConfiguration_new("Vibration", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3));
        this->CHALLENGE_LEVEL = GameConfiguration_new("Global Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->COLLIDE_DAMAGE = GameConfiguration_new("Collide Damage Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->DURABILITY_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Durability Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SPEED_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Speed Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->ATTACK_CHALLENGE_LEVEL = GameConfiguration_new("Enemy Attack Challenge Level", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 3), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->CONTROL_LEVEL = GameConfiguration_new("Control Fidelity", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->PLAYER_INPUT_WAIT = GameConfiguration_new("Input Wait", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SPEED = GameConfiguration_new("Game Speed (Device Specific)", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 5), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->SOUND_VOLUME = GameConfiguration_new("Sound Volume", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 6), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 0), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 10));
        this->MAX_GAME_OBJECTS = GameConfiguration_new("Max Game Objects", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 20), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 50));
        this->MAX_LAYERS = GameConfiguration_new("Max Layers", SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 20), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 1), SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, 50));
}

GameConfigurationCentral* GameConfigurationCentral_new(void) {
    GameConfigurationCentral* this = calloc(1, sizeof(GameConfigurationCentral));
    GameConfigurationCentral_init(this);
    return this;
}


void GameConfigurationCentral_load(GameConfigurationCentral* this, AbeClientInformationInterface* abeClientInformation) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            KeyValuePersistance* keyValuePersistance = GameConfigurationPersistanceSingleton_getInstance();
            KeyValuePersistance_clear(keyValuePersistance);
            KeyValuePersistance_loadAll(keyValuePersistance, abeClientInformation);
            BasicArrayList* list = KeyValuePersistance_getIds(keyValuePersistance);
            if (BasicArrayList_size(list) > 0) {
                ABHashtable* hashtable = KeyValuePersistance_get(keyValuePersistance, 0);
                Any* anyType = ((Any*) GameConfiguration_getName(this->SCALE));
                const char* value = ((const char*) ABHashtable_get(hashtable, anyType));
                GameConfiguration_setValue(this->SCALE, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, JAVA_CALL(java_string_of(value), intValue)));
            } else {
                LogUtil_putF(this->logUtil, "No Game Configuration To Load", this, commonStrings->LOAD);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->LOAD, e);
        } JAVA_END_TRY;
}


void GameConfigurationCentral_setGameControlFidelity(GameConfigurationCentral* this, int32_t gameControlFidelity) {
        this->gameControlFidelity = gameControlFidelity;
}


int32_t GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral* this) {
        return this->gameControlFidelity;
}


const char* GameConfigurationCentral_toString(GameConfigurationCentral* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonStrings = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SCALE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->SCALE), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->ORIENTATION));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->ORIENTATION), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SENSOR_UPDATE_RATE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->SENSOR_UPDATE_RATE), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->VIBRATION));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->VIBRATION), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->CHALLENGE_LEVEL), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->COLLIDE_DAMAGE));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->COLLIDE_DAMAGE), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->DURABILITY_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->DURABILITY_CHALLENGE_LEVEL), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SPEED_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->SPEED_CHALLENGE_LEVEL), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->ATTACK_CHALLENGE_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->ATTACK_CHALLENGE_LEVEL), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->CONTROL_LEVEL));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->CONTROL_LEVEL), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->SPEED));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->SPEED), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->MAX_GAME_OBJECTS));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->MAX_GAME_OBJECTS), intValue)));
        StringMaker_append(stringBuffer, commonStrings->COMMA_SEP);
        StringMaker_append(stringBuffer, GameConfiguration_getName(this->MAX_LAYERS));
        StringMaker_append(stringBuffer, commonStrings->EQUALS);
        StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(GameConfiguration_getValue(this->MAX_LAYERS), intValue)));
        return StringMaker_toString(stringBuffer);
}

