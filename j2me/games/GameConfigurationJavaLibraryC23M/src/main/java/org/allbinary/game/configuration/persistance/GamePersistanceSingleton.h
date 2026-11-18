#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H
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

typedef struct GamePersistanceSingleton GamePersistanceSingleton;
struct GamePersistanceSingleton {
    KeyValuePersistance base;
};


GamePersistanceSingleton* GamePersistanceSingleton_new(void);

GamePersistanceSingleton* GamePersistanceSingleton_getInstance(void);

void GamePersistanceSingleton_init(GamePersistanceSingleton* this);
#define GamePersistanceSingleton_new0 GamePersistanceSingleton_new
#define GamePersistanceSingleton_init0 GamePersistanceSingleton_init
#ifndef GamePersistanceSingleton_loadAll
#define GamePersistanceSingleton_loadAll KeyValuePersistance_loadAll
#endif
#ifndef GamePersistanceSingleton_loadAllSize
#define GamePersistanceSingleton_loadAllSize KeyValuePersistance_loadAllSize
#endif
#ifndef GamePersistanceSingleton_save
#define GamePersistanceSingleton_save KeyValuePersistance_save
#endif
#ifndef GamePersistanceSingleton_get
#define GamePersistanceSingleton_get KeyValuePersistance_get
#endif
#ifndef GamePersistanceSingleton_deleteRecoreStore
#define GamePersistanceSingleton_deleteRecoreStore BasicPersitance_deleteRecoreStore
#endif
#ifndef GamePersistanceSingleton_deleteAll
#define GamePersistanceSingleton_deleteAll BasicPersitance_deleteAll
#endif
#ifndef GamePersistanceSingleton_delete
#define GamePersistanceSingleton_delete BasicPersitance_delete
#endif
#ifndef GamePersistanceSingleton_getRecordId
#define GamePersistanceSingleton_getRecordId BasicPersitance_getRecordId
#endif
#ifndef GamePersistanceSingleton_getList
#define GamePersistanceSingleton_getList BasicPersitance_getList
#endif
#ifndef GamePersistanceSingleton_getIds
#define GamePersistanceSingleton_getIds BasicPersitance_getIds
#endif
#ifndef GamePersistanceSingleton_clear
#define GamePersistanceSingleton_clear BasicPersitance_clear
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GamePersistanceSingleton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GamePersistanceSingleton_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_H
