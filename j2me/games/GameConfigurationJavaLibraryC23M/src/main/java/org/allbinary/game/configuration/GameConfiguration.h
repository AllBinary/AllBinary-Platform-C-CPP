#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
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
typedef struct GameFeatureEvent GameFeatureEvent;
typedef struct GameFeatureEventHandler GameFeatureEventHandler;
typedef struct BooleanFactory BooleanFactory;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

typedef struct GameConfiguration GameConfiguration;
struct GameConfiguration {
    const char* name;
    int32_t defaultValue;
    int32_t value;
    int32_t minValue;
    int32_t maxValue;
    bool modifiable;
};


GameConfiguration* GameConfiguration_new(const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue);

void GameConfiguration_init(GameConfiguration* this, const char* name, int32_t defaultValue, int32_t minValue, int32_t maxValue);

void GameConfiguration_setValue(GameConfiguration* this, int32_t value);

int32_t GameConfiguration_getValue(GameConfiguration* this);

void GameConfiguration_setMaxValue(GameConfiguration* this, int32_t maxValue);

int32_t GameConfiguration_getMaxValue(GameConfiguration* this);

void GameConfiguration_setMinValue(GameConfiguration* this, int32_t minValue);

int32_t GameConfiguration_getMinValue(GameConfiguration* this);

void GameConfiguration_setName(GameConfiguration* this, const char* name);

const char* GameConfiguration_getName(GameConfiguration* this);

void GameConfiguration_setDefaultValue(GameConfiguration* this, int32_t defaultValue);

int32_t GameConfiguration_getDefaultValue(GameConfiguration* this);

void GameConfiguration_setDefault(GameConfiguration* this);

const char* GameConfiguration_toString(GameConfiguration* this);

void GameConfiguration_setModifiable(GameConfiguration* this, bool modifiable);

bool GameConfiguration_isModifiable(GameConfiguration* this);
#define GameConfiguration_new4 GameConfiguration_new
#define GameConfiguration_init4 GameConfiguration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfiguration_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATION_H
