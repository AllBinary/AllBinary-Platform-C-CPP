#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
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
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GameConfigurationSingleton GameConfigurationSingleton;
struct GameConfigurationSingleton {
    BasicArrayList* list;
    ABHashtable* hashtable;
};


GameConfigurationSingleton* GameConfigurationSingleton_new(void);

GameConfigurationSingleton* GameConfigurationSingleton_getInstance(void);

void GameConfigurationSingleton_init(GameConfigurationSingleton* this);

GameConfiguration* GameConfigurationSingleton_getInstanceByName(GameConfigurationSingleton* this, const char* name);

BasicArrayList* GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton* this);

void GameConfigurationSingleton_add(GameConfigurationSingleton* this, GameConfiguration* gameConfiguration);

ABHashtable* GameConfigurationSingleton_getHashtable(GameConfigurationSingleton* this);
#define GameConfigurationSingleton_new0 GameConfigurationSingleton_new
#define GameConfigurationSingleton_init0 GameConfigurationSingleton_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationSingleton_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
