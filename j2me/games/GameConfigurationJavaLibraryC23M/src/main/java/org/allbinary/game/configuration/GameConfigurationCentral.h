#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
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
typedef struct GameConfiguration GameConfiguration;
typedef struct GameConfigurationPersistanceSingleton GameConfigurationPersistanceSingleton;
typedef struct KeyValuePersistance KeyValuePersistance;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/game/configuration/GameConfiguration.h")
#include "org/allbinary/game/configuration/GameConfiguration.h"
#endif

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


GameConfigurationCentral* GameConfigurationCentral_new(void);

GameConfigurationCentral* GameConfigurationCentral_getInstance(void);

void GameConfigurationCentral_init(GameConfigurationCentral* this);

void GameConfigurationCentral_load(GameConfigurationCentral* this, AbeClientInformationInterface* abeClientInformation);

void GameConfigurationCentral_setGameControlFidelity(GameConfigurationCentral* this, int32_t gameControlFidelity);

int32_t GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral* this);

const char* GameConfigurationCentral_toString(GameConfigurationCentral* this);
#define GameConfigurationCentral_new0 GameConfigurationCentral_new
#define GameConfigurationCentral_init0 GameConfigurationCentral_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationCentral_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationCentral_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONCENTRAL_H
