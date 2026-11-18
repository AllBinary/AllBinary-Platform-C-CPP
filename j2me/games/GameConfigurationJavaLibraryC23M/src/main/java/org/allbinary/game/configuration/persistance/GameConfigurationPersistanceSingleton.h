#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct KeyValuePersistance KeyValuePersistance;
typedef struct GamePersistanceStrings GamePersistanceStrings;
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"

typedef struct GameConfigurationPersistanceSingleton GameConfigurationPersistanceSingleton;
struct GameConfigurationPersistanceSingleton {
    KeyValuePersistance base;
};


GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_new(void);

GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_getInstance(void);

void GameConfigurationPersistanceSingleton_init(GameConfigurationPersistanceSingleton* this);
#define GameConfigurationPersistanceSingleton_new0 GameConfigurationPersistanceSingleton_new
#define GameConfigurationPersistanceSingleton_init0 GameConfigurationPersistanceSingleton_init
#ifndef GameConfigurationPersistanceSingleton_loadAll
#define GameConfigurationPersistanceSingleton_loadAll KeyValuePersistance_loadAll
#endif
#ifndef GameConfigurationPersistanceSingleton_loadAllSize
#define GameConfigurationPersistanceSingleton_loadAllSize KeyValuePersistance_loadAllSize
#endif
#ifndef GameConfigurationPersistanceSingleton_save
#define GameConfigurationPersistanceSingleton_save KeyValuePersistance_save
#endif
#ifndef GameConfigurationPersistanceSingleton_get
#define GameConfigurationPersistanceSingleton_get KeyValuePersistance_get
#endif
#ifndef GameConfigurationPersistanceSingleton_deleteRecoreStore
#define GameConfigurationPersistanceSingleton_deleteRecoreStore BasicPersitance_deleteRecoreStore
#endif
#ifndef GameConfigurationPersistanceSingleton_deleteAll
#define GameConfigurationPersistanceSingleton_deleteAll BasicPersitance_deleteAll
#endif
#ifndef GameConfigurationPersistanceSingleton_delete
#define GameConfigurationPersistanceSingleton_delete BasicPersitance_delete
#endif
#ifndef GameConfigurationPersistanceSingleton_getRecordId
#define GameConfigurationPersistanceSingleton_getRecordId BasicPersitance_getRecordId
#endif
#ifndef GameConfigurationPersistanceSingleton_getList
#define GameConfigurationPersistanceSingleton_getList BasicPersitance_getList
#endif
#ifndef GameConfigurationPersistanceSingleton_getIds
#define GameConfigurationPersistanceSingleton_getIds BasicPersitance_getIds
#endif
#ifndef GameConfigurationPersistanceSingleton_clear
#define GameConfigurationPersistanceSingleton_clear BasicPersitance_clear
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameConfigurationPersistanceSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameConfigurationPersistanceSingleton_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
