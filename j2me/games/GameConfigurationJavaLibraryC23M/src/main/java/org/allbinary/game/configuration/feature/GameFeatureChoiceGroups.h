#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_H
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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

typedef struct GameFeatureChoiceGroups GameFeatureChoiceGroups;
struct GameFeatureChoiceGroups {
    ABHashtable* hashtable;
};


GameFeatureChoiceGroups* GameFeatureChoiceGroups_new(void);

void GameFeatureChoiceGroups_init(GameFeatureChoiceGroups* this);

GameFeatureChoiceGroups* GameFeatureChoiceGroups_getExclusiveInstance(void);

GameFeatureChoiceGroups* GameFeatureChoiceGroups_getMultipleInstance(void);

ABHashtable* GameFeatureChoiceGroups_get(GameFeatureChoiceGroups* this);

void GameFeatureChoiceGroups_add(GameFeatureChoiceGroups* this, const char* name, BasicArrayList* list);
#define GameFeatureChoiceGroups_new0 GameFeatureChoiceGroups_new
#define GameFeatureChoiceGroups_init0 GameFeatureChoiceGroups_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFeatureChoiceGroups_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFeatureChoiceGroups_register(void);

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_H
