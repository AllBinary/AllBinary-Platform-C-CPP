#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
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
typedef struct GameConfigurationSingleton GameConfigurationSingleton;
typedef struct GameConfiguration GameConfiguration;
typedef struct GameOptionsForm GameOptionsForm;
typedef struct GameConfigurationGauge GameConfigurationGauge;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct Item Item;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Integer.h"

typedef struct GameConfigurationUtil GameConfigurationUtil;
struct GameConfigurationUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* GAUGE_UPDATE;
    const char* FROM;
    const char* TO;
    int32_t COMPETITION_VALUE;
};


GameConfigurationUtil* GameConfigurationUtil_new(void);
void GameConfigurationUtil_init(GameConfigurationUtil* this);

GameConfigurationUtil* GameConfigurationUtil_getInstance(void);

void GameConfigurationUtil_change(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfigurationGauge* gauge);

void GameConfigurationUtil_update(GameConfigurationUtil* this, GameConfigurationGauge* gauge);

void GameConfigurationUtil_setDefault(GameConfigurationUtil* this, GameConfigurationGauge* gauge);

void GameConfigurationUtil_updateChallange(GameConfigurationUtil* this, GameOptionsForm* gameOptionsForm, GameConfiguration* gameConfiguration);

void GameConfigurationUtil_updateCompetitionValue(GameConfigurationUtil* this);

int32_t GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationUtil_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONUTIL_H
