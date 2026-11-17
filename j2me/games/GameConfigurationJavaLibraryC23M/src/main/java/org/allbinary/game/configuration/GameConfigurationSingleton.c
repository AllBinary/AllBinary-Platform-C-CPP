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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GameConfigurationSingleton GameConfigurationSingleton;
struct GameConfigurationSingleton {
    BasicArrayList* list;
    ABHashtable* hashtable;
};

static GameConfigurationSingleton* GameConfigurationSingleton_SINGLETON;

GameConfigurationSingleton* GameConfigurationSingleton_new(void);
GameConfigurationSingleton* GameConfigurationSingleton_getInstance(void);

void GameConfigurationSingleton_init(GameConfigurationSingleton* this);
GameConfiguration* GameConfigurationSingleton_getInstanceByName(GameConfigurationSingleton* this, const char* name);
BasicArrayList* GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton* this);
void GameConfigurationSingleton_add(GameConfigurationSingleton* this, GameConfiguration* gameConfiguration);
ABHashtable* GameConfigurationSingleton_getHashtable(GameConfigurationSingleton* this);

// Static fields with runtime initializers: call this once at startup
void GameConfigurationSingleton_staticInit(void) {
    GameConfigurationSingleton_SINGLETON = GameConfigurationSingleton_new();
}

static void GameConfigurationSingleton_initFields(GameConfigurationSingleton* this) {
    
    
}


GameConfigurationSingleton* GameConfigurationSingleton_getInstance(void) {
        return GameConfigurationSingleton_SINGLETON;
}


void GameConfigurationSingleton_init(GameConfigurationSingleton* this) {
    GameConfigurationSingleton_initFields(this);
        this->list = BasicArrayListD_new();
        this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

GameConfigurationSingleton* GameConfigurationSingleton_new(void) {
    GameConfigurationSingleton* this = calloc(1, sizeof(GameConfigurationSingleton));
    GameConfigurationSingleton_init(this);
    return this;
}


GameConfiguration* GameConfigurationSingleton_getInstanceByName(GameConfigurationSingleton* this, const char* name) {
        return ((GameConfiguration*) ABHashtable_get(this->hashtable, name));
}


BasicArrayList* GameConfigurationSingleton_getOptionsBasicArrayList(GameConfigurationSingleton* this) {
        return this->list;
}


void GameConfigurationSingleton_add(GameConfigurationSingleton* this, GameConfiguration* gameConfiguration) {
        BasicArrayList_add(this->list, gameConfiguration);
}


ABHashtable* GameConfigurationSingleton_getHashtable(GameConfigurationSingleton* this) {
        return this->hashtable;
}

